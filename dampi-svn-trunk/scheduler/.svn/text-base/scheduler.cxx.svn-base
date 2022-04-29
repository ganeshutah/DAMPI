#include <vector>
#include <sstream>
#include <assert.h>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <iterator>
#include <algorithm>
#include "scheduler.hpp"

#define BOUNDED_MIXING_SEARCH
/* These typedefs are inside the header file, 
 * included here for easy reference
 */

/*
typedef list<list<MatchingPair_t*>*> EpochValueType;
typedef EpochValueType BigStepType;
*/

/* Globals */
#ifdef BOUNDED_MIXING_SEARCH
static int k_bounded = -1;
static int epoch_lower_bound = -1;
#endif
static int curr_epoch;
static int num_procs;
static int num_epochs;
static char* executableName;


bool hasNoND = true;
bool rerun = false;

map<int,EpochValueType*> EpochArray;
vector <int> hasMoreMatches;
map<int,BigStepType*> BigStepMap;

/* map epoch to event number within each process */
vector <map<int,int> > epoch_to_event_map;

vector<const char*> cmd;
/* print out help options for the scheduler 
 * pre/post: N/A */
void Usage() {
#ifndef BOUNDED_MIXING_SEARCH
  printf ("Usage: scheduler -n <# of procs> -p <name of the executable> \n");
#else
  printf ("Usage: scheduler -n <# of procs> -k <# bound> -p <name of the executable> \n");
#endif

  exit(1);
}
void ThrowErrorAndExit(string s, int err) {
  cout << s << "\n";
  exit(err);
}

/* Parse the command line 
 * pre: n/a
 * post: executableName and num_procs are populated */
void parseCmdLine(int argc, char** argv) {
  int pos= 0;
  if (argc < 5) {
    Usage();
  }
  for (int i=1; i < (argc > 9 ? 9 : argc); i++) {
    if (!strcmp(argv[i], "-n") || !strcmp(argv[i], "-np")) {
      if (i+1 >= argc) Usage();
      num_procs = atoi(argv[++i]);
    } else if (!strcmp(argv[i], "-p")) {
      if (i+1 >= argc) Usage();
      executableName = argv[++i];
      pos = i;
      
    }
#ifdef BOUNDED_MIXING_SEARCH 
    else if (!strcmp(argv[i], "-k")) {
      if (i+1 >= argc) Usage();
      k_bounded = atoi(argv[++i]);
    }
#endif
    else
      Usage();
  }

  /* this vector needs to be initialized only once */
  epoch_to_event_map.resize(num_procs);

  cmd.push_back("mpiexec");
  cmd.push_back("-n");

  /* an ugly (yet portable) way to convert int -> c-string */
  stringstream out;
  out << num_procs;
  string num_procs_str = out.str();

  char* cstr = new char [num_procs_str.size()+1];
  strcpy (cstr, num_procs_str.c_str());

  cmd.push_back((const char *) cstr);
  cmd.push_back((const char *) executableName);

  /* now parse the program arguments */
  for (int i = pos+1; i < argc; i++) {
    cmd.push_back((const char*) argv[i]);
  }
  cmd.push_back(NULL);
}

/* initialize the scheduler's data structures 
 * pre: none
 * post: initialize EpochArray and hasMoreMatches */
void init(int num_epochs) {
#ifdef BOUNDED_MIXING_SEARCH
  if (!rerun && k_bounded >=0)
    epoch_lower_bound = num_epochs -1;
#endif
 
  /*
  if (EpochArray.size() < num_epochs) {
    EpochArray.resize(num_epochs, NULL);
    }*/
  
  if (hasMoreMatches.size() < num_epochs)
    hasMoreMatches.resize(num_epochs,0);
  
  /*
  if (!rerun)
    for (int i = 0; i < num_epochs; i ++)
      hasMoreMatches[i] = 0;
  */
}

/* process input files 
 * pre: ParseCmdLine is called, which would initialize num_procs, num_epochs
 * post: EpochArray is populated */
