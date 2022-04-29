#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <sys/time.h>
#include <math.h>

#include "commsub.h"


#define SPECIALTAG 423


/*--------------------------------------------------------------------*/
/* timing */

typedef double mytime_t;

mytime_t comp_time_start;
mytime_t comm_time_start;
mytime_t mid2_overhead_o;
mytime_t blocktime_start;


/*--------------------------------------------------------------------*/
/* Statistics Types */

#define CPTYPE_DOUBLE 5
#define CPTYPE_INT    7

typedef struct cptime_pb_d
{
  mytime_t cptime;
  mytime_t overhead;
  mytime_t block_sum;
  mytime_t block_min;
  mytime_t block_max;
  int      last,myid;
  int      ops;
  int      recvops;
  int      change;
  int      flip;
  int      local_alt;
} cptime_pb_t;


#define LOCTYPE_DOUBLE 19
#define LOCTYPE_INT    3

typedef struct loctime_d
{
  mytime_t comm_r;
  mytime_t comm_b;
  mytime_t comm_s;
  mytime_t comm_o;
  mytime_t comm_u;
  mytime_t comm_y;
  mytime_t comp;
  mytime_t overhead_s;
  mytime_t overhead_r;
  mytime_t overhead_b;
  mytime_t overhead_o;
  mytime_t overhead_u;
  mytime_t overhead_y;
  mytime_t block_sum;
  mytime_t block_min;
  mytime_t block_max;
  mytime_t app_start;
  mytime_t app_end;
  mytime_t barrier;
  int      mpi_ops;
  int      mpi_recv;
  int      mpi_block;
} loctime_t;


/*--------------------------------------------------------------------*/
/* Support type for asynchronous communication */

typedef struct reqstore_d 
{ 
  MPI_Request req; 
  cptime_pb_t cp;
} reqstore_t;


/*--------------------------------------------------------------------*/
/* Global variables */

/* MPI information */

int critpath_myid;
int critpath_tasks;
MPI_Datatype cp_type,loc_type;

/* cp statistics */

cptime_pb_t cpstat;
loctime_t  locstat;

/* local op stack level */

int op_stack;


/*--------------------------------------------------------------------*/
/* timing */

//#define DEBUGME

#if 0
inline mytime_t mytime_getTimeStamp()
{
  struct timeval tv;
  double v;

  gettimeofday(&tv,NULL);
  v=((double)tv.tv_sec)+(((double)tv.tv_usec)/1000000.0);

#ifdef DEBUGME
  if (critpath_myid==0)
    printf("TIMING: %f %f\n",
	   locstat.comm_r+locstat.comm_b+locstat.comm_s+locstat.comm_o+locstat.comm_u+locstat.comp+
	   locstat.overhead_r+locstat.overhead_s+locstat.overhead_o+locstat.overhead_b+locstat.overhead_u,
	   v-locstat.app_start);
#endif
  
  return v;
}

#else

inline mytime_t mytime_getTimeStamp()
{
  return MPI_Wtime();
}

#endif


/*--------------------------------------------------------------------*/
/* Init */

void COMM_ALL_INIT(int argc, char**argv) 
{
  MPI_Datatype cp_basetypes[2] = {MPI_DOUBLE,MPI_INT};
  int          cp_blocklens[2] = {CPTYPE_DOUBLE,CPTYPE_INT};
  MPI_Aint     cp_offsets[2]   = {0,CPTYPE_DOUBLE*sizeof(double)};

  MPI_Datatype loc_basetypes[2] = {MPI_DOUBLE,MPI_INT};
  int          loc_blocklens[2] = {LOCTYPE_DOUBLE,LOCTYPE_INT};
  MPI_Aint     loc_offsets[2]   = {0,LOCTYPE_DOUBLE*sizeof(double)};

  /* base information */

  PMPI_Comm_size(MPI_COMM_WORLD, &critpath_tasks);
  PMPI_Comm_rank(MPI_COMM_WORLD, &critpath_myid);

  /* create custom datatype for CP */

  PMPI_Type_struct(2,cp_blocklens,cp_offsets,cp_basetypes,&cp_type);
  PMPI_Type_commit(&cp_type);

  /* create custom datatype for local */

  PMPI_Type_struct(2,loc_blocklens,loc_offsets,loc_basetypes,&loc_type);
  PMPI_Type_commit(&loc_type);

  /* do not emulate collectives, don't worry about data */

  pnmpimod_comm_collective_support = PNMPIMOD_COMM_KEEPCOLLECTIVE|PNMPIMOD_COMM_IGNOREDATA;

  /* initialize */

  cpstat.cptime=0.0;
  cpstat.overhead=0.0;
  cpstat.block_sum=0.0;
  cpstat.block_min=-1.0;
  cpstat.block_max=0.0;
  cpstat.last=-1;
  cpstat.myid=critpath_myid;
  cpstat.ops=0;
  cpstat.recvops=0;
  cpstat.change=0;
  cpstat.flip=0;
  cpstat.local_alt=0;

  locstat.comp=0.0;
  locstat.comm_r=0.0;
  locstat.comm_u=0.0;
  locstat.comm_y=0.0;
  locstat.comm_b=0.0;
  locstat.comm_s=0.0;
  locstat.comm_o=0.0;
  locstat.overhead_b=0.0;
  locstat.overhead_r=0.0;
  locstat.overhead_s=0.0;
  locstat.overhead_o=0.0;
  locstat.overhead_u=0.0;
  locstat.overhead_y=0.0;
  locstat.block_sum=0.0;
  locstat.block_min=-1.0;
  locstat.block_max=0.0;
  locstat.barrier=0.0;
  locstat.mpi_ops=0;
  locstat.mpi_recv=0;
  locstat.mpi_block=0;

  op_stack=0;

  mid2_overhead_o=0.0;

  PMPI_Barrier(MPI_COMM_WORLD);
  PMPI_Barrier(MPI_COMM_WORLD);
  comp_time_start=mytime_getTimeStamp();
  locstat.app_start=comp_time_start;
}


