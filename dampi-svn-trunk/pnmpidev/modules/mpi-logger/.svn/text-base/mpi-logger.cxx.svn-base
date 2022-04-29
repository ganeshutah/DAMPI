#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <pnmpimod.h>

#include <iostream>
#include <map>

#ifdef AIX
#pragma alloca
#endif
using namespace std;
#include "mpi-logger.h"

/*--------------------------------------------------------------------------*/
/* globals */
#define MAX_MPI_HEADER 100
int number_of[MAX_MPI_HEADER];
int wildcards[MAX_MPI_HEADER];
int message_size[MAX_MPI_HEADER];
int myrank = 0;
/*........................................................................*/
/* Variables */

/*.......................................................*/
/* Registration */

int PNMPI_RegistrationPoint()
{
  int err;
  /* register this module and its services */

  err=PNMPI_Service_RegisterModule(PNMPI_MODULE_MPI_LOGGER);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  return err;
}

void collect_message_size(int count, MPI_Datatype datatype) {
  int size;
  MPI_Type_size(datatype, &size); /* size of datatype */
  size = count * size; /* size of message */

  if (size <= 256)
    message_size[size256]++;
  else if (size <=512) 
    message_size[size512]++;
  else if (size <=1024) 
    message_size[size1K]++;
  else if (size <=2048) 
    message_size[size2K]++;
  else if (size <=4096) 
    message_size[size4K]++;
  else if (size <=8192) 
    message_size[size8K]++;
  else if (size <=16384) 
    message_size[size16K]++;
  else if (size <=32768) 
    message_size[size32K]++;
  else if (size <=65536) 
    message_size[size64K]++;
  else if (size <=131072) 
    message_size[size128K]++;
  else 
    message_size[above]++;
}

/*.......................................................*/
/* Init */

int MPI_Init(int *argc, char ***argv)
{
  int err;
  for (int i = 0; i < MAX_MPI_HEADER; i++) {
    number_of[MAX_MPI_HEADER] = 0;
    wildcards[MAX_MPI_HEADER] = 0;
    message_size[MAX_MPI_HEADER] = 0;
  }

  /* call the init routines */
  err=PMPI_Init(argc,argv);
  PMPI_Comm_rank(MPI_COMM_WORLD, &myrank);
  return err;
}



/*--------------------------------------------------------------------------*/
/* Wrapper Routines */
int MPI_Send(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  number_of[SEND]++;
  collect_message_size(count,datatype);
  err=PMPI_Send(buf,count,datatype,dest,tag,comm);
  return err;
}

int MPI_Bsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  number_of[BSEND]++;
  collect_message_size(count,datatype);
  err=PMPI_Bsend(buf,count,datatype,dest,tag,comm);
  return err;
}

int MPI_Rsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  number_of[RSEND]++;
  collect_message_size(count,datatype);
  err=PMPI_Rsend(buf, count, datatype,dest,tag,comm);
  return err;
}

int MPI_Ssend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  number_of[SSEND]++;
  collect_message_size(count,datatype);
  err=PMPI_Ssend(buf,count,datatype,dest,tag,comm);
  return err;
}


/*........................................................................*/
/* Async Sends */

int MPI_Isend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  number_of[ISEND]++;
  collect_message_size(count,datatype);
  err=PMPI_Isend(buf,count,datatype,dest,tag,comm,request);
  return err;
}

int MPI_Ibsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  number_of[IBSEND]++;
  collect_message_size(count,datatype);
  err=PMPI_Ibsend(buf,count,datatype,dest,tag,comm,request);
  return err;
}

int MPI_Irsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  number_of[IRSEND]++;
  collect_message_size(count,datatype);
  err=PMPI_Irsend(buf,count,datatype,dest,tag,comm,request);
  return err;
}

int MPI_Issend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  number_of[ISSEND]++;
  collect_message_size(count,datatype);
  err=PMPI_Issend(buf,count,datatype,dest,tag,comm,request);
  return err;
}


/*........................................................................*/
/* Sync. Receive */

int MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status *status)
{
  int err;
  number_of[RECV]++;
  if (source == MPI_ANY_SOURCE)
    wildcards[RECV_ANY] ++;
  err=PMPI_Recv(buf,count,datatype,source,tag,comm,status);
  return err;
}

