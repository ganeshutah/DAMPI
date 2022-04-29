#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <pnmpimod.h>
#include "comm-mapping.h"

#include <iostream>
#include <map>

#ifdef AIX
#pragma alloca
#endif

using namespace std;
/*--------------------------------------------------------------------------*/
/* globals */

/*........................................................................*/
/* Variables */

static map<MPI_Comm,MPI_Comm> comm_map;
static int check_level;
static int comm_rank;
/*........................................................................*/
/* macros/functions */

/* Return the mapping of a given communicator. The mapped comm, if existed, is 
 * returned as a value in outcomm. If no mapped comm existed, -1 is returned */
int PNMPIMOD_Comm_Mapping(MPI_Comm comm, MPI_Comm* outcomm) {
  map<MPI_Comm,MPI_Comm>::iterator itr = comm_map.find(comm);
  if (itr != comm_map.end()){
    *outcomm = (*itr).second;
    return 0;
  }
  return -1;
}
/* Create a shadow copy of a given communicator and map it to the real communicator */
int CREATE_SHADOW_COMM(MPI_Comm comm) {
  int err = -1;
  MPI_Comm shadow_comm;
  if (comm == MPI_COMM_NULL)
    return err;
  err = PMPI_Comm_dup_NewStack(1000,comm, &shadow_comm);
  if (err == MPI_SUCCESS) {
    comm_map[comm] = shadow_comm;
  }
  return err;
}

/* Delete the shadow communicator */
int DELETE_SHADOW_COMM(MPI_Comm comm) {
  int err= -1;
  MPI_Comm shadow_comm;
  if (PNMPIMOD_Comm_Mapping(comm, &shadow_comm) == 0) {
    err = PMPI_Comm_free_NewStack(1000,&shadow_comm);
    if (err == MPI_SUCCESS) {
      /* erase the shadow mapping */
      comm_map.erase(comm);
    }
  }

  return err;
  
}


/*--------------------------------------------------------------------------*/
/* Setup */

/*.......................................................*/
/* Registration */

int PNMPI_RegistrationPoint()
{
  int err;
  PNMPI_Service_descriptor_t service;
  


  /* register this module and its services */

  err=PNMPI_Service_RegisterModule(PNMPI_MODULE_COMM_MAPPING);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  sprintf(service.name,"comm-map");
  service.fct=(PNMPI_Service_Fct_t*) PNMPIMOD_Comm_Mapping;
  sprintf(service.sig,"r");
  err=PNMPI_Service_RegisterService(&service);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  return err;
}


/*.......................................................*/
/* Init */

int MPI_Init(int *argc, char ***argv)
{
  int err;
  PNMPI_modHandle_t handle_comm;
  char* clevel_s;

  /* check for comm-related issues? */
  err = PNMPI_Service_GetModuleByName(PNMPI_MODULE_COMM_MAPPING, &handle_comm);
  if (err!=PNMPI_SUCCESS)
    return err;
  
  err = PNMPI_Service_GetArgument(handle_comm,"check",&clevel_s);
  if (err!=PNMPI_SUCCESS) {
    if (err==PNMPI_NOARG)
      check_level = 0;
    else
      return err;
  } else
    check_level = atoi(clevel_s);

  /* call the init routines */
  err=PMPI_Init(argc,argv);
  PMPI_Comm_rank(MPI_COMM_WORLD, &comm_rank);
  CREATE_SHADOW_COMM(MPI_COMM_WORLD);
  CREATE_SHADOW_COMM(MPI_COMM_SELF);
  return err;
}

int MPI_Init_thread(int *argc, char ***argv, int required, int *provided)
{
  int err;
  PNMPI_modHandle_t handle_comm;
  char* clevel_s;

  /* check for comm-related issues? */
  err = PNMPI_Service_GetModuleByName(PNMPI_MODULE_COMM_MAPPING, &handle_comm);
  if (err!=PNMPI_SUCCESS)
    return err;
  
  err = PNMPI_Service_GetArgument(handle_comm,"check",&clevel_s);
  if (err!=PNMPI_SUCCESS) {
    if (err==PNMPI_NOARG)
      check_level = 0;
    else
      return err;
  } else
    check_level = atoi(clevel_s);

  /* call the init routines */
  err=PMPI_Init_thread(argc,argv, required, provided);
  PMPI_Comm_rank(MPI_COMM_WORLD, &comm_rank);
  CREATE_SHADOW_COMM(MPI_COMM_WORLD);
  CREATE_SHADOW_COMM(MPI_COMM_SELF);
  return err;
}