/*--------------------------------------------------------------------*/
/* Finalize */

void COMM_ALL_FINALIZE() 
{
  int i;
  MPI_Status status;
  mytime_t   barr_sum,barr_var;
  mytime_t   comu_sum,comu_var;
  mytime_t   comy_sum,comy_var;
  mytime_t   comm_sum,comm_var;
  mytime_t   comr_sum,comr_var;
  mytime_t   coms_sum,coms_var;
  mytime_t   como_sum,como_var;
  mytime_t   comp_sum,comp_var;
  mytime_t   over_sum,over_var;
  mytime_t   bloc_sum,bloc_var;
  mytime_t   comb_sum,comb_var;
  mytime_t   comp_time_end,comm_loc,over_loc,real_block;
  loctime_t  remstat;

  MPI_Barrier(MPI_COMM_WORLD);
  comp_time_end=mytime_getTimeStamp();
  PMPI_Barrier(MPI_COMM_WORLD);
  locstat.app_end=comp_time_end;
  locstat.comp+=comp_time_end-comp_time_start;
  cpstat.cptime+=comp_time_end-comp_time_start;  
  
  if (critpath_myid==0)
    {
      printf("----------------------------------------\n");
      printf("Critical path results\n\n");
      printf("Total time:   %f\n",locstat.app_end-locstat.app_start);
      printf("CP Comp time: %f\n",cpstat.cptime);
      printf("CP Overhead:  %f\n",cpstat.overhead);
      printf("CP Comm time: %f\n",locstat.app_end-locstat.app_start-cpstat.cptime-cpstat.overhead);
      printf("MPI Ops:      %i\n",cpstat.ops);
      printf("MPI Recvs:    %i\n",cpstat.recvops);
      printf("CP Switches:  %i\n",cpstat.change);
      printf("Flip/Flops:   %i\n",cpstat.flip);
      printf("Local Alt.:   %i\n",cpstat.local_alt);
      printf("Block time:   sum: %f, avg: %f, min: %f, max %f\n",
	     cpstat.block_sum,cpstat.block_sum/cpstat.change,cpstat.block_min,cpstat.block_max);
      printf("Avg./CP seg.: time: %f, recv ops %f, all ops %f\n",
	     cpstat.cptime/cpstat.change,
	     ((double)cpstat.recvops)/cpstat.change,
	     ((double)cpstat.ops)/cpstat.change);
      printf("----------------------------------------\n");
      printf("Local results\n\n");
      printf("Rank\tComp\tComm\tSum\tApp\tSend\tS-SU\tNB-Rcv\tB-Recv\tR-SU\tOther\tOverh.\tBl-R\tBl-B\tR-Blk\tMin\tMax\tOps\tRecv\tBlock\n");
      comr_sum=0;
      comm_sum=0;
      comb_sum=0;
      coms_sum=0;
      como_sum=0;
      comp_sum=0;
      comu_sum=0;
      comy_sum=0;
      over_sum=0;
      bloc_sum=0;
      barr_sum=0;
      comr_var=0;
      comm_var=0;
      comb_var=0;
      coms_var=0;
      como_var=0;
      comp_var=0;
      comu_var=0;
      comy_var=0;
      over_var=0;
      bloc_var=0;
      barr_var=0;
      for (i=0; i<critpath_tasks; i++)
	{
	  if (i==0)
	    remstat=locstat;
	  else
	    PMPI_Recv(&remstat,1,loc_type,i,SPECIALTAG,MPI_COMM_WORLD,&status);

	  real_block=remstat.comm_b-(remstat.comm_r/(remstat.mpi_recv-remstat.mpi_block))*remstat.mpi_block;
	  
	  comm_loc=remstat.comm_r+remstat.comm_b+remstat.comm_s+remstat.comm_o+remstat.comm_u+remstat.comm_y;
	  over_loc=remstat.overhead_r+remstat.overhead_s+remstat.overhead_o+remstat.overhead_b+
	    remstat.overhead_u+remstat.overhead_y;

	  printf("%i\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%i\t%i\t%i\n",
		 i,
		 remstat.comp,comm_loc,
		 remstat.comp+comm_loc+over_loc,
		 remstat.app_end-remstat.app_start,
		 remstat.comm_s, remstat.comm_y,
		 remstat.comm_r, remstat.comm_b, remstat.comm_u,remstat.comm_o,
		 over_loc,
		 remstat.block_sum,
		 remstat.barrier,
		 real_block,
		 remstat.block_min,
		 remstat.block_max,
		 remstat.mpi_ops,
		 remstat.mpi_recv,
		 remstat.mpi_block);

	  comr_sum+=remstat.comm_r;
	  comb_sum+=remstat.comm_b;
	  coms_sum+=remstat.comm_s;
	  como_sum+=remstat.comm_o;
	  comp_sum+=remstat.comp;
	  comu_sum+=remstat.comm_u;
	  comy_sum+=remstat.comm_y;
	  comm_sum+=comm_loc;
	  over_sum+=over_loc;
	  bloc_sum+=remstat.block_sum;
	  barr_sum+=remstat.barrier;

	  comr_var+=remstat.comm_r*remstat.comm_r;
	  comb_var+=remstat.comm_b*remstat.comm_b;
	  coms_var+=remstat.comm_s*remstat.comm_s;
	  como_var+=remstat.comm_o*remstat.comm_o;
	  comp_var+=remstat.comp*remstat.comp;
	  comu_var+=remstat.comm_u*remstat.comm_u;
	  comy_var+=remstat.comm_y*remstat.comm_y;
	  comm_var+=comm_loc*comm_loc;
	  over_var+=over_loc*over_loc;
	  bloc_var+=remstat.block_sum*remstat.block_sum;
	  barr_var+=remstat.barrier*remstat.barrier;
	}
      printf("AVG\t%.3f\t%.3f\t\t\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n",
	     comp_sum/critpath_tasks,
	     comm_sum/critpath_tasks,
	     coms_sum/critpath_tasks,
	     comy_sum/critpath_tasks,
	     comr_sum/critpath_tasks,
	     comb_sum/critpath_tasks,
	     comu_sum/critpath_tasks,
	     como_sum/critpath_tasks,
	     over_sum/critpath_tasks,
	     bloc_sum/critpath_tasks,
	     barr_sum/critpath_tasks);
      printf("StdDev\t%.3f\t%.3f\t\t\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n",
	     sqrt((comp_var/critpath_tasks)-(comp_sum/critpath_tasks)*(comp_sum/critpath_tasks)),
	     sqrt((comm_var/critpath_tasks)-(comm_sum/critpath_tasks)*(comm_sum/critpath_tasks)),
	     sqrt((coms_var/critpath_tasks)-(coms_sum/critpath_tasks)*(coms_sum/critpath_tasks)),
	     sqrt((comy_var/critpath_tasks)-(comy_sum/critpath_tasks)*(comy_sum/critpath_tasks)),
	     sqrt((comr_var/critpath_tasks)-(comr_sum/critpath_tasks)*(comr_sum/critpath_tasks)),
	     sqrt((comb_var/critpath_tasks)-(comb_sum/critpath_tasks)*(comb_sum/critpath_tasks)),
	     sqrt((comu_var/critpath_tasks)-(comu_sum/critpath_tasks)*(comu_sum/critpath_tasks)),
	     sqrt((como_var/critpath_tasks)-(como_sum/critpath_tasks)*(como_sum/critpath_tasks)),
	     sqrt((over_var/critpath_tasks)-(over_sum/critpath_tasks)*(over_sum/critpath_tasks)),
	     sqrt((bloc_var/critpath_tasks)-(bloc_sum/critpath_tasks)*(bloc_sum/critpath_tasks)),
	     sqrt((barr_var/critpath_tasks)-(barr_sum/critpath_tasks)*(barr_sum/critpath_tasks)));
      fflush(stdout);
    }
  else
    {
      PMPI_Send(&locstat,1,loc_type,0,SPECIALTAG,MPI_COMM_WORLD);
    }
  PMPI_Barrier(MPI_COMM_WORLD);
}


