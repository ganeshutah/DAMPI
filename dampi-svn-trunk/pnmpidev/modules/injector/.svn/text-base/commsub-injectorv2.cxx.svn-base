#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <mpi.h>
#include "commsub.h"
#include "loadconfig.h"
#include "faultinjector.h"

#define SEND_POINT 1
#define RECV_POINT 2

/*
 * -----------------------------------------------
 * Global variables
 * -----------------------------------------------
 */
Config *config = 0;
unsigned int nextFault = 0;
int faultyProcess = 0;
unsigned int collSendActive = 1;
unsigned int collRecvActive = 1;
int FiReturnNow = 0;
char *outputFile;
unsigned int logLine = 1;

/*
 * -----------------------------------------------
 * Prototypes
 * -----------------------------------------------
 */
void evaluateInjection(void *, int, MPI_Datatype, int, int, MPI_Comm, int);
int isSendOperationCorrect(int, enum OperationType);
int isRecvOperationCorrect(int, enum OperationType);
void enableFlag(int);
int writeLog(int);
void convertInt(char *, int);
void printTimestamp(void);

/*
 * -----------------------------------------------
 * Comm module PnMPI Functions
 * -----------------------------------------------
 */
void COMM_ALL_INIT(int argc, char**argv)
{
    /* Initialize random generator */
    initRand();

    /* Check whether it is the faulty process */
    char *proc = getenv("FI_FAULTY_PROCESS_RANK");
    int rank;

    MPI_Comm_rank(MPI_COMM_WORLD,&rank);
    if (rank == atoi(proc))
	faultyProcess = 1;

    if (faultyProcess) {
	printf("*** Faulty process: %d ***\n", rank);
	fflush(stdout);

	/* Get config file */
	char *filename;
	filename = getenv("FI_CONFIG_FILE");

	/* Initialize fault injector configuration */
	config = loadConfigFile(filename);
	if (config == 0)
	    exit (EXIT_FAILURE);
    }

    /* ..... Set output directory ..... */
    char *p;
    if ((p = getenv("FI_OUT_DIR")) == NULL) {
        if (rank == 0) {
            printf("[FI] No FI_OUT_DIR env variable found ==> No MPI function call tracking\n");
            fflush(stdout);
            //exit(EXIT_FAILURE);
        }
    } else {
        if (rank == 0) {
            printf("[FI] Tracking MPI function calls\n");
            fflush(stdout);
        }
        char r[5];
        convertInt(r, rank);
        char name[25] = "/comm_traces_";
        strcat(name, r);
        outputFile  = (char *) calloc(strlen(name) + strlen(p) + 1, sizeof(char));
        strcat(outputFile, p);
        strcat(outputFile, name);
    }
    /*.................................*/
}

void COMM_ALL_FINALIZE()
{
}

void SEND_P2P_START(void *buf, int count, MPI_Datatype dt, int node, int tag,
		    MPI_Comm comm, void **ptr, int type)
{
    /* Track communication information */
    writeLog(type);

    /* Evaluate whether a failure is injected or not */
    if ( (faultyProcess) && (isSendOperationCorrect(type, config->inject[0].opers[nextFault])) ) {
        /* First only for non-collective operations */
        if (type == (PNMPIMOD_COMM_P2P) || type == (PNMPIMOD_COMM_ASYNC_P2P)) {
	    evaluateInjection(buf, count, dt, node, tag, comm, type);
        } else {
            if (config->inject[0].individualOperation[nextFault] == collSendActive) {
                evaluateInjection(buf, count, dt, node, tag, comm, type);
                collSendActive = 0;
            }
            if (collSendActive != 0) collSendActive++;
        }
    }
}


void SEND_P2P_ASYNC_MID1(void *buf, int count, MPI_Datatype dt, int node, int tag,
			 MPI_Comm comm, void **ptr, int type)
{
}

void SEND_P2P_END(void *buf, int count, MPI_Datatype dt, int node, int tag,
		  MPI_Comm comm, int err, void **ptr, void **midptr, int type)
{
}

void RECV_P2P_START(void *buf, int count, MPI_Datatype dt, int node, int tag,
		    MPI_Comm comm, void **ptr, int type)
{
}

void RECV_P2P_ASYNC_MID1(void *buf, int count, MPI_Datatype dt, int node, int tag,
			 MPI_Comm comm, int err, void **ptr, int type)
{
}

