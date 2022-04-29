#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <mpi.h>
#include <pnmpimod.h>

#include <requests.h>
#include <comm-mapping.h>
#include "pb_mod.h"

/*==========================================================================*/
/* PB selection */

#ifdef PB_DATATYPE1
#define PB_DATATYPE
#endif

#ifdef PB_DATATYPE2
#define PB_DATATYPE
#endif

#ifdef PB_TWOMSG1
#define PB_TWOMSG
#endif

#ifdef PB_TWOMSG2
#define PB_TWOMSG
#endif

#ifdef PB_PACK1
#define PB_PACK
#endif

#ifdef PB_PACK2
#define PB_PACK
#endif

#ifdef PB_COPY1
#define PB_COPY
#endif

#ifdef PB_COPY2
#define PB_COPY
#endif

#ifdef PB_COPY
#include <datatype.h>
#endif

/*==========================================================================*/
/* Variables */

PNMPIMOD_Requests_MapRequest_t PNMPIMOD_requestmap;
PNMPIMOD_Comm_Mapping_t PNMPIMOD_commmap;

static PNMPIMOD_Requests_RequestStorage_t req_add;

static PNMPIMOD_Status_RequestStorage_t status_add;
static int *TotalStatusExtension;

static int request_offset;
#ifdef PB_TWOMSG
static int request_offset_req;
#ifdef PB_TWOMSG1
static int request_offset_buf;
static int request_offset_dt;
static int request_offset_ct;
#endif
#endif
#ifdef PB_PACK
static int request_offset_size;
static int request_offset_pdt;
static int request_offset_pbuf;
#endif
#ifdef PB_COPY
static int request_offset_size;
static int request_offset_pdt;
static int request_offset_pbuf;
PNMPIMOD_Datatype_getReference_t dt_get;
PNMPIMOD_Datatype_delReference_t dt_del;
PNMPIMOD_Datatype_getSize_t      dt_size;
#endif

static int piggyback_offset;
static int *StatusOffsetInRequest;
static int piggyback_size;
static char *pb_outbuffer;
static char *pb_inbuffer;
static int pb_already_set = 0;
int myrank;
int num_procs;
/*==========================================================================*/
/* Macros - general */

#define PBCOPY(to,from,len) memcpy(to,from,len);
#define PBCOPYDEF(to,from) PBCOPY(to,from,piggyback_size)

#define DT_FREE(var) { int ret = MPI_Type_free(&var); if (ret!=MPI_SUCCESS) { return ret; } }

#define PBPTR_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset,void*,data);


#define COMM_REQ_FROM_STATUS(status) REQ_FROM_STATUS(status,(*StatusOffsetInRequest))
#define COMM_REQ_FROM_STATUSARRAY(status,count,num) REQ_FROM_STATUSARRAY(status,(*StatusOffsetInRequest),*TotalStatusExtension,count,num)


/*==========================================================================*/
/* Macros - datatype piggybacking */

#ifdef PB_DATATYPE

#define GET_PBCOMM(comm) MPI_Comm pb_comm;err=PNMPIMOD_commmap(comm,&pb_comm)
#define DT_DECLARE(var,ptr) MPI_Datatype var; void *ptr;
#define DT_DECLARE_NOPTR(var) MPI_Datatype var;

#define ASYNC_COMPLETE(aos,cnt,_i)\
{\
  if (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).type==PNMPIMOD_REQUESTS_RECV)\
    {\
      PBCOPYDEF(&(STATUS_STORAGE_ARRAY(aos,piggyback_offset,*TotalStatusExtension,char,cnt,_i)),\
	INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset,*TotalStatusExtension,char*,cnt,_i));\
    }\
  free(INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset,*TotalStatusExtension,char*,cnt,_i));\
}

#ifdef PB_DATATYPE2

#define DT_GENERALALLOC(b,c,dt,pb,var) \
{ int err,lens[2]; MPI_Aint addr[2]; MPI_Datatype types[2]; \
  types[0]=MPI_CHAR; lens[0]=piggyback_size; err=MPI_Address((void*) pb, &(addr[0])); \
  if (err!=MPI_SUCCESS) { return err; } \
  types[1]=dt; lens[1]=c; err=MPI_Address((void*) b, &(addr[1])); \
  if (err!=MPI_SUCCESS) { return err; } \
  err=MPI_Type_struct(2,lens,addr,types,&var); \
  if (err!=MPI_SUCCESS) { return err; } \
  err=MPI_Type_commit(&var); \
  if (err!=MPI_SUCCESS) { return err; } \
}                     

#else /* PB_DATATYPE1 */

#define DT_GENERALALLOC(b,c,dt,pb,var) \
{ int err,lens[2]; MPI_Aint addr[2]; MPI_Datatype types[2]; \
  types[1]=MPI_CHAR; lens[1]=piggyback_size; err=MPI_Address((void*) pb, &(addr[1])); \
  if (err!=MPI_SUCCESS) { return err; } \
  types[0]=dt; lens[0]=c; err=MPI_Address((void*) b, &(addr[0])); \
  if (err!=MPI_SUCCESS) { return err; } \
  err=MPI_Type_struct(2,lens,addr,types,&var); \
  if (err!=MPI_SUCCESS) { return err; } \
  err=MPI_Type_commit(&var); \
  if (err!=MPI_SUCCESS) { return err; } \
}                     

#endif /* PB_DATATYPE2 */


#define DT_OUTALLOC(b,c,dt,var) DT_GENERALALLOC(b,c,dt,pb_outbuffer,var)
#define DT_STATUSALLOC(b,c,dt,st,var) DT_GENERALALLOC(b,c,dt,&(STATUS_STORAGE(status,piggyback_offset,char)),var);
#define DT_REQALLOC(b,c,dt,var,ptr) { ptr=(char*) malloc(piggyback_size);\
        if (ptr==NULL) { return MPI_ERROR_MEM; } \
        DT_GENERALALLOC(b,c,dt,ptr,var); }

#else /* PB_DATATYPE */

#define DT_DECLARE(var,ptr)
#define DT_DECLARE_NOPTR(var)
#define DT_GENERALALLOC(b,c,dt,pb,var)
#define DT_OUTALLOC(b,c,dt,var)
#define DT_STATUSALLOC(b,c,dt,st,var)
#define DT_REQALLOC(b,c,dt,var,ptr)

#endif


/*==========================================================================*/
/* Macros - two message piggybacking */

#ifdef PB_TWOMSG

#define GET_PBCOMM(comm) MPI_Comm pb_comm;err=PNMPIMOD_commmap(comm,&pb_comm)
#define REQ_DECLARE(var) MPI_Request var;
#define TM_DECLARE(ptr) void *ptr;
#define PB_ALLOC(ptr) { ptr=(char*) malloc(piggyback_size);\
        if (ptr==NULL) { return MPI_ERROR_MEM; } } 
#define PBREQ_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset_req,MPI_Request,data);
#define PBBUF_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset_buf,void*,data);
#define PBDT_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset_dt,MPI_Datatype,data);
#define PBCT_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset_ct,int,data);


#ifdef PB_TWOMSG1

#define ASYNC_COMPLETE(aos,cnt,_i)\
{\
    void *ptr=INFO_FROM_STATUSARRAY(aos,(*StatusOffsetInRequest)+request_offset,(*TotalStatusExtension),char*,cnt,_i); \
  if (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).type==PNMPIMOD_REQUESTS_RECV)\
    {\
        PBCOPYDEF(&(STATUS_STORAGE_ARRAY(aos,piggyback_offset,(*TotalStatusExtension),char,cnt,_i)),ptr); \
        if ((COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).tag!=MPI_ANY_TAG) && \
            (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).node!=MPI_ANY_SOURCE)) \
            {                                                           \
                aos[_i].MPI_ERROR=MPI_SUCCESS;                          \
                err=PMPI_Wait(&(INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_req,*TotalStatusExtension,MPI_Request,cnt,_i)),&(aos[_i])); \
            }                                                           \
        else                                                            \
            {                                                           \
                err=PMPI_Recv(INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_buf,*TotalStatusExtension,void*,cnt,_i), \
                              INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_ct,*TotalStatusExtension,int,cnt,_i), \
                              INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_dt,*TotalStatusExtension,MPI_Datatype,cnt,_i), \
                              aos[_i].MPI_SOURCE,                       \
                              aos[_i].MPI_TAG,                          \
                              COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).comm, \
                              &(aos[_i]));                              \
            }                                                           \
    }                                                                   \
  if (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).type==PNMPIMOD_REQUESTS_SEND) \
      {                                                                 \
          aos[_i].MPI_ERROR=MPI_SUCCESS;                                \
          err=PMPI_Wait(&(INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_req,*TotalStatusExtension,MPI_Request,cnt,_i)),&(aos[_i])); \
      }                                                                 \
  free(ptr);                                                            \
}

#endif
	  
#ifdef PB_TWOMSG2