/*--------------------------------------------------------------------*/
/* Send Callbacks */

void SEND_P2P_START(void *buf, int count, MPI_Datatype dt, int node, int tag, 
		    MPI_Comm comm, void **ptr, int type) 
{
#ifdef DEBUGME
  if (critpath_myid==0)
    printf("Send start\n");
#endif

  if (op_stack==0)
    {
      comm_time_start=mytime_getTimeStamp();
      locstat.comp+=comm_time_start-comp_time_start;
      cpstat.cptime+=comm_time_start-comp_time_start;
    }
  op_stack++;
}

void SEND_P2P_ASYNC_MID1(void *buf, int count, MPI_Datatype dt, int node, int tag, 
			 MPI_Comm comm, void **ptr, int type) 
{
  mytime_t overhead_start,overhead_end;

#ifdef DEBUGME
  if (critpath_myid==0)
    printf("Send mid1\n");
#endif

  overhead_start=mytime_getTimeStamp();
  locstat.comm_y+=overhead_start-comm_time_start;

  op_stack--;

  locstat.mpi_ops++;
  cpstat.ops++;

  *ptr=(void*) malloc(sizeof(reqstore_t));
  ((reqstore_t*) *ptr)->cp=cpstat;
  PMPI_Isend(&(((reqstore_t*) *ptr)->cp),1,cp_type,node,tag,comm,&(((reqstore_t*) *ptr)->req));

  overhead_end=mytime_getTimeStamp();
  comm_time_start=overhead_end;
  
  if (op_stack==0)
    {
      comp_time_start=overhead_end;
    }

  cpstat.overhead+=overhead_end-overhead_start;
  locstat.overhead_y+=overhead_end-overhead_start;
}