/* Sync Probe */
int MPI_Probe(int source, int tag, MPI_Comm comm, MPI_Status* status)
{
  int err;
  number_of[PROBE]++;
  if (source == MPI_ANY_SOURCE)
    wildcards[PROBE_ANY] ++;
  err=PMPI_Probe(source,tag,comm,status);
  return err;
}

/* Async Probe */
int MPI_Iprobe(int source, int tag, MPI_Comm comm, int* flag, MPI_Status* status)
{
  int err;
  number_of[IPROBE]++;
  err=PMPI_Iprobe(source,tag,comm,flag,status);
  if (*flag && source == MPI_ANY_SOURCE)
    wildcards[IPROBE_ANY] ++;
  return err;
}

/*........................................................................*/
/* Async. Receive */

int MPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  number_of[IRECV]++;
  if (source == MPI_ANY_SOURCE)
    wildcards[IRECV_ANY] ++;

  err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
  return err;
}


/*........................................................................*/
/* Send/Recv */

int MPI_Sendrecv(void *sendbuf, int sendcount, MPI_Datatype sendtype, int dest, int sendtag, 
		 void *recvbuf, int recvcount, MPI_Datatype recvtype, int source, int recvtag,
		 MPI_Comm comm, MPI_Status *status)
{
  int err;
  number_of[SENDRECV]++;
  collect_message_size(sendcount,sendtype);
  err=PMPI_Sendrecv(sendbuf,sendcount,sendtype,dest,sendtag,
		    recvbuf,recvcount,recvtype,source,recvtag,comm,status);
  return err;
}

int MPI_Sendrecv_replace(void *buf, int count, MPI_Datatype datatype, int dest, int sendtag, int source, int recvtag, 
			 MPI_Comm comm, MPI_Status *status)
{
  int err;
  number_of[SENDRECV_REPLACE]++;
  collect_message_size(count,datatype);

  err=PMPI_Sendrecv_replace(buf,count,datatype,dest,sendtag,source,recvtag,comm,status);
  return err;
}


/*........................................................................*/
/* Waits */

int MPI_Wait(MPI_Request *request, MPI_Status *status)
{
  int err;
  number_of[WAIT]++;
  err=PMPI_Wait(request,status);
  return err;
}

int MPI_Waitany(int count, MPI_Request *array_of_requests, int *index, MPI_Status *status)
{
  int err;
  number_of[WAITANY]++;
  err=PMPI_Waitany(count,array_of_requests,index,status);
  return err;
}

int MPI_Waitsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err;
  number_of[WAITSOME]++;
  err=PMPI_Waitsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  return err;  
}

int MPI_Waitall(int count, MPI_Request *array_of_requests, MPI_Status *array_of_statuses)
{
  int err;
  number_of[WAITALL]++;
  err=PMPI_Waitall(count,array_of_requests,array_of_statuses);

  return err;
}


/*........................................................................*/
/* Tests */

int MPI_Test(MPI_Request *request, int *flag, MPI_Status *status)
{
  int err;
  number_of[TEST]++;
  err=PMPI_Test(request, flag, status);
  return err;
}

int MPI_Testany(int count, MPI_Request *array_of_requests, int *index, int *flag, MPI_Status *status)
{
  int err;
  number_of[TESTANY]++;
  err=PMPI_Testany(count,array_of_requests,index,flag,status);
  return err;  
}

int MPI_Testsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err;
  number_of[TESTSOME]++;
  err=PMPI_Testsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  return err;  
}

int MPI_Testall(int count, MPI_Request *array_of_requests, int *flag, MPI_Status *array_of_statuses)
{
  int err;
  number_of[TESTALL]++;
  err=PMPI_Testall(count, array_of_requests, flag, array_of_statuses);
  return err;
}


/*--------------------------------------------------------------------------*/
/* Collectives */

/* ONE TO ALL */
int MPI_Bcast(void* buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm)
{
  int err;
  number_of[BCAST]++;
  collect_message_size(count,datatype);
  err=PMPI_Bcast(buffer, count, datatype, root, comm);
  return err;
}

