#include "mpi.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define SIZE 5

void printData(char *, int);

struct {
    char name[10];
    int array[5];
    double f1, f2;
    int val;
} data;


int main(argc,argv)
     int argc;
     char *argv[];  
{
    int numtasks, rank, sendcount, recvcount, source, i;
    double sendbuf[SIZE] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int _sendbuf[SIZE] = {1, 2, 3, 4, 5};
    int _recvbuf;
    int __sendbuf;
    int __recvbuf[SIZE]; 

    int sendbuf2;
    int recvbuf2[SIZE];


    MPI_Status status;

    //double recvbuf[SIZE];

    MPI_Init(&argc,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &numtasks);

    if (rank == 0) __sendbuf = 100;
    if (rank == 1) __sendbuf = 200;
    if (rank == 2) __sendbuf = 300;
    if (rank == 3) __sendbuf = 400;
    if (rank == 4) __sendbuf = 500;

    if (rank == 0) sendbuf2 = 500;
    if (rank == 1) sendbuf2 = 600;
    if (rank == 2) sendbuf2 = 700;
    if (rank == 3) sendbuf2 = 800;
    if (rank == 4) sendbuf2 = 900;


    /* --- Data structure --- */
    int blockcounts[4] = {10, 5, 2, 1};
    MPI_Datatype types[4];
    MPI_Aint displs[4];
    MPI_Datatype newtype;

    MPI_Address( &data.name, &displs[0] );
    MPI_Address( &data.array, &displs[1] );
    MPI_Address( &data.f1, &displs[2] );
    MPI_Address( &data.val, &displs[3] );

    types[0] = MPI_CHAR;
    types[1] = MPI_INT;
    types[2] = MPI_DOUBLE;
    types[3] = MPI_INT;

    for (i=3; i >= 0; i--)
        displs[i] -= displs[0];

    MPI_Type_struct( 4, blockcounts, displs, types, &newtype);
    MPI_Type_commit( &newtype ); 

    for (i=0; i < 5; i++)
        data.array[i] = 100 + i;

    strcpy(data.name, "hello_1234");
    data.f1 = 3.1514;  data.f2 = 0.50;
    data.val = 2; 
    /*------------------------*/

    /* --- P2P --- */
    if(rank ==0) printf("\n\t***** P2P communication #1 ***** \n");
    if (rank == 0) {
        for (i = 1; i < numtasks; i++) {
            // Change data.val per receiver
            data.val = data.val * 8;

            MPI_Send(&data, 1, newtype, i, 100, MPI_COMM_WORLD );
            printData(" SENT ", rank);
            fflush(stdout);
        }
    } else {
        MPI_Recv(&data, 1, newtype, MPI_ANY_SOURCE, 100, MPI_COMM_WORLD, &status);
        printData(" RECEIVED ", rank);
        fflush(stdout);
    }
    sleep(1);

    /* --- P2P --- */
    if(rank ==0) printf("\n\t***** P2P communication #2 ***** \n");
    if (rank == 0) {
	for (i = 1; i < numtasks; i++) {
	    // Change data.val per receiver
	    data.val = data.val * 8;
	    MPI_Send(&data, 1, newtype, i, 100, MPI_COMM_WORLD );
	    printData(" SENT ", rank);
	    fflush(stdout);
	}
    } else {
	MPI_Recv(&data, 1, newtype, MPI_ANY_SOURCE, 100, MPI_COMM_WORLD, &status);
	printData(" RECEIVED ", rank);
	fflush(stdout);
    }
    sleep(1);



    if(rank ==source) printf("\n\t***** Broadcast communications ***** \n");
    /* --- BCAST --- */
    if (numtasks == SIZE) {
        source = 0;
        sendcount = SIZE;
        //recvcount = SIZE;
        for (i=0; i < 3; i++) {
	    MPI_Bcast(&sendbuf, sendcount, MPI_DOUBLE, source, MPI_COMM_WORLD);
            printf("Proc: %d, BROADCAST : {%f %f %f %f %f}\n",rank, sendbuf[0], sendbuf[1], sendbuf[2], sendbuf[3], sendbuf[4] );
            sleep(1); 
            if (rank == source) printf("\n"); fflush(stdout);
        }
    } else
	printf("Must specify %d processors. Terminating.\n",SIZE);

    sleep(1);
    if(rank ==source) printf("\n\t***** Scatter communications ***** \n");

    /* --- SCATTER  --- */
    if (numtasks == SIZE) {
        source = 0;
        sendcount = 1;
        recvcount = 1;

        for (i=0; i < 3; i++) {
            MPI_Scatter(_sendbuf, sendcount, MPI_INT, &_recvbuf, recvcount, MPI_INT, source, MPI_COMM_WORLD);
            if (rank == source) 
                printf("Proc: %d, SCATTER : {%d %d %d %d %d}\n", rank, _sendbuf[0], _sendbuf[1], _sendbuf[2], _sendbuf[3], _sendbuf[4] );
            
            printf("Proc: %d, SCATTER : {%d}\n", rank, _recvbuf );
            sleep(1);
            if (rank == source) printf("\n"); fflush(stdout);
        }

    }

    MPI_Barrier (MPI_COMM_WORLD); sleep(1);
    if(rank ==source) printf("\n\t***** Gather communications ***** \n");


    /* --- GATHER --- */
    if (numtasks == SIZE) {
	source = 0;
	sendcount = 1;
	recvcount = 1;

        for (i=0; i < 3; i++) {
            MPI_Gather(&__sendbuf, sendcount, MPI_INT, __recvbuf, recvcount, MPI_INT, source, MPI_COMM_WORLD);
            printf("Proc: %d, GATHER : {%d}\n", rank, __sendbuf );
            if (rank == source)
                printf("Proc: %d, GATHER : {%d %d %d %d %d}\n", rank, __recvbuf[0], __recvbuf[1], __recvbuf[2], __recvbuf[3], __recvbuf[4] );
	    MPI_Barrier (MPI_COMM_WORLD); sleep(1);
            if (rank == source) printf("\n"); fflush(stdout);
        }
    }


    MPI_Barrier (MPI_COMM_WORLD); sleep(1);
    if(rank ==source) printf("\n\t***** Allgather communications ***** \n");

    /* --- ALLGATHER --- */
    if (numtasks == SIZE) {
	source = 0;
	sendcount = 1;
	recvcount = 1;

	for (i=0; i < 3; i++) {
	    MPI_Allgather(&sendbuf2, sendcount, MPI_INT, recvbuf2, recvcount, MPI_INT, MPI_COMM_WORLD);
	    printf("Proc: %d, ALLGATHER (sent): {%d}\n", rank, sendbuf2 );
	    printf("Proc: %d, ALLGATHER (recv): {%d %d %d %d %d}\n", rank, recvbuf2[0], recvbuf2[1], recvbuf2[2], recvbuf2[3], recvbuf2[4] ); 
	    MPI_Barrier (MPI_COMM_WORLD); sleep(1);
	    if (rank == source) printf("\n"); fflush(stdout);
	}

    } 


    MPI_Finalize();
    return 0;
}


void
printData(char *action, int rank)
{
    int i;

    printf("Proc: %d, %s\t{ ", rank, action);
    for (i=0; i<10; i++) {
	printf("%c ", data.name[i]);
    }
    printf("} { ");

    for (i=0; i<5; i++) {
	printf("%d ", data.array[i]);
    }
    printf("} { ");

    printf("%f %f ", data.f1, data.f2);
    printf("} { ");

    printf("%d }", data.val);

    printf("\n");

}

