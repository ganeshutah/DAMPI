#include <stdio.h>
#include <unistd.h>
#include <mpi.h>
#include "faultinjector.h"

/*
 * -----------------------------------------------
 * Constants
 * -----------------------------------------------
 */
#define ALWAYS 1
#define BUG_INJECTION_LOG1 "[FI] Infinite loop"
#define BUG_INJECTION_LOG2 "[FI] Finite loop"

/*
 *-----------------------------------------------
 * Fault injection functions
 *-----------------------------------------------
 */

void 
infiniteLoop(void)
{
    printf("%s\n", BUG_INJECTION_LOG1);
    fflush(stdout);

    while(ALWAYS)
	;
}

/* Injects a loop for a finite amount of time (sec) */
int 
finiteLoop(unsigned int num)
{
    int res;

    printf("%s\n", BUG_INJECTION_LOG2);
    fflush(stdout);
    res = sleep(num);
    if (res == 0) {
	return 1;
    }

    /* a signal was delivered */
    return 0;
}

