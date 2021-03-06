/* -*- Mode: C; -*- */
/* Creator: Bronis R. de Supinski (bronis@llnl.gov) Fri Mar  17 2000 */
/* no-error.c -- do some MPI calls without any errors */

#include <stdio.h>
#include <mpi.h>
#include <string.h>

#define buf_size 128

int
main (int argc, char **argv)
{
  int nprocs = -1;
  int rank = -1;
  char processor_name[128];
  int namelen = 128;
  int buf0[buf_size];
  int buf1[buf_size];
  int done;
  MPI_Status statuses[2];
  MPI_Request reqs[2];

  /* init */
  MPI_Init (&argc, &argv);
  MPI_Comm_size (MPI_COMM_WORLD, &nprocs);
  MPI_Comm_rank (MPI_COMM_WORLD, &rank);
  MPI_Get_processor_name (processor_name, &namelen);
  printf ("(%d) is alive on %s\n", rank, processor_name);
  fflush (stdout);

  MPI_Barrier (MPI_COMM_WORLD);

  /* this code is very similar to no-error-waitall-any_src.c */
  /* but deadlocks since task 2's send and recv are inverted... */
  if (nprocs < 3)
    {
      printf ("not enough tasks\n");
    }
  else if (rank == 0)
    {
      MPI_Irecv (buf0, buf_size, MPI_INT, 
		 MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &reqs[0]);

      MPI_Irecv (buf1, buf_size, MPI_INT, 
		 MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &reqs[1]);

      MPI_Waitall (2, reqs, statuses);

      MPI_Send (buf1, buf_size, MPI_INT, 1, 1, MPI_COMM_WORLD);
    }
  else if (rank == 1)
    {
      memset (buf0, 0, buf_size);

      MPI_Isend (buf0, buf_size, MPI_INT, 0, 0, MPI_COMM_WORLD, &reqs[0]);

      MPI_Isend (buf0, buf_size, MPI_INT, 2, 1, MPI_COMM_WORLD, &reqs[1]);

      MPI_Waitany (2, reqs, &done, statuses);

      MPI_Recv (buf1, buf_size, MPI_INT, 0, 1, MPI_COMM_WORLD, statuses);

      MPI_Send (buf0, buf_size, MPI_INT, 0, 0, MPI_COMM_WORLD);

      MPI_Wait (&reqs[(done + 1) % 2], statuses);
    }
  else if (rank == 2)
    {
    //  sleep (60);      

      MPI_Recv (buf1, buf_size, MPI_INT, 1, 1, MPI_COMM_WORLD, statuses);
    }

  MPI_Barrier (MPI_COMM_WORLD);

  MPI_Finalize ();
  printf ("(%d) Finished normally\n", rank);
}

/* EOF */
