/* Deadlock checking module 
 * This module does simple timeout-based deadlock checking 
 * The module requires MPI_THREAD_MULTIPLE support
 * This module also needs to be on top of the tool stack */

#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <pnmpimod.h>
#include <pthread.h>
#include "deadlock-check.h"

#include <iostream>

#ifdef AIX
#pragma alloca
#endif

using namespace std;
/*--------------------------------------------------------------------------*/
/* globals */

/*........................................................................*/
/* Variables */

static int my_rank;
static int timeout=1;
static int my_counter = 0;
static int total_global_counter;
static int in_MPI = 0;
MPI_Comm dl_comm;
static int finalized = false;
pthread_t thread_id;
/*........................................................................*/
/* macros/functions */

void* check_deadlock(void*) {
  while (true) {
    sleep(timeout);
    int in_MPI_global;
    int new_global_counter;
    PMPI_Allreduce_NewStack(1000, &my_counter, &new_global_counter, 1, MPI_INT, MPI_SUM, dl_comm);
    //fprintf(stderr, "rank %d obtained new_global_counter = %d\n", my_rank, new_global_counter);
    PMPI_Allreduce_NewStack(1000, &in_MPI, &in_MPI_global, 1, MPI_INT, MPI_LAND, dl_comm);
    //fprintf(stderr, "rank %d has in_MPI = %d, obtained in_MPI_global = %d\n", my_rank, in_MPI, in_MPI_global);

    /* if there has been no new MPI calls and all processes 
     * are stuck in some MPI calls, we've reached deadlock condition */
    if (new_global_counter == total_global_counter) {
      if (in_MPI_global) {
        fprintf(stderr, "Deadlock detected\n");
        PMPI_Abort(MPI_COMM_WORLD, 1);
        pthread_exit(NULL);
      }
    } else 
      total_global_counter = new_global_counter;
    
    if (finalized)
      pthread_exit(NULL);
  }
}


/*--------------------------------------------------------------------------*/
/* Setup */

/*.......................................................*/
/* Registration */

int PNMPI_RegistrationPoint()
{
  int err;

  /* register this module and its services */

  err=PNMPI_Service_RegisterModule(PNMPI_MODULE_DEADLOCK_CHECK);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  return err;
}


/*.......................................................*/
/* Init */

int MPI_Init(int *argc, char ***argv)
{
  int err, thread_support_level;
  PNMPI_modHandle_t handle_dl;
  char* ctimeout_s;
  
  /* check for comm-related issues? */
  err = PNMPI_Service_GetModuleByName(PNMPI_MODULE_DEADLOCK_CHECK, &handle_dl);
  if (err!=PNMPI_SUCCESS)
    return err;
  
  err = PNMPI_Service_GetArgument(handle_dl,"timeout",&ctimeout_s);
  if (err!=PNMPI_SUCCESS) {
    if (err==PNMPI_NOARG)
      timeout = 2;
    else
      return err;
  } else
    timeout = atoi(ctimeout_s);

  /* call the init routines */
  err=PMPI_Init_thread(argc,argv, MPI_THREAD_MULTIPLE, &thread_support_level);
  if (thread_support_level != MPI_THREAD_MULTIPLE) {
    fprintf(stderr, "Deadlock-check module requires MPI_THREAD_MULTIPLE support\n");
    PMPI_Abort(MPI_COMM_WORLD, err);
  }

  /* spawn a new communicator for deadlock checking */
  err = PMPI_Comm_dup_NewStack(1000, MPI_COMM_WORLD, &dl_comm);
  if (err != MPI_SUCCESS) {
    fprintf(stderr, "Failed to spawn a new communicator for deadlock checking\n");
    PMPI_Abort(MPI_COMM_WORLD, err);
  }
  PMPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
  PMPI_Barrier_NewStack(1000, dl_comm);

  /* spawn a new thread */
  err = pthread_create(&thread_id, NULL, check_deadlock, NULL);

  if (err) {
    fprintf(stderr, "Error spawning thread for deadlock checking\n");
    PMPI_Abort(MPI_COMM_WORLD, err);
  } 
  return err;
}

