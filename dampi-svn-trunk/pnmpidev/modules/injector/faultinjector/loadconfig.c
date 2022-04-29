#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libconfig.h>
#include "loadconfig.h"
#include "faultinjector.h"

#define PARAM_ERROR(name) printf("Failed loading parameter: %s\n", name);

/*
 * ------------------------------------------------
 * Prototypes
 * ------------------------------------------------
 */
void convertInt(char *, int);
char* concat(char *, unsigned int, char *);
char* concat_2(char *, unsigned int);

/*
 * ------------------------------------------------
 * Main function
 *
 * Reads cofiguration parameters for a fault injection
 * experiment. It uses the libconfig library APIs to
 * do this. Parameters are stored in data structures
 * declared in loadconfig.h.
 * ------------------------------------------------
 */
Config*
loadConfigFile(char *filename)
{
    unsigned int i, j;
    struct config_t cfg;
    Config *config = (Config *)malloc(sizeof(Config));
    config->exper = (Experiment *)malloc(sizeof(Experiment));

    /* Initialize the configuration */
    config_init(&cfg);

    initRand();

    /* Load the file */
    printf("Loading Fault Injector config file:\n[%s]...", filename);
    fflush(stdout);
    if (!config_read_file(&cfg, filename)) {
	printf("Failed loading file: %s\n", filename);
	const char *text = config_error_text(&cfg);
	int line = config_error_line(&cfg);
	printf("%s\nProblem at line: %d\n", text, line);
	fflush(stdout);
	return 0;
    } else {
	printf("ok.\n");
	fflush(stdout);
	config_setting_t *title =
	    config_lookup(&cfg, "experiment.title");
	config_setting_t *repeat =
	    config_lookup(&cfg, "experiment.repeat");
	config_setting_t *num_inject =
	    config_lookup(&cfg, "experiment.num_injections");
	if (!repeat)
	    config->exper->repeat = 1;
	if (!title) {
	    PARAM_ERROR("title");
	    fflush(stdout);
	    return 0;
	} else if (!num_inject) {
	    PARAM_ERROR("num_injections");
	    fflush(stdout);
	    return 0;
	} else {
	    printf("Getting injection params...");
	    fflush(stdout);
	    if (!config->exper->repeat) {
		config->exper->repeat = (unsigned int)config_setting_get_int(repeat);
	    }
	    config->exper->numInjections = (unsigned int)config_setting_get_int(num_inject);
	    strcpy(config->exper->title, config_setting_get_string(title));

	    /* Get parameters for each injection*/
	    config->inject = (Injections *)malloc(sizeof(Injections) * (config->exper->numInjections));
	    for (i = 0; i < config->exper->numInjections; i++) {
		/* Look for main injection parameters */
		config_setting_t *faults =
		    config_lookup(&cfg, concat("experiment.injection", i+1, ".num_faults"));

		if (!faults) {
		    printf("Parsing for %s\n", concat_2("experiment.injection", i+1));
		    PARAM_ERROR("num_faults");
		    fflush(stdout);
		    return 0;
		} else {
		    config->inject[i].numFaults =
			(unsigned int)config_setting_get_int(faults);
		}

		/* Look for actual fault parameteres */
		for (j = 0; j < config->inject[i].numFaults; j++) {

		    char *path1 = concat("experiment.injection", i+1, ".fault_type");
		    char *path2 = concat_2(path1, j+1);
		    config_setting_t *fault_type = config_lookup(&cfg, path2);

		    char *path3 = concat("experiment.injection", i+1, ".operation_type");
		    char *path4 = concat_2(path3, j+1);
		    config_setting_t *oper = config_lookup(&cfg, path4);

		    char *path5 = concat("experiment.injection", i+1, ".parameters");
		    char *path6 = concat_2(path5, j+1);
		    config_setting_t *params = config_lookup(&cfg, path6);

		    char *path7 = concat("experiment.injection", i+1, ".candidates");
		    char *path8 = concat_2(path7, j+1);
		    config_setting_t *cand = config_lookup(&cfg, path8);

		    char *path9 = concat("experiment.injection", i+1, ".individual_operation");
		    char *path10 = concat_2(path9, j+1);
		    config_setting_t *individual = config_lookup(&cfg, path10);
		    /*------------------*/

		    if (!fault_type) {
			printf("Parsing fault%d\n",j+1);
			PARAM_ERROR("fault_type#");
			fflush(stdout);
			return 0;
		    } else {
			char *name = (char *)config_setting_get_string(fault_type);
			enum FaultType f = convertFaultToEnum(name);
			if (f != DEFAULT_FAULT)
			    config->inject[i].faults[j] = f;
			else return 0;
		    }

		    char *op = (char *)config_setting_get_string(oper);
		    enum OperationType p = convertOperToEnum(op);
		    if (p != DEFAULT_OPER)
			config->inject[i].opers[j] = p;
		    else return 0;

                    if (!individual){
                        //config_setting_t *process = config_lookup(&cfg, "experiment.faulty_process");
                        //config->exper->faultyProcess = (int)config_setting_get_int(process);
                        config->inject[i].individualOperation[j] = (unsigned int)1;
                    } else {
                        config->inject[i].individualOperation[j] = (unsigned int)config_setting_get_int(individual);
                    }

		    config->inject[i].candidates[j] = (unsigned int)config_setting_get_int(cand);
		    config->inject[i].selected[j] = (unsigned int)(getRandomInteger( config->inject[i].candidates[j] ) + 1);
		    config->inject[i].nextcall[j] = (unsigned int)1;

		    if(params){
			int m = 0;
			long val = config_setting_get_int_elem (params, m);
			while (val) {
			    config->inject[i].params[j][m] = (unsigned int)val;
			    m++;
			    val = config_setting_get_int_elem (params, m);
			}
		    }

		}
	    }
	    printf("Done!\n");
	    fflush(stdout);
	}
    }

    /* Free the configuration */
    config_destroy(&cfg);

    return config;
}

