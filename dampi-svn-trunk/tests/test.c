#include <mpi.h>
#include <stdio.h>
int main (int argc, char** argv) {
    int rank, data;
    int reducesenddata = 0;
    MPI_Init(&argc, &argv);

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    fprintf(stdout, "Starting...\n");
    if (rank == 0) {
        MPI_Bcast(&data, 1, MPI_INT, 0, MPI_COMM_WORLD);
        MPI_Send(&data, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
        MPI_Reduce(&reducesenddata, &data, 1, MPI_INT, MPI_MAX, 0, MPI_COMM_WORLD);
    } else if (rank == 1) {
        reducesenddata = 1;
        MPI_Bcast(&data, 1, MPI_INT, 0, MPI_COMM_WORLD);
        MPI_Recv(&data, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        MPI_Reduce(&reducesenddata, &data, 1, MPI_INT, MPI_MAX, 0, MPI_COMM_WORLD);
    }

    MPI_Barrier(MPI_COMM_WORLD);
    fprintf(stdout, "Finishing...\n");
    MPI_Finalize();
    return 0;
}
