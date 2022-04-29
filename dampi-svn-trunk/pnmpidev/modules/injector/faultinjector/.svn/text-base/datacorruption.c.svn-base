#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <mpi.h>
#include "faultinjector.h"

/*
 * ------------------------------------------------
 * Maximum values for datatypes.
 *
 * Used in generating valid values for a particular
 * element in a buffer.
 * ------------------------------------------------
 */
/* ... C datatypes ...*/
#define FI_MAX_CHAR 255
#define FI_MAX_INT RAND_MAX
#define FI_MAX_SHORT 32767
#define FI_MAX_LONG FI_MAX_INT
#define FI_MAX_FLOAT (float)FI_MAX_INT
#define FI_MAX_DOUBLE FI_MAX_FLOAT
/*... Fortran datatypes ...*/
#define FI_MAX_REAL FI_MAX_FLOAT
#define FI_MAX_DOUBLE_PRECISION FI_MAX_FLOAT
#define FI_MAX_INTEGER FI_MAX_INT
#define FI_MAX_COMPLEX FI_MAX_FLOAT
#define FI_MAX_DOUBLE_COMPLEX FI_MAX_FLOAT

/*
 * -----------------------------------------------
 * Constants
 * -----------------------------------------------
 */
/* Print log records when injecting a fault */
#define BUG_INJECTION_LOG1 "[FI] Wrong value in type"
#define BUG_INJECTION_LOG2 "[FI] Increased value in type"
#define BUG_INJECTION_LOG3 "[FI] Decreased value in type"
#define BUG_INJECTION_LOG4 "[FI] Buffer overflow"

/*
 *-----------------------------------------------
 * Fault injection functions
 *-----------------------------------------------
 */

/*
 * Determine the size of the buffer and selects randomly
 * one element. This element is changed to a wrong
 * (but valid) value according to the buffer datatype.
 */
int
changeToWrongValue(
		   char *buffer,
		   int count,
		   MPI_Datatype datatype)
{
    int index, intElement, integerElement;
    short shortElement;
    long longElement;
    char charElement;
    float floatElement, realElement;
    double doubleElement, doublePrecisionElement;
    double complexElement, doubleComplexElement;

    /*
     * Get the element index in the buffer that is
     * going to be changed.
     */
    index = getRandomInteger(count);

    switch (datatype) {
    case MPI_INT:
    	intElement = getRandomInteger(FI_MAX_INT);
    	*((int *)buffer + index) = intElement;
    	printf ("%s MPI_INT\n", BUG_INJECTION_LOG1);
    	fflush(stdout);
    	break;

    case MPI_SHORT:
    	shortElement = getRandomInteger(FI_MAX_SHORT);
    	*((short *)buffer + index) = shortElement;
    	printf ("%s MPI_SHORT\n", BUG_INJECTION_LOG1);
    	fflush(stdout);
    	break;

    case MPI_LONG:
    	longElement = getRandomInteger(FI_MAX_LONG);
    	*((long *)buffer + index) = longElement;
    	printf ("%s MPI_LONG\n", BUG_INJECTION_LOG1);
    	fflush(stdout);
    	break;

    case MPI_FLOAT:
    	floatElement = (float)getRandomInteger(FI_MAX_INT);
    	*((float *)buffer + index) = floatElement;
		printf ("%s MPI_FLOAT\n", BUG_INJECTION_LOG1);
		fflush(stdout);
		break;

    case MPI_DOUBLE:
    	doubleElement = (double)getRandomInteger(FI_MAX_INT);
    	*((double *)buffer + index) = doubleElement;
    	printf ("%s MPI_DOUBLE\n", BUG_INJECTION_LOG1);
    	fflush(stdout);
    	break;

    case MPI_CHAR:
    	charElement = (char)getRandomInteger(FI_MAX_CHAR);
    	*((char *)buffer + index) = charElement;
    	printf ("%s MPI_CHAR\n", BUG_INJECTION_LOG1);
    	fflush(stdout);
    	break;

    case MPI_REAL:
        realElement = (float)getRandomInteger(FI_MAX_INT);
        *((float *)buffer + index) = realElement;
        printf ("%s MPI_REAL\n", BUG_INJECTION_LOG1);
        fflush(stdout);
        break;

    case MPI_DOUBLE_PRECISION:
        doublePrecisionElement = (double)getRandomInteger(FI_MAX_INT);
        *((double *)buffer + index) = doublePrecisionElement;
        printf ("%s MPI_DOUBLE_PRECISION\n", BUG_INJECTION_LOG1);
        fflush(stdout);
        break;

    case MPI_INTEGER:
        integerElement = getRandomInteger(FI_MAX_INT);
        *((int *)buffer + index) = integerElement;
        printf ("%s MPI_INTEGER\n", BUG_INJECTION_LOG1);
        fflush(stdout);
        break;

    case MPI_COMPLEX:
    	complexElement = getRandomInteger(FI_MAX_COMPLEX);
		*((double *)buffer + index) = complexElement;
        printf ("%s MPI_COMPLEX\n", BUG_INJECTION_LOG1);
        fflush(stdout);
        break;

    case MPI_DOUBLE_COMPLEX:
    	doubleComplexElement = getRandomInteger(FI_MAX_DOUBLE_COMPLEX);
    	*((double *)buffer + index) = doubleComplexElement;
    	printf ("%s MPI_DOUBLE_COMPLEX\n", BUG_INJECTION_LOG1);
		fflush(stdout);
		break;

    default: return 0;
    }

    return 1;
}

