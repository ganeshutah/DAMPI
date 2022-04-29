#ifndef __SCHEDULER_HPP
#define __SCHEDULER_HPP
#include <list>

using namespace std;
/* These probably should go into a common header file */
#define SCHEDULER_FILE_PREFIX "__sched_decision"
#define PROC_OUTPUT_FILE_PREFIX "__alt_matchings"

#define INTERLEAVING_THRESHOLD 500
#define MAX_FILENAME_LENGTH 1024

/* typedefs */

typedef struct MatchingPair {
  int source;
  int destination;
}MatchingPair_t;

typedef list<list<MatchingPair_t*>*> EpochValueType;
typedef EpochValueType BigStepType;

/* func protos */
void Usage();
void parseCmdLine(int argc,char** argv);
void init(int num_epochs);
void processInput();
void constructBigSteps(int epoch);
void addToBigStepList(BigStepType* bgList, list<MatchingPair_t*>* mpList);
void removeOneBigStep(int epoch);
void removeEpoch(int epoch);

void printEpochMap();
void printBigStepList(int epoch);
void printMatchingPair(MatchingPair_t* m);
void printListMatchingPair(list<MatchingPair_t*>*);
bool writeSchedDecisionFile(int epoch);
bool writeMatchingInfo(vector<int>* outputString, int proc, int epoch, 
                       int eventNo, int dest);
void ThrowErrorAndExit(string s, int err);
#endif
