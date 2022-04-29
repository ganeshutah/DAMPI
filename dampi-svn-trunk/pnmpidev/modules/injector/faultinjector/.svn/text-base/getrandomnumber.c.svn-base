#include <stdio.h>
#include <stdlib.h>
#include "faultinjector.h"

/* Prints out a random number between 0 a given input */
int
main(int argc, char *argv[], char *envp[]){

    int max;
    max = atoi(argv[1]);

    initRand();

    printf("%d\n", getRandomInteger( max ));

    return 1;
}