#define ASYNC_COMPLETE(aos,cnt,_i)\
{\
  MPI_Status status2;\
  void *ptr=INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset,*TotalStatusExtension,char*,cnt,_i);\
  if (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).type==PNMPIMOD_REQUESTS_RECV)\
    {\
      if ((COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).tag!=MPI_ANY_TAG) &&\
          (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).node!=MPI_ANY_SOURCE))\
        {\
           err=PMPI_Wait(&(INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_req,*TotalStatusExtension,MPI_Request,cnt,_i)),&status2);\
           aos[_i].MPI_ERROR=status2.MPI_ERROR;\
           PBCOPYDEF(&(STATUS_STORAGE_ARRAY(aos,piggyback_offset,*TotalStatusExtension,char,cnt,_i)),ptr);\
           free(ptr);\
        }\
      else\
        {\
          GET_PBCOMM(COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).comm);       \
          err=PMPI_Recv(&(STATUS_STORAGE_ARRAY(aos,piggyback_offset,*TotalStatusExtension,char,cnt,_i)), \
                        piggyback_size,MPI_CHAR,                        \
                        aos[_i].MPI_SOURCE,                             \
                        aos[_i].MPI_TAG,                                \
                        pb_comm,     \
                        &status2);                                      \
          aos[_i].MPI_ERROR=status2.MPI_ERROR;                          \
        }                                                               \
    }\
  if (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).type==PNMPIMOD_REQUESTS_SEND)\
    {\
      err=PMPI_Wait(&(INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_req,*TotalStatusExtension,MPI_Request,cnt,_i)),&status2);\
      aos[_i].MPI_ERROR=status2.MPI_ERROR;\
      free(ptr);\
    }\
}
#endif


#else /* PB_TWOMSG */

#define REQ_DECLARE(var)
#define TM_DECLARE(ptr)
#define PB_ALLOC(ptr)
#define PBREQ_STORAGE(req,data)
#define PBBUF_STORAGE(req,data)
#define PBDT_STORAGE(req,data)
#define PBCT_STORAGE(req,data)

#endif /* PB_TWOMSG */


/*==========================================================================*/
/* Macros - packing and unpacking */

#ifdef PB_PACK

#define PACK_DECLARE(ptr,size,_p) void *ptr; int size; int _p;
#define PACK_DECLARE_NOPOS(ptr,size) void *ptr; int size;
#define PACK_ERR_DECLARE() int _e;
#define PACK_ERR_DECLARE_A() int _e;
#define PBSZ_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset_size,int,data);
#define PBPDT_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset_pdt,MPI_Datatype,data);
#define PBPBUF_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset_pbuf,char*,data);

#define PACK_START(ptr,size,_p,count,datatype)\
  _e=MPI_Type_size(datatype,&size);\
  if (_e!=MPI_SUCCESS) return _e;\
  size = size*count + piggyback_size;\
  ptr=malloc(size);\
  if (ptr==NULL) return MPI_ERROR_MEM;\
  _p=0;

#define PACKBUF_ALLOC(ptr,size,count,datatype)\
  _e=MPI_Type_size(datatype,&size);\
  if (_e!=MPI_SUCCESS) return _e;\
  size = size*count + piggyback_size;\
  ptr=malloc(size);\
  if (ptr==NULL) return MPI_ERROR_MEM;

#define PACKBUF_ALLOC_STSZ(ptr,size,count,datatype,dtsz)	\
  _e=MPI_Type_size(datatype,&dtsz);\
  if (_e!=MPI_SUCCESS) return _e;\
  size = dtsz*count + piggyback_size;\
  ptr=malloc(size);\
  if (ptr==NULL) return MPI_ERROR_MEM;

#define UNPACK_START(_p)\
  _p=0;

#define PACK_ALLOC_DATA(buf,count,datatype,ptr,size,_p,comm)\
  _e=MPI_Pack(buf,count,datatype,ptr,size,&_p,comm);	    \
  if (_e!=MPI_SUCCESS) return _e;

#define PACK_ALLOC_PB(ptr,size,_p,comm)\
  _e=MPI_Pack(pb_outbuffer,piggyback_size,MPI_CHAR,ptr,size,&_p,comm);	\
  if (_e!=MPI_SUCCESS) return _e;

#define PACK_UNPACK_DATA(buf,count,datatype,ptr,size,_p,comm)\
   _e=MPI_Unpack(ptr,size,&_p,buf,count,datatype,comm);\
  if (_e!=MPI_SUCCESS) return _e;

#define PACK_UNPACK_PB(pbbuf,ptr,size,_p,comm)\
   _e=MPI_Unpack(ptr,size,&_p,pbbuf,piggyback_size,MPI_CHAR,comm);\
  if (_e!=MPI_SUCCESS) return _e;

#ifdef PB_PACK1
#define ASYNC_COMPLETE(aos,cnt,_i)\
{\
  void *ptr=INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset,*TotalStatusExtension,char*,cnt,_i);\
  int pos;\
  if (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).type==PNMPIMOD_REQUESTS_RECV)\
    {\
      int _sz,dtsize;							\
      _sz=INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_size,*TotalStatusExtension,int,cnt,_i);\
      _e=MPI_Get_count(&(aos[_i]),MPI_PACKED,&dtsize);\
      if (_e!=MPI_SUCCESS) return err;\
      UNPACK_START(pos);  \
      PACK_UNPACK_PB(&(STATUS_STORAGE_ARRAY(aos,piggyback_offset,*TotalStatusExtension,char,cnt,_i)),ptr,dtsize,pos, \
		     COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).comm);\
      PACK_UNPACK_DATA(INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_pbuf,*TotalStatusExtension,char*,cnt,_i),\
		       (dtsize-piggyback_size)/_sz,\
		       INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_pdt,*TotalStatusExtension,MPI_Datatype,cnt,_i),\
		       ptr,dtsize,pos,COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).comm);\
    }\
  free(ptr);\
}
#endif

#ifdef PB_PACK2
#define ASYNC_COMPLETE(aos,cnt,_i)\
{\
  void *ptr=INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset,*TotalStatusExtension,char*,cnt,_i);\
  int pos;\
  if (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).type==PNMPIMOD_REQUESTS_RECV)\
    {\
      int _sz,dtsize;							\
      _sz=INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_size,*TotalStatusExtension,int,cnt,_i);\
      _e=MPI_Get_count(&(aos[_i]),MPI_PACKED,&dtsize);\
      if (_e!=MPI_SUCCESS) return err;\
      UNPACK_START(pos);  \
      PACK_UNPACK_DATA(INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_pbuf,*TotalStatusExtension,char*,cnt,_i),\
		       (dtsize-piggyback_size)/_sz,\
		       INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_pdt,*TotalStatusExtension,MPI_Datatype,cnt,_i),\
		       ptr,dtsize,pos,COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).comm);\
      PACK_UNPACK_PB(&(STATUS_STORAGE_ARRAY(aos,piggyback_offset,*TotalStatusExtension,char,cnt,_i)),ptr,dtsize,pos,\
		     COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).comm);\
    }\
  free(ptr);\
}
#endif

/*==========================================================================*/
/* Macros - manual copying */

#else /* PB_PACK */

#ifdef PB_COPY

#define PACK_DECLARE(ptr,size,_p) void *ptr; int size; int _p;
#define PACK_DECLARE_NOPOS(ptr,size) void *ptr; int size;
#define PACK_ERR_DECLARE() 
#define PACK_ERR_DECLARE_A() int _e;
#define PBSZ_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset_size,int,data);
#define PBPDT_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset_pdt,MPI_Datatype,data);
#define PBPBUF_STORAGE(req,data) REQ_STORAGE(req,PNMPIMOD_requestmap,request_offset_pbuf,char*,data);

#define PACK_START(ptr,size,_p,count,datatype)\
  _e=dt_size(datatype,&size);\
  if (_e!=PNMPI_SUCCESS) return _e;\
  size = size*count + piggyback_size;\
  ptr=malloc(size);\
  if (ptr==NULL) return MPI_ERROR_MEM;\
  _p=0;

#define PACKBUF_ALLOC(ptr,size,count,datatype)\
  _e=dt_size(datatype,&size);\
  if (_e!=MPI_SUCCESS) return _e;\
  size = size*count + piggyback_size;\
  ptr=malloc(size);\
  if (ptr==NULL) return MPI_ERROR_MEM;

#define PACKBUF_ALLOC_STSZ(ptr,size,count,datatype,dtsz)	\
  _e=dt_size(datatype,&dtsz);\
  if (_e!=MPI_SUCCESS) return _e;\
  size = dtsz*count + piggyback_size;\
  ptr=malloc(size);\
  if (ptr==NULL) return MPI_ERROR_MEM;

#define UNPACK_START(_p)\
  _p=0;

#define PACK_ALLOC_DATA(buf,count,datatype,ptr,size,_p,comm)\
{ PNMPIMOD_Datatype_Parameters_t ref;\
  int done;\
  char *b;\
  int l,s;\
  MPI_Datatype t;\
  dt_get(buf,count,datatype, &ref);\
  do {\
    PNMPIMOD_Datatype_getItem(&ref,&b,&t,&l,&s,&done);\
    memcpy((char*)ptr+_p,b,s*l);\
    _p+=s;\
  } while (!done);\
  dt_del(&ref);\
}