void processInput() {
  int i;
  string line;
  char inputFileName[MAX_FILENAME_LENGTH];
  ifstream inputFile;
  hasNoND = true;
  //for (i = 0; i < num_procs; i++) {

  /* read files written out by procs, one by one */
  sprintf(inputFileName, "%s.%s",executableName,PROC_OUTPUT_FILE_PREFIX);
  inputFile.open(inputFileName, ifstream::in);

  if (inputFile.fail()) {
    ThrowErrorAndExit("Cannot open trace file", 1);
  }
  /* first read the number of epochs */
  if (getline(inputFile,line)) {
    istringstream str(line);
    cout << "read from line " << line << endl;
    str >> num_epochs;
    if (num_epochs >0) {
      init(num_epochs);
    } else {
      inputFile.close();
      return;
    }
  } else {
  }
  /* read line by line - first number is proc number
   * next is epoch, next is how many matches, then all the matches,
   * then back to epoch, etc. */
  while (getline(inputFile,line)) {
    istringstream str(line);
    int proc;
    int epoch;
    int eventNo;
    int matching_sender;
    int potential_sender;
#ifdef BOUNDED_MIXING_SEARCH
    int epochCount = 0;
#endif
    /* first read in the proc number */
    str >> proc;
    /* read in the epoch and the matching sender, then the potential senders
     * continue doing so until no more epoch to read */
    while (str >> epoch) {
      bool existed = true;
      MatchingPair_t* m = new MatchingPair_t;
      EpochValueType* matching_list;
      int num_of_matches;
#ifdef BOUNDED_MIXING_SEARCH
      if (k_bounded >= 0) {
        if (rerun) {
          if (curr_epoch <= epoch) {
            epochCount++;
          }
          if (rerun) {
            if (epochCount > k_bounded || epoch > epoch_lower_bound)
              continue; /* exceeded bound, disregard the rest of the matching for this proc*/
          }
        }
      }
#endif
      /* get the event number associated with this epoch */
      if (!(str >> eventNo))
        ThrowErrorAndExit("Expected the event number after epoch, corrupted input?",1);
      
      epoch_to_event_map[proc][epoch] = eventNo;
      /* get the number of matches for this epoch */
      if (!(str >> num_of_matches))
        ThrowErrorAndExit ("Expected number of matches after epoch, corrupted input?",1);
        
      /* get the matching sender */
      if (!(str >> matching_sender))
        ThrowErrorAndExit("Expected matching sender but found nothing, corrupted input?", 1);
      m->source = proc;
      m->destination = matching_sender;

      /* Did we create an entry for this epoch previously? */
      if (EpochArray.find(epoch) == EpochArray.end() ||
          EpochArray[epoch] == NULL) {
        EpochArray[epoch] = new EpochValueType;
        existed = false;
      }

      matching_list = EpochArray[epoch];

      if (!existed) {
        matching_list->push_back(new list<MatchingPair_t*>);
        matching_list->back()->push_back(m);
        /* we already read the matching sender, now reading the potential senders */
        for (int i = 1; i < num_of_matches; i++) {
          if (!(str >> potential_sender))
            ThrowErrorAndExit("Not enough potential senders as indicated earlier - corrupted input?",1);
          m = new MatchingPair_t;
          m->source=proc;
          m->destination=potential_sender;        
          matching_list->back()->push_back(m);
          hasMoreMatches[epoch] = 1;
          hasNoND = false;
        }
      } else {
        /* this might not work when we have multiple non-determinism coming from one epoch
         * TODO: FIX THIS */
        /* if we have previously parsed this epoch, no need to parse it again */
        for (int i = 1; i < num_of_matches; i++) {
          if (!(str >> potential_sender))
            ThrowErrorAndExit("Not enough potential senders as indicated earlier - corrupted input?",1);              
        }
      }
    } /* end reading info for 1 proc */
  } /* end while loop - no more input to read */
  inputFile.close();
  //printEpochMap();              
}

/* Restart the process
 * Return: the pid of the fork process */
int restartProcesses() {
  int gpid = fork();
  
  if (gpid == 0) {
    if (execvp (cmd[0], (char* const*) &cmd[0]) < 0) {
      ThrowErrorAndExit("Unable to force restart through fork/exec",1);
    }
    exit(0);
  } else if (gpid < 0) {
    perror(0);
    exit(1);
  }
  int status;
  waitpid(0, &status, 0);
  return gpid;
}

