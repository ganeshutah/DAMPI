#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <fstream>
#include <unistd.h>
#include <mpi.h>
#include <pnmpimod.h>
#include <status.h>
#include <requests.h>
#include <assert.h>
#include <comm-mapping.h>
#include <list>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <vector>
#include <time.h>
#include "pb_mod.h"
using namespace std;

/*#define DEBUG_LEVEL_0*/

#define PCONTROLOPT_LEVEL_1
#define PBDRIVER_CHECK

/* Turning some of these off might help debugging */

#define PIGGYBACK_COLLECTIVES
#define PIGGYBACK_ALL_TO_ONE
#define PIGGYBACK_ALL_TO_ALL
#define PIGGYBACK_ONE_TO_ALL
#define PIGGYBACK_COMM_COLLECTIVES

#define MASTER_NODE 0

/* Schedule Explore Mode */
#define SELF_RUN 10
#define GUIDED_RUN 11

#define PNMPI_MODULE_DAMPI_DRIVER "dampi_driver"

#define PB_PATTERN (curr_epoch)
#define MAX_FILENAME_LENGTH 1024
#define MAX_PENDING_REQUESTS 128

#ifdef PBDRIVER_CHECK
#ifndef PBDRIVER_SET
#define PBDRIVER_SET
#endif
#endif /* PBDRIVER_CHECK */

#ifdef PBDRIVER_SET
char *pbdata;
#define PBSET                                   \
    {                                           \
    ((int*)pbdata)[0]=curr_epoch;               \
    pb_set(pb_size,pbdata);}

#endif /* PBDRIVER_SET */


#ifdef PBDRIVER_CHECK
#define PBCHECKARRAY(res,status,count,num) {                            \
    if (res==MPI_SUCCESS)                                               \
      { if ((STATUS_STORAGE_ARRAY(status,*pb_offset,*TotalStatusExtension,int,count,num)!=PB_PATTERN) || (0) ) \
          printf("Received wrong pattern %08x\n",                       \
                 STATUS_STORAGE_ARRAY(status,*pb_offset,*TotalStatusExtension,int,count,num)); \
      } }
#define PBCHECK(res,status) PBCHECKARRAY(res,status,1,0)
#define PBRECVARRAY(res,status,count,num) STATUS_STORAGE_ARRAY(status,*pb_offset,*TotalStatusExtension,int,count,num)
#define PBRECV(res,status) PBRECVARRAY(res,status,1,0)
#define less_than(x,y) ((x) < (y))
#define ASSIGN(x,y) x=y
#define COMPARE_AND_SET(x,y) if (less_than(x,y)) ASSIGN(x,y);
#define PBGET_AND_SET(res,incoming_epoch)\
  if (res==MPI_SUCCESS) {\
    pb_get(pb_size,pbdata);\
    incoming_epoch=((int*)pbdata)[0];\
    COMPARE_AND_SET(curr_epoch,incoming_epoch);}
#endif

#define ADVANCE_MYCLOCK curr_epoch++
#define ADVANCE_EVENTNO eventNo++
#define IRECV_EVENT 555
#define RECV_EVENT 556
#define PROBE_EVENT 557
#define IPROBE_EVENT 558
#define MAX_EPOCH 1000000
/* Data structure for an Epoch */
typedef struct EventData{
  int eventType; /* IRECV_EVENT or RECV_EVENT */
  int start_epoch;
  int end_epoch;
  int count;
  int node; /* matching node */
  MPI_Datatype datatype;
  int tag;
  MPI_Comm comm;
  MPI_Request request;
  list<int> *matching_procs;
}EventData_t;

/* Global Variables */
PNMPIMOD_Comm_Mapping_t PNMPIMOD_commmap;
PNMPIMOD_Requests_MapRequest_t PNMPIMOD_requestmap;
PNMPIMOD_Piggyback_t       pb_set;
PNMPIMOD_Piggyback_t       pb_get;
PNMPIMOD_Piggyback_Size_t  pb_setsize;
static int *pb_offset;
static int pb_size=4;
static int *TotalStatusExtension;
static int *StatusOffsetInRequest;

/* map an event and its data */
map<int,EventData_t*> eventmap;

/* map a request to an event */
map<MPI_Request,int> req_to_event_map;

/* map a request to an epoch */
map<MPI_Request,int> req_to_epoch_map;

/* map an event to a forced match (determined by the scheduler */
map<int,int> forced_eventmap;

/* the last epoch that we're running under GUIDED_RUN */
int last_guided_epoch = -1;

/* list of all events in this process */
list<int>* event_list = new list<int>();

/* list of all pending IRECV events in this process */
list<int> pending_irecv_list;

static int running_mode = SELF_RUN;

char inputFileName[MAX_FILENAME_LENGTH];
char outputFileName[MAX_FILENAME_LENGTH];
FILE* outputFile;
int myrank;
int num_procs;
int curr_epoch = 0;
int eventNo = 0; /* each wildcard recv/irecv is an event */
int curr_pcontrol_lev = -1;
/* End Global Variables */


#define COMM_REQ_FROM_STATUS(status) REQ_FROM_STATUS(status,(*StatusOffsetInRequest))
#define COMM_REQ_FROM_STATUSARRAY(status,count,num) REQ_FROM_STATUSARRAY(status,(*StatusOffsetInRequest),*TotalStatusExtension,count,num)

#define SCHEDULER_FILE_PREFIX "__sched_decision"
#define PROC_OUTPUT_FILE_PREFIX "__alt_matchings"

void ThrowErrorAndExit(const char* str) {
  fprintf(stderr,"%s\n",str);
  PMPI_Abort_NewStack(1000, MPI_COMM_WORLD,1);
  exit(1);
}
/* Pre: MPI_Init must have been called earlier - we need the rank info 
 * Post: inputFile, if existed, is set. outputFile is set */
