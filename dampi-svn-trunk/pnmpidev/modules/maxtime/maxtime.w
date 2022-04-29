/* automatically generated wrapper code */

{{forallfn fn_name MPI_Init MPI_Pcontrol MPI_Finalize}}
{{retType}} {{fn_name}}{{argTypeList}}
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=P{{fn_name}}{{argList}};
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}
{{endforallfn}}