void RECV_P2P_END(void *buf, int count, MPI_Datatype dt, int node, int tag,
		  MPI_Comm comm, int err, void **ptr, void **midptr, int type)
{
    /* Track communication information */
    writeLog(type);

    /* Evaluate whether a failure is injected or not */
    if ((faultyProcess) && (isRecvOperationCorrect(type, config->inject[0].opers[nextFault])) ) {
        if (type == (PNMPIMOD_COMM_P2P) || type == (PNMPIMOD_COMM_ASYNC_P2P)) {
            evaluateInjection(buf, count, dt, node, tag, comm, type);
        } else {
            if (config->inject[0].individualOperation[nextFault] == collRecvActive) {
		evaluateInjection(buf, count, dt, node, tag, comm, type);
		collRecvActive = 0;
            }
            if (collRecvActive != 0) collRecvActive++;
        }
    }
}

void COMM_P2P_ASYNC_MID2(int count, MPI_Request *requests, int flag, void **midptr)
{
}

void COMM_P2P_ASYNC_COMPLETION(int flag)
{
}

void COMM_COLL_REDUCE(void *buf, int count, MPI_Datatype dt, MPI_Op ops, int size, void** ptr)
{
}

void COMM_COLL_START(MPI_Comm comm,int root,int type, void **ptr)
{
    writeLog(type);
    enableFlag(SEND_POINT);
}

void COMM_COLL_END(MPI_Comm comm,int root,int type, void **ptr)
{
    enableFlag(RECV_POINT);
}

/*
 * -----------------------------------------------
 * Fault injection functions
 * -----------------------------------------------
 */

/*
 * This function evaluates whether an MPI function call
 * has properties that satisfy the next fault injection.
 * If so, it calls the corresponding fault injection functions.
 */