void initializeFileIO() {
  char* executableName=NULL;
  ifstream inputFile;

  /* Here's how we're going to do it - the master is going to send each node
   * a message with the epoch data. 
   * The number of items sent plus what is being sent will be used by the
   * non-master processes to figure out what mode it's running under
   * If count is 1, the receiving data is the running mode, and the tag
   * would then indicate the last_guided epoch
   * if count is more than 1, it's guided_run, tag indicates last_guided_epoch
   * and the data contains epoch/matching procs information */
  if (myrank == MASTER_NODE) {
    executableName = getenv("EXEC_NAME");
    if (executableName == NULL) {
      ThrowErrorAndExit("Error: Need to set EXEC_NAME to the name of the executable");
    }  
    
    /* Setting up all the proper file name */
    sprintf(inputFileName, "%s.%s",executableName,SCHEDULER_FILE_PREFIX);
    /* See if decision file from scheduler exists */
    inputFile.open(inputFileName,ifstream::in);
    
    /* master check if scheduler's decisions existed
     * if yes, guided_mode. Otherwise self_run */
    if (inputFile.fail()) {
      running_mode = SELF_RUN;

      /* inform all other nodes that they are 
       * running in SELF_RUN */
      for (int i = 0; i < num_procs; i ++) {
        if (i!= MASTER_NODE)
          PMPI_Send_NewStack(1000, &running_mode, 1, MPI_INT,
                             i, 0, MPI_COMM_WORLD);
      }
    }
    /* GUIDED_RUN */
    else {
      string line;
      int curr_proc = 0;
      MPI_Request* requestArray = new MPI_Request[MAX_PENDING_REQUESTS];
      int pendingReq = 0;
      int** alldata = new int* [num_procs];
      for (int i = 0; i < num_procs; i++)
        alldata[i] = NULL;
      running_mode = GUIDED_RUN;
      
      /* first read the epoch after which the proc would revert to self_run */
      if (getline(inputFile,line)) {
        istringstream str(line);
        str >> last_guided_epoch;
      } else ThrowErrorAndExit("Error: Can't read last guided epoch from decision file");

      /* now read line by line, each line start with the proc number
       * then follow by one or more times of (epoch matching_proc) */
      while (getline(inputFile, line)) {
        int temp_proc;
        int temp_epoch, temp_match, temp_event;
        int temp_index =0;
        istringstream str(line);
        /* number of white spaces = number of items we'll send
         * using std::count */
        int num_of_entries = count (line.begin(), line.end(), ' ');

        /* read the proc number, then epoch number, then the event number then matching info for that epoch */
        if (str >> temp_proc) {
          alldata[temp_proc] = new int[num_of_entries];
          while (str >> temp_epoch) {
            if (str >> temp_event && str >> temp_match) {
              alldata[temp_proc][temp_index++] = temp_epoch;
              /* the first one read after epoch would be event number */
              alldata[temp_proc][temp_index++] = temp_event;
              /* last one is the match */
              alldata[temp_proc][temp_index++] = temp_match;
            } else ThrowErrorAndExit("Error: Can't read epoch matching info");
          }
          if (num_of_entries != temp_index || alldata[temp_proc] == NULL) 
            ThrowErrorAndExit("Error: Input file does not have the right format");

          /* Sending epoch decisions to the corresponding process
           * no need to send to self - copy directly */
          if (temp_proc != MASTER_NODE) {
            PMPI_Isend_NewStack(1000, alldata[temp_proc], num_of_entries, MPI_INT, 
                                temp_proc, last_guided_epoch, MPI_COMM_WORLD, 
                                &requestArray[pendingReq++]);
          } 
          /* data for master */
          else { 
            /* alldata[i] would hold the epoch number
             * while alldata[i+1] would hold the eventNo
             * and alldata[i+2] would hold the match
             */
            for (int i = 0; i < temp_index; i += 3){
              /*fprintf(stderr, "rank %d received decision to force eventNo %d to match process %d\n",
                myrank, mydata[i+1], mydata[i+2];*/
              forced_eventmap[alldata[MASTER_NODE][i+1]] = alldata[MASTER_NODE][i+2];
            }
          }
          /* We don't want to have too many pending send requests
           * mainly for performance reason */
          if (pendingReq == MAX_PENDING_REQUESTS) {
            PMPI_Waitall_NewStack(1000, pendingReq,requestArray, MPI_STATUSES_IGNORE);
            pendingReq = 0;
          }

          /* we might have skipped several procs */
          if (curr_proc < temp_proc) {
            for (; curr_proc < temp_proc; curr_proc++) {
              if (curr_proc == MASTER_NODE) continue;
              PMPI_Isend_NewStack(1000, &running_mode, 1, MPI_INT, 
                                  curr_proc, last_guided_epoch, MPI_COMM_WORLD, 
                                  &requestArray[pendingReq++]);
              /* We don't want to have too many pending send requests
               * mainly for performance reason */
              if (pendingReq == MAX_PENDING_REQUESTS) {
                PMPI_Waitall_NewStack(1000, pendingReq, requestArray, MPI_STATUSES_IGNORE);
                pendingReq=0;
              }
            }
          }
          
          curr_proc = temp_proc + 1;
        } else ThrowErrorAndExit("Error: Can't read proc number from decision file");
      } /* finished reading input File */ 
      
      /* take care of the rest of the processes which did not have entries in the decision file */
      if (curr_proc < num_procs) {
        for (; curr_proc < num_procs; curr_proc++) {
          if (curr_proc == MASTER_NODE) continue;
          PMPI_Isend_NewStack(1000, &running_mode, 1, MPI_INT, 
                              curr_proc, last_guided_epoch, MPI_COMM_WORLD, 
                              &requestArray[pendingReq++]);
          /* We don't want to have too many pending send requests
           * mainly for performance reason */
          if (pendingReq == MAX_PENDING_REQUESTS) {
            PMPI_Waitall_NewStack(1000, pendingReq, requestArray, MPI_STATUSES_IGNORE);
            pendingReq=0;
            
          }
        }
      }
      /* finish all pending sends */
      if (pendingReq > 0) {
        PMPI_Waitall_NewStack(1000, pendingReq, requestArray, MPI_STATUSES_IGNORE);
      }
      
      /* Clean up */
      for (int i = 0; i < num_procs; i++)
        delete [] alldata[i];
      delete [] alldata;
      delete [] requestArray;
    } /* end GUIDED_RUN */
  } /* END MASTER */
  else {
    /* non-master proc */
    int* mydata;
    int count;
    MPI_Status msg_status;
    PMPI_Probe_NewStack(1000, MASTER_NODE, MPI_ANY_TAG, MPI_COMM_WORLD, &msg_status);
    
    /* now decode the message. The count field will tell
     * me about the running_mode (partially), and if it's GUIDED,
     * the tag will tell me the last_guided epoch */
    PMPI_Get_count_NewStack(1000, &msg_status, MPI_INT, &count);
    /*fprintf(stderr, "rank %d receiving message size %d (ints) from master \n", 
      myrank, count);*/
    if (count > 1) {
      running_mode = GUIDED_RUN;
      last_guided_epoch = msg_status.MPI_TAG;
      mydata = new int[count];
      PMPI_Recv_NewStack(1000, mydata, count, MPI_INT, MASTER_NODE, 
                         msg_status.MPI_TAG, MPI_COMM_WORLD, MPI_STATUS_IGNORE);

      /* first position is the epoch - we don't need it 
       * second position is the event number 
       * third position is the match */
      for (int i = 0; i < count; i+=3) {
        /*fprintf(stderr, "rank %d received decision to force eventNo %d to match process %d\n",
          myrank, mydata[i+1], mydata[i+2];*/
        forced_eventmap[mydata[i+1]] = mydata[i+2];
      }

      /* cleaning up */
      delete [] mydata;
    }
    else {
      PMPI_Recv_NewStack(1000, &running_mode, 1, MPI_INT, MASTER_NODE,
                         msg_status.MPI_TAG, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
      if (running_mode == GUIDED_RUN) 
        last_guided_epoch = msg_status.MPI_TAG;
    }
  }
  /* Master done with inputfile, opens the outputFile for writing */
  if (myrank == MASTER_NODE) {
    /* No longer need inputFile, close it */
    if (inputFile)
      inputFile.close();
    
    /* Attempt to open file for output */
    sprintf(outputFileName, "%s.%s",executableName,PROC_OUTPUT_FILE_PREFIX);
    outputFile = fopen(outputFileName, "w");
    
    /* if we can't write to files, we're in trouble */
    if (!outputFile)
      fprintf(stderr, "Cannot open file for writing. Quitting...\n");
    
  }
}

/* record the event and its data */
void RecordEventData(int eventNo, int eventType, 
                     int start_epoch, int end_epoch, int count, 
                     MPI_Datatype datatype, int node, int tag, 
                     MPI_Comm comm, MPI_Request request)
{
  eventmap[eventNo] = (EventData_t*)malloc(sizeof(EventData_t));
  eventmap[eventNo]->eventType = eventType;
  eventmap[eventNo]->start_epoch = start_epoch;
  eventmap[eventNo]->end_epoch = start_epoch;
#ifndef EARLY_IRECV_INCREMENT
  eventmap[eventNo]->end_epoch = end_epoch;
#endif
  eventmap[eventNo]->count = count;
  eventmap[eventNo]->datatype = datatype;
  eventmap[eventNo]->node = node;
  eventmap[eventNo]->tag = tag;
  eventmap[eventNo]->comm = comm;
  eventmap[eventNo]->request = request;
  eventmap[eventNo]->matching_procs = new list<int>();
  if (node != MPI_ANY_SOURCE)
    eventmap[eventNo]->matching_procs->push_back(node);

}

/* Dump all epoch data into files 
 * Pre: initializeFileIO was called earlier to open outputFile */
void DumpEpochData() {
  list<int>::iterator it = event_list->begin();
  list<int>::iterator it_end = event_list->end();
  /* first output the number of epochs */
  fprintf(outputFile, "%d\n", curr_epoch);
  for (; it != it_end; it++) {
    /* format of each line x: p q r 
       with x being the epoch number, 
       p q r being the matching processes */
#if 1
    if (eventmap[*it]->matching_procs->size() < 2)
      continue;
#endif
    fprintf(outputFile, "%d", *it);
    list<int>::iterator li = eventmap[*it]->matching_procs->begin();
    list<int>::iterator li_end = eventmap[*it]->matching_procs->end();
    for (; li != li_end; li++) {
      fprintf(outputFile, " %d", *li);
    }
    fprintf(outputFile, "\n");
  }
  fclose(outputFile);
}

void DumpEpochDataMaster() {
  /* Setup data to send to root, including the count and
   * then the actual epochs + matching procs */
  int mycount = 0;
  int totalcount = 0;
  int *alldata;
  int *mydata;
  int *recvcounts; /* for root to store the count of each proc */
  int *displacements; /* for root to know where to store incoming info */
  if (event_list->size() == 0)
    mycount = 1;
  else {
    list<int>::iterator it = event_list->begin();
    list<int>::iterator it_end = event_list->end();
    for (; it != it_end; it++) {
      if (eventmap[*it]->matching_procs->size() < 2) {
        continue;
      }
      mycount += 2; /* space for the epoch and event number */
      /* need extra space for the count + the actual matches */
      mycount += eventmap[*it]->matching_procs->size() + 1;
    }
  }
  /* we've figured out how much space is needed */
  mydata = new int[mycount];
  
  if (myrank == MASTER_NODE) {
    recvcounts = new int[num_procs];
  }

  /* collect all of the mycount's into recvcounts */
  PMPI_Gather_NewStack(1000, &mycount, 1, MPI_INT, 
                       recvcounts, 1, MPI_INT, MASTER_NODE, MPI_COMM_WORLD);
  if (myrank == MASTER_NODE) {
    displacements = new int[num_procs];
    displacements[0] = 0;
    for (int i = 1; i < num_procs; i++) {
      displacements[i] = displacements[i-1] + recvcounts[i-1];
    }
  }
  /* fill up the data */
  if (event_list->size() == 0) {
    mydata[0] = myrank;
  }
  else {
    int mydata_index=0;
    list<int>::iterator it = event_list->begin();
    list<int>::iterator it_end = event_list->end();
    for (; it != it_end; it++) {
      EventData_t* event = eventmap[*it];
      if (event->matching_procs->size() < 2) {
        continue;
      }
      /* first the epoch */
      mydata[mydata_index++] = event->end_epoch;
      /* then the event number */
      mydata[mydata_index++] = *it;

      /* then the size */
      mydata[mydata_index++] = event->matching_procs->size();
      /* then all the matches */
      list<int>::iterator li = event->matching_procs->begin();
      list<int>::iterator li_end = event->matching_procs->end();
      for (; li != li_end; li++) {
        mydata[mydata_index++] = *li;
      }
      /*done with one epoch */
    }
    /* sanity check - otherwise we'll corrupt the communication */
    assert (mydata_index == mycount);

  }
  /* everything is setup, now collect the data */
  if (myrank == MASTER_NODE) {
    for (int i = 0; i < num_procs; i++)
      totalcount += recvcounts[i];
    /* sanity check */
    assert (totalcount == displacements[num_procs-1] + recvcounts[num_procs-1]);
    alldata = new int[totalcount];
  }
  /* Our experiments have shown most of the times, the wildcard receives
   * tend to be from only a few processes. Would it be better just doing separate
   * send/recvs instead of doing Gather? */
  PMPI_Gatherv_NewStack(1000, mydata, mycount, MPI_INT, alldata,  
                        recvcounts, displacements, MPI_INT, 
                        MASTER_NODE, MPI_COMM_WORLD);
  /* root dumps data to file */
  if (myrank == MASTER_NODE) {
    
    /* Print the number of epochs */
    fprintf(outputFile, "%d\n", curr_epoch);

    for (int i = 0; i < num_procs; i++) {
      /* first print the proc number */
      if (recvcounts[i] == 1) continue;
      fprintf(outputFile, "%d", i);

      /* then the rest of the data - epochNo, eventNo, etc.. */
      for (int j = displacements[i]; j < displacements[i] + recvcounts[i]; j++) {
        fprintf(outputFile, " %d", alldata[j]);
      }
      fprintf(outputFile, "\n");
    }
  }
}

/* Given a send from "source" with piggyback "incoming_epoch", search
 * for all possible matching wildcard receives
 * Note that we only start the search from the matching epoch backwards */
bool FindPotentialMatches(int source, int tag, MPI_Comm comm, 
                          int matching_epoch, int incoming_epoch, int my_eventNo){
  //fprintf(stderr, "Enter FindPotentialMatches, matching_epoch = %d, incoming_epoch=%d\n", matching_epoch, incoming_epoch);
  bool retFlag = false;
  list<int>::reverse_iterator it = event_list->rbegin();
  list<int>::reverse_iterator it_rend = event_list->rend();
  for (; it != it_rend; it++) {
    EventData_t* event = eventmap[*it];
    if (event->end_epoch >= incoming_epoch &&  /* don't bother if the message is not late wrt to this event */
        event->end_epoch < matching_epoch &&
        *it <= my_eventNo && /* only checking for Recvs issued before the one matched with this msg */
        event->end_epoch > last_guided_epoch && /* don't worry about the ones before the guided epoch */
        (event->tag == tag || event->tag == MPI_ANY_TAG) &&
        event->comm == comm &&
        event->end_epoch != MAX_EPOCH) /* these things were taken care of earlier */
      {      /* found late message */
      list<int>::iterator mp_it = find(event->matching_procs->begin(),
                                      event->matching_procs->end(),
                                      source);
      if (mp_it == event->matching_procs->end()) {
        /*fprintf(stderr, "rank %d adding a send from %d as a potential match to event %d, end_epoch of the event is %d\n", 
          myrank, source, *it, event->end_epoch);*/
        event->matching_procs->push_back(source);
      }

      retFlag = true;
      } else if (event->end_epoch < incoming_epoch 
                 || event->end_epoch <= last_guided_epoch)
    /* ND events are ordered, cut off at smaller epochs */
      break;
    }
  //fprintf(stderr, "Leaving FindPotentialMatches\n");
  return retFlag;
}

/* Pre: A pending Irecv request completed by Wait
 * Post: If the receive is for MPI_ANY_SOURCE, its source field will be filled
 *       The matching procs will also be updated. Note that in the end, 
 *       matching_procs will need to have the real match at the front,
 *       all alternative matches can be at the back (order does not matter)
 *
 */
void CompletePendingRecv(PNMPIMOD_Requests_Parameters_t &req_param, 
                        MPI_Status* status) {
#ifdef PCONTROL_OPT_LEVEL_1
  if (curr_pcontrol_lev == 1) 
    return;
#endif
  /* There's no action for deteministic recvs. For non-det. recv,
     we have to fill in the source */
  if (req_param.node == MPI_ANY_SOURCE) {
    
    /* update the source field */
    map<MPI_Request, int>::iterator it = req_to_event_map.find (req_param.inreq);
    eventmap[(int) it->second]->node = (*status).MPI_SOURCE;

    /* update matching proc field */
    list<int>::iterator mp_it = find(eventmap[(int)it->second]->matching_procs->begin(),
                                    eventmap[(int)it->second]->matching_procs->end(),
                                     (*status).MPI_SOURCE);
    /* if it's already there, somebody must have added it - 
     * For example:
     * P0: Irecv(*, req1), Irecv(*, req2); Wait (req2); Wait(req1);
     * P1: Isend (0); Isend(0);
     * we need to remove and re-add to make sure it's at the front 
     * because the scheduler assumed the first position was the one that matched
     * originally */
    if (mp_it != eventmap[(int)it->second]->matching_procs->end())
      eventmap[(int) it->second]->matching_procs->remove((*status).MPI_SOURCE);
      
    eventmap[(int) it->second]->matching_procs->push_front((*status).MPI_SOURCE);

#ifndef EARLY_IRECV_INCREMENT
    //fprintf(stderr, "removing eventNo %d from pending irecv\n", (int) it->second);
    pending_irecv_list.remove((int) it->second);
#endif
  }
}

#ifndef EARLY_IRECV_INCREMENT
/* Pre:
 * Post: All wildcard Irecvs that have Happens-Before relationship
 *       with the current receive will be "completed" - in the sense
 *       that their end_clock will now be updated.
 */
void CompletePrecedingIrecv(MPI_Status* status, MPI_Comm comm,
                            int my_eventNo, int probe_flag) {
  /* work the pending_irecv_list */
  list<int>::iterator it = pending_irecv_list.begin();
  while (it != pending_irecv_list.end()) {
    EventData_t* event = eventmap[*it];
    
    /*
     * Irecv(*,T) happens-before (I)Recv(*,T)
     * Irecv(*,*) happens-before (I)Recv(*,T)
     */
    /* TODO: Handle the case where Irecv(*,T) has been posted before
     * Irecv(*,ANY_TAG). We need to busy-wait on MPI_Request_get_status
     * to figure out the status of ANY_TAG to see if the Irecv(*,T) should
     * be completed or not
     */
    if ((event->tag == (*status).MPI_TAG ||
         event->tag == MPI_ANY_TAG) &&
        event->comm == comm &&
        *it <= my_eventNo) /* only complete those that Happens Before me */
      { 
        /*fprintf(stderr, "rank %d has a non-overtaking completion, eventNo %d forced event %d to complete\n",  
          myrank, my_eventNo, *it);*/

      /* this Irecv's end epoch is now determined */
      event->end_epoch = curr_epoch;
      ADVANCE_MYCLOCK;
      it = pending_irecv_list.erase(it);
      /* for Probe, we can't force-complete all other pending recvs,
         only the first one that matches tag/comm */
      if (probe_flag) 
        break;
    } else
      if (it != pending_irecv_list.end())
        it++;
  }
}

/* Pre: A pending Irecv request completed by Wait
 * Post: The end_clock of the pending wildcard Irecv is updated  
 *
 */
void UpdateIrecvClock(PNMPIMOD_Requests_Parameters_t req_param) {
#ifdef PCONTROL_OPT_LEVEL_1
  if (curr_pcontrol_lev == 1) 
    return;
#endif
  if (req_param.node == MPI_ANY_SOURCE) {
    map<MPI_Request,int>::iterator it = req_to_event_map.find(req_param.inreq);
    if (eventmap[(int) it->second]->end_epoch == MAX_EPOCH) {
      eventmap[(int) it->second]->end_epoch = curr_epoch;
      ADVANCE_MYCLOCK;
    }
  }
}

/* Go through the list of pending Irecvs (those that have not had
 * their waits posted, or had not been forced matched by MPI non-overtaking) 
 * and see if any can match this incoming message.
 * We'll only allow the first one to match. If others can match, they will be
 * discover later during other interleavings
 */ 
bool CheckPendingReceiveForMatches(MPI_Status* status, MPI_Comm comm, 
                                   int incoming_epoch, int my_eventNo) {
  list<int>::iterator it = pending_irecv_list.begin();
  list<int>::iterator it_end = pending_irecv_list.end();
  for (;it != it_end; it++) {
    EventData_t* event = eventmap[*it];
    
    if (*it <= my_eventNo &&
        (event->tag == (*status).MPI_TAG ||
         event->tag == MPI_ANY_TAG) &&
         event->comm == comm){
      
      /* sanity check */
      assert (event->end_epoch == MAX_EPOCH);
      list<int>::iterator mp_it = find(event->matching_procs->begin(),
                                      event->matching_procs->end(),
                                       (*status).MPI_SOURCE);
      if (mp_it == event->matching_procs->end()) {
        /*fprintf(stderr, "rank %d adding a send from %d as a potential match to event %d, end_epoch of the event is %d\n", 
          myrank, (*status).MPI_SOURCE, *it, event->end_epoch);*/

        event->matching_procs->push_back((*status).MPI_SOURCE);
        return true;
      }
    }
  }
  return false;
}
#endif
/* Pre: A Recv has just been finished
 * Post: If the incoming message is late, we'll add it to the list 
 *       of matching procs 
 *       The current clock (curr_epoch) might get updated as well
 *
 */
void ProcessIncomingMessage(int err, int incoming_epoch,
                            PNMPIMOD_Requests_Parameters_t* req_param,
                            MPI_Status* status, MPI_Comm comm){

#ifndef EARLY_IRECV_INCREMENT
  /* Check pending receives for matches */
  if (pending_irecv_list.size() >0) {
    if (req_param == NULL)
      CheckPendingReceiveForMatches(status,comm,incoming_epoch, eventNo);
    else 
      CheckPendingReceiveForMatches(status,comm,incoming_epoch,
                                    req_to_event_map.find(req_param->inreq)->second);
  }

#endif
  if (less_than(curr_epoch,incoming_epoch))
    ASSIGN(curr_epoch,incoming_epoch);
  /* late message */
  else if (curr_epoch > incoming_epoch) {
    /* blocking Recv, use current eventNo*/
    if (req_param == NULL) 
      FindPotentialMatches((*status).MPI_SOURCE, (*status).MPI_TAG, 
                           comm, curr_epoch-1, incoming_epoch, eventNo);
    /* Async. Irecv */
    else {
      int matching_epoch = 0;
      map<MPI_Request,int>::iterator it = req_to_event_map.find(req_param->inreq);
      
      if (find(event_list->begin(), event_list->end(), it->second) != event_list->end())
        matching_epoch = eventmap[it->second]->end_epoch;
      else {/* this request was for a deterministic receive */
        matching_epoch = req_to_epoch_map.find(req_param->inreq)->second;
      }
      if (matching_epoch > incoming_epoch)
        FindPotentialMatches((*status).MPI_SOURCE, (*status).MPI_TAG,
                             req_param->comm, matching_epoch, incoming_epoch, it->second);
    }
  }
}

/* mark a symmetric loop region corresponding to the provided pcontrol_level
 * Each region will be marked by a starting epoch and an ending epoch
 */
void markSymLoopRegion(int pcontrol_level) {
#ifdef PCONTROL_OPT_LEVEL_1
  if (curr_pcontrol_lev == -1) {
    curr_pcontrol_lev = pcontrol_level;
    if (curr_pcontrol_lev != 1) {
      fprintf(stderr, "PCONTROL_OPT_LEVEL_1 supports pcontrol level 1 only\n");
      PMPI_Abort_NewStack(1000,MPI_COMM_WORLD,1);
    }
    assert (curr_pcontrol_lev == 1);
  } else 
    curr_pcontrol_lev = -1;
#endif
}

/* helper function - print out the forced_eventmap 
 * Pre: N/A
 * Post: N/A
 */
void printForcedEventmap() {
  map<int,int>::iterator it = forced_eventmap.begin();
  fprintf(stderr, "forced_event map: \n");
  for (; it!=forced_eventmap.end(); it++) {
    fprintf(stderr, "[key %d value %d] ", it->first, it->second);
  }
  fprintf(stderr, "end forced_event map: \n");
}

/*.......................................................*/
/* Registration */

int PNMPI_RegistrationPoint()
{
  int err;

  /* register this module and its services */

  err=PNMPI_Service_RegisterModule(PNMPI_MODULE_DAMPI_DRIVER);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  return err;
}


/*.......................................................*/
/* Init */


int MPI_Init(int *argc, char ***argv)
{
  int err;
  PNMPI_modHandle_t handle_pb,handle_pbd,handle_status,handle_req,handle_comm;
  PNMPI_Service_descriptor_t serv;
  PNMPI_Global_descriptor_t global;

  /* query pb module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_PB,&handle_pb);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_pb,"set-piggyback","ip",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  pb_set=(PNMPIMOD_Piggyback_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_pb,"get-piggyback","ip",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  pb_get=(PNMPIMOD_Piggyback_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_pb,"piggyback-size","i",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  pb_setsize=(PNMPIMOD_Piggyback_Size_t) ((void*)serv.fct);

  err=PNMPI_Service_GetGlobalByName(handle_pb,"piggyback-offset",'i',&global);
  if (err!=PNMPI_SUCCESS)
    return err;
  pb_offset=(global.addr.i);


  /* query the status module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_STATUS,&handle_status);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetGlobalByName(handle_status,"total-status-extension",'i',&global);
  if (err!=PNMPI_SUCCESS)
    return err;
  TotalStatusExtension=(global.addr.i);


  /* query the request module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_REQUEST,&handle_req);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetGlobalByName(handle_req,"status-offset",'i',&global);
  if (err!=PNMPI_SUCCESS)
    return err;
  StatusOffsetInRequest=(global.addr.i);

  err=PNMPI_Service_GetServiceByName(handle_req,"map-request","r",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  PNMPIMOD_requestmap=(PNMPIMOD_Requests_MapRequest_t) ((void*)serv.fct);

  /* query the comm-mapping module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_COMM_MAPPING,&handle_comm);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_comm,"comm-map","r",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  PNMPIMOD_commmap=(PNMPIMOD_Comm_Mapping_t) ((void*)serv.fct);

  /* query own module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_DAMPI_DRIVER,&handle_pbd);
  if (err!=PNMPI_SUCCESS)
    return err;

  pb_size=4;
  
  err=pb_setsize(pb_size);
  if (err!=PNMPI_SUCCESS)
    return err;
  
  pbdata=(char*) malloc(pb_size);
  if (pbdata==NULL) return MPI_ERROR_MEM;
  
  /*
  printf("Piggyback driver enabled with size %i (set %i, check %i)\n",
         pb_size,run_set,run_check);
  */
  err = PMPI_Init(argc,argv);
  PMPI_Comm_rank(MPI_COMM_WORLD, &myrank);
  PMPI_Comm_size(MPI_COMM_WORLD, &num_procs);
  initializeFileIO();
  return err;
}

int MPI_Init_thread(int *argc, char ***argv, int required, int *provided)
{
  int err;
  PNMPI_modHandle_t handle_pb,handle_pbd,handle_status,handle_req,handle_comm;
  PNMPI_Service_descriptor_t serv;
  PNMPI_Global_descriptor_t global;

  /* query pb module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_PB,&handle_pb);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_pb,"set-piggyback","ip",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  pb_set=(PNMPIMOD_Piggyback_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_pb,"get-piggyback","ip",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  pb_get=(PNMPIMOD_Piggyback_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_pb,"piggyback-size","i",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  pb_setsize=(PNMPIMOD_Piggyback_Size_t) ((void*)serv.fct);

  err=PNMPI_Service_GetGlobalByName(handle_pb,"piggyback-offset",'i',&global);
  if (err!=PNMPI_SUCCESS)
    return err;
  pb_offset=(global.addr.i);


  /* query the status module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_STATUS,&handle_status);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetGlobalByName(handle_status,"total-status-extension",'i',&global);
  if (err!=PNMPI_SUCCESS)
    return err;
  TotalStatusExtension=(global.addr.i);


  /* query the request module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_REQUEST,&handle_req);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetGlobalByName(handle_req,"status-offset",'i',&global);
  if (err!=PNMPI_SUCCESS)
    return err;
  StatusOffsetInRequest=(global.addr.i);

  err=PNMPI_Service_GetServiceByName(handle_req,"map-request","r",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  PNMPIMOD_requestmap=(PNMPIMOD_Requests_MapRequest_t) ((void*)serv.fct);

  /* query the comm-mapping module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_COMM_MAPPING,&handle_comm);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_comm,"comm-map","r",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  PNMPIMOD_commmap=(PNMPIMOD_Comm_Mapping_t) ((void*)serv.fct);

  /* query own module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_DAMPI_DRIVER,&handle_pbd);
  if (err!=PNMPI_SUCCESS)
    return err;

  pb_size=4;
  
  err=pb_setsize(pb_size);
  if (err!=PNMPI_SUCCESS)
    return err;
  
  pbdata=(char*) malloc(pb_size);
  if (pbdata==NULL) return MPI_ERROR_MEM;
  
  /*
  printf("Piggyback driver enabled with size %i (set %i, check %i)\n",
         pb_size,run_set,run_check);
  */
  err = PMPI_Init_thread(argc,argv, required, provided);
  PMPI_Comm_rank(MPI_COMM_WORLD, &myrank);
  PMPI_Comm_size(MPI_COMM_WORLD, &num_procs);
  initializeFileIO();
  return err;
}



/*.......................................................*/
/* setting PB if enabled */

#ifdef PBDRIVER_SET

int MPI_Send(void* buf, int num, MPI_Datatype dtype, int node, 
             int tag, MPI_Comm comm)
{
  int res;
  PBSET;
  res=PMPI_Send(buf,num,dtype,node,tag,comm);
  return res;
}

int MPI_Bsend(void* buf, int num, MPI_Datatype dtype, int node, 
              int tag, MPI_Comm comm)
{
  int res;
  PBSET;
  res=PMPI_Bsend(buf,num,dtype,node,tag,comm);
  return res;
}

int MPI_Ssend(void* buf, int num, MPI_Datatype dtype, int node, 
              int tag, MPI_Comm comm)
{
  int res;
  PBSET;
  res=PMPI_Ssend(buf,num,dtype,node,tag,comm);
  return res;
}

int MPI_Rsend(void* buf, int num, MPI_Datatype dtype, int node, 
              int tag, MPI_Comm comm)
{
  int res;
  PBSET;
  res=PMPI_Rsend(buf,num,dtype,node,tag,comm);
  return res;
}

int MPI_Isend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  PBSET;

  err=PMPI_Isend(buf,count,datatype,dest,tag,comm,request);
  return err;
}