void COMM_P2P_ASYNC_MID2(int count, MPI_Request *requests, int flag, void **midptr) 
{
  mytime_t overhead_start,overhead_end;
  int res;
 
#ifdef DEBUGME
  if (critpath_myid==0)
    printf("Async mid2\n");
#endif

  overhead_start=mytime_getTimeStamp();

  if (op_stack==0)
    {
      locstat.comp+=overhead_start-comp_time_start;
      cpstat.cptime+=overhead_start-comp_time_start;
    }

  if ((flag&PNMPIMOD_COMM_TESTWAITMASK)==PNMPIMOD_COMM_WAIT)
    {
      int i,c;
      MPI_Status status;
      
      /* wait operation - need to check for message */

      c=0;
      for (i=0; i<0; i++)
	{
	  PNMPIMOD_Requests_Parameters_t *reqinfo=PNMPIMOD_requestmap(requests[i]);
	  if (reqinfo->type==PNMPIMOD_REQUESTS_RECV)
	    {
	      PMPI_Iprobe(reqinfo->node,
			  reqinfo->tag,
			  reqinfo->comm,
			  &res, &status);
	      if (res)
		c++;
	    }
	  else
	    {
	      c++;
	    }
	}

      if ((((flag&PNMPIMOD_COMM_COMPLETEMASK)==PNMPIMOD_COMM_ALL) && (c==count)) ||
          (((flag&PNMPIMOD_COMM_COMPLETEMASK)!=PNMPIMOD_COMM_ALL) && (c>0)))
	{
	  /* we found the necessary messages */
	  *midptr=PNMPIMOD_COMM_FOUNDMSG;
	}
      else
	{
	  /* we did not find the necessary messages, will have to wait */
	  *midptr=PNMPIMOD_COMM_NOMSG;
	}

      overhead_end=mytime_getTimeStamp();
      blocktime_start=overhead_end;
      cpstat.overhead+=overhead_end-overhead_start;
      mid2_overhead_o=overhead_end-overhead_start;

      comm_time_start=overhead_end;
   }
  else
    {
      /* tests never block */

      *midptr=PNMPIMOD_COMM_FOUNDMSG;
      mid2_overhead_o=0.0;
      comm_time_start=overhead_start;
    }

  op_stack+=count;
}

void COMM_P2P_ASYNC_COMPLETION(int type)
{
#ifdef DEBUGME
  if (critpath_myid==0)
    printf("Async complete\n");
#endif

  if (op_stack!=0)
    {
      comp_time_start=mytime_getTimeStamp();
      locstat.comm_o+=comp_time_start-comm_time_start;
      locstat.overhead_o+=mid2_overhead_o;
      mid2_overhead_o=0.0;
      op_stack=0;
    }
}