int MPI_Init_thread(int *argc, char ***argv, int required, int *provided) {
  int err;
  PNMPI_modHandle_t handle_dl;
  char* ctimeout_s;
  
  /* check for comm-related issues? */
  err = PNMPI_Service_GetModuleByName(PNMPI_MODULE_DEADLOCK_CHECK, &handle_dl);
  if (err!=PNMPI_SUCCESS)
    return err;
  
  err = PNMPI_Service_GetArgument(handle_dl,"timeout",&ctimeout_s);
  if (err!=PNMPI_SUCCESS) {
    if (err==PNMPI_NOARG)
      timeout = 2;
    else
      return err;
  } else
    timeout = atoi(ctimeout_s);

  /* call the init routines */
  err=PMPI_Init_thread(argc,argv, MPI_THREAD_MULTIPLE, provided);
  if (*provided != MPI_THREAD_MULTIPLE) {
    fprintf(stderr, "Deadlock-check module requires MPI_THREAD_MULTIPLE support\n");
    PMPI_Abort(MPI_COMM_WORLD, err);
  }

  /* spawn a new communicator for deadlock checking */
  err = PMPI_Comm_dup_NewStack(1000, MPI_COMM_WORLD, &dl_comm);
  if (err != MPI_SUCCESS) {
    fprintf(stderr, "Failed to spawn a new communicator for deadlock checking\n");
    PMPI_Abort(MPI_COMM_WORLD, err);
  }
  PMPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
  PMPI_Barrier_NewStack(1000, dl_comm);

  /* spawn a new thread */
  err = pthread_create(&thread_id, NULL, check_deadlock, NULL);

  if (err) {
    fprintf(stderr, "Error spawning thread for deadlock checking\n");
    PMPI_Abort(MPI_COMM_WORLD, err);
  } 
  return err;
}


/*--------------------------------------------------------------------------*/
/* Wrapper Routines */
int MPI_Send(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  in_MPI = 1;
  err=PMPI_Send(buf,count,datatype,dest,tag,comm);
  my_counter++;
  in_MPI = 0;
  return err;
}

int MPI_Bsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err=PMPI_Bsend(buf,count,datatype,dest,tag,comm);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Rsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err=PMPI_Rsend(buf, count, datatype,dest,tag,comm);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Ssend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err=PMPI_Ssend(buf,count,datatype,dest,tag,comm);
  my_counter++;
  in_MPI=0;
  return err;
}


/*........................................................................*/
/* Async Sends */

int MPI_Isend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  in_MPI=1;
  err=PMPI_Isend(buf,count,datatype,dest,tag,comm,request);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Ibsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  in_MPI=1;
  err=PMPI_Ibsend(buf,count,datatype,dest,tag,comm,request);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Irsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  in_MPI=1;
  err=PMPI_Irsend(buf,count,datatype,dest,tag,comm,request);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Issend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  in_MPI=1;
  err=PMPI_Issend(buf,count,datatype,dest,tag,comm,request);
  my_counter++;
  in_MPI=0;
  return err;
}


/*........................................................................*/
/* Sync. Receive */

int MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status *status)
{
  int err;
  in_MPI=1;
  err=PMPI_Recv(buf,count,datatype,source,tag,comm,status);
  my_counter++;
  in_MPI=0;
  return err;
}

/* Sync Probe */
int MPI_Probe(int source, int tag, MPI_Comm comm, MPI_Status* status)
{
  int err;
  in_MPI=1;
  err=PMPI_Probe(source,tag,comm,status);
  my_counter++;
  in_MPI=0;
  return err;
}

/* Async Probe */
int MPI_Iprobe(int source, int tag, MPI_Comm comm, int* flag, MPI_Status* status)
{
  int err;
  in_MPI=1;
  err=PMPI_Iprobe(source,tag,comm,flag,status);
  my_counter++;
  in_MPI=0;
  return err;
}

/*........................................................................*/
/* Async. Receive */

int MPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  in_MPI=1;
  err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
  my_counter++;
  in_MPI=0;
  return err;
}


/*........................................................................*/
/* Send/Recv */

