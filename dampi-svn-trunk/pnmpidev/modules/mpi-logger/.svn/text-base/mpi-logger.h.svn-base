#include <mpi.h>

#ifndef _PNMPI_MOD_MPI_LOGGER
#define _PNMPI_MOD_MPI_LOGGER

/*------------------------------------------------------------*/
/* Note: this module must be loaded into the stack before
   any module using it (i.e., must be instantiated between
   any user and the application). Also, any call to its
   services must occur after calling PMPI_Init and services
   are only available to modules requesting it during
   MPI_Init */

/*------------------------------------------------------------*/
#define PNMPI_MODULE_MPI_LOGGER "mpi-logger"


/*..........................................................*/
/* Access macros */

enum {SEND,BSEND,RSEND,SSEND,ISEND,IBSEND,IRSEND,ISSEND,RECV,PROBE,IPROBE,IRECV,SENDRECV,SENDRECV_REPLACE,WAIT,WAITANY,WAITSOME,WAITALL,TEST,TESTANY,TESTSOME,TESTALL,BCAST,SCATTER,SCATTERV,GATHER,GATHERV,REDUCE,ALLGATHER,ALLGATHERV,ALLTOALL,ALLTOALLV,ALLREDUCE,REDUCE_SCATTER,BARRIER,SCAN,COMM_DUP,COMM_FREE,COMM_CREATE,COMM_SPLIT,CART_CREATE,CART_SUB};

enum {IPROBE_ANY,PROBE_ANY,RECV_ANY,IRECV_ANY};

enum {size256,size512,size1K,size2K,size4K,size8K,size16K,size32K,size64K,size128K,above};
#endif /* _PNMPI_MOD_COMM_MAPPING */