int MPI_Ibsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  PBSET;
  err=PMPI_Ibsend(buf,count,datatype,dest,tag,comm,request);
  return err;
}

int MPI_Issend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  PBSET;
  err=PMPI_Issend(buf,count,datatype,dest,tag,comm,request);
  return err;
}

int MPI_Irsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  PBSET;
  err=PMPI_Irsend(buf,count,datatype,dest,tag,comm,request);
  return err;
}

int MPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  if (curr_epoch > last_guided_epoch) {
    running_mode = SELF_RUN;
  }
#ifdef PCONTROL_OPT_LEVEL_1
  if (curr_pcontrol_lev != 1) {
#endif

  if (source == MPI_ANY_SOURCE) {
    if (running_mode == GUIDED_RUN) {
      if (forced_eventmap.find(eventNo) != forced_eventmap.end())  {
        fprintf(stderr, "eventNo %d is being forced to receive from %d\n", eventNo, 
                forced_eventmap[eventNo]);
        err=PMPI_Irecv(buf,count,datatype,forced_eventmap[eventNo],tag,comm,request);
      }
      else {
        /* this means this Irecv's epoch must be greater than the last_guided_epoch
         * OR 
         * it could mean that the search is broken due to some unexpected branching
         */
        err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
#ifndef EARLY_IRECV_INCREMENT
        event_list->push_back(eventNo); 
#endif
      }
#ifndef EARLY_IRECV_INCREMENT
      RecordEventData(eventNo,IRECV_EVENT,curr_epoch,MAX_EPOCH,count,
                      datatype,source,tag,comm,*request);
      pending_irecv_list.push_back(eventNo);
#endif
    } else { /* SELF_RUN */
      err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
      event_list->push_back(eventNo);
      RecordEventData(eventNo,IRECV_EVENT,curr_epoch,MAX_EPOCH,count,
                      datatype,source,tag,comm,*request);
#ifndef EARLY_IRECV_INCREMENT
      pending_irecv_list.push_back(eventNo);
#endif
    }
    req_to_epoch_map[*request]=curr_epoch;
    req_to_event_map[*request]=eventNo;
#ifdef EARLY_IRECV_INCREMENT
    ADVANCE_MYCLOCK;
#endif
    ADVANCE_EVENTNO;
  } else {
    err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
    req_to_epoch_map[*request]=curr_epoch;
    req_to_event_map[*request]=eventNo;
  }
#ifdef PCONTROL_OPT_LEVEL_1
  } else {
    err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
    req_to_epoch_map[*request]=curr_epoch;
    req_to_event_map[*request]=eventNo;    
  }