int MPI_Sendrecv(void *sendbuf, int sendcount, MPI_Datatype sendtype, int dest, int sendtag, 
		 void *recvbuf, int recvcount, MPI_Datatype recvtype, int source, int recvtag,
		 MPI_Comm comm, MPI_Status *status)
{
  int err;
  in_MPI=1;
  err=PMPI_Sendrecv(sendbuf,sendcount,sendtype,dest,sendtag,
		    recvbuf,recvcount,recvtype,source,recvtag,comm,status);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Sendrecv_replace(void *buf, int count, MPI_Datatype datatype, int dest, int sendtag, int source, int recvtag, 
			 MPI_Comm comm, MPI_Status *status)
{
  int err;
  in_MPI=1;
  err=PMPI_Sendrecv_replace(buf,count,datatype,dest,sendtag,source,recvtag,comm,status);
  my_counter++;
  in_MPI=0;
  return err;
}


/*........................................................................*/
/* Waits */

int MPI_Wait(MPI_Request *request, MPI_Status *status)
{
  int err;
  in_MPI=1;
  err=PMPI_Wait(request,status);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Waitany(int count, MPI_Request *array_of_requests, int *index, MPI_Status *status)
{
  int err;
  in_MPI=1;
  err=PMPI_Waitany(count,array_of_requests,index,status);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Waitsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err;
  err=PMPI_Waitsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  my_counter++;
  in_MPI=0;
  return err;  
}

int MPI_Waitall(int count, MPI_Request *array_of_requests, MPI_Status *array_of_statuses)
{
  int err;
  err=PMPI_Waitall(count,array_of_requests,array_of_statuses);
  my_counter++;
  in_MPI=0;
  return err;
}


/*........................................................................*/
/* Tests */

int MPI_Test(MPI_Request *request, int *flag, MPI_Status *status)
{
  int err;
  in_MPI=1;

  err=PMPI_Test(request, flag, status);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Testany(int count, MPI_Request *array_of_requests, int *index, int *flag, MPI_Status *status)
{
  int err;
  in_MPI=1;
  err=PMPI_Testany(count,array_of_requests,index,flag,status);
  my_counter++;
  in_MPI=0;
  return err;  
}

int MPI_Testsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err;
  in_MPI=1;

  err=PMPI_Testsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  my_counter++;
  in_MPI=0;
  return err;  
}

int MPI_Testall(int count, MPI_Request *array_of_requests, int *flag, MPI_Status *array_of_statuses)
{
  int err;
  in_MPI=1;
  err=PMPI_Testall(count, array_of_requests, flag, array_of_statuses);
  my_counter++;
  in_MPI=0;
  return err;
}


/*--------------------------------------------------------------------------*/
/* Collectives */

/* ONE TO ALL */
int MPI_Bcast(void* buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err=PMPI_Bcast(buffer, count, datatype, root, comm);

  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Scatter(void* sendbuf, int sendcnt, MPI_Datatype sendtype, 
                void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                int root, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err=PMPI_Scatter(sendbuf, sendcnt, sendtype,
                   recvbuf, recvcnt, recvtype, 
                   root, comm);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Scatterv(void* sendbuf, int* sendcnts, int* displs, MPI_Datatype sendtype, 
                 void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                 int root, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err=PMPI_Scatterv(sendbuf, sendcnts, displs, sendtype,
                    recvbuf, recvcnt, recvtype, 
                    root, comm);
  
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Gather(void* sendbuf, int sendcnt, MPI_Datatype sendtype,
               void* recvbuf, int recvcnt, MPI_Datatype recvtype,
               int root, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err=PMPI_Gather(sendbuf, sendcnt, sendtype,
                  recvbuf, recvcnt, recvtype, 
                  root, comm);
  my_counter++;
  in_MPI=0;
  return err;    
}

int MPI_Gatherv(void* sendbuf, int sendcnt, MPI_Datatype sendtype,
                void* recvbuf, int* recvcnts, int* displs, 
                MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err=PMPI_Gatherv(sendbuf, sendcnt, sendtype,
                   recvbuf, recvcnts, displs, recvtype, 
                   root, comm);
  my_counter++;
  in_MPI=0;
  return err;
}
    
int MPI_Reduce(void* sendbuf, void* recvbuf, int count, 
               MPI_Datatype datatype, MPI_Op op, int root,
               MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err = PMPI_Reduce(sendbuf, recvbuf, count,
                    datatype, op, root, comm);
  my_counter++;
  in_MPI=0;
  return err;
}

/*.......................................................*/
/* ALL TO ALL */
int MPI_Allgather(void *sendbuf, int sendcnt, MPI_Datatype sendtype,
                  void *recvbuf, int recvcnt, MPI_Datatype recvtype, 
                  MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err = PMPI_Allgather(sendbuf, sendcnt, sendtype,
                       recvbuf, recvcnt, recvtype, comm);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Allgatherv(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                   void *recvbuf, int *recvcnts, int *displs, 
                   MPI_Datatype recvtype, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err = PMPI_Allgatherv(sendbuf, sendcnt, sendtype,
                        recvbuf, recvcnts, displs, 
                        recvtype, comm);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Alltoall(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                 void *recvbuf, int recvcnt, MPI_Datatype recvtype, 
                 MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err = PMPI_Alltoall(sendbuf, sendcnt, sendtype,
                      recvbuf, recvcnt, recvtype, comm);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Alltoallv(void *sendbuf, int *sendcnts, int *sdispls, MPI_Datatype sendtype, 
                  void *recvbuf, int *recvcnts, int *rdispls, MPI_Datatype recvtype, 
                  MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err = PMPI_Alltoallv(sendbuf, sendcnts, sdispls, sendtype,
                       recvbuf, recvcnts, rdispls, recvtype, 
                       comm);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Allreduce(void *sendbuf, void *recvbuf, int count, 
                  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err = PMPI_Allreduce(sendbuf, recvbuf, count, datatype,
                       op, comm);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Reduce_scatter(void *sendbuf, void *recvbuf, int *recvcnts, 
                       MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err = PMPI_Reduce_scatter(sendbuf, recvbuf, recvcnts, datatype,
                            op, comm);
  my_counter++;
  in_MPI=0;
  return err;
}
 
/* BARRIER */
int MPI_Barrier(MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err = PMPI_Barrier(comm);
  my_counter++;
  in_MPI=0;
  return err;
}
 
/* SCAN */
int MPI_Scan(void* sendbuf, void* recvbuf, int count,
             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  in_MPI=1;
  err = PMPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
  my_counter++;
  in_MPI=0;
  return err;
}


/*.......................................................*/
/* COMMUNICATOR COLLECTIVES */

int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *comm_out)
{
  int err;
  in_MPI=1;
  err = PMPI_Comm_dup(comm, comm_out);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Comm_free(MPI_Comm *comm)
{
  int err;
  in_MPI=1;
  err = PMPI_Comm_free(comm);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *comm_out)
{
  int err;
  in_MPI=1;
  err = PMPI_Comm_create(comm, group, comm_out);
  my_counter++;
  in_MPI=0;
  return err;

}

int MPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *comm_out)
{
  int err;
  in_MPI=1;
  err = PMPI_Comm_split(comm, color, key, comm_out);
  my_counter++;
  in_MPI=0;
  return err;

}

int MPI_Cart_create(MPI_Comm comm, int ndims, int *dims, int *periods,
                    int reorder, MPI_Comm *comm_cart) {
  int err;
  in_MPI=1;
  err = PMPI_Cart_create(comm,ndims,dims,periods,reorder,comm_cart);
  my_counter++;
  in_MPI=0;
  return err;
}

int MPI_Cart_sub(MPI_Comm comm, int *remain_dims, MPI_Comm *comm_new) {
  int err;
  in_MPI=1;
  err = PMPI_Cart_sub(comm,remain_dims,comm_new);
  my_counter++;
  in_MPI=0;
  return err;
}
/*.......................................................*/


int MPI_Finalize() {
  int err;
  in_MPI=1;
  PMPI_Barrier_NewStack(1000, MPI_COMM_WORLD);
  err = PMPI_Finalize();
  my_counter++;
  in_MPI=0;
  finalized = true;
  pthread_join(thread_id, NULL);
  return err;
}

/* The End. */
