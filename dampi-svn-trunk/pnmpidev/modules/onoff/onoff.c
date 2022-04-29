#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <pnmpimod.h>

#include <timelapse.h>

/* FIXME/open issue: start with timing off not supported */

/*--------------------------------------------------------------------------*/
/* Setup */

#define PNMPI_ONOFF "onoff"

static int _is_on=0;
static int _target=0;
static int _endtarget=-1;
static int _counter=0;
static int _verbose=0;
static int _stack_on=-1;
static int _stack_off=PNMPI_MAX_MOD;
static int _rank;

static PNMPIMOD_Timelapse_Switch_t timelapse_switch=NULL;


#include "onoff.h"



/*.......................................................*/
/* Registration */

int PNMPI_RegistrationPoint()
{
  int err;

  /* register this module and its services */

  err=PNMPI_Service_RegisterModule(PNMPI_ONOFF);
  if (err!=PNMPI_SUCCESS)
    return MPI_ERROR_PNMPI;

  return err;
}


/*.......................................................*/
/* Init */

int  MPI_Init(int * argc, char *** argv)
{
  int err;
  char *inp;
  int handle_onoff;
  PNMPI_modHandle_t handle_timelapse;
  PNMPI_Service_descriptor_t serv;

  /* query the timelapse module */

  err=PNMPI_Service_GetModuleByName(PNMPI_MODULE_TIMELAPSE,&handle_timelapse);
  if (err==MPI_SUCCESS)
    {
      /* found a timelapse module */

      err=PNMPI_Service_GetServiceByName(handle_timelapse,"timelapse","i",&serv);
      if (err!=MPI_SUCCESS)
	return err;
      timelapse_switch=(PNMPIMOD_Timelapse_Switch_t) serv.fct;
    }

  /* query own module */

  err=PNMPI_Service_GetModuleByName(PNMPI_ONOFF,&handle_onoff);
  if (err!=PNMPI_SUCCESS)
    return err;

  err=PNMPI_Service_GetArgument(handle_onoff,"target",&inp);
  if (err!=PNMPI_SUCCESS)
    return err;
  _target=atoi(inp);

  err=PNMPI_Service_GetArgument(handle_onoff,"endtarget",&inp);
  if (err==PNMPI_SUCCESS)
    {
      if (err!=PNMPI_SUCCESS)
	return err;
      _endtarget=atoi(inp);
    }
  else
    _endtarget=_target;

  err=PNMPI_Service_GetArgument(handle_onoff,"verbose",&inp);
  if (err!=PNMPI_SUCCESS)
    return err;
  _verbose=atoi(inp);

  err=PNMPI_Service_GetArgument(handle_onoff,"onstack",&inp);
  if (err==PNMPI_SUCCESS)
    {
      err=PNMPI_Service_GetStackByName(inp,&_stack_on);
      if (err!=PNMPI_SUCCESS)
	return err;
    }

  err=PNMPI_Service_GetArgument(handle_onoff,"offstack",&inp);
  if (err==PNMPI_SUCCESS)
    {
      err=PNMPI_Service_GetStackByName(inp,&_stack_off);
      if (err!=PNMPI_SUCCESS)
	return err;
    }

  /* run init */

  if (timelapse_switch)
    timelapse_switch(0);

  err=PMPI_Init(argc, argv);

  if ((_stack_on>=0) && (_stack_on<PNMPI_MAX_MOD))
    {
      err=PMPI_Init_NewStack(_stack_on,argc, argv);
    }
  if ((_stack_off>=0) && (_stack_off<PNMPI_MAX_MOD))
    {
      err=PMPI_Init_NewStack(_stack_off,argc, argv);
    }

  /* get rank */

  MPI_Comm_rank(MPI_COMM_WORLD,&_rank);

  return err;
}

int MPI_Finalize()
{
  int err;


  if (_rank==0) printf("Running main Finalize\n");
  err=PMPI_Finalize();
  if ((_stack_on>=0) && (_stack_on<PNMPI_MAX_MOD))
    {
      if (_rank==0) printf("Running Finalize On Stack\n");
      err=PMPI_Finalize_NewStack(_stack_on);
    }
  if ((_stack_off>=0) && (_stack_off<PNMPI_MAX_MOD))
    {
      if (_rank==0) printf("Running Finalize Off Stack\n");
      err=PMPI_Finalize_NewStack(_stack_off);
    }
  if (_rank==0) printf("Finalize done\n");

  return err;
}


/*.......................................................*/
/* PControl */

int MPI_Pcontrol(int level, ...)
{
  if (_target==0)
    {
      if (level==0)
	_is_on=0;
      else
	_is_on=1;
    }
  else
    {
      _counter++;
      if ((_counter>=_target) && (_counter<=_endtarget))
	_is_on=1;
      else
	_is_on=0;
    }

  if (timelapse_switch)
    timelapse_switch(_is_on);

  if ((_verbose) && (_rank==0))
    printf("Completed Pcontrol, new on/off is %i / counter %i / time %f\n",_is_on,_counter,PMPI_Wtime());

  return MPI_SUCCESS;
}