#endif
  
  return err;
}


/* Async Probe */
int MPI_Iprobe(int node, int tag, MPI_Comm comm, int* flag, MPI_Status *status)
{
  int err;
  if (curr_epoch > last_guided_epoch)
    running_mode = SELF_RUN;
#ifdef PCONTROL_OPT_LEVEL_1
  if (curr_pcontrol_lev != 1) {
#endif
  if (node == MPI_ANY_SOURCE) {
    if (running_mode == GUIDED_RUN) {
      if (forced_eventmap.find(eventNo) != forced_eventmap.end()) 
        err=PMPI_Iprobe(forced_eventmap[eventNo],tag,comm,flag,status);
      else {
        /* The only way this would happen is due to some unexpected decision,
         * the search *might* be broken after this point */
        fprintf(stderr, "Unexpected branching happening - turn off this assert to by-pass this\n");
        assert(false);

        err=PMPI_Iprobe(node,tag,comm,flag,status);
      }
#ifndef EARLY_IRECV_INCREMENT
      if (*flag) {
        CompletePrecedingIrecv(status,comm,eventNo,true);
      }
#endif
    } else { /* SELF_RUN */
      err=PMPI_Iprobe(node,tag,comm,flag,status);
      if (*flag) {
#ifndef EARLY_IRECV_INCREMENT
        CompletePrecedingIrecv(status,comm,eventNo,true);
#endif
        RecordEventData(eventNo,IPROBE_EVENT,curr_epoch,curr_epoch,0,0,
                        (*status).MPI_SOURCE,tag,comm,0);
      }
    } 
    if (*flag) {
      ADVANCE_MYCLOCK;
      ADVANCE_EVENTNO;
    }
  } else {
    err=PMPI_Iprobe(node,tag,comm,flag,status);    
#ifndef EARLY_IRECV_INCREMENT
    if (*flag)
      CompletePrecedingIrecv(status,comm,eventNo,true);
#endif
  }
#ifdef PCONTROL_OPT_LEVEL_1
  } else {
    err=PMPI_Iprobe(node,tag,comm,flag,status);
  }
#endif

  return err;
}
#endif

