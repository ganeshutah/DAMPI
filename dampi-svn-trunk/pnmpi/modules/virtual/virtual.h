/* automatically generated wrapper code */


int MPI_Abort(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Abort(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Accumulate(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8)
{
  
  return PMPI_Accumulate(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Add_error_class(int * _pnmpi_arg_0)
{
  
  return PMPI_Add_error_class(_pnmpi_arg_0);
}

int MPI_Add_error_code(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_Add_error_code(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Add_error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  
  return PMPI_Add_error_string(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  
  return PMPI_Address(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Allgather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Allgather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Allgatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  MACRO_MPI_Comm(_pnmpi_arg_7);

  return PMPI_Allgatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Alloc_mem(MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr)
{
  
  return PMPI_Alloc_mem(_pnmpi_arg_0, info, baseptr);
}

int MPI_Allreduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Allreduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Alltoall(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Alltoall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Alltoallv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  MACRO_MPI_Comm(_pnmpi_arg_8);

  return PMPI_Alltoallv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Alltoallw(void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8)
{
  MACRO_MPI_Comm(_pnmpi_arg_8);

  return PMPI_Alltoallw(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Attr_delete(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Attr_delete(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Attr_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Attr_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Attr_put(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Attr_put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Barrier(MPI_Comm _pnmpi_arg_0)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Barrier(_pnmpi_arg_0);
}

int MPI_Bcast(void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4)
{
  MACRO_MPI_Comm(_pnmpi_arg_4);

  return PMPI_Bcast(buffer, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Bsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Bsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Bsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Bsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Buffer_attach(void * buffer, int _pnmpi_arg_1)
{
  
  return PMPI_Buffer_attach(buffer, _pnmpi_arg_1);
}

int MPI_Buffer_detach(void * buffer, int * _pnmpi_arg_1)
{
  
  return PMPI_Buffer_detach(buffer, _pnmpi_arg_1);
}

int MPI_Cancel(MPI_Request * _pnmpi_arg_0)
{
  
  return PMPI_Cancel(_pnmpi_arg_0);
}

int MPI_Cart_coords(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_coords(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Cart_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Cartdim_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cartdim_get(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Cart_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Cart_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Cart_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_rank(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Cart_shift(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_shift(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Cart_sub(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_sub(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Close_port(char * _pnmpi_arg_0)
{
  
  return PMPI_Close_port(_pnmpi_arg_0);
}

int MPI_Comm_accept(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  MACRO_MPI_Comm(_pnmpi_arg_3);

  return PMPI_Comm_accept(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Comm_call_errhandler(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_compare(MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);
MACRO_MPI_Comm(_pnmpi_arg_1);

  return PMPI_Comm_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_connect(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  MACRO_MPI_Comm(_pnmpi_arg_3);

  return PMPI_Comm_connect(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Comm_create(MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_create_errhandler(MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  
  return PMPI_Comm_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_create_keyval(MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  
  return PMPI_Comm_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Comm_delete_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_disconnect(MPI_Comm * _pnmpi_arg_0)
{
  
  return PMPI_Comm_disconnect(_pnmpi_arg_0);
}

int MPI_Comm_dup(MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_dup(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_free(MPI_Comm * _pnmpi_arg_0)
{
  
  return PMPI_Comm_free(_pnmpi_arg_0);
}

int MPI_Comm_free_keyval(int * _pnmpi_arg_0)
{
  
  return PMPI_Comm_free_keyval(_pnmpi_arg_0);
}

int MPI_Comm_get_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Comm_get_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_get_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_get_parent(MPI_Comm * _pnmpi_arg_0)
{
  
  return PMPI_Comm_get_parent(_pnmpi_arg_0);
}

int MPI_Comm_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_group(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_join(int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  
  return PMPI_Comm_join(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_rank(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_remote_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_remote_group(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_remote_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_remote_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_set_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_set_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_set_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_spawn(char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[])
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Comm_spawn(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Comm_spawn_multiple(int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[])
{
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Comm_spawn_multiple(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Comm_split(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_split(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Comm_test_inter(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_test_inter(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Dims_create(int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  
  return PMPI_Dims_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Dist_graph_create(MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  MACRO_MPI_Comm(comm_old);

  return PMPI_Dist_graph_create(comm_old, n, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, info, reorder, comm_dist_graph);
}

int MPI_Dist_graph_create_adjacent(MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  MACRO_MPI_Comm(comm_old);

  return PMPI_Dist_graph_create_adjacent(comm_old, indegree, _pnmpi_arg_2, _pnmpi_arg_3, outdegree, _pnmpi_arg_5, _pnmpi_arg_6, info, reorder, comm_dist_graph);
}

int MPI_Dist_graph_neighbors(MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[])
{
  MACRO_MPI_Comm(comm);

  return PMPI_Dist_graph_neighbors(comm, maxindegree, _pnmpi_arg_2, _pnmpi_arg_3, maxoutdegree, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Dist_graph_neighbors_count(MPI_Comm comm, int * indegree, int * outdegree, int * weighted)
{
  MACRO_MPI_Comm(comm);

  return PMPI_Dist_graph_neighbors_count(comm, indegree, outdegree, weighted);
}

int MPI_Errhandler_create(MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  
  return PMPI_Errhandler_create(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Errhandler_free(MPI_Errhandler * _pnmpi_arg_0)
{
  
  return PMPI_Errhandler_free(_pnmpi_arg_0);
}

int MPI_Errhandler_get(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Errhandler_get(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Errhandler_set(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Errhandler_set(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Error_class(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_Error_class(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  
  return PMPI_Error_string(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Exscan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Exscan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_call_errhandler(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  
  return PMPI_File_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_close(MPI_File * _pnmpi_arg_0)
{
  
  return PMPI_File_close(_pnmpi_arg_0);
}

int MPI_File_create_errhandler(MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  
  return PMPI_File_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_delete(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  
  return PMPI_File_delete(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_amode(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_File_get_amode(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_atomicity(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_File_get_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_byte_offset(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2)
{
  
  return PMPI_File_get_byte_offset(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_get_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  
  return PMPI_File_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_group(MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  
  return PMPI_File_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_info(MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  
  return PMPI_File_get_info(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_position(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  
  return PMPI_File_get_position(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_position_shared(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  
  return PMPI_File_get_position_shared(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_size(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  
  return PMPI_File_get_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_type_extent(MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  
  return PMPI_File_get_type_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_get_view(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4)
{
  
  return PMPI_File_get_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iread(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  
  return PMPI_File_iread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iread_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  
  return PMPI_File_iread_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_iread_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  
  return PMPI_File_iread_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iwrite(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  
  return PMPI_File_iwrite(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iwrite_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  
  return PMPI_File_iwrite_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_iwrite_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  
  return PMPI_File_iwrite_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_open(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_File_open(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_preallocate(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  
  return PMPI_File_preallocate(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_read(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_File_read(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_File_read_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  
  return PMPI_File_read_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_read_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  
  return PMPI_File_read_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_read_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  
  return PMPI_File_read_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_read_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  
  return PMPI_File_read_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_read_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  
  return PMPI_File_read_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  
  return PMPI_File_read_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_read_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_File_read_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  
  return PMPI_File_read_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_read_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  
  return PMPI_File_read_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_read_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_File_read_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_seek(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  
  return PMPI_File_seek(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_seek_shared(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  
  return PMPI_File_seek_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_set_atomicity(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  
  return PMPI_File_set_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  
  return PMPI_File_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_info(MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  
  return PMPI_File_set_info(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_size(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  
  return PMPI_File_set_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_view(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5)
{
  
  return PMPI_File_set_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_sync(MPI_File _pnmpi_arg_0)
{
  
  return PMPI_File_sync(_pnmpi_arg_0);
}

int MPI_File_write(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_File_write(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_File_write_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  
  return PMPI_File_write_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_write_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  
  return PMPI_File_write_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_write_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  
  return PMPI_File_write_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_write_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  
  return PMPI_File_write_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_write_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  
  return PMPI_File_write_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  
  return PMPI_File_write_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_write_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_File_write_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  
  return PMPI_File_write_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_write_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  
  return PMPI_File_write_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_write_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_File_write_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Finalize()
{
  
  return PMPI_Finalize();
}

int MPI_Finalized(int * _pnmpi_arg_0)
{
  
  return PMPI_Finalized(_pnmpi_arg_0);
}

int MPI_Free_mem(void * _pnmpi_arg_0)
{
  
  return PMPI_Free_mem(_pnmpi_arg_0);
}

int MPI_Gather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  MACRO_MPI_Comm(_pnmpi_arg_7);

  return PMPI_Gather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Gatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  MACRO_MPI_Comm(_pnmpi_arg_8);

  return PMPI_Gatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Get(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  
  return PMPI_Get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Get_address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  
  return PMPI_Get_address(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Get_count(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  
  return PMPI_Get_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Get_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  
  return PMPI_Get_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Get_processor_name(char * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_Get_processor_name(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Get_version(int * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_Get_version(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Graph_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graph_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Graphdims_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graphdims_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Graph_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graph_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Graph_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graph_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Graph_neighbors(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graph_neighbors(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Graph_neighbors_count(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graph_neighbors_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Grequest_complete(MPI_Request _pnmpi_arg_0)
{
  
  return PMPI_Grequest_complete(_pnmpi_arg_0);
}

int MPI_Grequest_start(MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  
  return PMPI_Grequest_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Group_compare(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  
  return PMPI_Group_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Group_difference(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  
  return PMPI_Group_difference(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Group_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  
  return PMPI_Group_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_free(MPI_Group * _pnmpi_arg_0)
{
  
  return PMPI_Group_free(_pnmpi_arg_0);
}

int MPI_Group_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  
  return PMPI_Group_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_intersection(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  
  return PMPI_Group_intersection(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Group_range_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  
  return PMPI_Group_range_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_range_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  
  return PMPI_Group_range_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_rank(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_Group_rank(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Group_size(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_Group_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Group_translate_ranks(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  
  return PMPI_Group_translate_ranks(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Group_union(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  
  return PMPI_Group_union(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Ibsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Ibsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Info_create(MPI_Info * _pnmpi_arg_0)
{
  
  return PMPI_Info_create(_pnmpi_arg_0);
}

int MPI_Info_delete(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  
  return PMPI_Info_delete(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Info_dup(MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  
  return PMPI_Info_dup(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Info_free(MPI_Info * info)
{
  
  return PMPI_Info_free(info);
}

int MPI_Info_get(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  
  return PMPI_Info_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Info_get_nkeys(MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_Info_get_nkeys(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Info_get_nthkey(MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  
  return PMPI_Info_get_nthkey(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Info_get_valuelen(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  
  return PMPI_Info_get_valuelen(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Info_set(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  
  return PMPI_Info_set(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Initialized(int * _pnmpi_arg_0)
{
  
  return PMPI_Initialized(_pnmpi_arg_0);
}

int MPI_Init_thread(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  
  return PMPI_Init_thread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Intercomm_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);
MACRO_MPI_Comm(_pnmpi_arg_2);

  return PMPI_Intercomm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Intercomm_merge(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Intercomm_merge(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Iprobe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  MACRO_MPI_Comm(_pnmpi_arg_2);

  return PMPI_Iprobe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Irecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Irecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Irsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Irsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Isend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Isend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Issend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Issend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Is_thread_main(int * _pnmpi_arg_0)
{
  
  return PMPI_Is_thread_main(_pnmpi_arg_0);
}

int MPI_Keyval_create(MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  
  return PMPI_Keyval_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Keyval_free(int * _pnmpi_arg_0)
{
  
  return PMPI_Keyval_free(_pnmpi_arg_0);
}

int MPI_Lookup_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  
  return PMPI_Lookup_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Op_commutative(MPI_Op op, int * commute)
{
  
  return PMPI_Op_commutative(op, commute);
}

int MPI_Op_create(MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2)
{
  
  return PMPI_Op_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Open_port(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  
  return PMPI_Open_port(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Op_free(MPI_Op * _pnmpi_arg_0)
{
  
  return PMPI_Op_free(_pnmpi_arg_0);
}

int MPI_Pack(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Pack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Pack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6)
{
  
  return PMPI_Pack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Pack_external_size(char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3)
{
  
  return PMPI_Pack_external_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Pack_size(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  MACRO_MPI_Comm(_pnmpi_arg_2);

  return PMPI_Pack_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Probe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  MACRO_MPI_Comm(_pnmpi_arg_2);

  return PMPI_Probe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Publish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  
  return PMPI_Publish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Put(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  
  return PMPI_Put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Query_thread(int * _pnmpi_arg_0)
{
  
  return PMPI_Query_thread(_pnmpi_arg_0);
}

int MPI_Recv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Recv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Recv_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Recv_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Reduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Reduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Reduce_local(void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op)
{
  
  return PMPI_Reduce_local(inbuf, inoutbuf, count, datatype, op);
}

int MPI_Reduce_scatter(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Reduce_scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Reduce_scatter_block(void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  MACRO_MPI_Comm(comm);

  return PMPI_Reduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm);
}

int MPI_Register_datarep(char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4)
{
  
  return PMPI_Register_datarep(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Request_free(MPI_Request * _pnmpi_arg_0)
{
  
  return PMPI_Request_free(_pnmpi_arg_0);
}

int MPI_Request_get_status(MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  
  return PMPI_Request_get_status(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Rsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Rsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Rsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Rsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Scan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Scan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Scatter(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  MACRO_MPI_Comm(_pnmpi_arg_7);

  return PMPI_Scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Scatterv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  MACRO_MPI_Comm(_pnmpi_arg_8);

  return PMPI_Scatterv(_pnmpi_arg_0, _pnmpi_arg_1, displs, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Send(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Send(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Send_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Send_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Sendrecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11)
{
  MACRO_MPI_Comm(_pnmpi_arg_10);

  return PMPI_Sendrecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9, _pnmpi_arg_10, _pnmpi_arg_11);
}

int MPI_Sendrecv_replace(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8)
{
  MACRO_MPI_Comm(_pnmpi_arg_7);

  return PMPI_Sendrecv_replace(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Ssend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Ssend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Ssend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Ssend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Start(MPI_Request * _pnmpi_arg_0)
{
  
  return PMPI_Start(_pnmpi_arg_0);
}

int MPI_Startall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1)
{
  
  return PMPI_Startall(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Status_set_cancelled(MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1)
{
  
  return PMPI_Status_set_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Status_set_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2)
{
  
  return PMPI_Status_set_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Test(MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  
  return PMPI_Test(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Testall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  
  return PMPI_Testall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Testany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_Testany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Test_cancelled(MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_Test_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Testsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_Testsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Topo_test(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Topo_test(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_commit(MPI_Datatype * _pnmpi_arg_0)
{
  
  return PMPI_Type_commit(_pnmpi_arg_0);
}

int MPI_Type_contiguous(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  
  return PMPI_Type_contiguous(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_create_darray(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9)
{
  
  return PMPI_Type_create_darray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9);
}

int MPI_Type_create_f90_complex(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  
  return PMPI_Type_create_f90_complex(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_create_f90_integer(int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  
  return PMPI_Type_create_f90_integer(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_create_f90_real(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  
  return PMPI_Type_create_f90_real(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_create_hindexed(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  
  return PMPI_Type_create_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  
  return PMPI_Type_create_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_indexed_block(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  
  return PMPI_Type_create_indexed_block(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_keyval(MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  
  return PMPI_Type_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Type_create_resized(MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3)
{
  
  return PMPI_Type_create_resized(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Type_create_struct(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4)
{
  
  return PMPI_Type_create_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_subarray(int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6)
{
  
  return PMPI_Type_create_subarray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Type_delete_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1)
{
  
  return PMPI_Type_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_dup(MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  
  return PMPI_Type_dup(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  
  return PMPI_Type_extent(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_free(MPI_Datatype * _pnmpi_arg_0)
{
  
  return PMPI_Type_free(_pnmpi_arg_0);
}

int MPI_Type_free_keyval(int * _pnmpi_arg_0)
{
  
  return PMPI_Type_free_keyval(_pnmpi_arg_0);
}

int MPI_Type_get_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  
  return PMPI_Type_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Type_get_contents(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[])
{
  
  return PMPI_Type_get_contents(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Type_get_envelope(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  
  return PMPI_Type_get_envelope(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_get_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  
  return PMPI_Type_get_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_get_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  
  return PMPI_Type_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_get_true_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  
  return PMPI_Type_get_true_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_hindexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  
  return PMPI_Type_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  
  return PMPI_Type_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_indexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  
  return PMPI_Type_indexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_lb(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  
  return PMPI_Type_lb(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_match_size(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  
  return PMPI_Type_match_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_set_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  
  return PMPI_Type_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_set_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  
  return PMPI_Type_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_size(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_Type_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_struct(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  
  return PMPI_Type_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_ub(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  
  return PMPI_Type_ub(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_vector(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  
  return PMPI_Type_vector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Unpack(void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Unpack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Unpack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6)
{
  
  return PMPI_Unpack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Unpublish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  
  return PMPI_Unpublish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Wait(MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1)
{
  
  return PMPI_Wait(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Waitall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  
  return PMPI_Waitall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Waitany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  
  return PMPI_Waitany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Waitsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  
  return PMPI_Waitsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Win_call_errhandler(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  
  return PMPI_Win_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_complete(MPI_Win _pnmpi_arg_0)
{
  
  return PMPI_Win_complete(_pnmpi_arg_0);
}

int MPI_Win_create(void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5)
{
  MACRO_MPI_Comm(_pnmpi_arg_4);

  return PMPI_Win_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Win_create_errhandler(MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  
  return PMPI_Win_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_create_keyval(MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  
  return PMPI_Win_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Win_delete_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  
  return PMPI_Win_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_fence(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  
  return PMPI_Win_fence(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_free(MPI_Win * _pnmpi_arg_0)
{
  
  return PMPI_Win_free(_pnmpi_arg_0);
}

int MPI_Win_free_keyval(int * _pnmpi_arg_0)
{
  
  return PMPI_Win_free_keyval(_pnmpi_arg_0);
}

int MPI_Win_get_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  
  return PMPI_Win_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Win_get_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  
  return PMPI_Win_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_get_group(MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  
  return PMPI_Win_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_get_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  
  return PMPI_Win_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_lock(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3)
{
  
  return PMPI_Win_lock(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Win_post(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  
  return PMPI_Win_post(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_set_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  
  return PMPI_Win_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_set_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  
  return PMPI_Win_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_set_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  
  return PMPI_Win_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_start(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  
  return PMPI_Win_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_test(MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  
  return PMPI_Win_test(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_unlock(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  
  return PMPI_Win_unlock(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_wait(MPI_Win _pnmpi_arg_0)
{
  
  return PMPI_Win_wait(_pnmpi_arg_0);
}

double MPI_Wtick()
{
  
  return PMPI_Wtick();
}

double MPI_Wtime()
{
  
  return PMPI_Wtime();
}

