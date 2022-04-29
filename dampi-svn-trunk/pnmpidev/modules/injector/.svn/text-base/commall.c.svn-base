SEND
RECV
FANOUT_SEND
FANIN_RECV
BARRIER_ENTRY
BARRIER_EXIT
IS_RECV



#include <mpi.h>
#include <pnmpimod.h>
#include <datatype.h>
#include <request.h>

#define PNMPI_MODULE_COMM "datatype-comm"

PNMPIMOD_Datatype_getReference_t dt_get;
PNMPIMOD_Datatype_delReference_t dt_del;

PNMPIMOD_Requests_RequestStorage_t req_add;


/*--------------------------------------------------------------------------*/

int MPI_Init(int *argc, char ***argv)
{
  int err;
  PNMPI_modHandle_t handle;
  PNMPI_Service_descriptor_t s_del,s_get;


  /* register this module and its services */

  err=PNMPI_Service_RegisterModule(PNMPI_MODULE_COMM);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;


  /* call the init routines */

  err=PMPI_Init(argc,argv);
  if (err!=MPI_SUCCESS)
    return err;


  /* query the datatype module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_DATATYPE,&handle_dt);
  if (err!=MPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_dt,"getDatatypeReference","pimp",&s_get);
  if (err!=MPI_SUCCESS)
    return err;
  dt_get=(PNMPIMOD_Datatype_getReference_t) s_get.fct;

  err=PNMPI_Service_GetServiceByName(handle_dt,"delDatatypeReference","p",&s_del);
  if (err!=MPI_SUCCESS)
    return err;  
  dt_del=(PNMPIMOD_Datatype_delReference_t) s_del.fct;


  /* query the request module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_REQUEST,&handle_req);
  if (err!=MPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_req,"getDatatypeReference","i",&s_get);
  if (err!=MPI_SUCCESS)
    return err;
  req_add=(PNMPIMOD_Requests_RequestStorage_t) s_get.fct;


  /* request to track requests */

  err=req_add(0);
  if (err!=MPI_SUCCESS)
    return err;
  

  return err;
}


/*--------------------------------------------------------------------------*/

int MPI_Allgather(void *sendbuf, int sendcount, MPI_Datatype sendtype, 
		  void *recvbuf, int recvcount, MPI_Datatype recvtype, 
		  MPI_Comm comm)
{
  int err;
  FANOUT_SEND();
  err=PMPI_Allgather(sendbuf,sendcount,sendtype,recvbuf,recvcount,recvtype,comm);
  FANIN_RECV();
  return err;
}

int MPI_Allgatherv(void *sendbuf, int sendcount, MPI_Datatype sendtype, 
		   void *recvbuf, int *recvcounts, int *displs, MPI_Datatype recvtype, 
		   MPI_Comm comm)
{
  int err;
  FANOUT_SEND();
  err=PMPI_Allgatherv(sendbuf,sendcount,sendtype,recvbuf,recvcounts,displs,recvtype,comm);
  FANIN_RECV();
  return err;
}

int MPI_Allreduce(void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  FANOUT_SEND();
  err=PMPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
  FANIN_RECV();
  return err;
}

int MPI_Alltoall(void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
{
  int err;
  FANOUT_SEND();
  err=PMPI_Alltoall(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
  FANIN_RECV();
  return err;
}

int MPI_Alltoallv(vodi *sendbuf, int *sendcounts, int *sdispls, MPI_Datatype sendtype, 
		  void *recvbuf, int *recvcounts, int *rdispls, MPI_Datatype recvtype, 
		  MPI_Comm comm)
{
  int err;
  FANOUT_SEND();
  err=PMPI_Alltoallv(sendbuf,sendcounts,sdispls,sendtype,recvbuf,recvcounts,rdispls,recvtype,comm);
  FANIN_RECV();
  return err;
}

int MPI_Barrier(MPI_Comm comm)
{
  int err;
  BARRIER_ENTRY();
  err=PMPI_Barrier(comm);
  BARRIER_EXIT();
  return err;
}

int MPI_Bcast(void *buf, int count, MPI_Datatype datatype, int root, MPI_Comm comm)
{
  int err;
  if (mycomm_rank==root) FANOUT_SEND();
  err=PMPI_Bcast(buf,count,datatype,root,comm);
  RECV();
  return err;
}

int MPI_Bsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  SEND();
  return PMPI_Bsend(buf,count,datatype,dest,tag,comm);
}

int MPI_Gather(void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype datatype, int root, MPI_Comm comm)
{
  int err;
  SEND();
  err=PMPI_Gather(sendbuf,sendcount,sendtype,recvbuf,recvcount,datatype,root,comm);
  if (mycommrank==root)
    FANIN_RECV();
  return err;
}

int MPI_Gatherv(void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int *recvcounts, int *displs, MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  int err;
  SEND();
  err=PMPI_Gatherv(buf,sendcount,sendtype,recvbuf,recvcounts,displs,recvtype,root,comm);
  if (mycommrank==root)
    FANIN_RECV();
  return err;
}

int MPI_Ibsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  SEND();
  return PMPI_Ibsend(buf,count,datatype,dest,tag,comm,request);
}

int MPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
  RECV();
  return err;
}

int MPI_Irsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  SEND();
  return PMPI_Irsend(buf,count,datatype,dest,tag,comm,request);
}