int MPI_Scatter(void* sendbuf, int sendcnt, MPI_Datatype sendtype, 
                void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                int root, MPI_Comm comm)
{
  int err;
  number_of[SCATTER]++;
  if (myrank != root)
    collect_message_size(recvcnt,recvtype);

  err=PMPI_Scatter(sendbuf, sendcnt, sendtype,
                   recvbuf, recvcnt, recvtype, 
                   root, comm);
  return err;
}

int MPI_Scatterv(void* sendbuf, int* sendcnts, int* displs, MPI_Datatype sendtype, 
                 void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                 int root, MPI_Comm comm)
{
  int err;
  number_of[SCATTERV]++;
  if (myrank != root)
    collect_message_size(recvcnt,recvtype);
  err=PMPI_Scatterv(sendbuf, sendcnts, displs, sendtype,
                    recvbuf, recvcnt, recvtype, 
                    root, comm);
  
  return err;
}

int MPI_Gather(void* sendbuf, int sendcnt, MPI_Datatype sendtype,
               void* recvbuf, int recvcnt, MPI_Datatype recvtype,
               int root, MPI_Comm comm)
{
  int err;
  number_of[GATHER]++;
  if (myrank != root)
    collect_message_size(recvcnt,recvtype);

  err=PMPI_Gather(sendbuf, sendcnt, sendtype,
                  recvbuf, recvcnt, recvtype, 
                  root, comm);
  return err;    
}

int MPI_Gatherv(void* sendbuf, int sendcnt, MPI_Datatype sendtype,
                void* recvbuf, int* recvcnts, int* displs, 
                MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  int err;
  number_of[GATHERV]++;
  if (myrank != root)
    collect_message_size(sendcnt,sendtype);
  err=PMPI_Gatherv(sendbuf, sendcnt, sendtype,
                   recvbuf, recvcnts, displs, recvtype, 
                   root, comm);
  return err;
}
    
int MPI_Reduce(void* sendbuf, void* recvbuf, int count, 
               MPI_Datatype datatype, MPI_Op op, int root,
               MPI_Comm comm)
{
  int err;
  number_of[REDUCE]++;
  if (myrank != root)
    collect_message_size(count,datatype);
  err = PMPI_Reduce(sendbuf, recvbuf, count,
                    datatype, op, root, comm);
  return err;
}

/*.......................................................*/
/* ALL TO ALL */
int MPI_Allgather(void *sendbuf, int sendcnt, MPI_Datatype sendtype,
                  void *recvbuf, int recvcnt, MPI_Datatype recvtype, 
                  MPI_Comm comm)
{
  int err;
  number_of[ALLGATHER]++;
  collect_message_size(sendcnt,sendtype);
  err = PMPI_Allgather(sendbuf, sendcnt, sendtype,
                       recvbuf, recvcnt, recvtype, comm);
  return err;
}

int MPI_Allgatherv(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                   void *recvbuf, int *recvcnts, int *displs, 
                   MPI_Datatype recvtype, MPI_Comm comm)
{
  int err;
  number_of[ALLGATHERV]++;
  collect_message_size(sendcnt,sendtype);
  err = PMPI_Allgatherv(sendbuf, sendcnt, sendtype,
                        recvbuf, recvcnts, displs, 
                        recvtype, comm);
  return err;
}

int MPI_Alltoall(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                 void *recvbuf, int recvcnt, MPI_Datatype recvtype, 
                 MPI_Comm comm)
{
  int err;
  number_of[ALLTOALL]++;
  collect_message_size(sendcnt,sendtype);
  err = PMPI_Alltoall(sendbuf, sendcnt, sendtype,
                      recvbuf, recvcnt, recvtype, comm);
  return err;
}

int MPI_Alltoallv(void *sendbuf, int *sendcnts, int *sdispls, MPI_Datatype sendtype, 
                  void *recvbuf, int *recvcnts, int *rdispls, MPI_Datatype recvtype, 
                  MPI_Comm comm)
{
  int err;
  number_of[ALLTOALLV]++;
  err = PMPI_Alltoallv(sendbuf, sendcnts, sdispls, sendtype,
                       recvbuf, recvcnts, rdispls, recvtype, 
                       comm);
  return err;
}

