/* automatically generated wrapper code */


int MPI_Abort(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Abort_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Accumulate(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8)
{
  int _stack=-1;
  
  return PMPI_Accumulate_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Add_error_class(int * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Add_error_class_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Add_error_code(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Add_error_code_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Add_error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Add_error_string_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Address_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Allgather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Allgather_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Allgatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_7);

  return PMPI_Allgatherv_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Alloc_mem(MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr)
{
  int _stack=-1;
  
  return PMPI_Alloc_mem_NewStack(_stack , _pnmpi_arg_0, info, baseptr);
}

int MPI_Allreduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Allreduce_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Alltoall(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Alltoall_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Alltoallv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_8);

  return PMPI_Alltoallv_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Alltoallw(void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_8);

  return PMPI_Alltoallw_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Attr_delete(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Attr_delete_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Attr_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Attr_get_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Attr_put(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Attr_put_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Barrier(MPI_Comm _pnmpi_arg_0)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Barrier_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Bcast(void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_4);

  return PMPI_Bcast_NewStack(_stack , buffer, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Bsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Bsend_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Bsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Bsend_init_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Buffer_attach(void * buffer, int _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Buffer_attach_NewStack(_stack , buffer, _pnmpi_arg_1);
}

int MPI_Buffer_detach(void * buffer, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Buffer_detach_NewStack(_stack , buffer, _pnmpi_arg_1);
}

int MPI_Cancel(MPI_Request * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Cancel_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Cart_coords(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_coords_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Cart_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_create_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Cartdim_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cartdim_get_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Cart_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_get_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Cart_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_map_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Cart_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_rank_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Cart_shift(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_shift_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Cart_sub(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Cart_sub_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Close_port(char * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Close_port_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Comm_accept(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_3);

  return PMPI_Comm_accept_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Comm_call_errhandler(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_call_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_compare(MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);
MACRO_MPI_Comm(_pnmpi_arg_1);

  return PMPI_Comm_compare_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_connect(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_3);

  return PMPI_Comm_connect_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Comm_create(MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_create_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_create_errhandler(MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Comm_create_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_create_keyval(MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Comm_create_keyval_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Comm_delete_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_delete_attr_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_disconnect(MPI_Comm * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Comm_disconnect_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Comm_dup(MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_dup_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_free(MPI_Comm * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Comm_free_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Comm_free_keyval(int * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Comm_free_keyval_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Comm_get_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_get_attr_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Comm_get_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_get_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_get_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_get_name_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_get_parent(MPI_Comm * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Comm_get_parent_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Comm_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_group_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_join(int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Comm_join_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_rank_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_remote_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_remote_group_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_remote_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_remote_size_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_set_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_set_attr_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_set_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_set_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_set_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_set_name_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_size_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_spawn(char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[])
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Comm_spawn_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Comm_spawn_multiple(int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[])
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Comm_spawn_multiple_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Comm_split(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_split_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Comm_test_inter(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Comm_test_inter_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Dims_create(int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Dims_create_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Dist_graph_create(MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  int _stack=-1;
  MACRO_MPI_Comm(comm_old);

  return PMPI_Dist_graph_create_NewStack(_stack , comm_old, n, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, info, reorder, comm_dist_graph);
}

int MPI_Dist_graph_create_adjacent(MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  int _stack=-1;
  MACRO_MPI_Comm(comm_old);

  return PMPI_Dist_graph_create_adjacent_NewStack(_stack , comm_old, indegree, _pnmpi_arg_2, _pnmpi_arg_3, outdegree, _pnmpi_arg_5, _pnmpi_arg_6, info, reorder, comm_dist_graph);
}

int MPI_Dist_graph_neighbors(MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[])
{
  int _stack=-1;
  MACRO_MPI_Comm(comm);

  return PMPI_Dist_graph_neighbors_NewStack(_stack , comm, maxindegree, _pnmpi_arg_2, _pnmpi_arg_3, maxoutdegree, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Dist_graph_neighbors_count(MPI_Comm comm, int * indegree, int * outdegree, int * weighted)
{
  int _stack=-1;
  MACRO_MPI_Comm(comm);

  return PMPI_Dist_graph_neighbors_count_NewStack(_stack , comm, indegree, outdegree, weighted);
}

int MPI_Errhandler_create(MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Errhandler_create_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Errhandler_free(MPI_Errhandler * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Errhandler_free_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Errhandler_get(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Errhandler_get_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Errhandler_set(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Errhandler_set_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Error_class(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Error_class_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Error_string_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Exscan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Exscan_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_call_errhandler(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_call_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_close(MPI_File * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_File_close_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_File_create_errhandler(MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_create_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_delete(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_delete_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_amode(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_get_amode_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_atomicity(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_get_atomicity_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_byte_offset(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_File_get_byte_offset_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_get_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_get_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_group(MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_get_group_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_info(MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_get_info_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_position(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_get_position_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_position_shared(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_get_position_shared_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_size(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_get_size_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_type_extent(MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_File_get_type_extent_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_get_view(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_get_view_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iread(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_iread_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iread_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  int _stack=-1;
  
  return PMPI_File_iread_at_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_iread_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_iread_shared_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iwrite(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_iwrite_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iwrite_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  int _stack=-1;
  
  return PMPI_File_iwrite_at_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_iwrite_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_iwrite_shared_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_open(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_File_open_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_preallocate(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_preallocate_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_read(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_read_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_read_all_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_File_read_all_begin_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_read_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_File_read_all_end_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_read_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int _stack=-1;
  
  return PMPI_File_read_at_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_read_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int _stack=-1;
  
  return PMPI_File_read_at_all_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_read_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_read_at_all_begin_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_File_read_at_all_end_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_read_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_read_ordered_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_File_read_ordered_begin_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_read_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_File_read_ordered_end_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_read_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_read_shared_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_seek(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_File_seek_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_seek_shared(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_File_seek_shared_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_set_atomicity(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_set_atomicity_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_set_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_info(MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_set_info_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_size(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_File_set_size_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_view(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5)
{
  int _stack=-1;
  
  return PMPI_File_set_view_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_sync(MPI_File _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_File_sync_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_File_write(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_write_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_write_all_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_File_write_all_begin_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_write_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_File_write_all_end_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_write_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int _stack=-1;
  
  return PMPI_File_write_at_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_write_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int _stack=-1;
  
  return PMPI_File_write_at_all_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_write_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_write_at_all_begin_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_File_write_at_all_end_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_write_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_write_ordered_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_File_write_ordered_begin_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_write_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_File_write_ordered_end_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_write_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_File_write_shared_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Finalized(int * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Finalized_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Free_mem(void * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Free_mem_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Gather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_7);

  return PMPI_Gather_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Gatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_8);

  return PMPI_Gatherv_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Get(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  int _stack=-1;
  
  return PMPI_Get_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Get_address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Get_address_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Get_count(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Get_count_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Get_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Get_elements_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Get_processor_name(char * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Get_processor_name_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Get_version(int * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Get_version_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Graph_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graph_create_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Graphdims_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graphdims_get_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Graph_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graph_get_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Graph_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graph_map_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Graph_neighbors(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graph_neighbors_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Graph_neighbors_count(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Graph_neighbors_count_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Grequest_complete(MPI_Request _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Grequest_complete_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Grequest_start(MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Grequest_start_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Group_compare(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Group_compare_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Group_difference(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Group_difference_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Group_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Group_excl_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_free(MPI_Group * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Group_free_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Group_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Group_incl_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_intersection(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Group_intersection_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Group_range_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Group_range_excl_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_range_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Group_range_incl_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_rank(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Group_rank_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Group_size(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Group_size_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Group_translate_ranks(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Group_translate_ranks_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Group_union(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Group_union_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Ibsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Ibsend_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Info_create(MPI_Info * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Info_create_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Info_delete(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Info_delete_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Info_dup(MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Info_dup_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Info_free(MPI_Info * info)
{
  int _stack=-1;
  
  return PMPI_Info_free_NewStack(_stack , info);
}

int MPI_Info_get(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Info_get_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Info_get_nkeys(MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Info_get_nkeys_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Info_get_nthkey(MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Info_get_nthkey_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Info_get_valuelen(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Info_get_valuelen_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Info_set(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Info_set_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Initialized(int * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Initialized_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Init_thread(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Init_thread_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Intercomm_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);
MACRO_MPI_Comm(_pnmpi_arg_2);

  return PMPI_Intercomm_create_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Intercomm_merge(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Intercomm_merge_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Iprobe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_2);

  return PMPI_Iprobe_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Irecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Irecv_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Irsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Irsend_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Isend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Isend_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Issend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Issend_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Is_thread_main(int * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Is_thread_main_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Keyval_create(MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Keyval_create_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Keyval_free(int * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Keyval_free_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Lookup_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Lookup_name_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Op_commutative(MPI_Op op, int * commute)
{
  int _stack=-1;
  
  return PMPI_Op_commutative_NewStack(_stack , op, commute);
}

int MPI_Op_create(MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Op_create_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Open_port(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Open_port_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Op_free(MPI_Op * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Op_free_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Pack(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Pack_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Pack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6)
{
  int _stack=-1;
  
  return PMPI_Pack_external_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Pack_external_size(char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Pack_external_size_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Pack_size(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_2);

  return PMPI_Pack_size_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Probe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_2);

  return PMPI_Probe_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Publish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Publish_name_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Put(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  int _stack=-1;
  
  return PMPI_Put_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Query_thread(int * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Query_thread_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Recv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Recv_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Recv_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Recv_init_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Reduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Reduce_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Reduce_local(void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op)
{
  int _stack=-1;
  
  return PMPI_Reduce_local_NewStack(_stack , inbuf, inoutbuf, count, datatype, op);
}

int MPI_Reduce_scatter(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Reduce_scatter_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Reduce_scatter_block(void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int _stack=-1;
  MACRO_MPI_Comm(comm);

  return PMPI_Reduce_scatter_block_NewStack(_stack , sendbuf, recvbuf, recvcount, datatype, op, comm);
}

int MPI_Register_datarep(char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Register_datarep_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Request_free(MPI_Request * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Request_free_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Request_get_status(MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Request_get_status_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Rsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Rsend_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Rsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Rsend_init_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Scan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Scan_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Scatter(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_7);

  return PMPI_Scatter_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Scatterv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_8);

  return PMPI_Scatterv_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, displs, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Send(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Send_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Send_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Send_init_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Sendrecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_10);

  return PMPI_Sendrecv_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9, _pnmpi_arg_10, _pnmpi_arg_11);
}

int MPI_Sendrecv_replace(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_7);

  return PMPI_Sendrecv_replace_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Ssend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Ssend_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Ssend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_5);

  return PMPI_Ssend_init_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Start(MPI_Request * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Start_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Startall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Startall_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Status_set_cancelled(MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Status_set_cancelled_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Status_set_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Status_set_elements_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Test(MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Test_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Testall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Testall_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Testany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Testany_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Test_cancelled(MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Test_cancelled_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Testsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Testsome_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Topo_test(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_0);

  return PMPI_Topo_test_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_commit(MPI_Datatype * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Type_commit_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Type_contiguous(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Type_contiguous_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_create_darray(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9)
{
  int _stack=-1;
  
  return PMPI_Type_create_darray_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9);
}

int MPI_Type_create_f90_complex(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Type_create_f90_complex_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_create_f90_integer(int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Type_create_f90_integer_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_create_f90_real(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Type_create_f90_real_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_create_hindexed(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Type_create_hindexed_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Type_create_hvector_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_indexed_block(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Type_create_indexed_block_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_keyval(MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Type_create_keyval_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Type_create_resized(MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Type_create_resized_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Type_create_struct(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Type_create_struct_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_subarray(int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6)
{
  int _stack=-1;
  
  return PMPI_Type_create_subarray_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Type_delete_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Type_delete_attr_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_dup(MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Type_dup_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Type_extent_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_free(MPI_Datatype * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Type_free_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Type_free_keyval(int * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Type_free_keyval_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Type_get_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Type_get_attr_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Type_get_contents(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[])
{
  int _stack=-1;
  
  return PMPI_Type_get_contents_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Type_get_envelope(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Type_get_envelope_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_get_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Type_get_extent_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_get_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Type_get_name_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_get_true_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Type_get_true_extent_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_hindexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Type_hindexed_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Type_hvector_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_indexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Type_indexed_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_lb(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Type_lb_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_match_size(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Type_match_size_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_set_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Type_set_attr_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_set_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Type_set_name_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_size(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Type_size_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_struct(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Type_struct_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_ub(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Type_ub_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_vector(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Type_vector_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Unpack(void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_6);

  return PMPI_Unpack_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Unpack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6)
{
  int _stack=-1;
  
  return PMPI_Unpack_external_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Unpublish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Unpublish_name_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Wait(MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Wait_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Waitall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Waitall_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Waitany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Waitany_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Waitsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int _stack=-1;
  
  return PMPI_Waitsome_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Win_call_errhandler(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Win_call_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_complete(MPI_Win _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Win_complete_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Win_create(void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5)
{
  int _stack=-1;
  MACRO_MPI_Comm(_pnmpi_arg_4);

  return PMPI_Win_create_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Win_create_errhandler(MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Win_create_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_create_keyval(MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Win_create_keyval_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Win_delete_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Win_delete_attr_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_fence(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Win_fence_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_free(MPI_Win * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Win_free_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Win_free_keyval(int * _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Win_free_keyval_NewStack(_stack , _pnmpi_arg_0);
}

int MPI_Win_get_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Win_get_attr_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Win_get_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Win_get_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_get_group(MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Win_get_group_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_get_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Win_get_name_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_lock(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3)
{
  int _stack=-1;
  
  return PMPI_Win_lock_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Win_post(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Win_post_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_set_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Win_set_attr_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_set_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Win_set_errhandler_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_set_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Win_set_name_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_start(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  int _stack=-1;
  
  return PMPI_Win_start_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_test(MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Win_test_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_unlock(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  int _stack=-1;
  
  return PMPI_Win_unlock_NewStack(_stack , _pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_wait(MPI_Win _pnmpi_arg_0)
{
  int _stack=-1;
  
  return PMPI_Win_wait_NewStack(_stack , _pnmpi_arg_0);
}

double MPI_Wtick()
{
  int _stack=-1;
  
  return PMPI_Wtick_NewStack(_stack );
}

double MPI_Wtime()
{
  int _stack=-1;
  
  return PMPI_Wtime_NewStack(_stack );
}