/* pre: hasMoreMatches[epoch] = true 
 * post: BigStepMap[epoch] is populated 
 * note: if BigStepMap[epoch] already exists, no action is taken */
void constructBigSteps(int epoch) {
  if (BigStepMap.find(epoch) != BigStepMap.end()) {
    return;
  }
  BigStepType* bgList = new BigStepType;
  EpochValueType* matching_list;

  assert (EpochArray.find(epoch) != EpochArray.end() &&
          EpochArray[epoch] != NULL);

  matching_list = EpochArray[epoch];
  EpochValueType::iterator ml_it = matching_list->begin();
  for (; ml_it != matching_list->end(); ml_it++) {
    if ((*ml_it)->size() <= 1) {
      continue;
    }
    addToBigStepList(bgList, *ml_it);
  }

  
  /* now remove the first item of each matching_list 
   * since that's what we matched earlier */

  BigStepType::iterator bg_it = bgList->begin();  
  bgList->front()->clear();
  delete bgList->front();
  bgList->pop_front();

  BigStepMap[epoch] = bgList;
}

void addToBigStepList(BigStepType* bgList, list<MatchingPair_t*>* mpList) {

  if (bgList->size() == 0) {
    bgList->push_back(new list<MatchingPair_t*>);
  }

  /* How it works:
   * Grab each item from the existing big step list
   * For each item, combine it with a 
   * matching pair from the matching list (mpList)
   * For example: bgList: {{a} {b}}, mpList {c d e} 
   * (where abcde each is a matching pair)
   * The result would be bgList {{ac} {ad {ae} {bc} {bd} {be}}
   *
   */
  BigStepType::iterator bg_it = bgList->begin();
  BigStepType::iterator next_element = bgList->begin();
  while (bg_it != bgList->end()){
    next_element++;
    list<MatchingPair_t*>::iterator mp_it = mpList->begin();
    for (; mp_it != mpList->end(); mp_it++) {
      list<MatchingPair_t*>* tempList = new list<MatchingPair_t*>(**bg_it);
      tempList->push_back(*mp_it); 
      bgList->insert(bg_it, tempList);
    }

    (*bg_it)->clear();
    delete (*bg_it);
    bgList->erase(bg_it);
    bg_it = next_element;
  }
  
}
/* ------------- HELPER FUNCTIONS ----------------- */
/* Print out all the epochs and their corresponding matching pairs */
void printEpochMap() {
  EpochValueType* matching_list;
  for (int i = 0; i < EpochArray.size(); i++) {
    if (EpochArray.find(i) == EpochArray.end()
        || EpochArray[i] == NULL)
      continue;
    matching_list = EpochArray[i];

    printf("Epoch: %d ",i);
    EpochValueType::iterator ml_it = matching_list->begin();
    for (; ml_it != matching_list->end(); ml_it ++) {
      list<MatchingPair_t*>::iterator mp_it = (*ml_it)->begin();
      for (; mp_it != (*ml_it)->end(); mp_it ++) {
        printf("[%d,%d] ", (*mp_it)->source, (*mp_it)->destination);
      }
    }
    printf("\n");
  }
}

void printBigStepList(int epoch) {
  BigStepType* bgList = BigStepMap[epoch];

  BigStepType::iterator bg_it = bgList->begin();
  for (; bg_it != bgList->end(); bg_it ++) {
    printf("Big Step for epoch %d: ",epoch);
    list<MatchingPair_t*>::iterator mp_it = (*bg_it)->begin();
    for (; mp_it != (*bg_it)->end(); mp_it ++) {
      printf("[%d,%d] ", (*mp_it)->source, (*mp_it)->destination);
    }
    printf("\n");
  }
}

void printMatchingPair(MatchingPair_t* m) {
  printf("[%d,%d] ", m->source, m->destination);
}

/* write out the scheduler's decision file 
 * pre: BigStepMap needs to be populated already
 * post: write scheduler's decision files 
 * return: true if there are still more matches, 
 * false if this is the only alternative
 */
