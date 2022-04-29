/*
 * This is the header file for the pbdriver module 
 *
 *
 * Author: Anh Vo
 * Last Modified: June 29, 2010
 */
#ifndef __PBDRIVER_HPP
#define __PBDRIVER_HPP

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
#define SCHEDULER_FILE_PREFIX "__sched_decision"
#define PROC_OUTPUT_FILE_PREFIX "__alt_matchings"

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

/* map a pending Irecv and its data */
map<int,EpochData_t*> recvmap;

/* map a request to an epoch */
map<MPI_Request,int> req_to_epoch_map;

/* map an epoch to a forced match (determined by the scheduler */
map<int,int> forced_recvmap;

/* the last epoch that we're running under GUIDED_RUN */
int last_guided_recv = -1;

/* list of all non-deterministic epochs in this process */
list<int> ND_epochs;
list<int> recvList;
static int running_mode = SELF_RUN;

char inputFileName[MAX_FILENAME_LENGTH];
char outputFileName[MAX_FILENAME_LENGTH];
FILE* outputFile;
int myrank;
int num_procs;
int curr_epoch = 0;
int recv_counter = 0;
int curr_pcontrol_lev = -1;
/* End Global Variables */

/* function prototypes */
void ThrowErrorAndExit(const char* str);
void initializeFileIO();
void RecordEpochData(int epoch, int count, MPI_Datatype datatype, int node, int tag, MPI_Comm comm, MPI_Request request);
void RecordIrecvData(int recv_counter, int count, MPI_Datatype datatype, int node, int tag, MPI_Comm comm, MPI_Request request);
void DumpEpochData();
void DumpEpochDataMaster();
bool FindPotentialMatches(int source, int tag, MPI_Comm comm, int matching_epoch, int incoming_epoch);
bool associateNDRequest(PNMPIMOD_Requests_Parameters_t req_param, int source);
void markSymLoopRegion(int pcontrol_level);
void printForcedRecvMap();
int PBBROADCAST(int root, MPI_Comm comm);
int PBALLREDUCE(MPI_Comm comm);
int PBREDUCE(int root, MPI_Comm comm);
int PBSCAN(MPI_Comm comm);

/* There are more functions but they're MPI wrapper with no re-entrant calls
 * so we won't declare the prototypes here */

#endif