/*.......................................................*/
/* Checks if enabled */

#ifdef PBDRIVER_CHECK

int MPI_Pcontrol(int pcontrol_level,...) {
  fprintf(stderr, "pcontrol level is %d\n", pcontrol_level);
  markSymLoopRegion(pcontrol_level);
  return 0;
}

/* Sync Recv */
int MPI_Recv(void* buf, int count, MPI_Datatype datatype, int node,
             int tag, MPI_Comm comm, MPI_Status *status)
{
  int err;
  if (curr_epoch > last_guided_epoch)
    running_mode = SELF_RUN;
#ifdef PCONTROL_OPT_LEVEL_1
  if (curr_pcontrol_lev != 1) {
#endif
  if (node == MPI_ANY_SOURCE) {
    if (running_mode == GUIDED_RUN) {
      if (forced_eventmap.find(eventNo) != forced_eventmap.end()) {
        /*fprintf(stderr, "eventNo %d is being forced to receive from %d", eventNo, 
          forced_eventmap[eventNo]);*/
        err=PMPI_Recv(buf,count,datatype,forced_eventmap[eventNo],tag,comm,status);
      }
      else {
        /* The only way this would happen is due to some unexpected decision,
         * the search *might* be broken after this point */
        fprintf(stderr, "Unexpected branching happening at MPI_Recv %d - turn off this assert to by-pass this\n",
                eventNo);
        assert(false);
        err=PMPI_Recv(buf,count,datatype,node,tag,comm,status); 
      }
#ifndef EARLY_IRECV_INCREMENT
      CompletePrecedingIrecv(status, comm, eventNo, false);
#endif
    } else { /* SELF_RUN */
      err=PMPI_Recv(buf,count,datatype,node,tag,comm,status);
#ifndef EARLY_IRECV_INCREMENT
      /* check if this Recv will force any pending wildcard Irecv to match 
       * i.e. there's a HB edge between said Irecv and this Recv */
      CompletePrecedingIrecv(status, comm, eventNo,false);
#endif
      event_list->push_back(eventNo);
      RecordEventData(eventNo,RECV_EVENT,curr_epoch,curr_epoch,
                      count,datatype,(*status).MPI_SOURCE,tag,comm,0);
    }
    ADVANCE_MYCLOCK;
    ADVANCE_EVENTNO;
  } else { /* deterministic Recv */
      err=PMPI_Recv(buf,count,datatype,node,tag,comm,status);    
#ifndef EARLY_IRECV_INCREMENT
      CompletePrecedingIrecv(status,comm,eventNo,false);
#endif
  }
#ifdef PCONTROL_OPT_LEVEL_1
  } else {
      err=PMPI_Recv(buf,count,datatype,node,tag,comm,status);    
  }
#endif

  /* receiving the piggyback-ed clock from the Sender */
  int incoming_epoch = PBRECV(err,status);
  ProcessIncomingMessage (err, incoming_epoch, NULL, status, comm);

#ifdef DEBUG_LEVEL_0
  fprintf(stderr, "Receiving piggyback %d\n", PBRECV(err,status));
#endif /* DEBUG_LEVEL_0 */
  return err;
}

