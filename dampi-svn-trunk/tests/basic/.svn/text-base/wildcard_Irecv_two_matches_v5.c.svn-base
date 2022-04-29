/* Author: Anh Vo 
 * This basic example presents the most basic situation 
 * of message race: the Irecv from P0 has two possible matches coming from
 * P1 and P2
 * There are several versions of this example.
 * v1: Two irecvs, using wait after each Irecv
 * v2: Two irecvs, using two waits after the Irecvs (in order)
 * v3: Two irecvs, using two waits after the Irecvs (out of order)
 * v4: Two irecvs, using waitall after the Irecvs (in order)
 * v5: Two irecvs, using waitall after the Irecvs (out of order)
 * v6: One Irecv, One Recv, using wait after the Irecv
 * v7: One Irecv, One Recv, using wait after the Recv
 */

#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int data1 = 0, data2 = 0;
  int size, rank;
  MPI_Request request[2];
  MPI_Status status[2];
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    
  if (size < 3) {
    if (rank == 0)
      fprintf(stderr, "Need at least three processes\n");
    MPI_Abort(MPI_COMM_WORLD,1);
  }


  if (rank == 0) {
    MPI_Irecv(&data1, 1, MPI_INT, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &request[1]);
    MPI_Irecv(&data2, 1, MPI_INT, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &request[0]);
    MPI_Waitall(2, request, status);
  } else if (rank == 1) {
    MPI_Send(&data1, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
  } else if (rank == 2) {
    MPI_Send(&data1, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
  }
  
  fprintf(stdout, "rank %d finished\n", rank);
  MPI_Finalize();
  return 0;
}