/*
  ------------------------------------------------
  Utility functions
  ------------------------------------------------
*/
/* My version of the atoi() function */
void
convertInt(char *str, int num)
{
    sprintf(str, "%d", num);
}

/* ................................................
   String concatenation functions
 */
char*
concat(char *str1, unsigned int num, char *str2)
{
    char *result;
    char n[3];
    convertInt(n, num);

    result = (char *)malloc((strlen(str1) + strlen(n) + strlen(str2) + 1) * sizeof(char));
    strcpy(result, str1);
    strcat(result, n);
    strcat(result, str2);

    return result;
}

char*
concat_2(char *str, unsigned int num)
{
    char *result;
    char n[3];
    convertInt(n, num);

    result = (char *)malloc((strlen(str) + strlen(n) + 1) * sizeof(char));
    strcpy(result, str);
    strcat(result, n);

    return result;
}
/*................................................*/

/* Convert a fault type from a string to enum type.
   This fault is specified in the configuration file */
enum FaultType
convertFaultToEnum(char *str)
{
    if (strcmp(str, "BUFFER_OVERFLOW") == 0) {
	return (enum FaultType)BUFFER_OVERFLOW;
    } else if (strcmp(str, "DATA_CORRUPTION_CHANGE") == 0) {
	return (enum FaultType)DATA_CORRUPTION_CHANGE;
    } else if (strcmp(str, "DATA_CORRUPTION_INCREASE") == 0) {
	return (enum FaultType)DATA_CORRUPTION_INCREASE;
    } else if (strcmp(str, "DATA_CORRUPTION_DECREASE") == 0) {
	return (enum FaultType)DATA_CORRUPTION_DECREASE;
    } else if (strcmp(str, "INFINITE_LOOP") == 0) {
	return (enum FaultType)INFINITE_LOOP;
    } else if (strcmp(str, "FINITE_LOOP") == 0) {
	return (enum FaultType)FINITE_LOOP;
    } else if (strcmp(str, "EXTRA_MESSAGE") == 0) {
	return (enum FaultType)EXTRA_MESSAGE;
    } else if (strcmp(str, "DISCARD_MESSAGE") == 0) {
	return (enum FaultType)DISCARD_MESSAGE;
    } else {
	printf("\nError: the fault '%s' is not valid.\n", str);
	fflush(stdout);
	return (enum FaultType)DEFAULT_FAULT;
    }
}

/* Convert PnMPI operation types to enum types.
   This may be given in the config file as strings */