/*--------------------------------------------------------------------------*/
/* Wrapper Routines */
#ifdef COMM_CHECK
int MPI_Send(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  err=PMPI_Send(buf,count,datatype,dest,tag,comm);
  return err;
}

int MPI_Bsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  err=PMPI_Bsend(buf,count,datatype,dest,tag,comm);
  return err;
}

int MPI_Rsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  err=PMPI_Rsend(buf, count, datatype,dest,tag,comm);
  return err;
}

int MPI_Ssend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  err=PMPI_Ssend(buf,count,datatype,dest,tag,comm);
  return err;
}


/*........................................................................*/
/* Async Sends */

int MPI_Isend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  err=PMPI_Isend(buf,count,datatype,dest,tag,comm,request);
  return err;
}

int MPI_Ibsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  err=PMPI_Ibsend(buf,count,datatype,dest,tag,comm,request);
  return err;
}

int MPI_Irsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  err=PMPI_Irsend(buf,count,datatype,dest,tag,comm,request);
  return err;
}

int MPI_Issend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  err=PMPI_Issend(buf,count,datatype,dest,tag,comm,request);
  return err;
}


/*........................................................................*/
/* Sync. Receive */

int MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status *status)
{
  int err;
  err=PMPI_Recv(buf,count,datatype,source,tag,comm,status);
  return err;
}

/* Sync Probe */
int MPI_Probe(int source, int tag, MPI_Comm comm, MPI_Status* status)
{
  int err;
  err=PMPI_Probe(source,tag,comm,status);
  return err;
}

/* Async Probe */
int MPI_Iprobe(int source, int tag, MPI_Comm comm, int* flag, MPI_Status* status)
{
  int err;
  err=PMPI_Iprobe(source,tag,comm,flag,status);
  return err;
}

/*........................................................................*/
/* Async. Receive */

int MPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
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
  err=PMPI_Sendrecv(sendbuf,sendcount,sendtype,dest,sendtag,
		    recvbuf,recvcount,recvtype,source,recvtag,comm,status);
  return err;
}

int MPI_Sendrecv_replace(void *buf, int count, MPI_Datatype datatype, int dest, int sendtag, int source, int recvtag, 
			 MPI_Comm comm, MPI_Status *status)
{
  int err;
  err=PMPI_Sendrecv_replace(buf,count,datatype,dest,sendtag,source,recvtag,comm,status);
  return err;
}


/*........................................................................*/
/* Waits */

int MPI_Wait(MPI_Request *request, MPI_Status *status)
{
  int err;
  err=PMPI_Wait(request,status);
  return err;
}

int MPI_Waitany(int count, MPI_Request *array_of_requests, int *index, MPI_Status *status)
{
  int err;
  err=PMPI_Waitany(count,array_of_requests,index,status);
  return err;
}

int MPI_Waitsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err,i;

  err=PMPI_Waitsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  return err;  
}

int MPI_Waitall(int count, MPI_Request *array_of_requests, MPI_Status *array_of_statuses)
{
  int err,i;
  err=PMPI_Waitall(count,array_of_requests,array_of_statuses);

  return err;
}


/*........................................................................*/
/* Tests */

int MPI_Test(MPI_Request *request, int *flag, MPI_Status *status)
{
  int err;

  err=PMPI_Test(request, flag, status);
  return err;
}

int MPI_Testany(int count, MPI_Request *array_of_requests, int *index, int *flag, MPI_Status *status)
{
  int err;
  err=PMPI_Testany(count,array_of_requests,index,flag,status);
  return err;  
}

int MPI_Testsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err;

  err=PMPI_Testsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  return err;  
}

int MPI_Testall(int count, MPI_Request *array_of_requests, int *flag, MPI_Status *array_of_statuses)
{
  int err;
  err=PMPI_Testall(count, array_of_requests, flag, array_of_statuses);
  return err;
}


/*--------------------------------------------------------------------------*/
/* Collectives */

