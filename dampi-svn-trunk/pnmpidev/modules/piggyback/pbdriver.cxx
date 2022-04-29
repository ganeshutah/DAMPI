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

#define PCONTROL_OPT_LEVEL_1
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

#define PNMPI_MODULE_PBD "pbdriver"

#define PB_PATTERN (curr_epoch)
#define MAX_FILENAME_LENGTH 1024
#define MAX_PENDING_REQUESTS 128

#ifdef PBDRIVER_CHECK
#ifndef PBDRIVER_SET
#define PBDRIVER_SET
#endif
#endif

#ifdef PBDRIVER_SET
#define PBSET                                   \
  if (run_set) {                                \
    ((int*)pbdata)[0]=curr_epoch;               \
    pb_set(pb_size,pbdata);}
int run_set=1;
char *pbdata;
#endif


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
#endif

/* Data structure for an Epoch */
typedef struct EpochData{
  int count;
  int node; /* matching node */
  MPI_Datatype datatype;
  int tag;
  MPI_Comm comm;
  MPI_Request request;
  list<int> *matching_procs;
}EpochData_t;

/* Global Variables */
PNMPIMOD_Comm_Mapping_t PNMPIMOD_commmap;
PNMPIMOD_Requests_MapRequest_t PNMPIMOD_requestmap;
PNMPIMOD_Piggyback_t       pb_set;
PNMPIMOD_Piggyback_Size_t  pb_setsize;
int run_check=1;
static int *pb_offset;
static int pb_size=4;
static int *TotalStatusExtension;
static int *StatusOffsetInRequest;

/* map an epoch and its data */
map<int,EpochData_t*> epochmap;

/* map a request to an epoch */
map<MPI_Request,int> req_to_epoch_map;

/* map an epoch to a forced match (determined by the scheduler */
map<int,int> forced_epochmap;

/* the last epoch that we're running under GUIDED_RUN */
int last_guided_epoch = -1;

/* list of all non-deterministic epochs in this process */
list<int>* ND_epochs = new list<int>();
static int running_mode = SELF_RUN;

char inputFileName[MAX_FILENAME_LENGTH];
char outputFileName[MAX_FILENAME_LENGTH];
FILE* outputFile;
int myrank;
int num_procs;
int curr_epoch = 0;
int curr_pcontrol_lev = -1;
/* End Global Variables */