#define PACK_ALLOC_PB(ptr,size,_p,comm)\
  PBCOPYDEF((char*)ptr+_p,pb_outbuffer); _p+=piggyback_size;  

#define PACK_UNPACK_DATA(buf,count,datatype,ptr,size,_p,comm)\
{ PNMPIMOD_Datatype_Parameters_t ref;\
  int done;\
  char *b;\
  int l,s;\
  MPI_Datatype t;\
  dt_get(buf,count,datatype, &ref);\
  do {\
    PNMPIMOD_Datatype_getItem(&ref,&b,&t,&l,&s,&done);\
    memcpy(b,(char*)ptr+_p,s*l);\
    _p+=s;\
  } while (!done);\
  dt_del(&ref);\
}

#define PACK_UNPACK_PB(pbbuf,ptr,size,_p,comm)\
  PBCOPYDEF(pbbuf,(char*)ptr+_p); _p+=piggyback_size;

#ifdef PB_COPY1
#define ASYNC_COMPLETE(aos,cnt,_i)\
{\
  void *ptr=INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset,*TotalStatusExtension,char*,cnt,_i);\
  int pos;\
  if (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).type==PNMPIMOD_REQUESTS_RECV)\
    {\
      int _sz,dtsize;							\
      _sz=INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_size,*TotalStatusExtension,int,cnt,_i);\
      _e=MPI_Get_count(&(aos[_i]),MPI_PACKED,&dtsize);\
      if (_e!=MPI_SUCCESS) return err;\
      UNPACK_START(pos);  \
      PACK_UNPACK_PB(&(STATUS_STORAGE_ARRAY(aos,piggyback_offset,*TotalStatusExtension,char,cnt,_i)),ptr,dtsize,pos, \
		     COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).comm);\
      PACK_UNPACK_DATA(INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_pbuf,*TotalStatusExtension,char*,cnt,_i),\
		       (dtsize-piggyback_size)/_sz,\
		       INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_pdt,*TotalStatusExtension,MPI_Datatype,cnt,_i),\
		       ptr,dtsize,pos,COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).comm);\
    }\
  free(ptr);\
}
#endif

#ifdef PB_COPY2
#define ASYNC_COMPLETE(aos,cnt,_i)\
{\
  void *ptr=INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset,*TotalStatusExtension,char*,cnt,_i);\
  int pos;\
  if (COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).type==PNMPIMOD_REQUESTS_RECV)\
    {\
      int _sz,dtsize;							\
      _sz=INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_size,*TotalStatusExtension,int,cnt,_i);\
      _e=MPI_Get_count(&(aos[_i]),MPI_PACKED,&dtsize);\
      if (_e!=MPI_SUCCESS) return err;\
      UNPACK_START(pos);  \
      PACK_UNPACK_DATA(INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_pbuf,*TotalStatusExtension,char*,cnt,_i),\
		       (dtsize-piggyback_size)/_sz,\
		       INFO_FROM_STATUSARRAY(aos,*StatusOffsetInRequest+request_offset_pdt,*TotalStatusExtension,MPI_Datatype,cnt,_i),\
		       ptr,dtsize,pos,COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).comm);\
      PACK_UNPACK_PB(&(STATUS_STORAGE_ARRAY(aos,piggyback_offset,*TotalStatusExtension,char,cnt,_i)),ptr,dtsize,pos,\
		     COMM_REQ_FROM_STATUSARRAY(aos,cnt,_i).comm);\
    }\
  free(ptr);\
}
#endif

/* reuse packing macros in the rest of the file */

#define PB_PACK
#ifdef PB_COPY1
#define PB_PACK1
#endif
#ifdef PB_COPY2
#define PB_PACK2
#endif
#endif

#endif /* PB_COPY */

#ifndef PB_COPY
#ifndef PB_PACK

#define PBSIZE_STORAGE(req,data)

#define PACK_START(ptr,size,_p,count,datatype)
#define UNPACK_START(_p)
#define PACKBUF_ALLOC(ptr,size,_p,count,datatype)
#define PACK_ALLOC_DATA(buf,count,datatype,ptr,size,_p,comm)
#define PACK_ALLOC_PB(ptr,size,_p,comm)
#define PACK_UNPACK_DATA(buf,count,datatype,ptr,size,_p,comm)
#define PACK_UNPACK_PB(pbbuf,ptr,size,_p,comm)
#define PACK_DECLARE(ptr,size,_p)
#define PACK_ERR_DECLARE()
#define PACK_ERR_DECLARE_A()
#define PACK_DECLARE_NOPOS(ptr,size)
#define PBSZ_STORAGE(req,data) 
#define PBPDT_STORAGE(req,data)
#define PBPBUF_STORAGE(req,data)

#endif /* PB_PACK */
#endif /* PB_COPY */

#define PIGGYBACK_COLLECTIVES
#define PIGGYBACK_ALL_TO_ONE
#define PIGGYBACK_ALL_TO_ALL
#define PIGGYBACK_ONE_TO_ALL
#define PIGGYBACK_COMM_COLLECTIVES


/* Helper Functions for Collective Piggybacking
 * All collective piggybacking is done through separate message */
#ifdef PIGGYBACK_COLLECTIVES
/* Broadcast piggyback info */
int PBBROADCAST(int size, int root, MPI_Comm comm)
{
  int err = 0;
  void* buffer;
  GET_PBCOMM(comm);
  /* if pb_comm does not exist (most likely it's during the init phase) */
  if (err == -1)
    return MPI_SUCCESS;

  assert (pb_already_set);
  if (myrank == root)
    buffer = (void*) pb_outbuffer;
  else
    buffer = (void*) pb_inbuffer;

  err = PMPI_Bcast(buffer, size, MPI_INT, root, pb_comm);

#ifdef DEBUG_LEVEL_0
  if (err == MPI_SUCCESS) {
    /* receiving piggyback info from some process */
    if (myrank != root) {
      fprintf(stderr, "Receiving piggyback data %d\n", incoming_epoch);
    } 
    else fprintf(stderr, "Broadcasting piggyback data %d\n", curr_epoch);
  }
#endif
  return err;
}

/* all nodes receive piggyback */
int PBALLREDUCE(int size, MPI_Comm comm) 
{
  int err = 0;
  GET_PBCOMM(comm);
  /* if pb_comm does not exist (most likely it's during the init phase) */
  if (err == -1) {
    return MPI_SUCCESS;
  }

  assert (pb_already_set);
  
  err = PMPI_Allreduce(pb_outbuffer, pb_inbuffer, size, MPI_INT, MPI_MAX, pb_comm);
  return err;
}

/* root of reduce receives piggyback */
int PBREDUCE(int size, int root, MPI_Comm comm)
{
  int err = 0;

  GET_PBCOMM(comm);
  /* if pb_comm does not exist (most likely it's during the init phase) */
  if (err == -1)
    return MPI_SUCCESS;

  assert(pb_already_set);
  err = PMPI_Reduce(pb_outbuffer, pb_inbuffer, size, 
                    MPI_INT, MPI_MAX, root, pb_comm);

#ifdef DEBUG_LEVEL_0
  if (err == MPI_SUCCESS) {
    /* receiving piggyback info from some process */
    if (myrank == root) {
      fprintf(stderr, "Reduce: Receiving piggyback data\n");
    }
    else fprintf(stderr, "Reduce: Sending piggyback data\n");
  }
#endif

  return err;
}

/* scan? */
int PBSCAN(int size, MPI_Comm comm)
{
  int err = 0;
  GET_PBCOMM(comm);
  /* if pb_comm does not exist (most likely it's during the init phase) */
  if (err == -1)
    return MPI_SUCCESS;

  assert (pb_already_set);
  err = PMPI_Scan(pb_outbuffer, pb_inbuffer, size, 
                  MPI_INT, MPI_MAX, pb_comm);
  return err;
}
#endif /* PIGGYBACK_COLLECTIVES */

/*==========================================================================*/
/* Implementation */


/*------------------------------------------------------------*/
/* External service routines */

int PNMPIMOD_Set_Piggyback(int size,char *ptr)
{
  PBCOPY(pb_outbuffer,ptr,size);
  pb_already_set = 1;
  return MPI_SUCCESS;
}

int PNMPIMOD_Get_Piggyback(int size,char *ptr)
{
  if (ptr)
    PBCOPY(ptr,pb_inbuffer,size);
  pb_already_set = 0;
  return MPI_SUCCESS;
}

int PNMPIMOD_Piggyback_Size(int size)
{
  /* Must be called before first communication */

  piggyback_size=size;
  return MPI_SUCCESS;
}



/*--------------------------------------------------------------------------*/
/* Setup */

/*.......................................................*/
/* Registration */