void
evaluateInjection( void *_buf, int _count, MPI_Datatype _dt, int _node, int _tag,
		   MPI_Comm _comm, int _pnmpi_type)
{
    int done;
    PNMPIMOD_Datatype_Parameters_t ref;
    char *b;
    int l,s;
    MPI_Datatype t;

    /* for now, only inject faults for "injection1" */
    if (nextFault < config->inject[0].numFaults) {

	/* Data corruption faults */
	if ( isDataCorrFault(config->inject[0].faults[nextFault]) ) {

	    dt_get(_buf, _count, _dt, &ref);

	    /* First, check if it's a BUFFER_OVERFLOW bug. This does not depend on
	       a particular datatype to be injected. Otherwise, proceed with other bugs */
	    if (config->inject[0].faults[nextFault] ==  (enum FaultType)BUFFER_OVERFLOW) {

		if (config->inject[0].selected[nextFault] == config->inject[0].nextcall[nextFault]) {

		    printf("[FI] +++ Injecting in operation %d\n", config->inject[0].nextcall[nextFault]);

		    /* Get the number of bytes for the overflow */
		    unsigned int k = config->inject[0].params[nextFault][0];

		    /* Get the last memory location of the current buffer */
		    char *mem = 0;
		    int bytes = 0;
		    do {
			PNMPIMOD_Datatype_getItem(&ref,&b,&t,&l,&s,&done);
			if (b > mem) {
			    mem = b;
			    bytes = l * s;
			}
		    } while (!done);
		    mem = ((char *)b + bytes);
                    writeLog(-1); // Track communication information before injecting
                    printTimestamp();
		    int res = bufferOverFlow(mem, k);
		    if (res == 1) nextFault++;
		} else {
		    config->inject[0].nextcall[nextFault] += 1;
		}

		/* Data corruption faults that are not BUFFER_OVERFLOW*/
	    } else {
		MPI_Datatype type = getMPIType( config->inject[0].params[nextFault][0] );
		int matched = 0, injected = 0;

		do {
		    PNMPIMOD_Datatype_getItem(&ref,&b,&t,&l,&s,&done);

		    if (t == type) {
			matched = 1;
			//printf("[FI] +++ Selected operation: %d, next one is: %d\n", config->inject[0].selected[nextFault], config->inject[0].nextcall[nextFault]); fflush(stdout);
			if (config->inject[0].selected[nextFault] == config->inject[0].nextcall[nextFault]) {

			    printf("[FI] +++ Injecting in operation %d\n", config->inject[0].nextcall[nextFault]); fflush(stdout);

			    /* Inject fault here*/
			    if ( config->inject[0].faults[nextFault] ==
				 ( enum FaultType )DATA_CORRUPTION_CHANGE ) {
                                writeLog(-1); // Track communication information before injecting
                                printTimestamp();
				int res = changeToWrongValue(b, l, type);
				if (res == 1) nextFault++;  done = 1;
				injected = 1;

			    } else if ( config->inject[0].faults[nextFault] ==
					( enum FaultType )DATA_CORRUPTION_INCREASE ) {
                                writeLog(-1); // Track communication information before injecting
                                printTimestamp();
				int res = changeToLargerValue(b, l, type);
				if (res == 1) nextFault++;  done = 1;
				injected = 1;

			    } else if ( config->inject[0].faults[nextFault] ==
					( enum FaultType )DATA_CORRUPTION_DECREASE ) {
                                writeLog(-1); // Track communication information before injecting
                                printTimestamp();
				int res = changeToSmallerValue(b, l, type);
				if (res == 1) nextFault++;  done = 1;
				injected = 1;
			    }
			}
		    }
		} while (!done);
		if (matched && !injected) config->inject[0].nextcall[nextFault] += 1;
	    }
	    dt_del(&ref);

	    /* Communication faults */
	} else if ( isCommFault(config->inject[0].faults[nextFault]) ) {
            if (config->inject[0].faults[nextFault] == ( enum FaultType )EXTRA_MESSAGE &&
		(_pnmpi_type == PNMPIMOD_COMM_P2P || _pnmpi_type == PNMPIMOD_COMM_ASYNC_P2P))  {

		if (config->inject[0].selected[nextFault] == config->inject[0].nextcall[nextFault]) {
		    unsigned int k_msgs = config->inject[0].params[nextFault][0];
                    int res = 0;
		    if (_pnmpi_type == PNMPIMOD_COMM_ASYNC_P2P) {
                        writeLog(-1); // Track communication information before injecting
                        printTimestamp();
			res = sendAsynchExtraMessages(_buf, _count, _dt, _node, _tag, _comm, k_msgs);
                    } else if (_pnmpi_type == PNMPIMOD_COMM_P2P) {
                        writeLog(-1); // Track communication information before injecting
                        printTimestamp();
			res = sendP2PExtraMessages(_buf, _count, _dt, _node, _tag, _comm, k_msgs);
                    }
		    if (res == 1) nextFault++;
		} else {
		    config->inject[0].nextcall[nextFault] += 1;
		}
            } else if (config->inject[0].faults[nextFault] == ( enum FaultType )DISCARD_MESSAGE &&
		       (_pnmpi_type == PNMPIMOD_COMM_P2P || _pnmpi_type == PNMPIMOD_COMM_ASYNC_P2P)) {
                if (config->inject[0].selected[nextFault] == (config->inject[0].nextcall[nextFault] + 1)) {
                    printf("[FI] Dicarding next message.\n");
                    fflush(stdout);
                    FiReturnNow = 1;
                    nextFault++;
                    writeLog(-1); // Track communication information
                    printTimestamp();
                } else {
                    config->inject[0].nextcall[nextFault] += 1;
                }
            }

	    /* Performance faults */
	} else if ( isPerformanceFault(config->inject[0].faults[nextFault]) ) {

	    if (config->inject[0].selected[nextFault] == config->inject[0].nextcall[nextFault]) {
		printf("[FI] +++ Injecting in operation  %d\n", config->inject[0].nextcall[nextFault]); fflush(stdout);

		if ( config->inject[0].faults[nextFault] ==
		     ( enum FaultType )INFINITE_LOOP ) {
                    writeLog(-1); // Track communication information before injecting
                    printTimestamp();
		    infiniteLoop();

		} else if ( config->inject[0].faults[nextFault] ==
			    ( enum FaultType )FINITE_LOOP ) {
		    unsigned int k = config->inject[0].params[nextFault][0];
                    writeLog(-1); // Track communication information before injecting
                    printTimestamp();
		    int res = finiteLoop( k );
		    if (res == 1) nextFault++;
		}
	    } else {
		config->inject[0].nextcall[nextFault] += 1;
	    }
	}
    }
}


int
isSendOperationCorrect(int i, enum OperationType j)
{
    if ((i == PNMPIMOD_COMM_P2P) && (j == SEND_P2P)) return 1;
    else if ((i == PNMPIMOD_COMM_ASYNC_P2P) && (j == SEND_P2P_ASYNCH)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_FANOUT|PNMPIMOD_COMM_BCAST)) && (j == SEND_COLL_BCAST)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_FANOUT|PNMPIMOD_COMM_SCATTER)) && (j == SEND_COLL_SCATTER)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_FANOUT|PNMPIMOD_COMM_SCATTERV)) && (j == SEND_COLL_SCATTERV)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_FANIN|PNMPIMOD_COMM_GATHER)) && (j == SEND_COLL_GATHER)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_FANIN|PNMPIMOD_COMM_GATHERV)) && (j == SEND_COLL_GATHERV)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_ALLGATHER)) && (j == SEND_COLL_ALLGATHER)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_ALLGATHERV)) && (j == SEND_COLL_ALLGATHERV)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_ALL2ALL)) && (j == SEND_COLL_ALL2ALL)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_ALL2ALLV)) && (j == SEND_COLL_ALL2ALLV)) return 1;
    else if((i == (PNMPIMOD_COMM_REDUCE|PNMPIMOD_COMM_COLL_FANIN|PNMPIMOD_COMM_COLL_REDUCE)) && (j == SEND_COLL_REDUCE)) return 1;
    else if((i == (PNMPIMOD_COMM_ALLREDUCE|PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_COLL_REDUCE)) && (j == SEND_COLL_ALLREDUCE)) return 1;
    else if((i == (PNMPIMOD_COMM_REDUCESCATTER|PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_COLL_REDUCE)) && (j == SEND_COLL_REDUCESCATTER)) return 1;
    else if((i == (PNMPIMOD_COMM_SCAN|PNMPIMOD_COMM_COLL_OTHER|PNMPIMOD_COMM_COLL_REDUCE)) && (j == SEND_COLL_SCAN)) return 1;
    else return 0;
}

