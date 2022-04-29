#include<stdio.h>
#include<mpi.h>

int main(int argc, char **argv)
{
  int myrank;
  int work = 1;
  MPI_Status status;
  int numprocs;
  int rightProc, leftProc; 
  int timeStep;
  int numTimeSteps = 2;
  
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
  MPI_Comm_size(MPI_COMM_WORLD, &numprocs);

  rightProc = myrank + 1;
  if(rightProc == numprocs) rightProc = 0;
  leftProc = myrank - 1;
  if(leftProc == -1) leftProc = numprocs - 1;
  for ( timeStep = 1; timeStep <= numTimeSteps; timeStep++)
    {
  if((myrank%2) == 1 )
    {
      MPI_Send( &work,1, MPI_INT, leftProc, 1, MPI_COMM_WORLD );
      MPI_Recv( &work, 1, MPI_INT, leftProc, 2, MPI_COMM_WORLD,
                &status );
      MPI_Send( &work, 1, MPI_INT, rightProc, 3,
                MPI_COMM_WORLD );
      MPI_Recv(  &work, 1, MPI_INT, rightProc, 4,
                MPI_COMM_WORLD, &status );
       MPI_Barrier(MPI_COMM_WORLD);
      
      
    }
  else
    {
      
      MPI_Recv( &work, 1, MPI_INT, rightProc, 1, MPI_COMM_WORLD,
                &status );
      MPI_Send( &work, 1, MPI_INT, rightProc, 2,
                MPI_COMM_WORLD );
      
      MPI_Recv(  &work, 1, MPI_INT, leftProc, 3,
                 MPI_COMM_WORLD, &status );
      MPI_Send( &work,1, MPI_INT, leftProc, 4, MPI_COMM_WORLD );
      MPI_Barrier(MPI_COMM_WORLD);
      
    }
    }
   MPI_Finalize();
   printf("All finished\n");
  return 0;
}
