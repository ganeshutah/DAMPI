#include "mpi.h"
#include <stdio.h>
#define SIZE 4

int main(argc,argv)
int argc;
char *argv[];  
{
  int numtasks, rank, sendcount, recvcount, source;
  double sendbuf[SIZE] = {1.0, 2.0, 3.0, 4.0};

  //double recvbuf[SIZE];

  MPI_Init(&argc,&argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &numtasks);

  if (numtasks == SIZE) {
    source = 1;
    sendcount = SIZE;
    recvcount = SIZE;
    MPI_Bcast(&sendbuf, sendcount, MPI_DOUBLE, source, MPI_COMM_WORLD);

    printf("rank= %d  Results: %f %f %f %f\n",rank, sendbuf[0], sendbuf[1], sendbuf[2], sendbuf[3]);
  } else
  printf("Must specify %d processors. Terminating.\n",SIZE);

  MPI_Finalize();
}
