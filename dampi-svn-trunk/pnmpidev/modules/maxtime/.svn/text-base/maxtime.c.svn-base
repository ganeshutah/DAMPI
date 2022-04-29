#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <pnmpimod.h>

#include <timelapse.h>

/*--------------------------------------------------------------------------*/
/* Setup */

#define PNMPI_MAXTIME "maxtime"

static double _maxtime_lastTime;
static double _maxtime_compTime;
static double _maxtime_commTime;

static int _rank,_size;

#include "maxtime.h"


/*.......................................................*/
/* Registration */

int PNMPI_RegistrationPoint()
{
  int err;

  /* register this module and its services */

  err=PNMPI_Service_RegisterModule(PNMPI_MAXTIME);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  return err;
}


/*.......................................................*/
/* Init */

int  MPI_Init(int * argc, char *** argv)
{
  int err;

  /* run init */

  err=PMPI_Init(argc, argv);

  /* set tracker */

  _maxtime_compTime=0;
  _maxtime_commTime=0;


  PMPI_Comm_rank(MPI_COMM_WORLD,&_rank);
  PMPI_Comm_size(MPI_COMM_WORLD,&_size);

  if (_rank==0)
    {
      printf("\n\nStarting new job on %i tasks\n",_size);
    }

  _maxtime_lastTime=PMPI_Wtime();

  return err;
}

int MPI_Finalize()
{
  int err;

  double nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;

  err=PMPI_Barrier(MPI_COMM_WORLD);

  printf("Rank %i Comp %f Comm %f\n",_rank,_maxtime_compTime,_maxtime_commTime);

  err=PMPI_Finalize();

  return err;
}

/*
int MPI_Pcontrol(int level, ...)
{
  printf("SO FAR Comp %f Comm %f\n",_maxtime_compTime,_maxtime_commTime);
  return MPI_SUCCESS;
}
*/
