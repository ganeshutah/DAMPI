/* Author: Anh Vo 
 * This basic example presents one basic situation 
 * of message race: the IRecv from P0 has three possible matches coming from
 * P1, P2, and P3. There are six possible interleavings
 * There are multiple versions of this example, basically with the Waits/Waitall being
 * placed in/out of order
 * v1: Waitall, with request in-order
 */

#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int data1 = 0;
  int size, rank;
  MPI_Request request[3];
  MPI_Status status[3];
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    
  if (size < 4) {
    if (rank == 0)
      fprintf(stderr, "Need at least four processes\n");
    MPI_Abort(MPI_COMM_WORLD,1);
  }


  if (rank == 0) {
    MPI_Irecv(&data1, 1, MPI_INT, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &request[2]);
    MPI_Irecv(&data1, 1, MPI_INT, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &request[0]);
    MPI_Irecv(&data1, 1, MPI_INT, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &request[1]); 
    MPI_Waitall(3,request,status);
    if (status[0].MPI_SOURCE == 1 && status[1].MPI_SOURCE == 2) {
      fprintf(stderr, "Possible Matching 1\n");
    } 
    if (status[0].MPI_SOURCE == 2 && status[1].MPI_SOURCE == 1) {
      fprintf(stderr, "Possible Matching 2\n");
    } 
    if (status[0].MPI_SOURCE == 1 && status[1].MPI_SOURCE == 3) {
      fprintf(stderr, "Possible Matching 3\n");
    } 
    if (status[0].MPI_SOURCE == 3 && status[1].MPI_SOURCE == 1) {
      fprintf(stderr, "Possible Matching 4\n");
    } 
    if (status[0].MPI_SOURCE == 2 && status[1].MPI_SOURCE == 3) {
      fprintf(stderr, "Possible Matching 5\n");
    } 
    if (status[0].MPI_SOURCE == 3 && status[1].MPI_SOURCE == 2) {
      fprintf(stderr, "Possible Matching 6\n");
    } 

  } else if (rank == 1) {
    MPI_Send(&data1, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
  } else if (rank == 2) {
    MPI_Send(&data1, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
  } else if (rank == 3) {
    MPI_Send(&data1, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
  }
  
  fprintf(stdout, "rank %d finished\n", rank);
  MPI_Finalize();
  return 0;
}