int MPI_Isend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  SEND();
  return PMPI_Isend(buf,count,datatype,dest,tag,comm,request);
}

int MPI_Issend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  SEND();
  return PMPI_Issend(buf,count,datatype,dest,tag,comm,request);
}

int MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status *status)
{
  int err;
  err=PMPI_Recv(buf,count,datatype,source,tag,comm,status);
  RECV();
  return err;
}

int MPI_Reduce(void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm)
{
  int err;
  SEND();
  err=PMPI_Reduce(sendbuf,recvbuf,count,datatype,op,root,comm)
  if (mycomm_rank==root) FANIN_RECV();
}

int MPI_Reduce_scatter(void *sendbuf, void *recvbuf, int *recvcounts, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  FANOUT_SEND();
  err=PMPI_Reduce_scatter(sendbuf,recvbuf,recvcounts,datatype,op,comm);
  FANIN_RECV();
  return err;
}

int MPI_Rsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  SEND();
  return PMPI_Rsend(buf, count, datatype,dest,tag,comm);
}

int MPI_Scan(void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err;
  if (mycomm_rank!=0) RECV();
  err=PMPI_Scan(sendbuf,recvbuf,count,datatype,op,comm)
  if (mycomm_rank!=mycomm_size-1) SEND();
  return err;
}

int MPI_Scatter(void *sendbuf, int sendcount, MPI_Datatype sendtype,
		void *recvbuf, int recvcount, MPI_Datatype recvtype,
		int root, MPI_Comm comm)
{
  int err;
  if (mycomm_rank==root) FANOUT_SEND();
  err=PMPI_Scatter(sendbuf,sendcount,sendtype,recvbuf,recvcount,recvtype,root,comm);
  RECV();
  return err;
}

int MPI_Scatterv(void *sendbuf, int *sendcounts, int *displs, MPI_Datatype sendtype,
		 void *recvbuf, int recvcount, MPI_Datatype recvtype, 
		 int root, MPI_Comm comm)
{
  int err;
  if (mycomm_rank==root) FANOUT_SEND();
  err=PMPI_Scatterv(sendbuf,sendcounts,displs,sendtype,recvbuf,recvcount,recvtype,root,comm);
  RECV();
  return err;
}

int MPI_Send(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  SEND();
  return PMPI_Send(buf,count,datatype,dest,tag,comm);
}

int MPI_Sendrecv(void *sendbuf, int sendcount, MPI_Datatype sendtype, int dest, int sendtag, 
		 void *recvbuf, int recvcount, MPI_Datatype recvtype, int source, int recvtag,
		 MPI_Comm comm, MPI_Status *status)
{
  int err;
  RECV();
  err=PMPI_Sendrecv(sendbuf,sendcount,sendtype,dest,sendtag,
		    recvbuf,recvcount,recvtype,source,recvtag,comm,status);
  SEND();
  return err;
}

int MPI_Sendrecv_replace(void *buf, int count, MPI_Datatype datatype, int dest, int sendtag, int source, int recvtag, 
			 MPI_Comm comm, MPI_Status *status)
{
  int err;
  RECV();
  err=PMPI_Sendrecv_replace(buf,count,datatype,dest,sendtag,source,recvtag,comm,status);
  SEND();
  return err;
}

int MPI_Ssend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  SEND();
  return PMPI_Ssend(buf,count,datatype,dest,tag,comm);
}

int MPI_Test(MPI_Request *request, int *flag, MPI_Status *status)
{
  int err;
  err=PMPI_Test(request, flag, status);
  if ((flag) && (IS_RECV(request))) RECV();
  return err;
}

int MPI_Testall(int count, MPI_Request *array_of_requests, int *flag, MPI_Status *array_of_statuses)
{
  int err;
  err=PMPI_Testall(count, array_of_requests, flag, array_of_statuses);
  if (flag) 
    {
      int i;
      for (i=0; i<count; i++)
	if (IS_RECV(array_of_requests[i])) RECV();
    }
  return err;
}

int MPI_Testany(int count, MPI_Request *array_of_requests, int *index, int *flag, MPI_Status *status)
{
  int err;
  err=PMPI_Testany(count,array_of_requests,index,flag,status);
  TODO_READUPONIT
  return err;  
}

int MPI_Testsome(int incount, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err;
  err=PMPI_Testsome(incount,array_of_requests,outcount,array_of_indices,array_of_statuses);
  TODO_READUPONIT
  return err;  
}

int MPI_Wait(MPI_Request *request, MPI_Status *status)
{
  int err;
  err=PMPI_Wait(request,status);
  if (IS_RECV(request)) RECV();
  return err;
}

int MPI_Waitall(int count, MPI_Request *array_of_requests, MPI_Status *status)
{
  int err,i;
  err=PMPI_Waitall(count,array_of_reuquests,status);
  for (i=0; i<count; i++)
    if (IS_RECV(array_of_requests[i])) RECV();
  return err;
}

int MPI_Waitany(int count, MPI_Request *array_of_requests, int *index, MPI_Status *status)
{
  int err;
  err=PMPI_Waitany(count,array_of_requests,index,status);
  if (IS_RECV(array_of_requests[*index])) RECV();
  return err;
}

int MPI_Waitsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err;
  err=PMPI_Waitsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);
  TODO_READUPONIT
  return err;  
}