/* Sync Probe */
int MPI_Probe(int node, int tag, MPI_Comm comm, MPI_Status *status)
{
  int err;
  if (curr_epoch > last_guided_epoch)
    running_mode = SELF_RUN;
#ifdef PCONTROL_OPT_LEVEL_1
  if (curr_pcontrol_lev != 1) {
#endif
  if (node == MPI_ANY_SOURCE) {
    if (running_mode == GUIDED_RUN) {
      if (forced_eventmap.find(eventNo) != forced_eventmap.end()) 
        err=PMPI_Probe(forced_eventmap[eventNo],tag,comm,status);
      else {
        /* The only way this would happen is due to some unexpected decision,
         * the search *might* be broken after this point */
        fprintf(stderr, "Unexpected branching happening - turn off this assert to by-pass this\n");
        assert(false);

        err=PMPI_Probe(node,tag,comm,status);
      }
#ifndef EARLY_IRECV_INCREMENT
      CompletePrecedingIrecv(status,comm,eventNo,true);
#endif
    } else { /* SELF_RUN */
      err=PMPI_Probe(node,tag,comm,status);
#ifndef EARLY_IRECV_INCREMENT
      CompletePrecedingIrecv(status,comm,eventNo,true);
#endif
      event_list->push_back(eventNo);
      RecordEventData(eventNo,PROBE_EVENT,curr_epoch,curr_epoch,
                      0,0,(*status).MPI_SOURCE,tag,comm,0);
    }
    ADVANCE_MYCLOCK;
    ADVANCE_EVENTNO;
  } else { /* deteministic Probe */
      err=PMPI_Probe(node,tag,comm,status);
#ifndef EARLY_IRECV_INCREMENT
      CompletePrecedingIrecv(status,comm,eventNo,true);
#endif
  }

#ifdef PCONTROL_OPT_LEVEL_1
  } else {
      err=PMPI_Probe(node,tag,comm,status);    
  }
#endif
#ifdef DEBUG_LEVEL_0
  fprintf(stderr, "Receiving piggyback %d\n", PBRECV(err,status));
#endif /* DEBUG_LEVEL_0 */
  return err;
}