/* ONE TO ALL */
int MPI_Bcast(void* buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm)
{
  int err;
  err=PMPI_Bcast(buffer, count, datatype, root, comm);

  return err;
}

int MPI_Scatter(void* sendbuf, int sendcnt, MPI_Datatype sendtype, 
                void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                int root, MPI_Comm comm)
{
  int err;
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
  err = PMPI_Allgather(sendbuf, sendcnt, sendtype,
                       recvbuf, recvcnt, recvtype, comm);
  return err;
}

int MPI_Allgatherv(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                   void *recvbuf, int *recvcnts, int *displs, 
                   MPI_Datatype recvtype, MPI_Comm comm)
{
  int err;
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
  err = PMPI_Alltoall(sendbuf, sendcnt, sendtype,
                      recvbuf, recvcnt, recvtype, comm);
  return err;
}

int MPI_Alltoallv(void *sendbuf, int *sendcnts, int *sdispls, MPI_Datatype sendtype, 
                  void *recvbuf, int *recvcnts, int *rdispls, MPI_Datatype recvtype, 
                  MPI_Comm comm)
{
  int err;
  err = PMPI_Alltoallv(sendbuf, sendcnts, sdispls, sendtype,
                       recvbuf, recvcnts, rdispls, recvtype, 
                       comm);
  return err;
}

int MPI_Allreduce(void *sendbuf, void *recvbuf, int count, 
                  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  err = PMPI_Allreduce(sendbuf, recvbuf, count, datatype,
                       op, comm);
  return err;
}

int MPI_Reduce_scatter(void *sendbuf, void *recvbuf, int *recvcnts, 
                       MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  err = PMPI_Reduce_scatter(sendbuf, recvbuf, recvcnts, datatype,
                            op, comm);
  return err;
}
 
/* BARRIER */
int MPI_Barrier(MPI_Comm comm)
{
  int err;
  err = PMPI_Barrier(comm);
  return err;
}
 
/* SCAN */
int MPI_Scan(void* sendbuf, void* recvbuf, int count,
             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  err = PMPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
  return err;
}
#endif /* COMM_CHECK */


/*.......................................................*/
/* COMMUNICATOR COLLECTIVES */

int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *comm_out)
{
  int err;
  err = PMPI_Comm_dup(comm, comm_out);
  CREATE_SHADOW_COMM(*comm_out);
  return err;
}

int MPI_Comm_free(MPI_Comm *comm)
{
  int err;
  /* comm_free will change comm to comm_null
   * but we need its value to delete the shadow */
  MPI_Comm temp_comm = *comm;
  err = PMPI_Comm_free(comm);
  DELETE_SHADOW_COMM(temp_comm);
  return err;
}

int MPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *comm_out)
{
  int err;
  err = PMPI_Comm_create(comm, group, comm_out);
  CREATE_SHADOW_COMM(*comm_out);
  return err;

}

int MPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *comm_out)
{
  int err;
  err = PMPI_Comm_split(comm, color, key, comm_out);
  CREATE_SHADOW_COMM(*comm_out);
  return err;

}

int MPI_Cart_create(MPI_Comm comm, int ndims, int *dims, int *periods,
                    int reorder, MPI_Comm *comm_cart) {
  int err;
  err = PMPI_Cart_create(comm,ndims,dims,periods,reorder,comm_cart);
  CREATE_SHADOW_COMM(*comm_cart);
  return err;
}

int MPI_Cart_sub(MPI_Comm comm, int *remain_dims, MPI_Comm *comm_new) {
  int err;
  err = PMPI_Cart_sub(comm,remain_dims,comm_new);
  CREATE_SHADOW_COMM(*comm_new);
  return err;
}
/*.......................................................*/


int MPI_Finalize() {
  int err;
  DELETE_SHADOW_COMM(MPI_COMM_WORLD);
  DELETE_SHADOW_COMM(MPI_COMM_SELF);

  /* doing comm related issues checks */
  if (check_level) {
    if (comm_map.size() != 0)
      printf("COMM CHECK: Node %i has %d un-freed communicator\n", comm_rank, comm_map.size());
    else
      printf("COMM CHECK: Node %i has %d un-freed communicator\n", comm_rank, comm_map.size());

  }
  err = PMPI_Finalize();
  return err;
}

/* The End. */
