#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    int rank, data;
    MPI_Status status[2];
    MPI_Request sreq[2];
    MPI_Request rreq[2];
    int flag= 0;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == 1) {
/*         MPI_Isend(&data, 1, MPI_INT, 1, 0, MPI_COMM_WORLD, &sreq[0]); */
/*         MPI_Isend(&data, 1, MPI_INT, 1, 0, MPI_COMM_WORLD, &sreq[1]); */
/*         while (!flag) */
/*             MPI_Testall(2, sreq, &flag, status); */
        MPI_Send(&data, 1, MPI_INT, 2, 123456, MPI_COMM_WORLD);
        MPI_Send(&data, 1, MPI_INT, 2, 456789, MPI_COMM_WORLD);

    } else if (rank == 2) {
        MPI_Irecv(&data, 1, MPI_INT, 1, 123456, MPI_COMM_WORLD, &rreq[0]);
        MPI_Irecv(&data, 1, MPI_INT, 1, 456789, MPI_COMM_WORLD, &rreq[1]);
        fprintf(stderr, "rreq[0] = %d\n", rreq[0]);
        fprintf(stderr, "rreq[0] = %d\n", rreq[1]);
        while (!flag)   {
               MPI_Testall(2, rreq, &flag, status);   
        }
        //MPI_Waitall(2, rreq, status);
        //MPI_Wait(&rreq[0], &status[0]);
    }
    MPI_Finalize();
    printf("(%d) Finished normally\n", rank);
    return 0;
}