/* TODO: check for late msgs */
int MPI_Sendrecv(void *sendbuf, int sendcount, MPI_Datatype sendtype, int dest, int sendtag, 
                 void *recvbuf, int recvcount, MPI_Datatype recvtype, int source, int recvtag,
                 MPI_Comm comm, MPI_Status *status)
{
  int err;
  err=PMPI_Sendrecv(sendbuf,sendcount,sendtype,dest,sendtag,
                    recvbuf,recvcount,recvtype,source,recvtag,comm,status);
  /* PBCHECK(err,status); */
  if (curr_epoch < PBRECV(err,status))
    curr_epoch = PBRECV(err,status);
  return err;
}

/* TODO: check for late msgs */
int MPI_Sendrecv_replace(void *buf, int count, MPI_Datatype datatype, int dest, int sendtag, int source, int recvtag, 
                         MPI_Comm comm, MPI_Status *status)
{
  int err;
  err=PMPI_Sendrecv_replace(buf,count,datatype,sendtag,dest,recvtag,dest,comm,status);
  /* PBCHECK(err,status); */
  if (curr_epoch < PBRECV(err,status))
    curr_epoch = PBRECV(err,status);
  return err;
}


int MPI_Wait(MPI_Request *request, MPI_Status *status)
{
  int err;
  PNMPIMOD_Requests_Parameters_t req_param;

  err=PMPI_Wait(request,status);

  if (err == MPI_SUCCESS){
    /* Get the communication request stored in status */
    req_param = COMM_REQ_FROM_STATUS(status);
    /* Complete the request */
    if (req_param.type == PNMPIMOD_REQUESTS_RECV &&
        req_param.inreq != MPI_REQUEST_NULL) {
      CompletePendingRecv(req_param, status);
#ifndef EARLY_IRECV_INCREMENT
      CompletePrecedingIrecv(status, req_param.comm,
                             req_to_event_map.find(req_param.inreq)->second, 
                             false);
      UpdateIrecvClock(req_param);
#endif
      /* receiving the piggyback-ed clock from the Sender */
      int incoming_epoch = PBRECV(err,status);
      ProcessIncomingMessage (err, incoming_epoch, &req_param, status, req_param.comm);
    }
  }
  return err;
}


int MPI_Waitany(int count, MPI_Request *array_of_requests, int *index, MPI_Status *status)
{
  int err;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Waitany(count,array_of_requests,index,status);

  if (err == MPI_SUCCESS){
    /* Get the communication request stored in status */
    req_param = COMM_REQ_FROM_STATUS(status);
    /* Complete the request */
    if (req_param.type == PNMPIMOD_REQUESTS_RECV &&
        req_param.inreq != MPI_REQUEST_NULL) {
      CompletePendingRecv(req_param, status);
#ifndef EARLY_IRECV_INCREMENT
      CompletePrecedingIrecv(status, req_param.comm,
                             req_to_event_map.find(req_param.inreq)->second, 
                             false);
      UpdateIrecvClock(req_param);
#endif
      /* receiving the piggyback-ed clock from the Sender */
      int incoming_epoch = PBRECV(err,status);
      ProcessIncomingMessage (err, incoming_epoch, &req_param, status, req_param.comm);
    }
  }
  return err;
}


int MPI_Waitsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err,i;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Waitsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  for (i=0; i<*outcount; i++) {
    if (err == MPI_SUCCESS){
      /* Get the communication request stored in status */
      req_param=COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i);
      /* Complete the request */
      if (req_param.type == PNMPIMOD_REQUESTS_RECV &&
          req_param.inreq != MPI_REQUEST_NULL) {
        CompletePendingRecv(req_param, &(array_of_statuses[i]));
#ifndef EARLY_IRECV_INCREMENT
        CompletePrecedingIrecv(&(array_of_statuses[i]), req_param.comm,
                               req_to_event_map.find(req_param.inreq)->second, 
                               false);
        UpdateIrecvClock(req_param);
#endif
        /* receiving the piggyback-ed clock from the Sender */
        int incoming_epoch = PBRECVARRAY(err,array_of_statuses,count,i);
        ProcessIncomingMessage (err, incoming_epoch, &req_param, &(array_of_statuses[i]), req_param.comm);
      }
    }
  }
  return err;  
}


int MPI_Waitall(int count, MPI_Request *array_of_requests, MPI_Status *array_of_statuses)
{
  int err,i;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Waitall(count,array_of_requests,array_of_statuses);
  for (i=0; i<count; i++) {
    if (err == MPI_SUCCESS){
      /* Get the communication request stored in status */
      req_param=COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i);
      /* Complete the request */
      if (req_param.type == PNMPIMOD_REQUESTS_RECV &&
          req_param.inreq != MPI_REQUEST_NULL) {
        CompletePendingRecv(req_param, &(array_of_statuses[i]));
#ifndef EARLY_IRECV_INCREMENT
        CompletePrecedingIrecv(&(array_of_statuses[i]), req_param.comm,
                               req_to_event_map.find(req_param.inreq)->second, 
                               false);
        UpdateIrecvClock(req_param);
#endif
        /* receiving the piggyback-ed clock from the Sender */
        int incoming_epoch = PBRECVARRAY(err,array_of_statuses,count,i);
        ProcessIncomingMessage (err, incoming_epoch, &req_param, &(array_of_statuses[i]), req_param.comm);

      }
    }
  }
  return err;
}


int MPI_Test(MPI_Request *request, int *flag, MPI_Status *status)
{
  int err;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Test(request, flag, status);
  if (err == MPI_SUCCESS && (*flag)){
    /* Get the communication request stored in status */
    req_param = COMM_REQ_FROM_STATUS(status);
    /* Complete the request */
    if (req_param.type == PNMPIMOD_REQUESTS_RECV &&
        req_param.inreq != MPI_REQUEST_NULL) {
      CompletePendingRecv(req_param, status);
#ifndef EARLY_IRECV_INCREMENT
      CompletePrecedingIrecv(status, req_param.comm,
                             req_to_event_map.find(req_param.inreq)->second, 
                             false);
      UpdateIrecvClock(req_param);
#endif
      /* receiving the piggyback-ed clock from the Sender */
      int incoming_epoch = PBRECV(err,status);
      ProcessIncomingMessage (err, incoming_epoch, &req_param, status, req_param.comm);
    }
  }
  return err;
}

int MPI_Testany(int count, MPI_Request *array_of_requests, int *index, int *flag, MPI_Status *status)
{
  int err;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Testany(count,array_of_requests,index,flag,status);
  if (err == MPI_SUCCESS && (*flag)){
    /* Get the communication request stored in status */
    req_param = COMM_REQ_FROM_STATUS(status);
    /* Complete the request */
    if (req_param.type == PNMPIMOD_REQUESTS_RECV &&
        req_param.inreq != MPI_REQUEST_NULL) {
      CompletePendingRecv(req_param, status);
#ifndef EARLY_IRECV_INCREMENT
      CompletePrecedingIrecv(status, req_param.comm,
                             req_to_event_map.find(req_param.inreq)->second, 
                             false);
      UpdateIrecvClock(req_param);
#endif
      /* receiving the piggyback-ed clock from the Sender */
      int incoming_epoch = PBRECV(err,status);
      ProcessIncomingMessage (err, incoming_epoch, &req_param, status, req_param.comm);
    }
  }
  return err;

  return err;  
}

int MPI_Testsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err,i;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Testsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  if (err == MPI_SUCCESS) {
    for (i=0; i<*outcount; i++){
      /* Get the communication request stored in status */
      req_param=COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i);
      /* Complete the request */
      if (req_param.type == PNMPIMOD_REQUESTS_RECV &&
          req_param.inreq != MPI_REQUEST_NULL) {
        CompletePendingRecv(req_param, &(array_of_statuses[i]));
#ifndef EARLY_IRECV_INCREMENT
        CompletePrecedingIrecv(&(array_of_statuses[i]), req_param.comm,
                               req_to_event_map.find(req_param.inreq)->second, 
                               false);
        UpdateIrecvClock(req_param);
#endif
        /* receiving the piggyback-ed clock from the Sender */
        int incoming_epoch = PBRECVARRAY(err,array_of_statuses,count,i);
        ProcessIncomingMessage (err, incoming_epoch, &req_param, &(array_of_statuses[i]), req_param.comm);
      }
    }
  }
  return err;  
}

