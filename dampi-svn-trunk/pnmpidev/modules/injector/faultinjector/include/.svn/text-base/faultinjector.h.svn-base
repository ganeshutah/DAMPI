#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#ifndef FAULTINJECTOR_H_
#define FAULTINJECTOR_H_

#include <mpi.h>

/*
 * -----------------------------------------------
 * Constants
 * -----------------------------------------------
*/
#define YES 1
#define NO 0

/*
 * -----------------------------------------------
 * Data corruption faults
 * -----------------------------------------------
*/
int changeToWrongValue(char *, int, MPI_Datatype);

int changeToLargerValue(char *, int, MPI_Datatype);

int changeToSmallerValue(char *, int, MPI_Datatype);

int bufferOverFlow(char *, unsigned int);

/*
 * -----------------------------------------------
 * Performance faults
 * -----------------------------------------------
*/
void infiniteLoop(void);

int finiteLoop(unsigned int);

/*
 * -----------------------------------------------
 * Communication faults
 * -----------------------------------------------
*/
int sendP2PExtraMessages(void *, int, MPI_Datatype, int, int, MPI_Comm, unsigned int);

int sendAsynchExtraMessages(void *, int, MPI_Datatype, int, int, MPI_Comm, unsigned int);

int discardMessages(void);

/*
 * -----------------------------------------------
 * General utility functions
 * -----------------------------------------------
*/
void initRand( void );

double getRandomDouble( void );

int getRandomInteger( int );

#endif /* FAULTINJECTOR_H_ */

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */
