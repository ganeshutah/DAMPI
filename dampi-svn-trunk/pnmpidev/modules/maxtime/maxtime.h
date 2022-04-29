/* automatically generated wrapper code */


int MPI_Abort(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Abort(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Address(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Allgather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Allgather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Allgatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Allgatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Allreduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Allreduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Alltoall(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Alltoall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Alltoallv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Alltoallv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Attr_delete(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Attr_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Attr_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Attr_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Attr_put(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Attr_put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Barrier(MPI_Comm _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Barrier(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Bcast(void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Bcast(buffer, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Bsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Bsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Bsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Bsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Buffer_attach(void * buffer, int _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Buffer_attach(buffer, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Buffer_detach(void * buffer, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Buffer_detach(buffer, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Cancel(MPI_Request * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Cancel(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Cart_coords(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Cart_coords(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Cart_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Cart_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Cart_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Cart_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Cart_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Cart_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Cart_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Cart_rank(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Cart_shift(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Cart_shift(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Cart_sub(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Cart_sub(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Cartdim_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Cartdim_get(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_compare(MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_create(MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_dup(MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_free(MPI_Comm * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_free(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_get_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_group(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_rank(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_remote_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_remote_group(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_remote_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_remote_size(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_set_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_size(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_split(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_split(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Comm_test_inter(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Comm_test_inter(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Dims_create(int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Dims_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Errhandler_create(MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Errhandler_create(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Errhandler_free(MPI_Errhandler * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Errhandler_free(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Errhandler_get(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Errhandler_get(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Errhandler_set(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Errhandler_set(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Error_class(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Error_class(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Error_string(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_close(MPI_File * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_close(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_delete(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_amode(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_amode(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_atomicity(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_byte_offset(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_byte_offset(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_group(MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_info(MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_info(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_position(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_position(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_position_shared(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_position_shared(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_size(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_size(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_type_extent(MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_type_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_get_view(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_get_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_iread(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPIO_Request * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_iread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_iread_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPIO_Request * _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_iread_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_iread_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPIO_Request * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_iread_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_iwrite(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPIO_Request * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_iwrite(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_iwrite_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPIO_Request * _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_iwrite_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_iwrite_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPIO_Request * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_iwrite_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_open(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_open(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_preallocate(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_preallocate(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_read_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_read_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_seek(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_seek(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_seek_shared(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_seek_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_set_atomicity(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_set_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_set_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_set_info(MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_set_info(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_set_size(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_set_size(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_set_view(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_set_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_sync(MPI_File _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_sync(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_File_write_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_File_write_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Gather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Gather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Gatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Gatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Get_count(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Get_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Get_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Get_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Get_processor_name(char * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Get_processor_name(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Get_version(int * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Get_version(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Graph_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Graph_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Graph_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Graph_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Graph_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Graph_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Graph_neighbors(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Graph_neighbors(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Graph_neighbors_count(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Graph_neighbors_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Graphdims_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Graphdims_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_compare(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_difference(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_difference(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_excl(MPI_Group group, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_excl(group, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_free(MPI_Group * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_free(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_incl(MPI_Group group, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_incl(group, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_intersection(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_intersection(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_range_excl(MPI_Group group, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_range_excl(group, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_range_incl(MPI_Group group, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_range_incl(group, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_rank(MPI_Group group, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_rank(group, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_size(MPI_Group group, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_size(group, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_translate_ranks(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_translate_ranks(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Group_union(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Group_union(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Ibsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Ibsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Info_create(MPI_Info * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Info_create(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Info_delete(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Info_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Info_dup(MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Info_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Info_free(MPI_Info * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Info_free(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Info_get(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Info_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Info_get_nkeys(MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Info_get_nkeys(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Info_get_nthkey(MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Info_get_nthkey(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Info_get_valuelen(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Info_get_valuelen(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Info_set(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Info_set(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Init_thread(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Init_thread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Initialized(int * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Initialized(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Intercomm_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Intercomm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Intercomm_merge(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Intercomm_merge(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Iprobe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * flag, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Iprobe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, flag, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Irecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Irecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Irsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Irsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Isend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Isend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Issend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Issend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Keyval_create(MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Keyval_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Keyval_free(int * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Keyval_free(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Op_create(MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Op_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Op_free(MPI_Op * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Op_free(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Pack(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Pack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Pack_size(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Pack_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Probe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Probe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Recv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Recv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Recv_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Recv_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Reduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Reduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Reduce_scatter(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Reduce_scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Register_datarep(char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Register_datarep(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Request_free(MPI_Request * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Request_free(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Rsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Rsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Rsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Rsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Scan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Scan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Scatter(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Scatterv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Scatterv(_pnmpi_arg_0, _pnmpi_arg_1, displs, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Send(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Send(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Send_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Send_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Sendrecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Sendrecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9, _pnmpi_arg_10, _pnmpi_arg_11);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Sendrecv_replace(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Sendrecv_replace(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Ssend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Ssend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Ssend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Ssend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Start(MPI_Request * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Start(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Startall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Startall(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Status_set_cancelled(MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Status_set_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Status_set_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Status_set_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Test(MPI_Request * _pnmpi_arg_0, int * flag, MPI_Status * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Test(_pnmpi_arg_0, flag, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Test_cancelled(MPI_Status * _pnmpi_arg_0, int * flag)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Test_cancelled(_pnmpi_arg_0, flag);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Testall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * flag, MPI_Status * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Testall(_pnmpi_arg_0, _pnmpi_arg_1, flag, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Testany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Testany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Testsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Testsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Topo_test(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Topo_test(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_commit(MPI_Datatype * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_commit(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_contiguous(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_contiguous(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_create_darray(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_create_darray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_create_subarray(int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_create_subarray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_extent(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_free(MPI_Datatype * _pnmpi_arg_0)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_free(_pnmpi_arg_0);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_get_contents(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int * _pnmpi_arg_4, MPI_Aint * _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_get_contents(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_get_envelope(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_get_envelope(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_hindexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_indexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_indexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_lb(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_lb(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_size(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_size(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_struct(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_ub(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_ub(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Type_vector(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Type_vector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Unpack(void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Unpack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Wait(MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Wait(_pnmpi_arg_0, _pnmpi_arg_1);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Waitall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Waitall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Waitany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Waitany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

int MPI_Waitsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Waitsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

double MPI_Wtick()
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Wtick();
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

double MPI_Wtime()
{
  int __err__;
  double nowTime;
  nowTime=PMPI_Wtime();
  _maxtime_compTime+=nowTime-_maxtime_lastTime;
/*  printf("NEW Comp %f\n",_maxtime_compTime);*/
  __err__=PMPI_Wtime();
  _maxtime_lastTime=PMPI_Wtime();
  _maxtime_commTime+=_maxtime_lastTime-nowTime;
/*  printf("NEW Comm %f\n",_maxtime_commTime);*/
  return __err__;
}