enum OperationType
convertOperToEnum(char *str)
{
    if (strcmp(str, "SEND_P2P") == 0) return (enum OperationType)SEND_P2P;
    else if (strcmp(str, "SEND_P2P_ASYNCH") == 0) return (enum OperationType)SEND_P2P_ASYNCH;
    else if (strcmp(str, "SEND_COLL_BCAST") == 0) return (enum OperationType)SEND_COLL_BCAST;
    else if (strcmp(str, "SEND_COLL_SCATTER") == 0) return (enum OperationType)SEND_COLL_SCATTER;
    else if (strcmp(str, "SEND_COLL_SCATTERV") == 0) return (enum OperationType)SEND_COLL_SCATTERV;
    else if (strcmp(str, "SEND_COLL_GATHER") == 0) return (enum OperationType)SEND_COLL_GATHER;
    else if (strcmp(str, "SEND_COLL_GATHERV") == 0) return (enum OperationType)SEND_COLL_GATHERV;
    else if (strcmp(str, "SEND_COLL_ALLGATHER") == 0) return (enum OperationType)SEND_COLL_ALLGATHER;
    else if (strcmp(str, "SEND_COLL_ALLGATHERV") == 0) return (enum OperationType)SEND_COLL_ALLGATHERV;
    else if (strcmp(str, "SEND_COLL_ALL2ALL") == 0) return (enum OperationType)SEND_COLL_ALL2ALL;
    else if (strcmp(str, "SEND_COLL_ALL2ALLV") == 0) return (enum OperationType)SEND_COLL_ALL2ALLV;
    else if (strcmp(str, "SEND_COLL_REDUCE") == 0) return (enum OperationType)SEND_COLL_REDUCE;
    else if (strcmp(str, "SEND_COLL_ALLREDUCE") == 0) return (enum OperationType)SEND_COLL_ALLREDUCE;
    else if (strcmp(str, "SEND_COLL_REDUCESCATTER") == 0) return (enum OperationType)SEND_COLL_REDUCESCATTER;
    else if (strcmp(str, "SEND_COLL_SCAN") == 0) return (enum OperationType)SEND_COLL_SCAN;

    else if (strcmp(str, "RECV_P2P") == 0) return (enum OperationType)RECV_P2P;
    else if (strcmp(str, "RECV_P2P_ASYNCH") == 0) return (enum OperationType)RECV_P2P_ASYNCH;
    else if (strcmp(str, "RECV_COLL_BCAST") == 0) return (enum OperationType)RECV_COLL_BCAST;
    else if (strcmp(str, "RECV_COLL_SCATTER") == 0) return (enum OperationType)RECV_COLL_SCATTER;
    else if (strcmp(str, "RECV_COLL_SCATTERV") == 0) return (enum OperationType)RECV_COLL_SCATTERV;
    else if (strcmp(str, "RECV_COLL_GATHER") == 0) return (enum OperationType)RECV_COLL_GATHER;
    else if (strcmp(str, "RECV_COLL_GATHERV") == 0) return (enum OperationType)RECV_COLL_GATHERV;
    else if (strcmp(str, "RECV_COLL_ALLGATHER") == 0) return (enum OperationType)RECV_COLL_ALLGATHER;
    else if (strcmp(str, "RECV_COLL_ALLGATHERV") == 0) return (enum OperationType)RECV_COLL_ALLGATHERV;
    else if (strcmp(str, "RECV_COLL_ALL2ALL") == 0) return (enum OperationType)RECV_COLL_ALL2ALL;
    else if (strcmp(str, "RECV_COLL_ALL2ALLV") == 0) return (enum OperationType)RECV_COLL_ALL2ALLV;
    else if (strcmp(str, "RECV_COLL_REDUCE") == 0) return (enum OperationType)RECV_COLL_REDUCE;
    else if (strcmp(str, "RECV_COLL_ALLREDUCE") == 0) return (enum OperationType)RECV_COLL_ALLREDUCE;
    else if (strcmp(str, "RECV_COLL_REDUCESCATTER") == 0) return (enum OperationType)RECV_COLL_REDUCESCATTER;
    else if (strcmp(str, "RECV_COLL_SCAN") == 0) return (enum OperationType)RECV_COLL_SCAN;

    else {
	printf("\nError: the operation '%s' is not valid.\n", str);
	fflush(stdout);
	return (enum OperationType)DEFAULT_OPER;
    }
}

/* ..........................................................................
   Determine whether a fault is of particular type group.
   For example, the following faults are the only members of the
   DATA CORRUPTION faults: DATA_CORRUPTION_CHANGE, DATA_CORRUPTION_INCREASE,
   DATA_CORRUPTION_DECREASE and BUFFER_OVERFLOW.
 */
int
isDataCorrFault(enum FaultType type)
{
    if (type == BUFFER_OVERFLOW) return 1;
    else if (type == DATA_CORRUPTION_CHANGE) return 1;
    else if (type == DATA_CORRUPTION_INCREASE) return 1;
    else if (type == DATA_CORRUPTION_DECREASE) return 1;
    else return 0;
}

int
isCommFault(enum FaultType type)
{
    if (type == EXTRA_MESSAGE) return 1;
    else if (type == DISCARD_MESSAGE) return 1;
    else return 0;
}

int
isPerformanceFault(enum FaultType type)
{
    if (type == FINITE_LOOP) return 1;
    else if (type == INFINITE_LOOP) return 1;
    else return 0;
}
/* .......................................................................... */

/* Return MPI datatypes from an integer. It's useful for converting integers
   given as input in the config file to actual MPI datatypes.
 */
MPI_Datatype
getMPIType(unsigned int type)
{
    if (type == 1) return (MPI_Datatype)MPI_CHAR;
    else if (type == 2) return (MPI_Datatype)MPI_INT;
    else if (type == 3) return (MPI_Datatype)MPI_SHORT;
    else if (type == 4) return (MPI_Datatype)MPI_LONG;
    else if (type == 5) return (MPI_Datatype)MPI_FLOAT;
    else if (type == 6) return (MPI_Datatype)MPI_DOUBLE;
    else if (type == 7) return (MPI_Datatype)MPI_REAL;
    else if (type == 8) return (MPI_Datatype)MPI_DOUBLE_PRECISION;
    else if (type == 9) return (MPI_Datatype)MPI_INTEGER;
    else if (type == 10) return (MPI_Datatype)MPI_COMPLEX;
    else if (type == 11) return (MPI_Datatype)MPI_DOUBLE_COMPLEX;
    else return (MPI_Datatype)0;
}
