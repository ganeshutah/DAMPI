#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include "faultinjector.h"

/*
 *-----------------------------------------------
 * Fault injection functions
 *-----------------------------------------------
 */

int 
sendAsynchExtraMessages(void *buf, int count, MPI_Datatype datatype, int dest, int tag,
			MPI_Comm comm, unsigned int num)
{
    unsigned int i;
    MPI_Request *req;
    req = (MPI_Request *)malloc(sizeof(MPI_Request) * num);

    printf("\n[FI] Sending %d Asynch extra messages..\n", num);
    for (i = 0; i < num; i++) {
	PMPI_Isend(buf, count, datatype, dest, tag, comm, ((MPI_Request *)req + i));
    }
    printf("[FI] ..done with the %d Asynch extra messages.\n", num);	

    return 1;
}

int
sendP2PExtraMessages(void *buf, int count, MPI_Datatype datatype, int dest, int tag,
		     MPI_Comm comm, unsigned int num)
{
    unsigned int i;
    //MPI_Request *req;
    //req = (MPI_Request *)malloc(sizeof(MPI_Request) * num);

    printf("\n[FI] Sending %d P2P extra messages..\n", num);
    for (i = 0; i < num; i++) {
	PMPI_Send(buf, count, datatype, dest, tag, comm);
    }
    printf("[FI] ..done with the %d P2P extra messages.\n", num);

    return 1;
}

int 
discardMessages(void)
{
    return 1;
}

/*
 *-----------------------------------------------
 * Utility functions
 *-----------------------------------------------
 */