void SEND_P2P_END(void *buf, int count, MPI_Datatype dt, int node, int tag, 
		  MPI_Comm comm, int err, void **ptr, void **midptr, int type) 
{
  mytime_t overhead_start,overhead_end;

#ifdef DEBUGME
  if (critpath_myid==0)
    printf("Send end\n");
#endif

  overhead_start=mytime_getTimeStamp();
  locstat.comm_s+=overhead_start-comm_time_start;

  op_stack--;

  locstat.mpi_ops++;  
  cpstat.ops++;

  if (type!=PNMPIMOD_COMM_ASYNC_P2P)
    {
      PMPI_Send(&cpstat,1,cp_type,node,tag,comm);
    }
  else
    {
      MPI_Status status;
      PMPI_Wait(&(((reqstore_t*) *ptr)->req),&status);
      free(*ptr);
    }

  overhead_end=mytime_getTimeStamp();

  comm_time_start=overhead_end;
  blocktime_start=overhead_end;

  if (op_stack==0)
    {
      comp_time_start=overhead_end;
    }

  cpstat.overhead+=overhead_end-overhead_start;
  locstat.overhead_s+=overhead_end-overhead_start+mid2_overhead_o;
  mid2_overhead_o=0.0;
}


/*--------------------------------------------------------------------*/
/* Recv Callbacks */

void RECV_P2P_START(void *buf, int count, MPI_Datatype dt, int node, int tag, 
		    MPI_Comm comm, void **ptr, int type) 
{
  mytime_t overhead_start,overhead_end;
  int flag;
  MPI_Status status;

#ifdef DEBUGME
  if (critpath_myid==0)
    printf("Recv start\n");
#endif

  overhead_start=mytime_getTimeStamp();

  if (op_stack==0)
    {
      locstat.comp+=overhead_start-comp_time_start;
      cpstat.cptime+=overhead_start-comp_time_start;
    }

  if (type!=PNMPIMOD_COMM_ASYNC_P2P)
    {
      PMPI_Iprobe(node,tag,comm,&flag,&status);
      if (flag)
	*ptr=PNMPIMOD_COMM_FOUNDMSG;
      else
	*ptr=PNMPIMOD_COMM_NOMSG;
    }
     
  overhead_end=mytime_getTimeStamp();
  blocktime_start=overhead_end;

  cpstat.overhead+=overhead_end-overhead_start;
  locstat.overhead_r+=overhead_end-overhead_start;
  comm_time_start=overhead_end;
  op_stack++;
}

void RECV_P2P_ASYNC_MID1(void *buf, int count, MPI_Datatype dt, int node, int tag, 
			 MPI_Comm comm, int err, void **ptr, int type) 
{
  mytime_t overhead_start,overhead_end;

#ifdef DEBUGME
  if (critpath_myid==0)
    printf("Recv mid1\n");
#endif

  overhead_start=mytime_getTimeStamp();
  locstat.comm_u+=overhead_start-comm_time_start;

  op_stack--;

  cpstat.ops++;
  locstat.mpi_ops++;

  *ptr=(void*) malloc(sizeof(reqstore_t));
  PMPI_Irecv(&(((reqstore_t*) *ptr)->cp),1,cp_type,node,tag,comm,&(((reqstore_t*) *ptr)->req));
  
  overhead_end=mytime_getTimeStamp();

  comm_time_start=overhead_end;

  if (op_stack==0)
    {
      comp_time_start=overhead_end;
    }

 cpstat.overhead+=overhead_end-overhead_start;
 locstat.overhead_u+=overhead_end-overhead_start;
}