int PNMPI_RegistrationPoint()
{
  int err;
  PNMPI_Service_descriptor_t service;
  PNMPI_Global_descriptor_t global;

  /* register this module and its services */

  err=PNMPI_Service_RegisterModule(PNMPI_MODULE_PB);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  sprintf(service.name,"set-piggyback");
  service.fct=(PNMPI_Service_Fct_t*) PNMPIMOD_Set_Piggyback;
  sprintf(service.sig,"ip");
  err=PNMPI_Service_RegisterService(&service);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  sprintf(service.name,"get-piggyback");
  service.fct=(PNMPI_Service_Fct_t*) PNMPIMOD_Get_Piggyback;
  sprintf(service.sig,"ip");
  err=PNMPI_Service_RegisterService(&service);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  sprintf(service.name,"piggyback-size");
  service.fct=(PNMPI_Service_Fct_t*) PNMPIMOD_Piggyback_Size;
  sprintf(service.sig,"i");
  err=PNMPI_Service_RegisterService(&service);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  sprintf(global.name,"piggyback-offset");
  global.addr.i=&piggyback_offset;
  global.sig='i';
  err=PNMPI_Service_RegisterGlobal(&global);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  piggyback_size=4;

  return err;
}


/*.......................................................*/
/* Init */


int MPI_Init(int *argc, char ***argv)
{
  int err;
  PNMPI_modHandle_t handle_req,handle_status,handle_comm;
#ifdef PB_COPY
  PNMPI_modHandle_t handle_dt;
#endif
  PNMPI_Service_descriptor_t serv;
  PNMPI_Global_descriptor_t global;


  
#ifdef PB_COPY
  /* query the datatype module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_DATATYPE,&handle_dt);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_dt,"getDatatypeReference","pimp",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  dt_get=(PNMPIMOD_Datatype_getReference_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_dt,"delDatatypeReference","p",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;  
  dt_del=(PNMPIMOD_Datatype_delReference_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_dt,"getDatatypeSize","mp",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;  
  dt_size=(PNMPIMOD_Datatype_getSize_t) ((void*)serv.fct);
#endif

  /* query the request module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_REQUEST,&handle_req);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_req,"add-storage","i",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  req_add=(PNMPIMOD_Requests_RequestStorage_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_req,"map-request","r",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  PNMPIMOD_requestmap=(PNMPIMOD_Requests_MapRequest_t) ((void*)serv.fct);

  err=PNMPI_Service_GetGlobalByName(handle_req,"status-offset",'i',&global);
  if (err!=PNMPI_SUCCESS)
    return err;
  StatusOffsetInRequest=(global.addr.i);


  /* query the status module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_STATUS,&handle_status);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_status,"add-storage","i",&serv);
  if (err!=MPI_SUCCESS)
    return err;
  status_add=(PNMPIMOD_Requests_RequestStorage_t) serv.fct;

  err=PNMPI_Service_GetGlobalByName(handle_status,"total-status-extension",'i',&global);
  if (err!=PNMPI_SUCCESS)
    return err;
  TotalStatusExtension=(global.addr.i);


  /* request to track requests */

  request_offset=req_add(sizeof(char*));
#ifdef PB_TWOMSG
  request_offset_req=req_add(sizeof(MPI_Request));
#ifdef PB_TWOMSG1
  request_offset_buf=req_add(sizeof(void*));
  request_offset_ct=req_add(sizeof(int));
  request_offset_dt=req_add(sizeof(MPI_Datatype));
#endif
#endif
#ifdef PB_PACK
  request_offset_size=req_add(sizeof(int));
  request_offset_pdt=req_add(sizeof(MPI_Datatype));
  request_offset_pbuf=req_add(sizeof(char*));
#endif

  /* query the comm-mapping module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_COMM_MAPPING,&handle_comm);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_comm,"comm-map","r",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  PNMPIMOD_commmap=(PNMPIMOD_Comm_Mapping_t) ((void*)serv.fct);

  /* call the init routines */

  err=PMPI_Init(argc,argv);
  PMPI_Comm_rank (MPI_COMM_WORLD, &myrank);
  PMPI_Comm_size (MPI_COMM_WORLD, &num_procs);
  
  piggyback_size = num_procs * sizeof(int);
  
  piggyback_offset=status_add(piggyback_size);
  pb_outbuffer=(char*)malloc(piggyback_size);
  pb_inbuffer =(char*)malloc(piggyback_size);
  if (pb_outbuffer==NULL || pb_inbuffer==NULL)
    return MPI_ERROR_MEM;
  return err;
}

int MPI_Init_thread(int *argc, char ***argv, int required, int *provided)
{
  int err;
  PNMPI_modHandle_t handle_req,handle_status,handle_comm;
#ifdef PB_COPY
  PNMPI_modHandle_t handle_dt;
#endif
  PNMPI_Service_descriptor_t serv;
  PNMPI_Global_descriptor_t global;


  
#ifdef PB_COPY
  /* query the datatype module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_DATATYPE,&handle_dt);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_dt,"getDatatypeReference","pimp",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  dt_get=(PNMPIMOD_Datatype_getReference_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_dt,"delDatatypeReference","p",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;  
  dt_del=(PNMPIMOD_Datatype_delReference_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_dt,"getDatatypeSize","mp",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;  
  dt_size=(PNMPIMOD_Datatype_getSize_t) ((void*)serv.fct);
#endif

  /* query the request module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_REQUEST,&handle_req);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_req,"add-storage","i",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  req_add=(PNMPIMOD_Requests_RequestStorage_t) ((void*)serv.fct);

  err=PNMPI_Service_GetServiceByName(handle_req,"map-request","r",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  PNMPIMOD_requestmap=(PNMPIMOD_Requests_MapRequest_t) ((void*)serv.fct);

  err=PNMPI_Service_GetGlobalByName(handle_req,"status-offset",'i',&global);
  if (err!=PNMPI_SUCCESS)
    return err;
  StatusOffsetInRequest=(global.addr.i);


  /* query the status module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_STATUS,&handle_status);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_status,"add-storage","i",&serv);
  if (err!=MPI_SUCCESS)
    return err;
  status_add=(PNMPIMOD_Requests_RequestStorage_t) serv.fct;

  err=PNMPI_Service_GetGlobalByName(handle_status,"total-status-extension",'i',&global);
  if (err!=PNMPI_SUCCESS)
    return err;
  TotalStatusExtension=(global.addr.i);


  /* request to track requests */

  request_offset=req_add(sizeof(char*));
#ifdef PB_TWOMSG
  request_offset_req=req_add(sizeof(MPI_Request));
#ifdef PB_TWOMSG1
  request_offset_buf=req_add(sizeof(void*));
  request_offset_ct=req_add(sizeof(int));
  request_offset_dt=req_add(sizeof(MPI_Datatype));
#endif
#endif
#ifdef PB_PACK
  request_offset_size=req_add(sizeof(int));
  request_offset_pdt=req_add(sizeof(MPI_Datatype));
  request_offset_pbuf=req_add(sizeof(char*));
#endif

  /* query the comm-mapping module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_COMM_MAPPING,&handle_comm);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetServiceByName(handle_comm,"comm-map","r",&serv);
  if (err!=PNMPI_SUCCESS)
    return err;
  PNMPIMOD_commmap=(PNMPIMOD_Comm_Mapping_t) ((void*)serv.fct);

  /* call the init routines */

  err=PMPI_Init_thread(argc,argv, required, provided);
  PMPI_Comm_rank (MPI_COMM_WORLD, &myrank);
  PMPI_Comm_size (MPI_COMM_WORLD, &num_procs);
  
  piggyback_size = num_procs * sizeof(int);
  piggyback_offset=status_add(piggyback_size);
  pb_outbuffer=(char*)malloc(piggyback_size);
  pb_inbuffer =(char*)malloc(piggyback_size);
  if (pb_outbuffer==NULL || pb_inbuffer==NULL)
    return MPI_ERROR_MEM;

  return err;
}

/*--------------------------------------------------------------------------*/
/* Point to Point */

int MPI_Send(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  DT_DECLARE_NOPTR(tmp_datatype)
  PACK_DECLARE(ptr,size,pos)
  PACK_ERR_DECLARE_A();

#ifdef PB_DATATYPE

  DT_OUTALLOC(buf,count,datatype,tmp_datatype);
  err=PMPI_Send(MPI_BOTTOM,1,tmp_datatype,dest,tag,comm);
  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  GET_PBCOMM(comm);
  err=PMPI_Send(pb_outbuffer,piggyback_size,MPI_CHAR,dest,tag,pb_comm);
  if (err==MPI_SUCCESS)
    err=PMPI_Send(buf,count,datatype,dest,tag,comm);
#endif

#ifdef PB_TWOMSG2
  int rank;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  err=PMPI_Send(buf,count,datatype,dest,tag,comm);
  if (err==MPI_SUCCESS) {
    GET_PBCOMM(comm);
    err=PMPI_Send(pb_outbuffer,piggyback_size,MPI_CHAR,dest,tag,pb_comm);

  }
#endif

#ifdef PB_PACK1
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  err=PMPI_Send(ptr,size,MPI_PACKED,dest,tag,comm);
  free(ptr);
#endif

#ifdef PB_PACK2
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  err=PMPI_Send(ptr,size,MPI_PACKED,dest,tag,comm);
  free(ptr);
#endif

  return err;
}