void writeMatchingInfo(vector<int>* outputString, int proc, int epoch,
                       int dest) {
  /* write the epoch number */
  outputString[proc].push_back(epoch);
  
  /* write the event number */
  assert (epoch_to_event_map[proc].find(epoch) !=
          epoch_to_event_map[proc].end());
  outputString[proc].push_back(epoch_to_event_map[proc][epoch]);
  
  /* write the source that it should match to */
  outputString[proc].push_back(dest);
  
}
bool writeSchedDecisionFile(int epoch) {
  /* pop out one big step for this epoch and write them out as a schedule decision file
   * We also need to traverse back and write all the decisions for earlier epochs
   * Those decisions will help ensure we reach this epoch!
   * For example, at epoch 0, we have {a b} and we chose {a}
   * at epoch 10, we have {c d} and we must try d. We need to choose {a} again in epoch 0
   * to make sure the choices {c d} are still valid
   */
  BigStepType* bgList = BigStepMap[epoch];
  if (!bgList || bgList->size() == 0)
    return false;
  int i;
  char outputFileName[MAX_FILENAME_LENGTH];
  ofstream outputFile;

  /* need write stream for each proc 
   * do it on heap in case we have to deal with large outpuf */
  vector<int>* outputString = new vector<int> [num_procs];
  
  /* first initialize the schedule decision file */
  sprintf(outputFileName, "%s.%s", executableName, SCHEDULER_FILE_PREFIX);
  outputFile.open(outputFileName);

  if (outputFile.fail())
    ThrowErrorAndExit("Can't open file for writing epoch decisions", 1);
  /* write the epochs after which the process will revert to SELF_RUN */
  outputFile << epoch;

  /* going through all the previous epochs */
  for (i = 0; i < epoch; i++) {
    /* only care about those for which more than one choices existed */
    if (hasMoreMatches[i] ==  1) {
      
      /* Check BigStepMap, we might have processed this epoch before,
       * If this is the case, continue with the previously chosen map
       * This is necessary, otherwise we'll just blindly force the first pair
       * of the EpochArray[i], which might be erroneous */
      map<int,BigStepType*>::iterator bsm_it = BigStepMap.find(i);

      if (bsm_it != BigStepMap.end()) {
        list<MatchingPair_t*>* matchingpair_list = BigStepMap[i]->front();
        list<MatchingPair_t*>::iterator mp_it = matchingpair_list->begin();
        for (; mp_it != matchingpair_list->end(); mp_it++) {
          writeMatchingInfo(outputString, (*mp_it)->source, i, (*mp_it)->destination);
        }
      }
      else {
        assert (EpochArray.find(i) != EpochArray.end() &&
                EpochArray[i] != NULL);
        
        EpochValueType* matching_list = EpochArray[i];
        EpochValueType::iterator ml_it = matching_list->begin();
        for (; ml_it != matching_list->end(); ml_it++) {
          /* get the first matching pair, that's what we need! */
          MatchingPair_t* m = (*ml_it)->front();
          writeMatchingInfo(outputString, m->source, i, m->destination);
        }
      }
    }
  }
  
  /* now write the big step itself */
  list<MatchingPair_t*>* matchingpair_list = bgList->front();
  list<MatchingPair_t*>::iterator mp_it = matchingpair_list->begin();
  for (; mp_it != matchingpair_list->end(); mp_it++) {
    writeMatchingInfo(outputString, (*mp_it)->source, i, (*mp_it)->destination);
  }

  /* now write all the outputString into the output file */
  for (int i = 0; i < num_procs; i++) {
    /* output each proc */
    if (outputString[i].size() != 0) {
      outputFile << "\n" << i;
      for (int j = 0; j < outputString[i].size();  j++)
        outputFile << " " << outputString[i][j];
    }
  }
  /* clean up and close output file */
  outputFile.close();
  delete [] outputString;

  return true;
}

/* remove one big step from the list of all big steps for the current epoch 
 * post: BigStepMap[epoch] is removed from it one big step (front element)
 */
void removeOneBigStep(int epoch) {
  //fprintf(stderr, "Removing BigStep for Epoch %d\n", epoch);
  BigStepType* bgList = BigStepMap[epoch];
  list<MatchingPair_t*>* matchingpair_list = bgList->front();
  list<MatchingPair_t*>::iterator mp_it = matchingpair_list->begin();
  for (; mp_it != matchingpair_list->end(); mp_it++) {
    //delete *mp_it;
  }
  matchingpair_list->clear();
  delete matchingpair_list;
  bgList->pop_front();
}

