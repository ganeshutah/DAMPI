/*
 * problem : Numerical Integration using Trapezoid rule
 * pattern : Separable Dependencies pattern
 *
 */
 
#include <stdio.h>
#include <mpi.h>

static int nsteps = 100000;
double step;

int main(int argc, char *argv[])
{
	int i, rank, size;
	double x, pi, sum = 0.0;

	step = 1/(double)nsteps;
	
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);

	for(i = rank+1; i <= nsteps; i += size) {
		x = (i - 0.5) * step;
		sum = sum + 4.0/(1.0 + x*x);
	}
	MPI_Reduce(&sum, &pi, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	if(!rank)
	{
		pi *= step;
		printf("pi is %f\n", pi);
	}
	
	MPI_Finalize();
	
	return 0;
}