int MPI_Bsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  DT_DECLARE_NOPTR(tmp_datatype)
  PACK_DECLARE(ptr,size,pos)
  PACK_ERR_DECLARE_A();

#ifdef PB_DATATYPE
  DT_OUTALLOC(buf,count,datatype,tmp_datatype);
  err=PMPI_Bsend(MPI_BOTTOM,1,tmp_datatype,dest,tag,comm);
  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  GET_PBCOMM(comm);
  err=PMPI_Send(pb_outbuffer,piggyback_size,MPI_CHAR,dest,tag,pb_comm);
  if (err==MPI_SUCCESS)
    err=PMPI_Bsend(buf,count,datatype,dest,tag,comm);
#endif

#ifdef PB_TWOMSG2
  err=PMPI_Bsend(buf,count,datatype,dest,tag,comm);
  if (err==MPI_SUCCESS) {
    GET_PBCOMM(comm);
    err=PMPI_Send(pb_outbuffer,piggyback_size,MPI_CHAR,dest,tag,pb_comm);
  }
#endif

#ifdef PB_PACK1
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  err=PMPI_Bsend(ptr,size,MPI_PACKED,dest,tag,comm);
  free(ptr);
#endif

#ifdef PB_PACK2
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  err=PMPI_Bsend(ptr,size,MPI_PACKED,dest,tag,comm);
  free(ptr);
#endif

  return err;
}

int MPI_Rsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  DT_DECLARE_NOPTR(tmp_datatype)
  PACK_DECLARE(ptr,size,pos)
  PACK_ERR_DECLARE_A();

#ifdef PB_DATATYPE
  DT_OUTALLOC(buf,count,datatype,tmp_datatype);
  err=PMPI_Rsend(MPI_BOTTOM,1,tmp_datatype,dest,tag,comm);
  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  GET_PBCOMM(comm);
  err=PMPI_Rsend(pb_outbuffer,piggyback_size,MPI_CHAR,dest,tag,pb_comm);
  if (err==MPI_SUCCESS)
    err=PMPI_Send(buf,count,datatype,dest,tag,comm);
#endif

#ifdef PB_TWOMSG2
  err=PMPI_Rsend(buf,count,datatype,dest,tag,comm);
  if (err==MPI_SUCCESS) {
     GET_PBCOMM(comm);
     err=PMPI_Send(pb_outbuffer,piggyback_size,MPI_CHAR,dest,tag,pb_comm);
  }
#endif

#ifdef PB_PACK1
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  err=PMPI_Rsend(ptr,size,MPI_PACKED,dest,tag,comm);
  free(ptr);
#endif

#ifdef PB_PACK2
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  err=PMPI_Rsend(ptr,size,MPI_PACKED,dest,tag,comm);
  free(ptr);
#endif

  return err;
}

int MPI_Ssend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int err;
  DT_DECLARE_NOPTR(tmp_datatype)
  PACK_DECLARE(ptr,size,pos)
  PACK_ERR_DECLARE_A();

#ifdef PB_DATATYPE
  DT_OUTALLOC(buf,count,datatype,tmp_datatype);
  err=PMPI_Ssend(MPI_BOTTOM,1,tmp_datatype,dest,tag,comm);
  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  GET_PBCOMM(comm);
  err=PMPI_Ssend(pb_outbuffer,piggyback_size,MPI_CHAR,dest,tag,pb_comm);
  if (err==MPI_SUCCESS)
    err=PMPI_Send(buf,count,datatype,dest,tag,comm);
#endif

#ifdef PB_TWOMSG2
  int rank; MPI_Comm_rank (MPI_COMM_WORLD, &rank);
  err=PMPI_Ssend(buf,count,datatype,dest,tag,comm);
  if (err==MPI_SUCCESS) {
    GET_PBCOMM(comm);
    err=PMPI_Ssend(pb_outbuffer,piggyback_size,MPI_CHAR,dest,tag,pb_comm);
  }

#endif

#ifdef PB_PACK1
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  err=PMPI_Ssend(ptr,size,MPI_PACKED,dest,tag,comm);
  free(ptr);
#endif

#ifdef PB_PACK2
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  err=PMPI_Ssend(ptr,size,MPI_PACKED,dest,tag,comm);
  free(ptr);
#endif

  return err;
}


/*........................................................................*/
/* Async Sends */

int MPI_Isend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  DT_DECLARE(tmp_datatype,ptr)
  TM_DECLARE(ptr)
  REQ_DECLARE(tmp_request)
  PACK_DECLARE(ptr,size,pos)
  PACK_ERR_DECLARE_A();

