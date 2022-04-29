/*
 * problem : Matrix Vector multiplication
 * pattern : Separable Dependencies
 * Dynamic job distribution
 */

#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <time.h>

#define ROWS 50
#define COLUMNS 50

#define REQWORK 100
#define WORK 101
#define SOLUTION 102
#define NO_MORE_WORK 103
#define SOLUTION_FOR_ROW 104
#define WORK_FOR_ROW 105

double matrix[ROWS][COLUMNS];
double vector[COLUMNS];
double resultvector[COLUMNS];
int nworkunits;

double dotproduct(double *myrow, int size)
{
	int i;
	double result;
	for(i = 0; i < size; i++)
		result = result + myrow[i] * vector[i];

	return result;
}

// initialize matrix, vector
void init()
{
	int i, j;
	srand(time(NULL));

	for(i = 0; i < ROWS; i++) {
		vector[i] = rand() % 10;
		for(j = 0; j < COLUMNS; j++)
			matrix[i][j] = rand() % 10;
	}
}

// displays the vector
void showvector(double *vec, int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("%f\t", vec[i]);
	printf("\n");
}

int main(int argc, char *argv[])
{
	int rank, size;
	int root = 0, src, tag;
	int nprocs = 0, done = 0, currentrow = 0, myrow;
	int msgreq = 1;
	double result;	
	MPI_Status probestatus, solnstatus;

	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);

	if(!rank)
	{
		init();
	}

	MPI_Bcast(vector, COLUMNS, MPI_DOUBLE, root, MPI_COMM_WORLD);
//	showvector(vector, COLUMNS);

	if(!rank) {
		while(!done) {
			MPI_Probe(MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &probestatus);
			src = probestatus.MPI_SOURCE;
			tag = probestatus.MPI_TAG;
			switch(tag)
			{
				case REQWORK:
					MPI_Recv(&msgreq, 1, MPI_INT, src, REQWORK, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
					if(currentrow < ROWS) {
						MPI_Send(&currentrow, 1, MPI_INT, src, WORK, MPI_COMM_WORLD);
						MPI_Send(&matrix[currentrow], COLUMNS, MPI_DOUBLE, src, WORK_FOR_ROW, MPI_COMM_WORLD);
						currentrow++;
					}
					else
					{
						MPI_Send(&msgreq, 1, MPI_INT, src, NO_MORE_WORK, MPI_COMM_WORLD);
						nprocs++;
						if(nprocs == size-1) {						
							done = 1;
						}
					}
					break;

				case SOLUTION:
					MPI_Recv(&myrow, 1, MPI_INT, src, SOLUTION, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
					MPI_Recv(&result, 1, MPI_DOUBLE, src, SOLUTION_FOR_ROW, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
					resultvector[myrow] = result;
					break;
			}	

		}
	}
	else {
		nworkunits = 0;
		while(!done) {
			msgreq = 1;
			MPI_Send(&msgreq, 1, MPI_INT, 0, REQWORK, MPI_COMM_WORLD);
			MPI_Probe(MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &probestatus);
			src = probestatus.MPI_SOURCE;
			tag = probestatus.MPI_TAG;
			switch(tag)
			{
				case WORK:
					MPI_Recv(&myrow, 1, MPI_INT, src, WORK, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
					MPI_Recv(resultvector, COLUMNS, MPI_DOUBLE, 0, WORK_FOR_ROW, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
					result = dotproduct(resultvector, COLUMNS);
					MPI_Send(&myrow, 1, MPI_INT, 0, SOLUTION, MPI_COMM_WORLD);
					MPI_Send(&result, 1, MPI_DOUBLE, 0, SOLUTION_FOR_ROW, MPI_COMM_WORLD);
					nworkunits++;
					break;
				case NO_MORE_WORK:
					done = 1;
					break;
			}
		}
		
	}


	MPI_Barrier(MPI_COMM_WORLD);

	if(rank) printf("rank %d\t workunits%d\n", rank, nworkunits);

//	if(!rank)
//		showvector(resultvector, COLUMNS);

	MPI_Finalize();
	return 0;
}