int
isRecvOperationCorrect(int i, enum OperationType j)
{
    if ((i == PNMPIMOD_COMM_P2P) && (j == RECV_P2P)) return 1;
    else if ((i == PNMPIMOD_COMM_ASYNC_P2P) && (j == RECV_P2P_ASYNCH)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_FANOUT|PNMPIMOD_COMM_BCAST)) && (j == RECV_COLL_BCAST)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_FANOUT|PNMPIMOD_COMM_SCATTER)) && (j == RECV_COLL_SCATTER)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_FANOUT|PNMPIMOD_COMM_SCATTERV)) && (j == RECV_COLL_SCATTERV)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_FANIN|PNMPIMOD_COMM_GATHER)) && (j == RECV_COLL_GATHER)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_FANIN|PNMPIMOD_COMM_GATHERV)) && (j == RECV_COLL_GATHERV)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_ALLGATHER)) && (j == RECV_COLL_ALLGATHER)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_ALLGATHERV)) && (j == RECV_COLL_ALLGATHERV)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_ALL2ALL)) && (j == RECV_COLL_ALL2ALL)) return 1;
    else if((i == (PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_ALL2ALLV)) && (j == RECV_COLL_ALL2ALLV)) return 1;
    else if((i == (PNMPIMOD_COMM_REDUCE|PNMPIMOD_COMM_COLL_FANIN|PNMPIMOD_COMM_COLL_REDUCE)) && (j == RECV_COLL_REDUCE)) return 1;
    else if((i == (PNMPIMOD_COMM_ALLREDUCE|PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_COLL_REDUCE)) && (j == RECV_COLL_ALLREDUCE)) return 1;
    else if((i == (PNMPIMOD_COMM_REDUCESCATTER|PNMPIMOD_COMM_COLL_ALL2ALL|PNMPIMOD_COMM_COLL_REDUCE)) && (j == RECV_COLL_REDUCESCATTER)) return 1;
    else if((i == (PNMPIMOD_COMM_SCAN|PNMPIMOD_COMM_COLL_OTHER|PNMPIMOD_COMM_COLL_REDUCE)) && (j == RECV_COLL_SCAN)) return 1;
    else return 0;
}

void
enableFlag(int _point)
{
    if (_point == SEND_POINT) collSendActive = 1;
    else if (_point == RECV_POINT) collRecvActive = 1;
}

int
writeLog(int _type)
{
    if (outputFile) {
	FILE *file;

	file = fopen(outputFile, "a");
	if (file == (FILE *)NULL) {
            printf("[FI] Could not open file: %s", outputFile);
            fflush(stdout);
            exit(EXIT_FAILURE);
	}

	if ((_type == PNMPIMOD_COMM_P2P) || (_type == PNMPIMOD_COMM_ASYNC_P2P)) {
	    fprintf(file, "%d P2P\n", logLine);
	    fflush(file);
	    logLine++;
	} else if (_type == -1) {
	    fprintf(file, "FAILURE\n");
	    fflush(file);
	} else {
	    fprintf(file, "%d COLL\n", logLine);
	    fflush(file);
	    logLine++;
	}

	fclose(file);
	return 1;
    } else {
        // only if MPI call tracking is not enabled
        return 0;
    }
}

/* My version of the itoa() function */
void
convertInt(char *str, int num)
{
    sprintf(str, "%d", num);
}

/* Print timestamp */
void
printTimestamp(void)
{
	struct timeval t_stamp;
	gettimeofday(&t_stamp, NULL);
    //time_t currTime;
    //currTime = time(NULL);
    //printf("[FI] Time: %lu\n", currTime);
	printf("[FI] Injection timestamp %ld;%ld\n", t_stamp.tv_sec, t_stamp.tv_usec);
    return;
}