int MPI_Testall(int count, MPI_Request *array_of_requests, int *flag, MPI_Status *array_of_statuses)
{
  int err,i;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Testall(count, array_of_requests, flag, array_of_statuses);
  if (err == MPI_SUCCESS && (*flag)){
    for (i=0; i<count; i++){
      /* Get the communication request stored in status */
      req_param=COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i);
      /* Complete the request */
      if (req_param.type == PNMPIMOD_REQUESTS_RECV &&
          req_param.inreq != MPI_REQUEST_NULL) {
        CompletePendingRecv(req_param, &(array_of_statuses[i]));
#ifndef EARLY_IRECV_INCREMENT
        CompletePrecedingIrecv(&(array_of_statuses[i]), req_param.comm,
                               req_to_event_map.find(req_param.inreq)->second, 
                               false);
        UpdateIrecvClock(req_param);
#endif
        /* receiving the piggyback-ed clock from the Sender */
        int incoming_epoch = PBRECVARRAY(err,array_of_statuses,count,i);
        ProcessIncomingMessage (err, incoming_epoch, &req_param, &(array_of_statuses[i]), req_param.comm);
      }
    }
  }
  return err;
}


#endif /* PBDRIVER_CHECK */

#ifdef PIGGYBACK_COLLECTIVES
/*.......................................................*/
/* Collectives */

/*.......................................................*/
/* - ONE TO ALL - */
#ifdef PIGGYBACK_ONE_TO_ALL
int MPI_Bcast(void* buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err=PMPI_Bcast(buffer, count, datatype, root, comm);
  if (myrank != root)
    PBGET_AND_SET(err,incoming_epoch);
  return err;
}

int MPI_Scatter(void* sendbuf, int sendcnt, MPI_Datatype sendtype, 
                void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                int root, MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err=PMPI_Scatter(sendbuf, sendcnt, sendtype,
                   recvbuf, recvcnt, recvtype, 
                   root, comm);
  if (myrank != root)
    PBGET_AND_SET(err,incoming_epoch);
  return err;
}

int MPI_Scatterv(void* sendbuf, int* sendcnts, int* displs, MPI_Datatype sendtype, 
                 void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                 int root, MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err=PMPI_Scatterv(sendbuf, sendcnts, displs, sendtype,
                    recvbuf, recvcnt, recvtype, 
                    root, comm);
  if (myrank != root)
    PBGET_AND_SET(err,incoming_epoch);
  return err;
}
#endif /* PIGGYBACK_ONE_TO_ALL */
/*.......................................................*/
/* ALL TO ONE */
#ifdef PIGGYBACK_ALL_TO_ONE
int MPI_Gather(void* sendbuf, int sendcnt, MPI_Datatype sendtype,
               void* recvbuf, int recvcnt, MPI_Datatype recvtype,
               int root, MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err=PMPI_Gather(sendbuf, sendcnt, sendtype,
                  recvbuf, recvcnt, recvtype, 
                  root, comm);
  if (myrank == root)
    PBGET_AND_SET(err,incoming_epoch);
  return err;    
}

int MPI_Gatherv(void* sendbuf, int sendcnt, MPI_Datatype sendtype,
                void* recvbuf, int* recvcnts, int* displs, 
                MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err=PMPI_Gatherv(sendbuf, sendcnt, sendtype,
                   recvbuf, recvcnts, displs, recvtype, 
                   root, comm);
  if (myrank == root)
    PBGET_AND_SET(err,incoming_epoch);
  return err;
}
    
int MPI_Reduce(void* sendbuf, void* recvbuf, int count, 
               MPI_Datatype datatype, MPI_Op op, int root,
               MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Reduce(sendbuf, recvbuf, count,
                    datatype, op, root, comm);
  if (myrank == root)
      PBGET_AND_SET(err,incoming_epoch);
  return err;
}
#endif /* PIGGYBACK_ALL_TO_ONE */

/*.......................................................*/
/* ALL TO ALL */
#ifdef PIGGYBACK_ALL_TO_ALL
int MPI_Allgather(void *sendbuf, int sendcnt, MPI_Datatype sendtype,
                  void *recvbuf, int recvcnt, MPI_Datatype recvtype, 
                  MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Allgather(sendbuf, sendcnt, sendtype,
                       recvbuf, recvcnt, recvtype, comm);
  PBGET_AND_SET(err,incoming_epoch);
  return err;
}

int MPI_Allgatherv(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                   void *recvbuf, int *recvcnts, int *displs, 
                   MPI_Datatype recvtype, MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Allgatherv(sendbuf, sendcnt, sendtype,
                        recvbuf, recvcnts, displs, 
                        recvtype, comm);
  PBGET_AND_SET(err,incoming_epoch);
  return err;
}

int MPI_Alltoall(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                 void *recvbuf, int recvcnt, MPI_Datatype recvtype, 
                 MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Alltoall(sendbuf, sendcnt, sendtype,
                      recvbuf, recvcnt, recvtype, comm);
  PBGET_AND_SET(err,incoming_epoch);
  return err;
}

int MPI_Alltoallv(void *sendbuf, int *sendcnts, int *sdispls, MPI_Datatype sendtype, 
                  void *recvbuf, int *recvcnts, int *rdispls, MPI_Datatype recvtype, 
                  MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Alltoallv(sendbuf, sendcnts, sdispls, sendtype,
                       recvbuf, recvcnts, rdispls, recvtype, 
                       comm);
  PBGET_AND_SET(err,incoming_epoch);
  return err;
}

int MPI_Allreduce(void *sendbuf, void *recvbuf, int count, 
                  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Allreduce(sendbuf, recvbuf, count, datatype,
                       op, comm);
  PBGET_AND_SET(err,incoming_epoch);
  return err;
}

int MPI_Reduce_scatter(void *sendbuf, void *recvbuf, int *recvcnts, 
                       MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Reduce_scatter(sendbuf, recvbuf, recvcnts, datatype,
                            op, comm);
  PBGET_AND_SET(err,incoming_epoch);
  return err;
}
 
/* BARRIER */
int MPI_Barrier(MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Barrier(comm);
  PBGET_AND_SET(err,incoming_epoch);
  return err;
}
 
/* SCAN */
int MPI_Scan(void* sendbuf, void* recvbuf, int count,
             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
  PBGET_AND_SET(err,incoming_epoch);
  return err;
}
#endif /* PIGGYBACK_ALL_TO_ALL */

/*.......................................................*/
/* COMMUNICATOR COLLECTIVES */
#ifdef PIGGYBACK_COMM_COLLECTIVES
int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *comm_out)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Comm_dup(comm, comm_out);
  PBGET_AND_SET(err,incoming_epoch);
  return err;
}

int MPI_Comm_free(MPI_Comm *comm)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Comm_free(comm);
  PBGET_AND_SET(err,incoming_epoch);
  return err;
}

int MPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *comm_out)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Comm_create(comm, group, comm_out);
  PBGET_AND_SET(err,incoming_epoch);
  return err;

}

int MPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *comm_out)
{
  int err, incoming_epoch=0;
  PBSET;
  err = PMPI_Comm_split(comm, color, key, comm_out);
  PBGET_AND_SET(err,incoming_epoch);
  return err;

}
#endif /* PIGGYBACK_COMM_COLLECTIVES */
#endif /* PIGGYBACK_COLLECTIVES*/
/*.......................................................*/


int MPI_Finalize() {
  int err, incoming_epoch=0;

  PBSET;
  err = PMPI_Finalize();
  PBGET_AND_SET(err,incoming_epoch);
  
  if (err == MPI_SUCCESS) {
    DumpEpochDataMaster();
  }
  return err;
}

/* The End. */