#define COMM_REQ_FROM_STATUS(status) REQ_FROM_STATUS(status,(*StatusOffsetInRequest))
#define COMM_REQ_FROM_STATUSARRAY(status,count,num) REQ_FROM_STATUSARRAY(status,(*StatusOffsetInRequest),*TotalStatusExtension,count,num)
#define GET_PBCOMM(comm) MPI_Comm pb_comm;err=PNMPIMOD_commmap(comm,&pb_comm)

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
        int temp_epoch, temp_match;
        int temp_index =0;
        istringstream str(line);
        /* number of white spaces = number of items we'll send
         * using std::count */
        int num_of_entries = count (line.begin(), line.end(), ' ');

        /* read the proc number, then epoch number, then matching info for that epoch */
        if (str >> temp_proc) {
          alldata[temp_proc] = new int[num_of_entries];
          while (str >> temp_epoch) {
            if (str >> temp_match) {
              alldata[temp_proc][temp_index++] = temp_epoch;
              alldata[temp_proc][temp_index++] = temp_match;
            } else ThrowErrorAndExit("Error: Can't read epoch matching info");
          }
          if (num_of_entries != temp_index || alldata[temp_proc] == NULL) 
            ThrowErrorAndExit("Error: Input file does not have the right format");

          /* Sending epoch decisions to the corresponding process
           * no need to send to self - copy directly */
          if (temp_proc != MASTER_NODE) {
            PMPI_Isend_NewStack(1000, alldata[temp_proc], num_of_entries, MPI_INT, 
                                temp_proc, last_guided_epoch, MPI_COMM_WORLD, &requestArray[pendingReq++]);
          } 
          /* data for master */
          else { 
            /* alldata[i] would hold the epoch number
             * while alldata[i+1] would hold the matching proc */
            for (int i = 0; i < temp_index; i += 2){
              forced_epochmap[alldata[MASTER_NODE][i]] = alldata[MASTER_NODE][i+1];
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
                                  curr_proc, last_guided_epoch, MPI_COMM_WORLD, &requestArray[pendingReq++]);
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
    if (count > 1) {
      running_mode = GUIDED_RUN;
      last_guided_epoch = msg_status.MPI_TAG;
      mydata = new int[count];
      PMPI_Recv_NewStack(1000, mydata, count, MPI_INT, MASTER_NODE, 
                         msg_status.MPI_TAG, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
      for (int i = 0; i < count; i+=2) {
        forced_epochmap[mydata[i]] = mydata[i+1];
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

/* record the current "channel" */
void RecordEpochData(int epoch, int count, MPI_Datatype datatype, 
                     int node, int tag, MPI_Comm comm, MPI_Request request)
{
  epochmap[epoch] = (EpochData_t*)malloc(sizeof(EpochData_t));
  epochmap[epoch]->count = count;
  epochmap[epoch]->datatype = datatype;
  epochmap[epoch]->node = node;
  epochmap[epoch]->tag = tag;
  epochmap[epoch]->comm = comm;
  epochmap[epoch]->request = request;
  epochmap[epoch]->matching_procs = new list<int>();
  if (node != MPI_ANY_SOURCE)
    epochmap[epoch]->matching_procs->push_back(node);
  ND_epochs->push_back(epoch);

}

/* Dump all epoch data into files 
 * Pre: initializeFileIO was called earlier to open outputFile */
void DumpEpochData() {
  list<int>::iterator it = ND_epochs->begin();
  list<int>::iterator it_end = ND_epochs->end();
  /* first output the number of epochs */
  fprintf(outputFile, "%d\n", curr_epoch);
  for (; it != it_end; it++) {
    /* format of each line x: p q r 
       with x being the epoch number, 
       p q r being the matching processes */
#if 1
    if (epochmap[*it]->matching_procs->size() < 2)
      continue;
#endif
    fprintf(outputFile, "%d", *it);
    list<int>::iterator li = epochmap[*it]->matching_procs->begin();
    list<int>::iterator li_end = epochmap[*it]->matching_procs->end();
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
  if (ND_epochs->size() == 0)
    mycount = 1;
  else {
    list<int>::iterator it = ND_epochs->begin();
    list<int>::iterator it_end = ND_epochs->end();
    for (; it != it_end; it++) {
      mycount++; /* space for the epoch */
      if (epochmap[*it]->matching_procs->size() < 2) {
        mycount--; /* no need to record this epoch */
        continue;
      }
      /* need extra space for the count + the actual matches */
        mycount += epochmap[*it]->matching_procs->size() + 1;
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
  if (ND_epochs->size() == 0) {
    mydata[0] = myrank;
  }
  else {
    int mydata_index=0;
    list<int>::iterator it = ND_epochs->begin();
    list<int>::iterator it_end = ND_epochs->end();
    for (; it != it_end; it++) {
      /* first the epoch */
      mydata[mydata_index++] = *it;
      if (epochmap[*it]->matching_procs->size() < 2) {
        mydata_index--;
        continue;
      }
      /* then the size */
      mydata[mydata_index++] = epochmap[*it]->matching_procs->size();
      
      /* then all the matches */
      list<int>::iterator li = epochmap[*it]->matching_procs->begin();
      list<int>::iterator li_end = epochmap[*it]->matching_procs->end();
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
                        recvcounts, displacements, MPI_INT, MASTER_NODE, MPI_COMM_WORLD);

  /* root dumps data to file */
  if (myrank == MASTER_NODE) {
    
    /* Print the number of epochs */
    fprintf(outputFile, "%d\n", curr_epoch);

    for (int i = 0; i < num_procs; i++) {
      /* first print the proc number */
      if (recvcounts[i] == 1) continue;
      fprintf(outputFile, "%d", i);
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
bool FindPotentialMatches(int source, int tag, MPI_Comm comm, int matching_epoch, int incoming_epoch){
  //  fprintf(stderr, "Enter FindPotentialMatches, matching_epoch = %d, incoming_epoch=%d\n", matching_epoch, incoming_epoch);
  bool retFlag = false;
  list<int>::reverse_iterator it = std::find(ND_epochs->rbegin(), ND_epochs->rend(), matching_epoch);
  list<int>::reverse_iterator it_rend = ND_epochs->rend();
  for (; it != it_rend; it++) {
    if (*it >= incoming_epoch &&  
        *it > last_guided_epoch && /* potentially late , need to check tag and communicator */
        (epochmap[*it]->tag == tag || epochmap[*it]->tag == MPI_ANY_TAG) &&
        epochmap[*it]->comm == comm) {      /* found late message */
      list<int>::iterator mp_it = find(epochmap[*it]->matching_procs->begin(),
                                      epochmap[*it]->matching_procs->end(),
                                      source);
      if (mp_it == epochmap[*it]->matching_procs->end())
        epochmap[*it]->matching_procs->push_back(source);

      retFlag = true;
    }
    /* ND events are ordered, cut off at smaller epochs */
    else if (*it < incoming_epoch || *it <= last_guided_epoch) 
      break;
  }
  //fprintf(stderr, "Leaving FindPotentialMatches\n");
  return retFlag;
}

/* Associate the received source to a wildcard receive request */
bool associateNDRequest(PNMPIMOD_Requests_Parameters_t req_param, int source) {
#ifdef PCONTROL_OPT_LEVEL_1
  if (curr_pcontrol_lev == 1) 
    return false;
#endif
  /* If this was a request for a wildcard receive */
  if (req_param.type == PNMPIMOD_REQUESTS_RECV &&
      req_param.node == MPI_ANY_SOURCE &&
      req_param.inreq != MPI_REQUEST_NULL) {
    /* locate the epoch that was associated with this wildcard receive 
       and update the source and tag */
    map<MPI_Request,int>::iterator it = req_to_epoch_map.find(req_param.inreq);
    /* this request must be valid, and thus we must have seen it before */
    assert(it != req_to_epoch_map.end());
    epochmap[(int) it->second]->node = source;    
    list<int>::iterator mp_it = find(epochmap[(int)it->second]->matching_procs->begin(),
                                    epochmap[(int)it->second]->matching_procs->end(),
                                    source);
    if (mp_it == epochmap[(int)it->second]->matching_procs->end())
      epochmap[(int) it->second]->matching_procs->push_back(source);
    return true;
  }
  return false;
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

/* helper function - print out the forced_epochmap 
 * Pre: N/A
 * Post: N/A
 */
void printForcedEpochMap() {
  map<int,int>::iterator it = forced_epochmap.begin();
  fprintf(stderr, "forced_epoch map: \n");
  for (; it!=forced_epochmap.end(); it++) {
    fprintf(stderr, "[key %d value %d] ", it->first, it->second);
  }
  fprintf(stderr, "end forced_epoch map: \n");
}
/* Broadcast piggyback info */
int PBBROADCAST(int root, MPI_Comm comm)
{
  int err, incoming_epoch;
  void* buffer;
  GET_PBCOMM(comm);
  /* if pb_comm does not exist (most likely it's during the init phase */
  if (err == -1)
    return MPI_SUCCESS;

  if (myrank == root)
    buffer = (void*) &curr_epoch;
  else
    buffer = (void*) &incoming_epoch;

  err = PMPI_Bcast(buffer, 1, MPI_INT, root, pb_comm);
  if (err == MPI_SUCCESS) {
    /* receiving piggyback info from some process */
    if (myrank != root) {
      if (curr_epoch < incoming_epoch)
        curr_epoch = incoming_epoch;
#ifdef DEBUG_LEVEL_0
      fprintf(stderr, "Receiving piggyback data %d\n", incoming_epoch);
#endif
    } 
#ifdef DEBUG_LEVEL_0
    else fprintf(stderr, "Broadcasting piggyback data %d\n", curr_epoch);
#endif
  }
  return err;
}

/* all nodes receive piggyback */
int PBALLREDUCE(MPI_Comm comm) 
{
  int err, incoming_epoch;
  GET_PBCOMM(comm);
  /* if pb_comm does not exist (most likely it's during the init phase */
  if (err == -1)
    return MPI_SUCCESS;
  err = PMPI_Allreduce(&curr_epoch, &incoming_epoch, 1, MPI_INT, MPI_MAX, pb_comm);
  if (err == MPI_SUCCESS) {
    if (curr_epoch < incoming_epoch)
      curr_epoch = incoming_epoch;
  }
  return err;
}

/* root of reduce receives piggyback */
int PBREDUCE(int root, MPI_Comm comm)
{
  int err, incoming_epoch;

  GET_PBCOMM(comm);
  /* if pb_comm does not exist (most likely it's during the init phase */
  if (err == -1)
    return MPI_SUCCESS;
  err = PMPI_Reduce(&curr_epoch, &incoming_epoch, 1, 
                    MPI_INT, MPI_MAX, root, pb_comm);
  if (err == MPI_SUCCESS) {
    /* receiving piggyback info from some process */
    if (myrank == root) {
#ifdef DEBUG_LEVEL_0
      fprintf(stderr, "Reduce: Receiving piggyback data\n");
#endif
      if (curr_epoch < incoming_epoch)
        curr_epoch = incoming_epoch;
    }
#ifdef DEBUG_LEVEL_0 
    else fprintf(stderr, "Reduce: Sending piggyback data\n");
#endif
  }
  return err;
}

/* scan? */
int PBSCAN(MPI_Comm comm)
{
  int err, incoming_epoch;
  GET_PBCOMM(comm);
  /* if pb_comm does not exist (most likely it's during the init phase */
  if (err == -1)
    return MPI_SUCCESS;
  err = PMPI_Scan(&curr_epoch, &incoming_epoch, 1, 
                  MPI_INT, MPI_MAX, pb_comm);
  if (err == MPI_SUCCESS) {
    if (curr_epoch < incoming_epoch)
      curr_epoch = incoming_epoch;
  }
  return err;
}

/*.......................................................*/
/* Registration */

int PNMPI_RegistrationPoint()
{
  int err;

  /* register this module and its services */

  err=PNMPI_Service_RegisterModule(PNMPI_MODULE_PBD);
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
  char *vlevel_s;

  /* query pb module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_PB,&handle_pb);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_pb,"piggyback","ip",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  pb_set=(PNMPIMOD_Piggyback_t) ((void*)serv.fct);

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

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_PBD,&handle_pbd);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetArgument(handle_pbd,"size",&vlevel_s);
  if (err!=PNMPI_SUCCESS) {
    if (err==PNMPI_NOARG)
      pb_size=4;
    else
      return err;
  }
  else {  
    pb_size=atoi(vlevel_s);
  }
  
  err=PNMPI_Service_GetArgument(handle_pbd,"set",&vlevel_s);
  if (err!=PNMPI_SUCCESS) {
    if (err==PNMPI_NOARG)
      run_set=1;
    else
      return err;
  }
  else {
    run_set=atoi(vlevel_s);
  }
  
  err=PNMPI_Service_GetArgument(handle_pbd,"check",&vlevel_s);
  if (err!=PNMPI_SUCCESS) {
    if (err==PNMPI_NOARG)
      run_check=1;
    else
      return err;
  }
  else {
    run_check=atoi(vlevel_s);
  }
  
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
    //    fprintf(stderr, "yes yes yes\n");
    running_mode = SELF_RUN;
  }
#ifdef PCONTROL_OPT_LEVEL_1
  if (curr_pcontrol_lev != 1) {
#endif

  if (source == MPI_ANY_SOURCE) {
    if (running_mode == GUIDED_RUN) {
      if (forced_epochmap.find(curr_epoch) != forced_epochmap.end()) 
        err=PMPI_Irecv(buf,count,datatype,forced_epochmap[curr_epoch],tag,comm,request);
      else 
        err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
    } else { /* SELF_RUN */
      err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
      RecordEpochData(curr_epoch,count,datatype,source,tag,comm,*request);
    }
    req_to_epoch_map[*request]=curr_epoch;
    curr_epoch++;
  } else {
    err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
    req_to_epoch_map[*request]=curr_epoch;
  }
#ifdef PCONTROL_OPT_LEVEL_1
  } else {
    err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
    req_to_epoch_map[*request]=curr_epoch;
    
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
      if (forced_epochmap.find(curr_epoch) != forced_epochmap.end()) 
        err=PMPI_Iprobe(forced_epochmap[curr_epoch],tag,comm,flag,status);
      else
        err=PMPI_Iprobe(node,tag,comm,flag,status);

    } else { /* SELF_RUN */
      err=PMPI_Iprobe(node,tag,comm,flag,status);
      if (*flag)
        RecordEpochData(curr_epoch, 0, 0, (*status).MPI_SOURCE, tag, comm,0);
    }
    if (*flag)
      curr_epoch++;
  } else {
    err=PMPI_Iprobe(node,tag,comm,flag,status);    
  }
#ifdef PCONTROL_OPT_LEVEL_1
  } else {
    err=PMPI_Iprobe(node,tag,comm,flag,status);    

  }
#endif
  if (run_check==0) return err;

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
int MPI_Recv(void* buf, int num, MPI_Datatype dtype, int node,
             int tag, MPI_Comm comm, MPI_Status *status)
{
  int err, incoming_epoch;
  if (curr_epoch > last_guided_epoch)
    running_mode = SELF_RUN;
#ifdef PCONTROL_OPT_LEVEL_1
  if (curr_pcontrol_lev != 1) {
#endif
  if (node == MPI_ANY_SOURCE) {
    if (running_mode == GUIDED_RUN) {
      if (forced_epochmap.find(curr_epoch) != forced_epochmap.end()) {
        err=PMPI_Recv(buf,num,dtype,forced_epochmap[curr_epoch],tag,comm,status);
      }
      else {
        err=PMPI_Recv(buf,num,dtype,node,tag,comm,status);
      }
    } else { /* SELF_RUN */
      err=PMPI_Recv(buf,num,dtype,node,tag,comm,status);
      RecordEpochData(curr_epoch, num, dtype, (*status).MPI_SOURCE, tag, comm,0);
    }
    curr_epoch++;
  } else {
      err=PMPI_Recv(buf,num,dtype,node,tag,comm,status);    
  }
#ifdef PCONTROL_OPT_LEVEL_1
  } else {
      err=PMPI_Recv(buf,num,dtype,node,tag,comm,status);    
  }
#endif
  incoming_epoch = PBRECV(err,status);
  if (curr_epoch < incoming_epoch)
    curr_epoch = incoming_epoch;
  /* Possible Late Message */
  else if (curr_epoch > incoming_epoch) 
    /* see which wildcard receive it can match */
    FindPotentialMatches((*status).MPI_SOURCE, (*status).MPI_TAG, 
                         comm, curr_epoch-1, incoming_epoch);

  if (run_check==0) return err;

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
      if (forced_epochmap.find(curr_epoch) != forced_epochmap.end()) 
        err=PMPI_Probe(forced_epochmap[curr_epoch],tag,comm,status);
      else
        err=PMPI_Probe(node,tag,comm,status);
    } else {
      err=PMPI_Probe(node,tag,comm,status);
      RecordEpochData(curr_epoch, 0, 0, (*status).MPI_SOURCE, tag, comm,0);
    }
    curr_epoch++;
  } else {
      err=PMPI_Probe(node,tag,comm,status);    
  }

  if (run_check==0) return err;
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
  if (run_check==0) return err;
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
  if (run_check==0) return err;

  if (err == MPI_SUCCESS){
    /* Get the communication request stored in status */
    req_param = COMM_REQ_FROM_STATUS(status);
    /* Associate the source to the (if yes) wildcard receive */
    associateNDRequest(req_param, (*status).MPI_SOURCE);
    if (req_param.inreq!=MPI_REQUEST_NULL) {
      if (req_param.type==PNMPIMOD_REQUESTS_RECV){
        /* update epoch */
        int incoming_epoch = PBRECV(err,status);
        if (curr_epoch < incoming_epoch)
          curr_epoch = incoming_epoch;
        else { 
          int matching_epoch = 0;
          map<MPI_Request,int>::iterator it = req_to_epoch_map.find(req_param.inreq);
          /* this request must be valid, and thus we must have seen it before */
          assert(it != req_to_epoch_map.end());
          matching_epoch = it->second;
          if (matching_epoch > incoming_epoch)
            FindPotentialMatches((*status).MPI_SOURCE, (*status).MPI_TAG,
                                 req_param.comm, matching_epoch, incoming_epoch);
        }
      }    
    }
  }
  return err;
}


int MPI_Waitany(int count, MPI_Request *array_of_requests, int *index, MPI_Status *status)
{
  int err;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Waitany(count,array_of_requests,index,status);
  if (run_check==0) return err;
  /* Get the communication request stored in status */
  if (err == MPI_SUCCESS){
    req_param = COMM_REQ_FROM_STATUS(status);
    associateNDRequest(req_param, (*status).MPI_SOURCE);

    if (req_param.inreq!=MPI_REQUEST_NULL) {
      if (req_param.type==PNMPIMOD_REQUESTS_RECV){
        int incoming_epoch = PBRECV(err,status);
        if (curr_epoch < incoming_epoch)
          curr_epoch = incoming_epoch;
        else {
          int matching_epoch = 0;
          map<MPI_Request,int>::iterator it = req_to_epoch_map.find(req_param.inreq);
          /* this request must be valid, and thus we must have seen it before */
          assert(it != req_to_epoch_map.end());
          matching_epoch = it->second;
          if (matching_epoch > incoming_epoch)
            FindPotentialMatches((*status).MPI_SOURCE, (*status).MPI_TAG,
                                 req_param.comm, matching_epoch, incoming_epoch);
        }                 
      }
    }
  }
  
  return err;
}


int MPI_Waitsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err,i;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Waitsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  if (run_check==0) return err;
  for (i=0; i<*outcount; i++) {
    if (err == MPI_SUCCESS) {
      req_param=COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i);
      associateNDRequest(req_param, (array_of_statuses[i]).MPI_SOURCE);
      
      if (req_param.inreq!=MPI_REQUEST_NULL) {
        if (req_param.type==PNMPIMOD_REQUESTS_RECV) {
          int incoming_epoch = PBRECVARRAY(err,array_of_statuses,count,i);
          if (curr_epoch < incoming_epoch)
            curr_epoch = incoming_epoch;
          else {
            int matching_epoch = 0;
            map<MPI_Request,int>::iterator it = req_to_epoch_map.find(req_param.inreq);
            /* this request must be valid, and thus we must have seen it before */
            assert(it != req_to_epoch_map.end());
            matching_epoch = it->second;
            if (matching_epoch > incoming_epoch)
              FindPotentialMatches((array_of_statuses[i]).MPI_SOURCE, 
                                   (array_of_statuses[i]).MPI_TAG,
                                   req_param.comm,matching_epoch,incoming_epoch);
          }
        }
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
  if (run_check==0) return err;
  for (i=0; i<count; i++) {
    if (err == MPI_SUCCESS) {
      req_param=COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i);
      associateNDRequest(req_param, (array_of_statuses[i]).MPI_SOURCE);
      
      if (req_param.inreq!=MPI_REQUEST_NULL) {
        if (req_param.type==PNMPIMOD_REQUESTS_RECV) {
          int incoming_epoch = PBRECVARRAY(err,array_of_statuses,count,i);
          if (curr_epoch < incoming_epoch)
            curr_epoch = incoming_epoch;
          else {
            int matching_epoch = 0;
            map<MPI_Request,int>::iterator it = req_to_epoch_map.find(req_param.inreq);
            /* this request must be valid, and thus we must have seen it before */
            assert(it != req_to_epoch_map.end());
            matching_epoch = it->second;
            if (matching_epoch > incoming_epoch)
              FindPotentialMatches(array_of_statuses[i].MPI_SOURCE,
                                   array_of_statuses[i].MPI_TAG,
                                   req_param.comm,matching_epoch,incoming_epoch);
          }
        }
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
  if (run_check==0) return err;
  if (err== MPI_SUCCESS && (*flag) && (COMM_REQ_FROM_STATUS(status).inreq!=MPI_REQUEST_NULL)) {
    /* Get the communication request stored in status */
    req_param = COMM_REQ_FROM_STATUS(status);
    associateNDRequest(req_param, (*status).MPI_SOURCE);

    if (req_param.inreq!=MPI_REQUEST_NULL) {
      if (req_param.type==PNMPIMOD_REQUESTS_RECV){
        int incoming_epoch = PBRECV(err,status);
        if (curr_epoch < incoming_epoch)
          curr_epoch = incoming_epoch;
        else {
          int matching_epoch = 0;
          map<MPI_Request,int>::iterator it = req_to_epoch_map.find(req_param.inreq);
          /* this request must be valid, and thus we must have seen it before */
          assert(it != req_to_epoch_map.end());
          matching_epoch = it->second;
          if (matching_epoch > incoming_epoch)
            FindPotentialMatches((*status).MPI_SOURCE, (*status).MPI_TAG,
                                 req_param.comm,matching_epoch,incoming_epoch);
        }
      }
    }
  }
  return err;
}

int MPI_Testany(int count, MPI_Request *array_of_requests, int *index, int *flag, MPI_Status *status)
{
  int err;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Testany(count,array_of_requests,index,flag,status);
  if (run_check==0) return err;
  if (err==MPI_SUCCESS && (*flag) && (COMM_REQ_FROM_STATUS(status).inreq!=MPI_REQUEST_NULL)){
    /* Get the communication request stored in status */
    req_param = COMM_REQ_FROM_STATUS(status);
    associateNDRequest(req_param, (*status).MPI_SOURCE);
    
    if (req_param.inreq!=MPI_REQUEST_NULL) {
      if (req_param.type==PNMPIMOD_REQUESTS_RECV){
          int incoming_epoch = PBRECV(err,status);
          if (curr_epoch < incoming_epoch)
            curr_epoch = incoming_epoch;
          else {
            int matching_epoch = 0;
            map<MPI_Request,int>::iterator it = req_to_epoch_map.find(req_param.inreq);
            /* this request must be valid, and thus we must have seen it before */
            assert(it != req_to_epoch_map.end());
            matching_epoch = it->second;
            if (matching_epoch > incoming_epoch)
              FindPotentialMatches((*status).MPI_SOURCE, (*status).MPI_TAG,
                                 req_param.comm,matching_epoch,incoming_epoch);
          }
      }
    }
  }
  return err;  
}

int MPI_Testsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err,i;
  PNMPIMOD_Requests_Parameters_t req_param;
  err=PMPI_Testsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  if (run_check==0) return err;
  for (i=0; i<*outcount; i++){
    if (err == MPI_SUCCESS) {
      req_param=COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i);
      associateNDRequest(req_param, (array_of_statuses[i]).MPI_SOURCE);
      
      if (req_param.inreq!=MPI_REQUEST_NULL) {
        if (req_param.type==PNMPIMOD_REQUESTS_RECV) {
          int incoming_epoch = PBRECVARRAY(err,array_of_statuses,count,i);
          if (curr_epoch < incoming_epoch)
            curr_epoch = incoming_epoch;
          else {
            int matching_epoch = 0;
            map<MPI_Request,int>::iterator it = req_to_epoch_map.find(req_param.inreq);
            /* this request must be valid, and thus we must have seen it before */
            assert(it != req_to_epoch_map.end());
            matching_epoch = it->second;
            if (matching_epoch > incoming_epoch)
              FindPotentialMatches(array_of_statuses[i].MPI_SOURCE, 
                                   array_of_statuses[i].MPI_TAG,
                                   req_param.comm,matching_epoch,incoming_epoch);
          }
        }
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
  if (run_check==0) return err;
  if (err == MPI_SUCCESS && *flag){
    for (i=0; i<count; i++){
      req_param=COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i);
      associateNDRequest(req_param, (array_of_statuses[i]).MPI_SOURCE);
      
      if (req_param.inreq!=MPI_REQUEST_NULL) {
        if (req_param.type==PNMPIMOD_REQUESTS_RECV) {
          int incoming_epoch = PBRECVARRAY(err,array_of_statuses,count,i);
          if (curr_epoch < incoming_epoch)
            curr_epoch = incoming_epoch;
          else {
            int matching_epoch = 0;
            map<MPI_Request,int>::iterator it = req_to_epoch_map.find(req_param.inreq);
            /* this request must be valid, and thus we must have seen it before */
            assert(it != req_to_epoch_map.end());
            matching_epoch = it->second;
            if (matching_epoch > incoming_epoch)
              FindPotentialMatches(array_of_statuses[i].MPI_SOURCE,
                                   array_of_statuses[i].MPI_TAG,
                                   req_param.comm,matching_epoch,incoming_epoch);
          }
        }
      }
    } 
  }
  return err;
}


#endif

#ifdef PIGGYBACK_COLLECTIVES
/*.......................................................*/
/* Collectives */

/*.......................................................*/
/* - ONE TO ALL - */
#ifdef PIGGYBACK_ONE_TO_ALL
int MPI_Bcast(void* buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm)
{
  int err = PBBROADCAST(root, comm);

  if (err==MPI_SUCCESS)
    err=PMPI_Bcast(buffer, count, datatype, root, comm);

  return err;
}

int MPI_Scatter(void* sendbuf, int sendcnt, MPI_Datatype sendtype, 
                void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                int root, MPI_Comm comm)
{
  int err = PBBROADCAST(root, comm);

  if (err==MPI_SUCCESS)
    err=PMPI_Scatter(sendbuf, sendcnt, sendtype,
                     recvbuf, recvcnt, recvtype, 
                     root, comm);

  return err;
}

int MPI_Scatterv(void* sendbuf, int* sendcnts, int* displs, MPI_Datatype sendtype, 
                 void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                 int root, MPI_Comm comm)
{
  int err = PBBROADCAST(root, comm);

  if (err==MPI_SUCCESS)
    err=PMPI_Scatterv(sendbuf, sendcnts, displs, sendtype,
                      recvbuf, recvcnt, recvtype, 
                      root, comm);

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
  int err = PBREDUCE(root, comm);
  if (err==MPI_SUCCESS)
    err=PMPI_Gather(sendbuf, sendcnt, sendtype,
                    recvbuf, recvcnt, recvtype, 
                    root, comm);

  return err;    
}

int MPI_Gatherv(void* sendbuf, int sendcnt, MPI_Datatype sendtype,
                void* recvbuf, int* recvcnts, int* displs, 
                MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  int err = PBREDUCE(root, comm);
  if (err == MPI_SUCCESS)
    err=PMPI_Gatherv(sendbuf, sendcnt, sendtype,
                     recvbuf, recvcnts, displs, recvtype, 
                     root, comm);
  return err;
}
    
int MPI_Reduce(void* sendbuf, void* recvbuf, int count, 
               MPI_Datatype datatype, MPI_Op op, int root,
               MPI_Comm comm)
{
  int err = PBREDUCE(root, comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Reduce(sendbuf, recvbuf, count,
                      datatype, op, root, comm);

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
  int err = PBALLREDUCE(comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Allgather(sendbuf, sendcnt, sendtype,
                         recvbuf, recvcnt, recvtype, comm);
  return err;
}

int MPI_Allgatherv(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                   void *recvbuf, int *recvcnts, int *displs, 
                   MPI_Datatype recvtype, MPI_Comm comm)
{
  int err = PBALLREDUCE(comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Allgatherv(sendbuf, sendcnt, sendtype,
                          recvbuf, recvcnts, displs, 
                          recvtype, comm);
  return err;
}

int MPI_Alltoall(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                 void *recvbuf, int recvcnt, MPI_Datatype recvtype, 
                 MPI_Comm comm)
{
  int err = PBALLREDUCE(comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Alltoall(sendbuf, sendcnt, sendtype,
                        recvbuf, recvcnt, recvtype, comm);
  return err;
}

int MPI_Alltoallv(void *sendbuf, int *sendcnts, int *sdispls, MPI_Datatype sendtype, 
                  void *recvbuf, int *recvcnts, int *rdispls, MPI_Datatype recvtype, 
                  MPI_Comm comm)
{
  int err = PBALLREDUCE(comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Alltoallv(sendbuf, sendcnts, sdispls, sendtype,
                         recvbuf, recvcnts, rdispls, recvtype, 
                         comm);
  return err;
}

int MPI_Allreduce(void *sendbuf, void *recvbuf, int count, 
                  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err = PBALLREDUCE(comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Allreduce(sendbuf, recvbuf, count, datatype,
                         op, comm);
  return err;
}

int MPI_Reduce_scatter(void *sendbuf, void *recvbuf, int *recvcnts, 
                       MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err = PBALLREDUCE(comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Reduce_scatter(sendbuf, recvbuf, recvcnts, datatype,
                              op, comm);
  return err;
}
 
/* BARRIER */
int MPI_Barrier(MPI_Comm comm)
{
  int err = PBALLREDUCE(comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Barrier(comm);
  return err;
}
 
/* SCAN */
int MPI_Scan(void* sendbuf, void* recvbuf, int count,
             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err = PBSCAN(comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
  return err;
}
#endif /* PIGGYBACK_ALL_TO_ALL */

/*.......................................................*/
/* COMMUNICATOR COLLECTIVES */
#ifdef PIGGYBACK_COMM_COLLECTIVES
int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *comm_out)
{
  int err = PBALLREDUCE(comm);
  if (err == MPI_SUCCESS) {
    if (comm == MPI_COMM_NULL)
      sleep(10000000);
    err = PMPI_Comm_dup(comm, comm_out);
  }
  return err;
}

int MPI_Comm_free(MPI_Comm *comm)
{
  int err = PBALLREDUCE(*comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Comm_free(comm);
  return err;
}

int MPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *comm_out)
{
  int err = PBALLREDUCE(comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Comm_create(comm, group, comm_out);
  return err;

}

int MPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *comm_out)
{
  int err = PBALLREDUCE(comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Comm_split(comm, color, key, comm_out);
  return err;

}
#endif /* PIGGYBACK_COMM_COLLECTIVES */
#endif /* PIGGYBACK_COLLECTIVES*/
/*.......................................................*/


int MPI_Finalize() {
  int err = PBALLREDUCE(MPI_COMM_WORLD);
  int incoming_epoch;
  /* sync the number of epocs */
  PMPI_Allreduce_NewStack(1000, &curr_epoch, &incoming_epoch, 1, 
                          MPI_INT, MPI_MAX, MPI_COMM_WORLD);
  curr_epoch = incoming_epoch;
  err = PMPI_Finalize();
  if (err == MPI_SUCCESS) {
    DumpEpochDataMaster();
  }
  return err;
}

/* The End. */
