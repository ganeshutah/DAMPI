/* Author: Anh Vo 
 * This example presents the crooked barrier situation
 * The Ir* can cross the barrier and can match either Isend from P1 or P2
 * (Of course this is also due to the fact that the Isend can also cross
 * the barrier. If we are to change the P1's Isend into an Ssend, then only
 * P1's Ssend can match with the Irecv).
 */

#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int data1,data2 = 0;
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
    MPI_Irecv(&data1, 1, MPI_INT, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &request[0]);
    MPI_Barrier(MPI_COMM_WORLD);
    MPI_Wait(&request[0], &status[0]);
    if (status[0].MPI_SOURCE == 1){
      fprintf(stderr, "Possible match 1\n");
    } else if (status[0].MPI_SOURCE == 2) {
      fprintf(stderr, "Possible match 2\n");
    }
    MPI_Recv(&data2, 1, MPI_INT, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &status[1]);
  } else if (rank == 1) {
    MPI_Isend(&data1, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, &request[0]);
    MPI_Barrier(MPI_COMM_WORLD);
    MPI_Wait(&request[0], &status[0]);    
  } else if (rank == 2) {
    MPI_Barrier(MPI_COMM_WORLD);
    MPI_Isend(&data1, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, &request[0]);
    MPI_Wait(&request[0], &status[0]);    
  }
  
  fprintf(stdout, "rank %d finished\n", rank);
  MPI_Finalize();
  return 0;
}
