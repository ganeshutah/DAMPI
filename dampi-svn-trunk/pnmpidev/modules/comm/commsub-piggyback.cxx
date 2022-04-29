#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include "commsub.h"

#define CSD


/*--------------------------------------------------------------------------*/
/* apply checksum to all messages */

long get_checksum(void *buf, int count, MPI_Datatype dt)
{
  return 0;
}

void COMM_P2P_INIT(int argc, char**argv)
{
}


void SEND_P2P_START(void *buf, int count, MPI_Datatype dt, int node, int tag, MPI_Comm comm, void **ptr)
{
}

void SEND_P2P_MID(void *buf, int count, MPI_Datatype dt, int node, int tag, MPI_Comm comm, void **ptr)
{
  long checksum;

  if (comm!=MPI_COMM_NULL)
    {
      checksum=get_checksum(buf,count,dt);
      PMPI_Send(&checksum,1,MPI_LONG,node,tag,comm);
    }
}

void SEND_P2P_END(void *buf, int count, MPI_Datatype dt, int node, int tag, MPI_Comm comm, int err, void **ptr)
{
}

void RECV_P2P_START(void *buf, int count, MPI_Datatype dt, int node, int tag, MPI_Comm comm, void **ptr)
{
}

void RECV_P2P_END(void *buf, int count, MPI_Datatype dt, int node, int tag, MPI_Comm comm, int err, void **ptr)
{
  long checksum,incoming;
  MPI_Status status;

  if (comm!=MPI_COMM_NULL)
    {
      checksum=get_checksum(buf,count,dt);
      PMPI_Recv(&incoming,1,MPI_LONG,node,tag,comm,&status);
      
      if (checksum==incoming)
	{
	  if ((abs(verbosity_level) & 0xff)>=2)
	    {
	      printf("Checksum OK\n");
	    }
	}
      else
	{
	  printf("Checksum Error - %li instead of %li (dt=%i)\n",checksum,incoming,dt);
	}

    }
}



