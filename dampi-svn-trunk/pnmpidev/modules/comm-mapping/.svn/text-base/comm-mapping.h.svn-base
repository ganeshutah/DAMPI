#include <mpi.h>

#ifndef _PNMPI_MOD_COMM_MAPPING
#define _PNMPI_MOD_COMM_MAPPING

/*------------------------------------------------------------*/
/* Note: this module must be loaded into the stack before
   any module using it (i.e., must be instantiated between
   any user and the application). Also, any call to its
   services must occur after calling PMPI_Init and services
   are only available to modules requesting it during
   MPI_Init */

/*------------------------------------------------------------*/
#define PNMPI_MODULE_COMM_MAPPING "comm-mapping"


/*..........................................................*/
/* Access macros */

typedef int (*PNMPIMOD_Comm_Mapping_t)(MPI_Comm,MPI_Comm*);
int PNMPIMOD_Comm_Mapping(MPI_Comm comm, MPI_Comm* comm_out);


#endif /* _PNMPI_MOD_COMM_MAPPING */