/*
 * Determine the size of the buffer and selects
 * randomly one element. This element is increased.
 */
int
changeToLargerValue(
		    char *buffer,
		    int count,
		    MPI_Datatype datatype)
{

    int index, intElement, integerElement;
    short shortElement;
    long longElement;
    float floatElement, realElement;
    double doubleElement, doublePrecisionElement;
    double complexElement, doubleComplexElement;

    index = getRandomInteger(count);

    switch (datatype) {
    case MPI_INT:
    	intElement = (*((int *)buffer + index)) + (int)1;
    	*((int *)buffer + index) = intElement;
    	printf ("%s MPI_INT\n", BUG_INJECTION_LOG2);
    	fflush(stdout);
	break;

    case MPI_SHORT:
    	shortElement = (*((short *)buffer + index)) + (short)1;
    	*((short *)buffer + index) = shortElement;
    	printf ("%s MPI_SHORT\n", BUG_INJECTION_LOG2);
    	fflush(stdout);
		break;

    case MPI_LONG:
    	longElement = (*((long *)buffer + index)) + (long)1;
    	*((long *)buffer + index) = longElement;
    	printf ("%s MPI_LONG\n", BUG_INJECTION_LOG2);
    	fflush(stdout);
    	break;

    case MPI_FLOAT:
    	floatElement = (*((float *)buffer + index)) + (float)1;
    	*((float *)buffer + index) = floatElement;
    	printf ("%s MPI_FLOAT\n", BUG_INJECTION_LOG2);
    	fflush(stdout);
    	break;

    case MPI_DOUBLE:
    	doubleElement = (*((double *)buffer + index)) + (double)1;
    	*((double *)buffer + index) = doubleElement;
    	printf ("%s MPI_DOUBLE\n", BUG_INJECTION_LOG2);
    	fflush(stdout);
    	break;

    case MPI_REAL:
    	realElement = (*((float *)buffer + index)) + (float)1;
    	*((float *)buffer + index) = realElement;
    	printf ("%s MPI_REAL\n", BUG_INJECTION_LOG2);
    	fflush(stdout);
    	break;

    case MPI_DOUBLE_PRECISION:
    	doublePrecisionElement = (*((double *)buffer + index)) + (double)1;
        *((double *)buffer + index) = doublePrecisionElement;
        printf ("%s MPI_DOUBLE_PRECISION\n", BUG_INJECTION_LOG2);
        fflush(stdout);
        break;

    case MPI_INTEGER:
    	integerElement = (*((int *)buffer + index)) + (int)1;
    	*((int *)buffer + index) = integerElement;
    	printf ("%s MPI_INTEGER\n", BUG_INJECTION_LOG2);
    	fflush(stdout);
    	break;

    case MPI_COMPLEX:
        complexElement = (*((double *)buffer + index)) + (double)1;
        *((double *)buffer + index) = complexElement;
        printf ("%s MPI_COMPLEX\n", BUG_INJECTION_LOG2);
        fflush(stdout);
        break;

    case MPI_DOUBLE_COMPLEX:
        doubleComplexElement = (*((double *)buffer + index)) + (double)1;
        *((double *)buffer + index) = doubleComplexElement;
        printf ("%s MPI_DOUBLE_COMPLEX\n", BUG_INJECTION_LOG2);
        fflush(stdout);
        break;

    default: return 0;
    }
    return 1;
}


