/*
 * Embarrassingly Parallel Pattern
 * Mandelbrot Computation
 * Static Job Distribution
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

#define _XRES_ 8
#define _YRES_ 8
#define MAX_ITERATIONS 120

// MPI definitions
int rank, size;

// Mandelbrot definitions
int nworkers;

// complex data type definitions
typedef struct complexType
{
	float real, imag;
}Complex;

int image[_XRES_][_YRES_];

void updateimage(int *row, int index)
{
	int j;
	for(j = 0; j < _YRES_; j++)
		image[index][j] = row[j];
}

int computeMandel(int row, int *rowcolor)
{
	int k, j;
	Complex c, z;
	float cons, length;
	int rowvalue[_YRES_];
	int m;

	c.imag = ((float)row - _YRES_/2)/(_YRES_/4);
	for(j = 0; j < _YRES_; j++)
	{
		k = 0;
		z.real = z.imag = 0.0;
		c.real = ((float)j - _XRES_/2)/(_XRES_/4);
		do
		{
			cons = z.real * z.real - z.imag * z.imag + c.real;
			z.imag = 2 * z.real * z.imag + c.imag;
			z.real = cons;
			length = z.real * z.real + z.imag * z.imag;
			k++;
		}while(length < 4.0 && k < MAX_ITERATIONS);
		rowvalue[j] = k;
	}
	for(j = 0; j < _YRES_; j++)
	{
		if(rowvalue[j] == MAX_ITERATIONS)
			rowcolor[j] = 0;
		else {
			m = rowcolor[j];
			rowcolor[j] = (8*(m%16)<<16) + (8*(m%16)<<8) + (8*(m%16));
		     }
	}
}

void writeimage()
{
	FILE *fp;
	fp = fopen("image.txt", "w");
	
	int i, j;

	for(i = 0; i < _XRES_; i++) {
		for(j = 0; j < _YRES_; j++)
			fprintf(fp, "%7d ", image[i][j]);
		fprintf(fp, "\n");
	}
}
				
int main(int argc, char *argv[])
{
	int rowcolors[_YRES_];
	int rowindex, i;
	MPI_Status stat;


	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	nworkers = size - 1;

	if(!rank) {
	// Master process
    MPI_Pcontrol(0);
		for(i = 0; i < _XRES_; i++) {
			MPI_Recv(rowcolors, _YRES_, MPI_INT, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &stat);
			rowindex = stat.MPI_TAG;
			updateimage(rowcolors, rowindex);
		}
    MPI_Pcontrol(0);
	}

	else {
	// slave process
	// static job distribution
		for(i = rank-1; i < _XRES_; i += nworkers)
		{
			computeMandel(i, rowcolors);
			MPI_Send(rowcolors, _YRES_, MPI_INT, 0, i, MPI_COMM_WORLD);
		}

	}

/*	if(!rank)
		writeimage(); */

	MPI_Finalize();
}