void RECV_P2P_END(void *buf, int count, MPI_Datatype dt, int node, int tag, 
		  MPI_Comm comm, int err, void **ptr, void **midptr, int type) 
{
  mytime_t overhead_start,overhead_end;

#ifdef DEBUGME
  if (critpath_myid==0)
    printf("Recv end\n");
#endif

  cptime_pb_t recv_cptime;
  MPI_Status status;
  int flag;

  overhead_start=mytime_getTimeStamp();

  op_stack--;

  if (type!=PNMPIMOD_COMM_ASYNC_P2P)
    {
      PMPI_Recv(&recv_cptime,1,cp_type,node,tag,comm,&status);
      if (*ptr==PNMPIMOD_COMM_NOMSG) 
	flag=0;
      else
	flag=1;
    }
  else
    {
      PMPI_Wait(&(((reqstore_t*) *ptr)->req),&status);
      recv_cptime=((reqstore_t*) *ptr)->cp;
      free(*ptr);
    }

  if (((type==PNMPIMOD_COMM_ASYNC_P2P) && (*midptr==PNMPIMOD_COMM_NOMSG)) ||
      ((type!=PNMPIMOD_COMM_ASYNC_P2P) && (*ptr==PNMPIMOD_COMM_NOMSG)))
    {
      mytime_t timing_diff;
      
      /* had to wait */

      if (cpstat.last==recv_cptime.myid)
	cpstat.local_alt++;

      cpstat=recv_cptime;
      cpstat.myid=critpath_myid;
      cpstat.change++;
      locstat.mpi_block++;

      if (cpstat.last==critpath_myid)
	cpstat.flip++;

      cpstat.last=status.MPI_SOURCE;

      timing_diff=overhead_start-blocktime_start;

      if ((cpstat.block_min<0) || (cpstat.block_min>timing_diff))
	cpstat.block_min=timing_diff;
      if (cpstat.block_max<timing_diff)
	cpstat.block_max=timing_diff;
      cpstat.block_sum+=timing_diff;

      if ((locstat.block_min<0) || (locstat.block_min>timing_diff))
	locstat.block_min=timing_diff;
      if (locstat.block_max<timing_diff)
	locstat.block_max=timing_diff;
      locstat.block_sum+=timing_diff;
    }

  cpstat.ops++;
  locstat.mpi_ops++;
  cpstat.recvops++;
  locstat.mpi_recv++;
 
  overhead_end=mytime_getTimeStamp();

  if (op_stack==0)
    {
      comp_time_start=overhead_end;
    }

  if (((type==PNMPIMOD_COMM_ASYNC_P2P) && (*midptr==PNMPIMOD_COMM_NOMSG)) ||
      ((type!=PNMPIMOD_COMM_ASYNC_P2P) && (*ptr==PNMPIMOD_COMM_NOMSG)))
    {
      locstat.comm_b+=overhead_start-comm_time_start;
      locstat.overhead_b+=overhead_end-overhead_start;
      locstat.overhead_b+=mid2_overhead_o;
    }
  else
    {
      locstat.comm_r+=overhead_start-comm_time_start;
      locstat.overhead_r+=overhead_end-overhead_start+mid2_overhead_o;
    }

  comm_time_start=overhead_end;
  blocktime_start=overhead_end;
  cpstat.overhead+=overhead_end-overhead_start;
  mid2_overhead_o=0.0;
}


/*--------------------------------------------------------------------*/
/* Collective Callbacks */

void COMM_COLL_REDUCE(void *buf, int count, MPI_Datatype dt, MPI_Op ops, int size, void** ptr) 
{
}

void COMM_COLL_START(MPI_Comm comm,int root,int type, void **ptr) 
{
#ifdef DEBUGME
  if (critpath_myid==0)
    printf("Coll start\n");
#endif

  switch (type&PNMPIMOD_COMM_COLLTYPEMASK)
    {
    case PNMPIMOD_COMM_COLL_BARRIER:
      {
	comm_time_start=mytime_getTimeStamp();
	locstat.comp+=comm_time_start-comp_time_start;
	cpstat.cptime+=comm_time_start-comp_time_start;
	break;
      }
    case PNMPIMOD_COMM_COLL_FANOUT:
      {
	comm_time_start=mytime_getTimeStamp();
	locstat.comp+=comm_time_start-comp_time_start;
	cpstat.cptime+=comm_time_start-comp_time_start;
	break;
      }
    case PNMPIMOD_COMM_COLL_FANIN:
      {
	comm_time_start=mytime_getTimeStamp();
	locstat.comp+=comm_time_start-comp_time_start;
	cpstat.cptime+=comm_time_start-comp_time_start;
	break;
      }
    case PNMPIMOD_COMM_COLL_ALL2ALL:
      {
	comm_time_start=mytime_getTimeStamp();
	locstat.comp+=comm_time_start-comp_time_start;
	cpstat.cptime+=comm_time_start-comp_time_start;
	break;
      }
    default:
      {
	printf("Unsupported collective!\n");
      }
    }
}