/*
 * Determine the size of the buffer and selects
 * randomly one element. This element is decreased.
 */
int
changeToSmallerValue(
		     char *buffer,
		     int count,
		     MPI_Datatype datatype)
{

    int index, intElement, integerElement;
    short shortElement;
    long longElement;
    float floatElement, realElement;
    double doubleElement, doublePrecisionElement;
    double complexElement, doubleComplexElement;

    index = getRandomInteger(count);

    switch(datatype) {
    case MPI_INT:
    	intElement = (*((int *)buffer + index)) - (int)1;
		*((int *)buffer + index) = intElement;
		printf ("%s MPI_INT\n", BUG_INJECTION_LOG3);
		fflush(stdout);
		break;

    case MPI_SHORT:
		shortElement = (*((short *)buffer + index)) - (short)1;
		*((short *)buffer + index) = shortElement;
		printf ("%s MPI_SHORT\n", BUG_INJECTION_LOG3);
		fflush(stdout);
		break;

    case MPI_LONG:
		longElement = (*((long *)buffer + index)) - (long)1;
		*((long *)buffer + index) = longElement;
		printf ("%s MPI_LONG\n", BUG_INJECTION_LOG3);
		fflush(stdout);
		break;

    case MPI_FLOAT:
		floatElement = (*((float *)buffer + index)) - (float)1;
		*((float *)buffer + index) = floatElement;
		printf ("%s MPI_FLOAT\n", BUG_INJECTION_LOG3);
		fflush(stdout);
		break;

    case MPI_DOUBLE:
		doubleElement = (*((double *)buffer + index)) - (double)1;
		*((double *)buffer + index) = doubleElement;
		printf ("%s MPI_DOUBLE\n", BUG_INJECTION_LOG3);
		fflush(stdout);
		break;

    case MPI_REAL:
		realElement = (*((float *)buffer + index)) - (float)1;
		*((float *)buffer + index) = realElement;
		printf ("%s MPI_REAL\n", BUG_INJECTION_LOG3);
		fflush(stdout);
		break;

    case MPI_DOUBLE_PRECISION:
		doublePrecisionElement = (*((double *)buffer + index)) - (double)1;
		*((double *)buffer + index) = doublePrecisionElement;
		printf ("%s MPI_DOUBLE_PRECISION\n", BUG_INJECTION_LOG3);
		fflush(stdout);
		break;

    case MPI_INTEGER:
		integerElement = (*((int *)buffer + index)) - (int)1;
		*((int *)buffer + index) = integerElement;
		printf ("%s MPI_INTEGER\n", BUG_INJECTION_LOG3);
		fflush(stdout);
		break;

    case MPI_COMPLEX:
    	complexElement = (*((double *)buffer + index)) - (double)1;
    	*((double *)buffer + index) = complexElement;
    	printf ("%s MPI_COMPLEX\n", BUG_INJECTION_LOG3);
    	fflush(stdout);
    	break;

    case MPI_DOUBLE_COMPLEX:
        doubleComplexElement = (*((double *)buffer + index)) - (double)1;
        *((double *)buffer + index) = doubleComplexElement;
        printf ("%s MPI_DOUBLE_COMPLEX\n", BUG_INJECTION_LOG3);
        fflush(stdout);
        break;

    default: return 0;
    }
    return 1;
}

/* Write k bytes beyond a data structure. The input char* buffer
 * is a pointer to the last memory location of the data structure.
 * This memory location has to be found before using this function.
 */
int
bufferOverFlow(
	       char *buffer,
	       unsigned int k)
{
    unsigned int i;

    for (i = 0; i < k; i++) {
	char c = (char)getRandomInteger(FI_MAX_CHAR);
	*((char *)buffer + 1 + i) = c;
    }
    printf ("%s\n", BUG_INJECTION_LOG4);
    fflush(stdout);

    return 1;
}