#ifdef PB_DATATYPE

  DT_REQALLOC(buf,count,datatype,tmp_datatype,ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  err=PMPI_Isend(MPI_BOTTOM,1,tmp_datatype,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  PB_ALLOC(ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  GET_PBCOMM(comm);
  err=PMPI_Isend(ptr,piggyback_size,MPI_CHAR,dest,tag,pb_comm,request);
  if (err==MPI_SUCCESS)
    err=PMPI_Isend(buf,count,datatype,dest,tag,comm,&tmp_request);
  PBPTR_STORAGE(*request,ptr);
  PBREQ_STORAGE(*request,tmp_request);
#endif

#ifdef PB_TWOMSG2
  PB_ALLOC(ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
    err=PMPI_Isend(buf,count,datatype,dest,tag,comm,request);
  if (err==MPI_SUCCESS) {
    GET_PBCOMM(comm);
    err=PMPI_Isend(ptr,piggyback_size,MPI_CHAR,dest,tag,pb_comm,&tmp_request);
  }
  PBPTR_STORAGE(*request,ptr);
  PBREQ_STORAGE(*request,tmp_request);
#endif

#ifdef PB_PACK1
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  err=PMPI_Isend(ptr,size,MPI_PACKED,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
#endif

#ifdef PB_PACK2
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  err=PMPI_Isend(ptr,size,MPI_PACKED,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
#endif

  return err;
}

int MPI_Ibsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  DT_DECLARE(tmp_datatype,ptr)
  TM_DECLARE(ptr)
  REQ_DECLARE(tmp_request)
  PACK_DECLARE(ptr,size,pos)
  PACK_ERR_DECLARE_A();

#ifdef PB_DATATYPE
  DT_REQALLOC(buf,count,datatype,tmp_datatype,ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  err=PMPI_Ibsend(MPI_BOTTOM,1,tmp_datatype,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  PB_ALLOC(ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  GET_PBCOMM(comm);
  err=PMPI_Ibsend(ptr,piggyback_size,MPI_CHAR,dest,tag,pb_comm,request);
  if (err==MPI_SUCCESS)
    err=PMPI_Ibsend(buf,count,datatype,dest,tag,comm,&tmp_request);
  PBPTR_STORAGE(*request,ptr);
  PBREQ_STORAGE(*request,tmp_request);
#endif

#ifdef PB_TWOMSG2
  PB_ALLOC(ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  err=PMPI_Ibsend(buf,count,datatype,dest,tag,comm,request);
  if (err==MPI_SUCCESS) {
    GET_PBCOMM(comm);
    err=PMPI_Ibsend(ptr,piggyback_size,MPI_CHAR,dest,tag,pb_comm,&tmp_request);
  }
  PBPTR_STORAGE(*request,ptr);
  PBREQ_STORAGE(*request,tmp_request);
#endif

#ifdef PB_PACK1
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  err=PMPI_Ibsend(ptr,size,MPI_PACKED,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
#endif

#ifdef PB_PACK2
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  err=PMPI_Ibsend(ptr,size,MPI_PACKED,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
#endif

  return err;
}

int MPI_Irsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  DT_DECLARE(tmp_datatype,ptr)
  TM_DECLARE(ptr)
  REQ_DECLARE(tmp_request)
  PACK_DECLARE(ptr,size,pos)
  PACK_ERR_DECLARE_A();

#ifdef PB_DATATYPE
  DT_REQALLOC(buf,count,datatype,tmp_datatype,ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  err=PMPI_Irsend(MPI_BOTTOM,1,tmp_datatype,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  PB_ALLOC(ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  GET_PBCOMM(comm);
  err=PMPI_Irsend(ptr,piggyback_size,MPI_CHAR,dest,tag,pb_comm,request);
  if (err==MPI_SUCCESS)
    err=PMPI_Isend(buf,count,datatype,dest,tag,comm,&tmp_request);
  PBPTR_STORAGE(*request,ptr);
  PBREQ_STORAGE(*request,tmp_request);
#endif

#ifdef PB_TWOMSG2
  PB_ALLOC(ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  err=PMPI_Irsend(buf,count,datatype,dest,tag,comm,request);
  if (err==MPI_SUCCESS){
    GET_PBCOMM(comm);
    err=PMPI_Isend(ptr,piggyback_size,MPI_CHAR,dest,tag,pb_comm,&tmp_request);
  }
  PBPTR_STORAGE(*request,ptr);
  PBREQ_STORAGE(*request,tmp_request);
#endif

#ifdef PB_PACK1
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  err=PMPI_Irsend(ptr,size,MPI_PACKED,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
#endif

#ifdef PB_PACK2
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  err=PMPI_Irsend(ptr,size,MPI_PACKED,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
#endif

  return err;
}

int MPI_Issend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  DT_DECLARE(tmp_datatype,ptr)
  TM_DECLARE(ptr)
  REQ_DECLARE(tmp_request)
  PACK_DECLARE(ptr,size,pos)
  PACK_ERR_DECLARE_A();

#ifdef PB_DATATYPE
  DT_REQALLOC(buf,count,datatype,tmp_datatype,ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  err=PMPI_Issend(MPI_BOTTOM,1,tmp_datatype,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  PB_ALLOC(ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  GET_PBCOMM(comm);
  err=PMPI_Issend(ptr,piggyback_size,MPI_CHAR,dest,tag,pb_comm,request);
  if (err==MPI_SUCCESS)
    err=PMPI_Isend(buf,count,datatype,dest,tag,comm,&tmp_request);
  PBPTR_STORAGE(*request,ptr);
  PBREQ_STORAGE(*request,tmp_request);
#endif

#ifdef PB_TWOMSG2
  PB_ALLOC(ptr);
  PBCOPYDEF(ptr,pb_outbuffer);
  err=PMPI_Issend(buf,count,datatype,dest,tag,comm,request);
  if (err==MPI_SUCCESS) {
    GET_PBCOMM(comm);
    err=PMPI_Isend(ptr,piggyback_size,MPI_CHAR,dest,tag,pb_comm,&tmp_request);
  }
  PBPTR_STORAGE(*request,ptr);
  PBREQ_STORAGE(*request,tmp_request);
#endif

#ifdef PB_PACK1
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  err=PMPI_Issend(ptr,size,MPI_PACKED,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
#endif

#ifdef PB_PACK2
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  err=PMPI_Issend(ptr,size,MPI_PACKED,dest,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
#endif

  return err;
}


/*........................................................................*/
/* Sync. Receive */

int MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status *status)
{
  int err;
  DT_DECLARE_NOPTR(tmp_datatype)
  PACK_DECLARE(ptr,size,pos)
  PACK_ERR_DECLARE_A()

#ifdef PB_TWOMSG
  MPI_Status status2;
#endif

#ifdef PB_DATATYPE
  DT_STATUSALLOC(buf,count,datatype,status,tmp_datatype);
  err=PMPI_Recv(MPI_BOTTOM,1,tmp_datatype,source,tag,comm,status);
  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  GET_PBCOMM(comm);
  err=PMPI_Recv(&(STATUS_STORAGE(status,piggyback_offset,char)),piggyback_size,MPI_CHAR,source,tag,pb_comm,&status2);
  if (err==MPI_SUCCESS)
    err=PMPI_Recv(buf,count,datatype,status2.MPI_SOURCE,status2.MPI_TAG,comm,status);
#endif

#ifdef PB_TWOMSG2
  err=PMPI_Recv(buf,count,datatype,source,tag,comm,status);
  if (err==MPI_SUCCESS) {
    GET_PBCOMM(comm);
    err=PMPI_Recv(&(STATUS_STORAGE(status,piggyback_offset,char)),piggyback_size,MPI_CHAR,status->MPI_SOURCE,status->MPI_TAG,pb_comm,&status2);
  }
#endif

#ifdef PB_PACK1
  int dtsize,_sz;
  PACKBUF_ALLOC(ptr,size,count,datatype);
  err=PMPI_Recv(ptr,size,MPI_PACKED,source,tag,comm,status);
  _e=MPI_Type_size(datatype,&_sz);
  if (_e!=MPI_SUCCESS) return err;
  _e=MPI_Get_count(status,MPI_PACKED,&dtsize);
  if (_e!=MPI_SUCCESS) return err;
  UNPACK_START(pos);
  PACK_UNPACK_PB(&(STATUS_STORAGE(status,piggyback_offset,char)),ptr,size,pos,comm);
  PACK_UNPACK_DATA(buf,(dtsize-piggyback_size)/_sz,datatype,ptr,size,pos,comm);
  free(ptr);
#endif

#ifdef PB_PACK2
  int dtsize,_sz;
  PACKBUF_ALLOC(ptr,size,count,datatype);
  err=PMPI_Recv(ptr,size,MPI_PACKED,source,tag,comm,status);
  _e=MPI_Type_size(datatype,&_sz);
  if (_e!=MPI_SUCCESS) return err;
  _e=MPI_Get_count(status,MPI_PACKED,&dtsize);
  if (_e!=MPI_SUCCESS) return err;
  UNPACK_START(pos);
  PACK_UNPACK_DATA(buf,(dtsize-piggyback_size)/_sz,datatype,ptr,size,pos,comm);
  PACK_UNPACK_PB(&(STATUS_STORAGE(status,piggyback_offset,char)),ptr,size,pos,comm);
  free(ptr);
#endif

  return err;
}


/*........................................................................*/
/* Async. Receive */

int MPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request *request)
{
  int err;
  DT_DECLARE(tmp_datatype,ptr)
  TM_DECLARE(ptr)
  REQ_DECLARE(tmp_request)
  PACK_DECLARE_NOPOS(ptr,size)
  PACK_ERR_DECLARE_A()

#ifdef PB_DATATYPE
  DT_REQALLOC(buf,count,datatype,tmp_datatype,ptr);
  err=PMPI_Irecv(MPI_BOTTOM,1,tmp_datatype,source,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  PB_ALLOC(ptr);
  GET_PBCOMM(comm);
  err=PMPI_Irecv(ptr,piggyback_size,MPI_CHAR,source,tag,pb_comm,request);
  if ((source!=MPI_ANY_SOURCE) && (tag!=MPI_ANY_TAG) && (err==MPI_SUCCESS))
    {
      err=PMPI_Irecv(buf,count,datatype,source,tag,comm,&tmp_request);
      PBPTR_STORAGE(*request,ptr);
      PBREQ_STORAGE(*request,tmp_request);
    }
  else
    {
      PBPTR_STORAGE(*request,ptr);
      PBBUF_STORAGE(*request,buf);
      PBCT_STORAGE(*request,count);
      PBDT_STORAGE(*request,datatype);
    }
#endif 

#ifdef PB_TWOMSG2
  err=PMPI_Irecv(buf,count,datatype,source,tag,comm,request);
  if ((source!=MPI_ANY_SOURCE) && (tag!=MPI_ANY_TAG) && (err==MPI_SUCCESS))
    {
      PB_ALLOC(ptr);
      GET_PBCOMM(comm);
      err=PMPI_Irecv(ptr,piggyback_size,MPI_CHAR,source,tag,pb_comm,&tmp_request);
      PBPTR_STORAGE(*request,ptr);
      PBREQ_STORAGE(*request,tmp_request);
    }
#endif 

#ifdef PB_PACK
  int dtsize;
  PACKBUF_ALLOC_STSZ(ptr,size,count,datatype,dtsize);
  err=PMPI_Irecv(ptr,size,MPI_PACKED,source,tag,comm,request);
  PBPTR_STORAGE(*request,ptr);
  PBSZ_STORAGE(*request,dtsize);
  PBPDT_STORAGE(*request,datatype);
  PBPBUF_STORAGE(*request,buf);
#endif

  return err;
}


/*........................................................................*/
/* Send/Recv */

int MPI_Sendrecv(void *sendbuf, int sendcount, MPI_Datatype sendtype, int dest, int sendtag, 
		 void *recvbuf, int recvcount, MPI_Datatype recvtype, int source, int recvtag,
		 MPI_Comm comm, MPI_Status *status)
{
  int err;
  DT_DECLARE_NOPTR(tmp1_datatype)
  DT_DECLARE_NOPTR(tmp2_datatype)
#ifdef PB_TWOMSG
  MPI_Status status2;
#endif
  PACK_DECLARE(ptr1,size1,pos1)
  PACK_DECLARE(ptr2,size2,pos2)
  PACK_ERR_DECLARE_A()

#ifdef PB_DATATYPE
  DT_OUTALLOC(sendbuf,sendcount,sendtype,tmp1_datatype);
  DT_STATUSALLOC(recvbuf,recvcount,recvtype,status,tmp2_datatype);

  err=PMPI_Sendrecv(MPI_BOTTOM,1,tmp1_datatype,dest,sendtag,
		    MPI_BOTTOM,1,tmp2_datatype,source,recvtag,comm,status);
  
  DT_FREE(tmp1_datatype);
  DT_FREE(tmp2_datatype);
#endif

#ifdef PB_TWOMSG1
  GET_PBCOMM(comm);
  err=PMPI_Sendrecv(pb_outbuffer,piggyback_size,MPI_CHAR,dest,sendtag,
		    &(STATUS_STORAGE(status,piggyback_offset,char)),piggyback_size,MPI_CHAR,source,recvtag,
		    pb_comm,&status2);
  if (err==MPI_SUCCESS)
    err=PMPI_Sendrecv(sendbuf,sendcount,sendtype,dest,sendtag,
		      recvbuf,recvcount,recvtype,status2.MPI_SOURCE,status2.MPI_TAG,comm,status);
#endif

#ifdef PB_TWOMSG2
  err=PMPI_Sendrecv(sendbuf,sendcount,sendtype,dest,sendtag,
		    recvbuf,recvcount,recvtype,source,recvtag,comm,status);
  if (err==MPI_SUCCESS) {
    GET_PBCOMM(comm);
    err=PMPI_Sendrecv(pb_outbuffer,piggyback_size,MPI_CHAR,dest,sendtag,
		      &(STATUS_STORAGE(status,piggyback_offset,char)),piggyback_size,MPI_CHAR,status->MPI_SOURCE,status->MPI_TAG,
		      pb_comm,&status2);
  }
#endif

#ifdef PB_PACK1
  int dtsize,_sz;
  PACK_START(ptr1,size1,pos1,sendcount,sendtype);
  PACKBUF_ALLOC(ptr2,size2,recvcount,recvtype);
  PACK_ALLOC_PB(ptr1,size1,pos1,comm);
  PACK_ALLOC_DATA(sendbuf,sendcount,sendtype,ptr1,size1,pos1,comm);
  err=PMPI_Sendrecv(ptr1,size1,MPI_PACKED,dest,sendtag,
		    ptr2,size2,MPI_PACKED,source,recvtag,comm,status);
  _e=MPI_Type_size(recvtype,&_sz);
  if (_e!=MPI_SUCCESS) return err;
  _e=MPI_Get_count(status,MPI_PACKED,&dtsize);
  if (_e!=MPI_SUCCESS) return err;
  UNPACK_START(pos2);
  PACK_UNPACK_PB(&(STATUS_STORAGE(status,piggyback_offset,char)),ptr2,size2,pos2,comm);
  PACK_UNPACK_DATA(recvbuf,(dtsize-piggyback_size)/_sz,recvtype,ptr2,size2,pos2,comm);
  free(ptr1);
  free(ptr2);
#endif

#ifdef PB_PACK2
  int dtsize,_sz;
  PACK_START(ptr1,size1,pos1,sendcount,sendtype);
  PACKBUF_ALLOC(ptr2,size2,recvcount,recvtype);
  PACK_ALLOC_DATA(sendbuf,sendcount,sendtype,ptr1,size1,pos1,comm);
  PACK_ALLOC_PB(ptr1,size1,pos1,comm);
  err=PMPI_Sendrecv(ptr1,size1,MPI_PACKED,dest,sendtag,
		    ptr2,size2,MPI_PACKED,source,recvtag,comm,status);
  _e=MPI_Type_size(recvtype,&_sz);
  if (_e!=MPI_SUCCESS) return err;
  _e=MPI_Get_count(status,MPI_PACKED,&dtsize);
  if (_e!=MPI_SUCCESS) return err;
  UNPACK_START(pos2);
  PACK_UNPACK_DATA(recvbuf,(dtsize-piggyback_size)/_sz,recvtype,ptr2,size2,pos2,comm);
  PACK_UNPACK_PB(&(STATUS_STORAGE(status,piggyback_offset,char)),ptr2,size2,pos2,comm);
  free(ptr1);
  free(ptr2);
#endif

  return err;
}

int MPI_Sendrecv_replace(void *buf, int count, MPI_Datatype datatype, int dest, int sendtag, int source, int recvtag, 
			 MPI_Comm comm, MPI_Status *status)
{
  int err;
  DT_DECLARE_NOPTR(tmp_datatype)
#ifdef PB_TWOMSG
  MPI_Status status2;
#endif
  PACK_DECLARE(ptr,size,pos)
  PACK_ERR_DECLARE_A()

#ifdef PB_DATATYPE
  PBCOPYDEF(&(STATUS_STORAGE(status,piggyback_offset,char)),pb_outbuffer);
  DT_STATUSALLOC(buf,count,datatype,status,tmp_datatype);

  err=PMPI_Sendrecv_replace(MPI_BOTTOM,1,tmp_datatype,dest,sendtag,source,recvtag,comm,status);

  DT_FREE(tmp_datatype);
#endif

#ifdef PB_TWOMSG1
  GET_PBCOMM(comm);
  err=PMPI_Sendrecv(pb_outbuffer,piggyback_size,MPI_CHAR,dest,sendtag,
		    &(STATUS_STORAGE(status,piggyback_offset,char)),piggyback_size,MPI_CHAR,source,recvtag,
		    pb_comm,&status2);
  if (err==MPI_SUCCESS)
    err=PMPI_Sendrecv_replace(buf,count,datatype,dest,sendtag,status2.MPI_SOURCE,status2.MPI_TAG,comm,status);
#endif

#ifdef PB_TWOMSG2
  err=PMPI_Sendrecv_replace(buf,count,datatype,sendtag,dest,recvtag,dest,comm,status);
  if (err==MPI_SUCCESS) {
    GET_PBCOMM(comm);
    err=PMPI_Sendrecv(pb_outbuffer,piggyback_size,MPI_CHAR,dest,sendtag,
		      &(STATUS_STORAGE(status,piggyback_offset,char)),piggyback_size,MPI_CHAR,status->MPI_SOURCE,status->MPI_TAG,
		      pb_comm,&status2);
  }
#endif

#ifdef PB_PACK1
  int dtsize,_sz;
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  err=PMPI_Sendrecv_replace(ptr,size,MPI_PACKED,dest,sendtag,source,recvtag,comm,status);
  _e=MPI_Type_size(datatype,&_sz);
  if (_e!=MPI_SUCCESS) return err;
  _e=MPI_Get_count(status,MPI_PACKED,&dtsize);
  if (_e!=MPI_SUCCESS) return err;
  UNPACK_START(pos);
  PACK_UNPACK_PB(&(STATUS_STORAGE(status,piggyback_offset,char)),ptr,size,pos,comm);
  PACK_UNPACK_DATA(buf,(dtsize-piggyback_size)/_sz,datatype,ptr,size,pos,comm);
  free(ptr);
#endif

#ifdef PB_PACK2
  int dtsize,_sz;
  PACK_START(ptr,size,pos,count,datatype);
  PACK_ALLOC_DATA(buf,count,datatype,ptr,size,pos,comm);
  PACK_ALLOC_PB(ptr,size,pos,comm);
  err=PMPI_Sendrecv_replace(ptr,size,MPI_PACKED,dest,sendtag,source,recvtag,comm,status);
  _e=MPI_Type_size(datatype,&_sz);
  if (_e!=MPI_SUCCESS) return err;
  _e=MPI_Get_count(status,MPI_PACKED,&dtsize);
  if (_e!=MPI_SUCCESS) return err;
  UNPACK_START(pos);
  PACK_UNPACK_DATA(buf,(dtsize-piggyback_size)/_sz,datatype,ptr,size,pos,comm);
  PACK_UNPACK_PB(&(STATUS_STORAGE(status,piggyback_offset,char)),ptr,size,pos,comm);
  free(ptr);
#endif

  return err;
}


/*........................................................................*/
/* Waits */

int MPI_Wait(MPI_Request *request, MPI_Status *status)
{
  int err;
  PACK_ERR_DECLARE_A();

  err=PMPI_Wait(request,status);
  if (COMM_REQ_FROM_STATUS(status).inreq!=MPI_REQUEST_NULL)  
    {
      ASYNC_COMPLETE(status,1,0);
    }

  return err;
}

int MPI_Waitany(int count, MPI_Request *array_of_requests, int *index, MPI_Status *status)
{
  int err;
  PACK_ERR_DECLARE_A();

  err=PMPI_Waitany(count,array_of_requests,index,status);
  if (COMM_REQ_FROM_STATUS(status).inreq!=MPI_REQUEST_NULL)  
    {
      ASYNC_COMPLETE(status,1,0);
    }

  return err;
}

int MPI_Waitsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err,i;
  PACK_ERR_DECLARE_A();

  err=PMPI_Waitsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);

  if (*outcount!=MPI_UNDEFINED)
    {
      for (i=0; i<*outcount; i++)
	{
	  if (COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i).inreq!=MPI_REQUEST_NULL)  
	    {
	      ASYNC_COMPLETE(array_of_statuses,count,i);
	    }
	}
    }

  return err;  
}


int MPI_Waitall(int count, MPI_Request *array_of_requests, MPI_Status *array_of_statuses)
{
  int err,i;
  PACK_ERR_DECLARE_A();

  err=PMPI_Waitall(count,array_of_requests,array_of_statuses);

  for (i=0; i<count; i++)
    {
      if (COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i).inreq!=MPI_REQUEST_NULL)  
	{
	  ASYNC_COMPLETE(array_of_statuses,count,i);
	}
    }

  return err;
}


/*........................................................................*/
/* Tests */

int MPI_Test(MPI_Request *request, int *flag, MPI_Status *status)
{
  int err;
  PACK_ERR_DECLARE_A();

  err=PMPI_Test(request, flag, status);
  if ((*flag) && (COMM_REQ_FROM_STATUS(status).inreq!=MPI_REQUEST_NULL))
    {
      ASYNC_COMPLETE(status,1,0);
    }

  return err;
}

int MPI_Testany(int count, MPI_Request *array_of_requests, int *index, int *flag, MPI_Status *status)
{
  int err;
  PACK_ERR_DECLARE_A();

  err=PMPI_Testany(count,array_of_requests,index,flag,status);
  if ((*flag) && (COMM_REQ_FROM_STATUS(status).inreq!=MPI_REQUEST_NULL))
    {
      ASYNC_COMPLETE(status,1,0);
    }

  return err;  
}

int MPI_Testsome(int count, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses)
{
  int err,i;
  PACK_ERR_DECLARE_A();

  err=PMPI_Testsome(count,array_of_requests,outcount,array_of_indices,array_of_statuses);

  if (*outcount!=MPI_UNDEFINED)
    {
      for (i=0; i<*outcount; i++)
	{
	  if (COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i).inreq!=MPI_REQUEST_NULL)  
	    {
	      ASYNC_COMPLETE(array_of_statuses,count,i);
	    }
	}
    }

  return err;  
}

int MPI_Testall(int count, MPI_Request *array_of_requests, int *flag, MPI_Status *array_of_statuses)
{
  int err,i;
  PACK_ERR_DECLARE_A();
  err=PMPI_Testall(count, array_of_requests, flag, array_of_statuses);

  if (*flag) 
    {
      for (i=0; i<count; i++)
	{

	  if (COMM_REQ_FROM_STATUSARRAY(array_of_statuses,count,i).inreq!=MPI_REQUEST_NULL)  
	    {
	      ASYNC_COMPLETE(array_of_statuses,count,i);
	    }
	}
    }

  return err;
}

/* Handle Get_count and Get_Elements */
#ifdef PB_DATATYPE
int MPI_Get_count(MPI_Status *status, MPI_Datatype datatype, int *count)
{
  int err;
  int msg_size;
  int user_type_size;
  int user_msg_size;
  PMPI_Type_size(datatype,&user_type_size);
  err=PMPI_Get_elements(status, MPI_CHAR, &msg_size);
  if (err == MPI_SUCCESS) {
    user_msg_size = msg_size - piggyback_size;
    if (user_msg_size % user_type_size == 0)
      *count = user_msg_size / user_type_size;
    else 
      *count = MPI_UNDEFINED;
  }
  return err;
}

#endif

/* COLLECTIVES */
/* All collective piggybacking is done through the two message scheme
 * The piggyback must have been set by the module that is using this piggyback
 * service
 */
#ifdef PIGGYBACK_COLLECTIVES

/* - ONE TO ALL - */
#ifdef PIGGYBACK_ONE_TO_ALL
int MPI_Bcast(void* buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm)
{
  int err = PBBROADCAST(piggyback_size/(int)sizeof(int), root, comm);

  if (err==MPI_SUCCESS)
    err=PMPI_Bcast(buffer, count, datatype, root, comm);

  return err;
}

int MPI_Scatter(void* sendbuf, int sendcnt, MPI_Datatype sendtype, 
                void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                int root, MPI_Comm comm)
{
  int err = PBBROADCAST(piggyback_size/(int)sizeof(int), root, comm);

  if (err==MPI_SUCCESS)
    err=PMPI_Scatter(sendbuf, sendcnt, sendtype,
                     recvbuf, recvcnt, recvtype, 
                     root, comm);

  return err;
}

int MPI_Scatterv(void* sendbuf, int* sendcnts, int* displs, MPI_Datatype sendtype, 
                 void* recvbuf, int recvcnt, MPI_Datatype recvtype,
                 int root, MPI_Comm comm)
{
  int err = PBBROADCAST(piggyback_size/(int)sizeof(int), root, comm);

  if (err==MPI_SUCCESS)
    err=PMPI_Scatterv(sendbuf, sendcnts, displs, sendtype,
                      recvbuf, recvcnt, recvtype, 
                      root, comm);

  return err;
}
#endif /* PIGGYBACK_ONE_TO_ALL */
/*.......................................................*/
/* ALL TO ONE */
#ifdef PIGGYBACK_ALL_TO_ONE
int MPI_Gather(void* sendbuf, int sendcnt, MPI_Datatype sendtype,
               void* recvbuf, int recvcnt, MPI_Datatype recvtype,
               int root, MPI_Comm comm)
{
  int err = PBREDUCE(piggyback_size/(int)sizeof(int), root, comm);
  if (err==MPI_SUCCESS)
    err=PMPI_Gather(sendbuf, sendcnt, sendtype,
                    recvbuf, recvcnt, recvtype, 
                    root, comm);

  return err;    
}

int MPI_Gatherv(void* sendbuf, int sendcnt, MPI_Datatype sendtype,
                void* recvbuf, int* recvcnts, int* displs, 
                MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  int err = PBREDUCE(piggyback_size/(int)sizeof(int), root, comm);
  if (err == MPI_SUCCESS)
    err=PMPI_Gatherv(sendbuf, sendcnt, sendtype,
                     recvbuf, recvcnts, displs, recvtype, 
                     root, comm);
  return err;
}
    
int MPI_Reduce(void* sendbuf, void* recvbuf, int count, 
               MPI_Datatype datatype, MPI_Op op, int root,
               MPI_Comm comm)
{
  int err = PBREDUCE(piggyback_size/(int)sizeof(int), root, comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Reduce(sendbuf, recvbuf, count,
                      datatype, op, root, comm);

  return err;
}
#endif /* PIGGYBACK_ALL_TO_ONE */

/*.......................................................*/
/* ALL TO ALL */
#ifdef PIGGYBACK_ALL_TO_ALL
int MPI_Allgather(void *sendbuf, int sendcnt, MPI_Datatype sendtype,
                  void *recvbuf, int recvcnt, MPI_Datatype recvtype, 
                  MPI_Comm comm)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Allgather(sendbuf, sendcnt, sendtype,
                         recvbuf, recvcnt, recvtype, comm);
  return err;
}

int MPI_Allgatherv(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                   void *recvbuf, int *recvcnts, int *displs, 
                   MPI_Datatype recvtype, MPI_Comm comm)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Allgatherv(sendbuf, sendcnt, sendtype,
                          recvbuf, recvcnts, displs, 
                          recvtype, comm);
  return err;
}

int MPI_Alltoall(void *sendbuf, int sendcnt, MPI_Datatype sendtype, 
                 void *recvbuf, int recvcnt, MPI_Datatype recvtype, 
                 MPI_Comm comm)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Alltoall(sendbuf, sendcnt, sendtype,
                        recvbuf, recvcnt, recvtype, comm);
  return err;
}

int MPI_Alltoallv(void *sendbuf, int *sendcnts, int *sdispls, MPI_Datatype sendtype, 
                  void *recvbuf, int *recvcnts, int *rdispls, MPI_Datatype recvtype, 
                  MPI_Comm comm)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Alltoallv(sendbuf, sendcnts, sdispls, sendtype,
                         recvbuf, recvcnts, rdispls, recvtype, 
                         comm);
  return err;
}

int MPI_Allreduce(void *sendbuf, void *recvbuf, int count, 
                  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Allreduce(sendbuf, recvbuf, count, datatype,
                         op, comm);
  return err;
}

int MPI_Reduce_scatter(void *sendbuf, void *recvbuf, int *recvcnts, 
                       MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Reduce_scatter(sendbuf, recvbuf, recvcnts, datatype,
                              op, comm);
  return err;
}
 
/* BARRIER */
int MPI_Barrier(MPI_Comm comm)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Barrier(comm);
  return err;
}
 
/* SCAN */
int MPI_Scan(void* sendbuf, void* recvbuf, int count,
             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int err = PBSCAN(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
  return err;
}
#endif /* PIGGYBACK_ALL_TO_ALL */

/*.......................................................*/
/* COMMUNICATOR COLLECTIVES */
#ifdef PIGGYBACK_COMM_COLLECTIVES
int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *comm_out)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS) {
    err = PMPI_Comm_dup(comm, comm_out);
  }
  return err;
}

int MPI_Comm_free(MPI_Comm *comm)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), *comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Comm_free(comm);
  return err;
}

int MPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *comm_out)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Comm_create(comm, group, comm_out);
  return err;

}

int MPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *comm_out)
{
  int err = PBALLREDUCE(piggyback_size/(int)sizeof(int), comm);
  if (err == MPI_SUCCESS)
    err = PMPI_Comm_split(comm, color, key, comm_out);
  return err;

}
#endif /* PIGGYBACK_COMM_COLLECTIVES */

/* Finalize */
int MPI_Finalize() {
  
  /* piggyback communicator is already destroyed, need to use comm_world */
  int err = PMPI_Allreduce_NewStack(1000, pb_outbuffer, pb_inbuffer, piggyback_size/(int)sizeof(int),
                                    MPI_INT, MPI_MAX, MPI_COMM_WORLD);
  err = PMPI_Finalize();
  return err;
}
#endif /* PIGGYBACK_COLLECTIVES*/
/*.......................................................*/


