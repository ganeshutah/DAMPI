#include <stdlib.h>
#include <time.h>
#include "faultinjector.h"

/*
 * Init function 
 */
void 
initRand( void )
{
    time_t seed;
    seed = time(NULL);
    srand(seed);
    return;
}

/*
 * Generates a double random number from 0 to 1.0
 */
double 
getRandomDouble( void )
{
    double res;
    res = ((double)rand() / (double)RAND_MAX);
    return res;
}

/*
 * Generates an integer random number from 0 to (maxValue-1)
 */
int 
getRandomInteger(int maxValue) 
{
    int res;
    res = rand() % maxValue;
    return res;
}
