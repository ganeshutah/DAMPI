#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#ifndef LOADCONFIG_H_
#define LOADCONFIG_H_

#include <mpi.h>

/*
 * -----------------------------------------------
 * Constants
 * -----------------------------------------------
*/
#define MAX_NUM_FAULTS 50
#define NUM_PARAMETERS 5

/*
 * -----------------------------------------------
 * Data structures for representing fault
 * injection parameters.
 * -----------------------------------------------
*/

enum FaultType
{
    BUFFER_OVERFLOW,
    DATA_CORRUPTION_CHANGE,
    DATA_CORRUPTION_INCREASE,
    DATA_CORRUPTION_DECREASE,
    INFINITE_LOOP,
    FINITE_LOOP,
    EXTRA_MESSAGE,
    DISCARD_MESSAGE,
    DEFAULT_FAULT
};

enum OperationType
{
    SEND_P2P,
    SEND_P2P_ASYNCH,
    SEND_COLL_BCAST,
    SEND_COLL_SCATTER,
    SEND_COLL_SCATTERV,
    SEND_COLL_GATHER,
    SEND_COLL_GATHERV,
    SEND_COLL_ALLGATHER,
    SEND_COLL_ALLGATHERV,
    SEND_COLL_ALL2ALL,
    SEND_COLL_ALL2ALLV,
    SEND_COLL_REDUCE,
    SEND_COLL_ALLREDUCE,
    SEND_COLL_REDUCESCATTER,
    SEND_COLL_SCAN,

    RECV_P2P,
    RECV_P2P_ASYNCH,
    RECV_COLL_BCAST,
    RECV_COLL_SCATTER,
    RECV_COLL_SCATTERV,
    RECV_COLL_GATHER,
    RECV_COLL_GATHERV,
    RECV_COLL_ALLGATHER,
    RECV_COLL_ALLGATHERV,
    RECV_COLL_ALL2ALL,
    RECV_COLL_ALL2ALLV,
    RECV_COLL_REDUCE,
    RECV_COLL_ALLREDUCE,
    RECV_COLL_REDUCESCATTER,
    RECV_COLL_SCAN,

    DEFAULT_OPER
};

typedef struct
{
    char title[50];
    unsigned int repeat;
    unsigned int numInjections;
} Experiment;

typedef struct
{
    unsigned int numFaults;
    enum FaultType faults[MAX_NUM_FAULTS];
    enum OperationType opers[MAX_NUM_FAULTS];
    unsigned int params[MAX_NUM_FAULTS][NUM_PARAMETERS];
    unsigned int individualOperation[MAX_NUM_FAULTS];

    /* Keeps track the actual function call in the injection */
    unsigned int candidates[MAX_NUM_FAULTS]; // Maximum function calls of this type
    unsigned int selected[MAX_NUM_FAULTS];
    unsigned int nextcall[MAX_NUM_FAULTS]; // index of the next function call to inject
} Injections;

typedef struct
{
	Experiment *exper;
	Injections *inject;

} Config;


/*
 * -----------------------------------------------
 * Common functions
 * -----------------------------------------------
 */

Config* loadConfigFile(char *);

enum FaultType convertFaultToEnum(char *);

enum OperationType convertOperToEnum(char *);

/* .........................................
 * Determine fault types
 */
int isDataCorrFault(enum FaultType);

int isCommFault(enum FaultType);

int isPerformanceFault(enum FaultType);
/* ....................................... */

/* Return MPI datatypes from an integer
 * (this integer is given in the config file)
 */
MPI_Datatype getMPIType(unsigned int);

#endif /* LOADCONFIG_H_ */

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