int MPI_Allreduce(void *sendbuf, void *recvbuf, int count, 
                  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  number_of[ALLREDUCE]++;
  collect_message_size(count,datatype);
  err = PMPI_Allreduce(sendbuf, recvbuf, count, datatype,
                       op, comm);
  return err;
}

int MPI_Reduce_scatter(void *sendbuf, void *recvbuf, int *recvcnts, 
                       MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  number_of[REDUCE_SCATTER]++;
  err = PMPI_Reduce_scatter(sendbuf, recvbuf, recvcnts, datatype,
                            op, comm);
  return err;
}
 
/* BARRIER */
int MPI_Barrier(MPI_Comm comm)
{
  int err;
  number_of[BARRIER]++;
  err = PMPI_Barrier(comm);
  return err;
}
 
/* SCAN */
int MPI_Scan(void* sendbuf, void* recvbuf, int count,
             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  number_of[SCAN]++;
  collect_message_size(count,datatype);

  err = PMPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
  return err;
}


/*.......................................................*/
/* COMMUNICATOR COLLECTIVES */

int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *comm_out)
{
  int err;
  number_of[COMM_DUP]++;
  err = PMPI_Comm_dup(comm, comm_out);
  return err;
}

int MPI_Comm_free(MPI_Comm *comm)
{
  int err;
  /* comm_free will change comm to comm_null
   * but we need its value to delete the shadow */
  number_of[COMM_FREE]++;
  err = PMPI_Comm_free(comm);
  return err;
}

int MPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *comm_out)
{
  int err;
  number_of[COMM_SPLIT]++;
  err = PMPI_Comm_create(comm, group, comm_out);
  return err;

}

int MPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *comm_out)
{
  int err;
  number_of[COMM_SPLIT]++;
  err = PMPI_Comm_split(comm, color, key, comm_out);
  return err;

}

int MPI_Cart_create(MPI_Comm comm, int ndims, int *dims, int *periods,
                    int reorder, MPI_Comm *comm_cart) {
  int err;
  number_of[CART_CREATE]++;
  err = PMPI_Cart_create(comm,ndims,dims,periods,reorder,comm_cart);
  return err;
}

int MPI_Cart_sub(MPI_Comm comm, int *remain_dims, MPI_Comm *comm_new) {
  int err;
  number_of[CART_SUB]++;
  err = PMPI_Cart_sub(comm,remain_dims,comm_new);
  return err;
}
/*.......................................................*/