void COMM_COLL_END(MPI_Comm comm,int root,int type, void **ptr) 
{
  mytime_t overhead_start;

#ifdef DEBUGME
  if (critpath_myid==0)
    printf("Coll end\n");
#endif

  switch (type&PNMPIMOD_COMM_COLLTYPEMASK)
    {
    case PNMPIMOD_COMM_COLL_BARRIER:
      {
	struct minnode { double d; int n; } loc,glob;
	mytime_t timing_diff;
	int last;

	overhead_start=mytime_getTimeStamp();
	timing_diff=overhead_start-comm_time_start;

	loc.d=timing_diff;
	PMPI_Comm_rank(comm,&(loc.n));
	PMPI_Allreduce(&loc,&glob,1,MPI_DOUBLE_INT, MPI_MINLOC,comm);
	last=cpstat.last;
	PMPI_Bcast(&cpstat,1,cp_type,glob.n,comm);

	if (loc.n!=glob.n)
	  {
	    /* had to wait */

	    if (last==cpstat.myid)
	      cpstat.local_alt++;

	    if (cpstat.last==critpath_myid)
	      cpstat.flip++;

	    if ((cpstat.block_min<0) || (cpstat.block_min>timing_diff))
	      cpstat.block_min=timing_diff;
	    if (cpstat.block_max<timing_diff)
	      cpstat.block_max=timing_diff;
	    cpstat.block_sum+=timing_diff;
	    
	    if ((locstat.block_min<0) || (locstat.block_min>timing_diff))
	      locstat.block_min=timing_diff;
	    if (locstat.block_max<timing_diff)
	      locstat.block_max=timing_diff;
	    locstat.barrier+=timing_diff;

	    cpstat.change++;
	    locstat.mpi_block++;
	  }

	cpstat.myid=critpath_myid;

	cpstat.recvops++;
	locstat.mpi_recv++;
	cpstat.ops++;
	locstat.mpi_ops++;

	comp_time_start=mytime_getTimeStamp();
	locstat.comm_o+=overhead_start-comm_time_start;

	cpstat.overhead+=comp_time_start-overhead_start;
	locstat.overhead_o+=comp_time_start-overhead_start;
	break;
      } 
    case PNMPIMOD_COMM_COLL_FANOUT:
      {
	mytime_t timing_diff,timing_recv;
	int myrank;
	cptime_pb_t cpstat_recv;

	overhead_start=mytime_getTimeStamp();
	timing_diff=overhead_start-comm_time_start;

	cpstat.ops++;
	locstat.mpi_ops++;  

	PMPI_Comm_rank(comm,&myrank);

	if (myrank==root)
	  {
	    /* I am the root, nothing changes here */

	    PMPI_Bcast(&timing_diff,1,MPI_DOUBLE,root,comm);
	    PMPI_Bcast(&cpstat,1,cp_type,root,comm);
	  }
	else
	  {
	    PMPI_Bcast(&timing_recv,1,MPI_DOUBLE,root,comm);
	    PMPI_Bcast(&cpstat_recv,1,cp_type,root,comm);
	
	    if (timing_recv*2<timing_diff)
	      {
		/* receive took more than twice as long as send */
		/* must have been waiting */

		if (cpstat.last==cpstat_recv.myid)
		  cpstat.local_alt++;
		
		cpstat=cpstat_recv;
		cpstat.myid=critpath_myid;
		
		if (cpstat.last==critpath_myid)
		  cpstat.flip++;
		
		if ((cpstat.block_min<0) || (cpstat.block_min>timing_diff))
		  cpstat.block_min=timing_diff;
		if (cpstat.block_max<timing_diff)
		  cpstat.block_max=timing_diff;
		cpstat.block_sum+=timing_diff;
		
		if ((locstat.block_min<0) || (locstat.block_min>timing_diff))
		  locstat.block_min=timing_diff;
		if (locstat.block_max<timing_diff)
		  locstat.block_max=timing_diff;
		locstat.block_sum+=timing_diff;
		
		cpstat.change++;
		locstat.mpi_block++;
	      }

	    cpstat.recvops++;
	    locstat.mpi_recv++;
	  }

	cpstat.ops++;
	locstat.mpi_ops++;
	    
	comp_time_start=mytime_getTimeStamp();
	if (myrank==root)
	  {
	    locstat.comm_s+=overhead_start-comm_time_start;
	    cpstat.overhead+=comp_time_start-overhead_start;
	    locstat.overhead_s+=comp_time_start-overhead_start;
	  }
	else
	  {
	    if (timing_recv*2<timing_diff)
	      {
		locstat.comm_b+=overhead_start-comm_time_start;
		locstat.overhead_b+=comp_time_start-overhead_start;
	      }
	    else
	      {
		locstat.comm_r+=overhead_start-comm_time_start;
		locstat.overhead_r+=comp_time_start-overhead_start;
	      }

	    cpstat.overhead+=comp_time_start-overhead_start;
	  }

	break;
      } 
    case PNMPIMOD_COMM_COLL_FANIN:
      {
	struct minnode { double d; int n; } loc,glob;
	mytime_t timing_diff;
	int last;
	MPI_Status status;
	cptime_pb_t cp_recv_value;

	overhead_start=mytime_getTimeStamp();
	timing_diff=overhead_start-comm_time_start;

	loc.d=timing_diff;
	PMPI_Comm_rank(comm,&(loc.n));
	PMPI_Allreduce(&loc,&glob,1,MPI_DOUBLE_INT, MPI_MINLOC,comm);
	cp_recv_value=cpstat;
	if ((loc.n==glob.n) && (loc.n!=root))
	  {
	    /* local node had shortest wait -> CP */
	    /* local node is not the root */
	    /* => send CP to root */

	    PMPI_Send(&cpstat,1,cp_type,root,SPECIALTAG,comm);
	  }
	
	PMPI_Bcast(&cp_recv_value,1,cp_type,glob.n,comm);

	if ((loc.n!=glob.n) && (loc.n==root))
	  {
	    last=cpstat.last;

	    /* local node is root, but had to wait */
	    /* => get CP from node with shortest wait */

	    PMPI_Recv(&cpstat,1,cp_type,glob.n,SPECIALTAG,comm,&status);

	    /* had to wait, local path is not critical */

	    if (last==cpstat.myid)
	      cpstat.local_alt++;

	    cpstat.myid=critpath_myid;

	    if (cpstat.last==critpath_myid)
	      cpstat.flip++;

	    if ((cpstat.block_min<0) || (cpstat.block_min>timing_diff))
	      cpstat.block_min=timing_diff;
	    if (cpstat.block_max<timing_diff)
	      cpstat.block_max=timing_diff;
	    cpstat.block_sum+=timing_diff;
	    
	    if ((locstat.block_min<0) || (locstat.block_min>timing_diff))
	      locstat.block_min=timing_diff;
	    if (locstat.block_max<timing_diff)
	      locstat.block_max=timing_diff;
	    locstat.block_sum+=timing_diff;

	    cpstat.change++;
	    locstat.mpi_block++;
	  }

	cpstat.ops++;
	locstat.mpi_ops++;

	comp_time_start=mytime_getTimeStamp();

	if (loc.n==root)
	  {
	    cpstat.recvops++;
	    locstat.mpi_recv++;
	    if (loc.n!=glob.n)
	      {
		locstat.comm_b+=overhead_start-comm_time_start;
		locstat.overhead_b+=comp_time_start-overhead_start;
	      }
	    else
	      {
		locstat.comm_r+=overhead_start-comm_time_start;
		locstat.overhead_r+=comp_time_start-overhead_start;
	      }
	    cpstat.overhead+=comp_time_start-overhead_start;
	  }
	else
	  {
	    locstat.comm_s+=overhead_start-comm_time_start;
	    cpstat.overhead+=comp_time_start-overhead_start;
	    locstat.overhead_s+=comp_time_start-overhead_start;
	  }

	break;
      } 
    case PNMPIMOD_COMM_COLL_ALL2ALL:
      {
	struct minnode { double d; int n; } loc,glob;
	mytime_t timing_diff;
	int last;

	overhead_start=mytime_getTimeStamp();
	timing_diff=overhead_start-comm_time_start;

	loc.d=timing_diff;
	PMPI_Comm_rank(comm,&(loc.n));
	PMPI_Allreduce(&loc,&glob,1,MPI_DOUBLE_INT, MPI_MINLOC,comm);
	last=cpstat.last;
	PMPI_Bcast(&cpstat,1,cp_type,glob.n,comm);
	if (loc.n!=glob.n)
	  {
	    /* had to wait */

	    if (last==cpstat.myid)
	      cpstat.local_alt++;

	    if (cpstat.last==critpath_myid)
	      cpstat.flip++;

	    if ((cpstat.block_min<0) || (cpstat.block_min>timing_diff))
	      cpstat.block_min=timing_diff;
	    if (cpstat.block_max<timing_diff)
	      cpstat.block_max=timing_diff;
	    cpstat.block_sum+=timing_diff-glob.d/2;
	    
	    if ((locstat.block_min<0) || (locstat.block_min>timing_diff))
	      locstat.block_min=timing_diff;
	    if (locstat.block_max<timing_diff)
	      locstat.block_max=timing_diff;
	    locstat.block_sum+=timing_diff-glob.d/2;

	    cpstat.change++;
	    locstat.mpi_block++;
	  }
	cpstat.myid=critpath_myid;

	cpstat.recvops++;
	locstat.mpi_recv++;
	cpstat.ops++;
	locstat.mpi_ops++;

	comp_time_start=mytime_getTimeStamp();
	locstat.comm_s+=glob.d/2;
	if (loc.n!=glob.n)
	  {
	    locstat.comm_b+=overhead_start-comm_time_start-glob.d/2;
	    locstat.overhead_b+=comp_time_start-overhead_start;
	  }
	else
	  {
	    locstat.comm_r+=overhead_start-comm_time_start-glob.d/2;
	    locstat.overhead_r+=comp_time_start-overhead_start;
	  }

	cpstat.overhead+=comp_time_start-overhead_start;
	break;
      }
    }
}


/*--------------------------------------------------------------------*/
/* The End. */