/* remove information of an epoch, including its big step
 * and its existence in EpochArray */
void removeEpoch(int epoch) {
  /* done with this epoch - remove its data */
  //fprintf(stderr, "Removing Epoch %d\n", epoch);

  BigStepType* bgList = BigStepMap[epoch];
  BigStepType::iterator bg_it = bgList->begin();
  for (; bg_it != bgList->end(); bg_it++) {
    list<MatchingPair_t*>::iterator mp_it = (*bg_it)->begin();
    /* should not delete here because BigStepType 
     * is re-using MatchingPair from EpochArray */
    for (; mp_it != (*bg_it)->end(); mp_it++) {
      //delete *mp_it;
    }
    delete *bg_it;
  }
  delete bgList;
  BigStepMap.erase(epoch);
  hasMoreMatches[epoch]=0;

  assert(EpochArray.find(epoch) != EpochArray.end() &&
         EpochArray[epoch] != NULL);
  
  EpochValueType* matching_list = EpochArray[epoch];
  EpochValueType::iterator ml_it = matching_list->begin();
  for (; ml_it !=  matching_list->end(); ml_it++) {
    list<MatchingPair_t*>::iterator mp_it = (*ml_it)->begin();
    for (; mp_it != (*ml_it)->end(); mp_it++) {
      delete *mp_it;
    }
    delete *ml_it;
  }
  delete matching_list;

  EpochArray.erase(epoch);
  
  //printEpochMap();
  /* also need to remove a big step from previous epoch if necessary */
  if (epoch > 0 && BigStepMap.find(epoch-1) != BigStepMap.end()) {
    removeOneBigStep(epoch-1);
  }
  
}

void printListMatchingPair(list<MatchingPair_t*>* matching_list) {
  list<MatchingPair_t*>::iterator mp_it = (matching_list)->begin();
  printf("list: ");
  for (; mp_it != (matching_list)->end(); mp_it ++) {
    printf("[%d,%d] ", (*mp_it)->source, (*mp_it)->destination);
  }
  printf("\n");
}

int main (int argc, char** argv) {
  int interleavings = 1;
  int gpid;
  
  parseCmdLine(argc, argv);
  processInput();
  if (num_epochs == 0 || hasNoND == true) {
    fprintf(stderr,"Code had no non-determinism \n");
    exit(0);
  }

  curr_epoch = num_epochs-1;
  while (curr_epoch >=0) {
    /* Going backwards, for each epoch, do the following 
     * Check if this epoch has other matches, if it does, 
     * create big step moves for it
     */
    bool foundExtraMatches = false;
    if (hasMoreMatches[curr_epoch] == 1) {
      constructBigSteps(curr_epoch);

      //printEpochMap();
      //printBigStepList(curr_epoch);
      while (writeSchedDecisionFile(curr_epoch)) {
        printf("Interleaving: %d\n", ++interleavings);
        if (interleavings == INTERLEAVING_THRESHOLD) 
          ThrowErrorAndExit("Exceeded interleaving threshold",0);
        
        /* force restart of the process */
        gpid = restartProcesses();
        /* Done with one interleaving - now reading the input files again
         * to see if the procs have found any new matches */
        rerun = true;
        processInput();
        if (hasNoND) {
          /* no new matches - done with the current bigstep, remove it */
          removeOneBigStep(curr_epoch);
        } else {
          /* find extra matches, need to explore these newly founded matches */
          foundExtraMatches = true;
          break;
        }
      } /* no more matches for curr_epoch */
      if (foundExtraMatches) {
        //printEpochMap();
        curr_epoch = num_epochs - 1 ;
        //kill(gpid,SIGKILL);
        //exit(-1);
        continue;
      }
      removeEpoch(curr_epoch);
    }
    /* done with this epoch - moving on to the next one */
    curr_epoch--;
#ifdef BOUNDED_MIXING_SEARCH
    if (k_bounded >=0 ) {
      while (epoch_lower_bound - curr_epoch > k_bounded) {
        epoch_lower_bound --;
      }
    }
#endif
  } /* END */

  printf("Total interleavings: %d\n", interleavings);
  return 0;
}