int MPI_Finalize() {
  int err;
  int myrank;
  PMPI_Comm_rank (MPI_COMM_WORLD, &myrank);
  err = PMPI_Finalize();
  
  int total_number_of[MAX_MPI_HEADER];
  int total_wildcards[MAX_MPI_HEADER];
  int total_msg_size[MAX_MPI_HEADER];
  
  PMPI_Reduce_NewStack(1000,number_of, total_number_of, MAX_MPI_HEADER, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
  PMPI_Reduce_NewStack(1000,wildcards, total_wildcards, MAX_MPI_HEADER, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
  PMPI_Reduce_NewStack(1000,message_size, total_msg_size, MAX_MPI_HEADER, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
  if (myrank != 0) return err;

  fprintf(stderr, "Number of Send is: %d\n", total_number_of[SEND]);
  fprintf(stderr, "Number of Isend is: %d\n", total_number_of[ISEND]);
  fprintf(stderr, "Number of Ssend is: %d\n", total_number_of[SSEND]);

  fprintf(stderr, "\n");
  fprintf(stderr, "Number of Recv is: %d\n", total_number_of[RECV]);
  fprintf(stderr, "Number of SendRecv is: %d\n", total_number_of[SENDRECV]);
  fprintf(stderr, "Number of Irecv is: %d\n", total_number_of[IRECV]);

  fprintf(stderr, "\n");
  fprintf(stderr, "Number of Wait is: %d\n", total_number_of[WAIT]);
  fprintf(stderr, "Number of Waitall is: %d\n", total_number_of[WAITALL]);
  fprintf(stderr, "Number of Waitany is: %d\n", total_number_of[WAITANY]);
  fprintf(stderr, "Number of Waitsome is: %d\n", total_number_of[WAITSOME]);

  fprintf(stderr, "\n");
  fprintf(stderr, "Number of Test is: %d\n", total_number_of[TEST]);
  fprintf(stderr, "Number of Testall is: %d\n", total_number_of[TESTALL]);
  fprintf(stderr, "Number of Testany is: %d\n", total_number_of[TESTANY]);
  fprintf(stderr, "Number of Testsome is: %d\n", total_number_of[TESTSOME]);

  fprintf(stderr, "\n");
  fprintf(stderr, "Number of Bcast is: %d\n", total_number_of[BCAST]);
  fprintf(stderr, "Number of Scatter is: %d\n", total_number_of[SCATTER]);
  fprintf(stderr, "Number of Scatterv is: %d\n", total_number_of[SCATTERV]);
  fprintf(stderr, "Number of Gather is: %d\n", total_number_of[GATHER]);
  fprintf(stderr, "Number of Gatherv is: %d\n", total_number_of[GATHERV]);
  fprintf(stderr, "Number of Reduce is: %d\n", total_number_of[REDUCE]);
  fprintf(stderr, "Number of Allgather is: %d\n", total_number_of[ALLGATHER]);
  fprintf(stderr, "Number of Allgatherv is: %d\n", total_number_of[ALLGATHERV]);
  fprintf(stderr, "Number of Alltoallv is: %d\n", total_number_of[ALLTOALL]);
  fprintf(stderr, "Number of Allreduce is: %d\n", total_number_of[ALLREDUCE]);
  fprintf(stderr, "Number of Reduce_scatter is: %d\n", total_number_of[REDUCE_SCATTER]);
  fprintf(stderr, "Number of Barrier is: %d\n", total_number_of[BARRIER]);
  fprintf(stderr, "Number of Scan is: %d\n", total_number_of[SCAN]);
  fprintf(stderr, "Number of Comm_dup is: %d\n", total_number_of[COMM_DUP]);
  fprintf(stderr, "Number of Comm_free is: %d\n", total_number_of[COMM_FREE]);
  fprintf(stderr, "Number of Comm_create is: %d\n", total_number_of[COMM_CREATE]);
  fprintf(stderr, "Number of Comm_split is: %d\n", total_number_of[COMM_SPLIT]);
  fprintf(stderr, "Number of Cart_create is: %d\n", total_number_of[CART_CREATE]);
  fprintf(stderr, "Number of Cart_sub is: %d\n", total_number_of[CART_SUB]);

  fprintf(stderr, "\n");
  fprintf(stderr, "Number of wildcard Recv is: %d\n", total_wildcards[RECV_ANY]);
  fprintf(stderr, "Number of wildcard Irecv is: %d\n", total_wildcards[IRECV_ANY]);
  fprintf(stderr, "Number of wildcard Probe is: %d\n", total_wildcards[PROBE_ANY]);
  fprintf(stderr, "Number of wildcard Iprobe is: %d\n", total_wildcards[IPROBE_ANY]);

  fprintf(stderr, "\n");
  fprintf(stderr, "Number of messages <= 256 bytes is: %d\n", total_msg_size[size256]);
  fprintf(stderr, "Number of messages <= 512 bytes is: %d\n", total_msg_size[size512]);
  fprintf(stderr, "Number of messages <= 1K bytes is: %d\n", total_msg_size[size1K]);
  fprintf(stderr, "Number of messages <= 2K bytes is: %d\n", total_msg_size[size2K]);
  fprintf(stderr, "Number of messages <= 4K bytes is: %d\n", total_msg_size[size4K]);
  fprintf(stderr, "Number of messages <= 8K bytes is: %d\n", total_msg_size[size8K]);
  fprintf(stderr, "Number of messages <= 16K bytes is: %d\n", total_msg_size[size16K]);
  fprintf(stderr, "Number of messages <= 32K bytes is: %d\n", total_msg_size[size32K]);
  fprintf(stderr, "Number of messages <= 64K bytes is: %d\n", total_msg_size[size64K]);
  fprintf(stderr, "Number of messages <= 128K bytes is: %d\n", total_msg_size[size128K]);
  fprintf(stderr, "Number of messages > 128K bytes is: %d\n", total_msg_size[above]);
  return err;
}

/* The End. */
