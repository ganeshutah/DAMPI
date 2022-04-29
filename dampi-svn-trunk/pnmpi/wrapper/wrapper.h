/* automatically generated wrapper header */


int NQJ_Abort(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int NQJ_Accumulate(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8);

int NQJ_Add_error_class(int * _pnmpi_arg_0);

int NQJ_Add_error_code(int _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Add_error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1);

int NQJ_Address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int NQJ_Allgather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int NQJ_Allgatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int NQJ_Alloc_mem(MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr);

int NQJ_Allreduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int NQJ_Alltoall(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int NQJ_Alltoallv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int NQJ_Alltoallw(void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8);

int NQJ_Attr_delete(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int NQJ_Attr_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int NQJ_Attr_put(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int NQJ_Barrier(MPI_Comm _pnmpi_arg_0);

int NQJ_Bcast(void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4);

int NQJ_Bsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int NQJ_Bsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int NQJ_Buffer_attach(void * buffer, int _pnmpi_arg_1);

int NQJ_Buffer_detach(void * buffer, int * _pnmpi_arg_1);

int NQJ_Cancel(MPI_Request * _pnmpi_arg_0);

int NQJ_Cart_coords(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int NQJ_Cart_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int NQJ_Cartdim_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Cart_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int NQJ_Cart_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int NQJ_Cart_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Cart_shift(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int NQJ_Cart_sub(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int NQJ_Close_port(char * _pnmpi_arg_0);

int NQJ_Comm_accept(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);

int NQJ_Comm_call_errhandler(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int NQJ_Comm_compare(MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Comm_connect(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);

int NQJ_Comm_create(MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int NQJ_Comm_create_errhandler(MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int NQJ_Comm_create_keyval(MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int NQJ_Comm_delete_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int NQJ_Comm_disconnect(MPI_Comm * _pnmpi_arg_0);

int NQJ_Comm_dup(MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);

int NQJ_Comm_free(MPI_Comm * _pnmpi_arg_0);

int NQJ_Comm_free_keyval(int * _pnmpi_arg_0);

int NQJ_Comm_get_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int NQJ_Comm_get_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int NQJ_Comm_get_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Comm_get_parent(MPI_Comm * _pnmpi_arg_0);

int NQJ_Comm_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int NQJ_Comm_join(int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);

int NQJ_Comm_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Comm_remote_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int NQJ_Comm_remote_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Comm_set_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int NQJ_Comm_set_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int NQJ_Comm_set_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1);

int NQJ_Comm_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Comm_spawn(char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[]);

int NQJ_Comm_spawn_multiple(int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[]);

int NQJ_Comm_split(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3);

int NQJ_Comm_test_inter(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Dims_create(int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Dist_graph_create(MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph);

int NQJ_Dist_graph_create_adjacent(MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph);

int NQJ_Dist_graph_neighbors(MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[]);

int NQJ_Dist_graph_neighbors_count(MPI_Comm comm, int * indegree, int * outdegree, int * weighted);

int NQJ_Errhandler_create(MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int NQJ_Errhandler_free(MPI_Errhandler * _pnmpi_arg_0);

int NQJ_Errhandler_get(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int NQJ_Errhandler_set(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int NQJ_Error_class(int _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Exscan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int NQJ_File_call_errhandler(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);

int NQJ_File_close(MPI_File * _pnmpi_arg_0);

int NQJ_File_create_errhandler(MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int NQJ_File_delete(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);

int NQJ_File_get_amode(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_File_get_atomicity(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_File_get_byte_offset(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2);

int NQJ_File_get_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int NQJ_File_get_group(MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int NQJ_File_get_info(MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);

int NQJ_File_get_position(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int NQJ_File_get_position_shared(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int NQJ_File_get_size(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int NQJ_File_get_type_extent(MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int NQJ_File_get_view(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4);

int NQJ_File_iread(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int NQJ_File_iread_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);

int NQJ_File_iread_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int NQJ_File_iwrite(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int NQJ_File_iwrite_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);

int NQJ_File_iwrite_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int NQJ_File_open(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4);

int NQJ_File_preallocate(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);

int NQJ_File_read(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_File_read_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_File_read_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int NQJ_File_read_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int NQJ_File_read_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int NQJ_File_read_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int NQJ_File_read_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);

int NQJ_File_read_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int NQJ_File_read_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_File_read_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int NQJ_File_read_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int NQJ_File_read_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_File_seek(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);

int NQJ_File_seek_shared(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);

int NQJ_File_set_atomicity(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);

int NQJ_File_set_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int NQJ_File_set_info(MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);

int NQJ_File_set_size(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);

int NQJ_File_set_view(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5);

int NQJ_File_sync(MPI_File _pnmpi_arg_0);

int NQJ_File_write(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_File_write_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_File_write_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int NQJ_File_write_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int NQJ_File_write_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int NQJ_File_write_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int NQJ_File_write_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);

int NQJ_File_write_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int NQJ_File_write_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_File_write_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int NQJ_File_write_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int NQJ_File_write_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_Finalize(void);

int NQJ_Finalized(int * _pnmpi_arg_0);

int NQJ_Free_mem(void * _pnmpi_arg_0);

int NQJ_Gather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int NQJ_Gatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int NQJ_Get(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);

int NQJ_Get_address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int NQJ_Get_count(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Get_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Get_processor_name(char * _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Get_version(int * _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Graph_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int NQJ_Graphdims_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Graph_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int NQJ_Graph_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int NQJ_Graph_neighbors(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int NQJ_Graph_neighbors_count(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Grequest_complete(MPI_Request _pnmpi_arg_0);

int NQJ_Grequest_start(MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int NQJ_Group_compare(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Group_difference(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int NQJ_Group_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);

int NQJ_Group_free(MPI_Group * _pnmpi_arg_0);

int NQJ_Group_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);

int NQJ_Group_intersection(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int NQJ_Group_range_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);

int NQJ_Group_range_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);

int NQJ_Group_rank(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Group_size(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Group_translate_ranks(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4);

int NQJ_Group_union(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int NQJ_Ibsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int NQJ_Info_create(MPI_Info * _pnmpi_arg_0);

int NQJ_Info_delete(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);

int NQJ_Info_dup(MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);

int NQJ_Info_free(MPI_Info * info);

int NQJ_Info_get(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4);

int NQJ_Info_get_nkeys(MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Info_get_nthkey(MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2);

int NQJ_Info_get_valuelen(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3);

int NQJ_Info_set(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2);

int NQJ_Init(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1);

int NQJ_Initialized(int * _pnmpi_arg_0);

int NQJ_Init_thread(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int NQJ_Intercomm_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int NQJ_Intercomm_merge(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int NQJ_Iprobe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_Irecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int NQJ_Irsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int NQJ_Isend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int NQJ_Issend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int NQJ_Is_thread_main(int * _pnmpi_arg_0);

int NQJ_Keyval_create(MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int NQJ_Keyval_free(int * _pnmpi_arg_0);

int NQJ_Lookup_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int NQJ_Op_commutative(MPI_Op op, int * commute);

int NQJ_Op_create(MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2);

int NQJ_Open_port(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);

int NQJ_Op_free(MPI_Op * _pnmpi_arg_0);

int NQJ_Pack(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int NQJ_Pack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6);

int NQJ_Pack_external_size(char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3);

int NQJ_Pack_size(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3);

int NQJ_Probe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int NQJ_Publish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int NQJ_Put(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);

int NQJ_Query_thread(int * _pnmpi_arg_0);

int NQJ_Recv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6);

int NQJ_Recv_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int NQJ_Reduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int NQJ_Reduce_local(void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op);

int NQJ_Reduce_scatter(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int NQJ_Reduce_scatter_block(void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);

int NQJ_Register_datarep(char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4);

int NQJ_Request_free(MPI_Request * _pnmpi_arg_0);

int NQJ_Request_get_status(MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int NQJ_Rsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int NQJ_Rsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int NQJ_Scan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int NQJ_Scatter(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int NQJ_Scatterv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int NQJ_Send(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int NQJ_Send_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int NQJ_Sendrecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11);

int NQJ_Sendrecv_replace(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8);

int NQJ_Ssend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int NQJ_Ssend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int NQJ_Start(MPI_Request * _pnmpi_arg_0);

int NQJ_Startall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1);

int NQJ_Status_set_cancelled(MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1);

int NQJ_Status_set_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2);

int NQJ_Test(MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int NQJ_Testall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int NQJ_Testany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_Test_cancelled(MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Testsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_Topo_test(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Type_commit(MPI_Datatype * _pnmpi_arg_0);

int NQJ_Type_contiguous(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int NQJ_Type_create_darray(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9);

int NQJ_Type_create_f90_complex(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int NQJ_Type_create_f90_integer(int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);

int NQJ_Type_create_f90_real(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int NQJ_Type_create_hindexed(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int NQJ_Type_create_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int NQJ_Type_create_indexed_block(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int NQJ_Type_create_keyval(MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int NQJ_Type_create_resized(MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3);

int NQJ_Type_create_struct(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4);

int NQJ_Type_create_subarray(int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6);

int NQJ_Type_delete_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1);

int NQJ_Type_dup(MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);

int NQJ_Type_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int NQJ_Type_free(MPI_Datatype * _pnmpi_arg_0);

int NQJ_Type_free_keyval(int * _pnmpi_arg_0);

int NQJ_Type_get_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int NQJ_Type_get_contents(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[]);

int NQJ_Type_get_envelope(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int NQJ_Type_get_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int NQJ_Type_get_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Type_get_true_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int NQJ_Type_hindexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int NQJ_Type_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int NQJ_Type_indexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int NQJ_Type_lb(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int NQJ_Type_match_size(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int NQJ_Type_set_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int NQJ_Type_set_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1);

int NQJ_Type_size(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Type_struct(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int NQJ_Type_ub(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int NQJ_Type_vector(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int NQJ_Unpack(void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int NQJ_Unpack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6);

int NQJ_Unpublish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int NQJ_Wait(MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1);

int NQJ_Waitall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int NQJ_Waitany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int NQJ_Waitsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int NQJ_Win_call_errhandler(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);

int NQJ_Win_complete(MPI_Win _pnmpi_arg_0);

int NQJ_Win_create(void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5);

int NQJ_Win_create_errhandler(MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int NQJ_Win_create_keyval(MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int NQJ_Win_delete_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);

int NQJ_Win_fence(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);

int NQJ_Win_free(MPI_Win * _pnmpi_arg_0);

int NQJ_Win_free_keyval(int * _pnmpi_arg_0);

int NQJ_Win_get_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int NQJ_Win_get_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int NQJ_Win_get_group(MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int NQJ_Win_get_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int NQJ_Win_lock(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3);

int NQJ_Win_post(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);

int NQJ_Win_set_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int NQJ_Win_set_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int NQJ_Win_set_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1);

int NQJ_Win_start(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);

int NQJ_Win_test(MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1);

int NQJ_Win_unlock(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);

int NQJ_Win_wait(MPI_Win _pnmpi_arg_0);

double NQJ_Wtick(void);

double NQJ_Wtime(void);



int XMPI_Abort(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Accumulate(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8);

int XMPI_Add_error_class(int * _pnmpi_arg_0);

int XMPI_Add_error_code(int _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Add_error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int XMPI_Allgather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int XMPI_Allgatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int XMPI_Alloc_mem(MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr);

int XMPI_Allreduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Alltoall(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int XMPI_Alltoallv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int XMPI_Alltoallw(void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8);

int XMPI_Attr_delete(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Attr_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Attr_put(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int XMPI_Barrier(MPI_Comm _pnmpi_arg_0);

int XMPI_Bcast(void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4);

int XMPI_Bsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Bsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Buffer_attach(void * buffer, int _pnmpi_arg_1);

int XMPI_Buffer_detach(void * buffer, int * _pnmpi_arg_1);

int XMPI_Cancel(MPI_Request * _pnmpi_arg_0);

int XMPI_Cart_coords(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Cart_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int XMPI_Cartdim_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Cart_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Cart_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Cart_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Cart_shift(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Cart_sub(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int XMPI_Close_port(char * _pnmpi_arg_0);

int XMPI_Comm_accept(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);

int XMPI_Comm_call_errhandler(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Comm_compare(MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Comm_connect(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);

int XMPI_Comm_create(MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int XMPI_Comm_create_errhandler(MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Comm_create_keyval(MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int XMPI_Comm_delete_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Comm_disconnect(MPI_Comm * _pnmpi_arg_0);

int XMPI_Comm_dup(MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);

int XMPI_Comm_free(MPI_Comm * _pnmpi_arg_0);

int XMPI_Comm_free_keyval(int * _pnmpi_arg_0);

int XMPI_Comm_get_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Comm_get_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Comm_get_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Comm_get_parent(MPI_Comm * _pnmpi_arg_0);

int XMPI_Comm_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int XMPI_Comm_join(int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);

int XMPI_Comm_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Comm_remote_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int XMPI_Comm_remote_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Comm_set_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int XMPI_Comm_set_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int XMPI_Comm_set_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Comm_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Comm_spawn(char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[]);

int XMPI_Comm_spawn_multiple(int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[]);

int XMPI_Comm_split(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3);

int XMPI_Comm_test_inter(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Dims_create(int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Dist_graph_create(MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph);

int XMPI_Dist_graph_create_adjacent(MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph);

int XMPI_Dist_graph_neighbors(MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[]);

int XMPI_Dist_graph_neighbors_count(MPI_Comm comm, int * indegree, int * outdegree, int * weighted);

int XMPI_Errhandler_create(MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Errhandler_free(MPI_Errhandler * _pnmpi_arg_0);

int XMPI_Errhandler_get(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Errhandler_set(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int XMPI_Error_class(int _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Exscan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_File_call_errhandler(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_File_close(MPI_File * _pnmpi_arg_0);

int XMPI_File_create_errhandler(MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_File_delete(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);

int XMPI_File_get_amode(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_File_get_atomicity(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_File_get_byte_offset(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2);

int XMPI_File_get_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_File_get_group(MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int XMPI_File_get_info(MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);

int XMPI_File_get_position(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int XMPI_File_get_position_shared(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int XMPI_File_get_size(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int XMPI_File_get_type_extent(MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int XMPI_File_get_view(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4);

int XMPI_File_iread(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int XMPI_File_iread_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);

int XMPI_File_iread_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int XMPI_File_iwrite(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int XMPI_File_iwrite_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);

int XMPI_File_iwrite_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int XMPI_File_open(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4);

int XMPI_File_preallocate(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);

int XMPI_File_read(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_read_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_read_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int XMPI_File_read_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_read_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int XMPI_File_read_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int XMPI_File_read_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);

int XMPI_File_read_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_read_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_read_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int XMPI_File_read_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_read_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_seek(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);

int XMPI_File_seek_shared(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);

int XMPI_File_set_atomicity(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_File_set_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int XMPI_File_set_info(MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);

int XMPI_File_set_size(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);

int XMPI_File_set_view(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5);

int XMPI_File_sync(MPI_File _pnmpi_arg_0);

int XMPI_File_write(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_write_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_write_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int XMPI_File_write_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_write_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int XMPI_File_write_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int XMPI_File_write_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);

int XMPI_File_write_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_write_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_write_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int XMPI_File_write_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_write_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_Finalize(void);

int XMPI_Finalized(int * _pnmpi_arg_0);

int XMPI_Free_mem(void * _pnmpi_arg_0);

int XMPI_Gather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int XMPI_Gatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int XMPI_Get(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);

int XMPI_Get_address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int XMPI_Get_count(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Get_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Get_processor_name(char * _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Get_version(int * _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Graph_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int XMPI_Graphdims_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Graph_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Graph_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Graph_neighbors(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Graph_neighbors_count(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Grequest_complete(MPI_Request _pnmpi_arg_0);

int XMPI_Grequest_start(MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int XMPI_Group_compare(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Group_difference(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int XMPI_Group_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);

int XMPI_Group_free(MPI_Group * _pnmpi_arg_0);

int XMPI_Group_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);

int XMPI_Group_intersection(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int XMPI_Group_range_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);

int XMPI_Group_range_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);

int XMPI_Group_rank(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Group_size(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Group_translate_ranks(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Group_union(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int XMPI_Ibsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Info_create(MPI_Info * _pnmpi_arg_0);

int XMPI_Info_delete(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Info_dup(MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);

int XMPI_Info_free(MPI_Info * info);

int XMPI_Info_get(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Info_get_nkeys(MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Info_get_nthkey(MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2);

int XMPI_Info_get_valuelen(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Info_set(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2);

int XMPI_Init(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1);

int XMPI_Initialized(int * _pnmpi_arg_0);

int XMPI_Init_thread(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Intercomm_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int XMPI_Intercomm_merge(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int XMPI_Iprobe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_Irecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Irsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Isend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Issend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Is_thread_main(int * _pnmpi_arg_0);

int XMPI_Keyval_create(MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int XMPI_Keyval_free(int * _pnmpi_arg_0);

int XMPI_Lookup_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int XMPI_Op_commutative(MPI_Op op, int * commute);

int XMPI_Op_create(MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2);

int XMPI_Open_port(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Op_free(MPI_Op * _pnmpi_arg_0);

int XMPI_Pack(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int XMPI_Pack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6);

int XMPI_Pack_external_size(char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3);

int XMPI_Pack_size(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Probe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int XMPI_Publish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int XMPI_Put(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);

int XMPI_Query_thread(int * _pnmpi_arg_0);

int XMPI_Recv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6);

int XMPI_Recv_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Reduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int XMPI_Reduce_local(void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op);

int XMPI_Reduce_scatter(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Reduce_scatter_block(void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);

int XMPI_Register_datarep(char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4);

int XMPI_Request_free(MPI_Request * _pnmpi_arg_0);

int XMPI_Request_get_status(MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_Rsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Rsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Scan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Scatter(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int XMPI_Scatterv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int XMPI_Send(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Send_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Sendrecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11);

int XMPI_Sendrecv_replace(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8);

int XMPI_Ssend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Ssend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Start(MPI_Request * _pnmpi_arg_0);

int XMPI_Startall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1);

int XMPI_Status_set_cancelled(MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Status_set_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2);

int XMPI_Test(MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_Testall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int XMPI_Testany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_Test_cancelled(MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Testsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_Topo_test(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Type_commit(MPI_Datatype * _pnmpi_arg_0);

int XMPI_Type_contiguous(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int XMPI_Type_create_darray(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9);

int XMPI_Type_create_f90_complex(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int XMPI_Type_create_f90_integer(int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);

int XMPI_Type_create_f90_real(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int XMPI_Type_create_hindexed(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_create_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_create_indexed_block(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_create_keyval(MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int XMPI_Type_create_resized(MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3);

int XMPI_Type_create_struct(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_create_subarray(int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6);

int XMPI_Type_delete_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Type_dup(MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);

int XMPI_Type_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int XMPI_Type_free(MPI_Datatype * _pnmpi_arg_0);

int XMPI_Type_free_keyval(int * _pnmpi_arg_0);

int XMPI_Type_get_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Type_get_contents(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[]);

int XMPI_Type_get_envelope(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Type_get_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int XMPI_Type_get_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Type_get_true_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int XMPI_Type_hindexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_indexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_lb(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int XMPI_Type_match_size(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int XMPI_Type_set_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int XMPI_Type_set_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Type_size(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Type_struct(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_ub(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int XMPI_Type_vector(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Unpack(void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int XMPI_Unpack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6);

int XMPI_Unpublish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int XMPI_Wait(MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1);

int XMPI_Waitall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_Waitany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int XMPI_Waitsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_Win_call_errhandler(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Win_complete(MPI_Win _pnmpi_arg_0);

int XMPI_Win_create(void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5);

int XMPI_Win_create_errhandler(MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Win_create_keyval(MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int XMPI_Win_delete_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Win_fence(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);

int XMPI_Win_free(MPI_Win * _pnmpi_arg_0);

int XMPI_Win_free_keyval(int * _pnmpi_arg_0);

int XMPI_Win_get_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Win_get_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Win_get_group(MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int XMPI_Win_get_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Win_lock(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3);

int XMPI_Win_post(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);

int XMPI_Win_set_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int XMPI_Win_set_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int XMPI_Win_set_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Win_start(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);

int XMPI_Win_test(MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Win_unlock(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);

int XMPI_Win_wait(MPI_Win _pnmpi_arg_0);

double XMPI_Wtick(void);

double XMPI_Wtime(void);



int XMPI_Abort_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Accumulate_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8);

int XMPI_Add_error_class_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int XMPI_Add_error_code_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Add_error_string_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Address_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int XMPI_Allgather_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int XMPI_Allgatherv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int XMPI_Alloc_mem_NewStack(PNMPI_modHandle_t stack , MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr);

int XMPI_Allreduce_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Alltoall_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int XMPI_Alltoallv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int XMPI_Alltoallw_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8);

int XMPI_Attr_delete_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Attr_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Attr_put_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int XMPI_Barrier_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0);

int XMPI_Bcast_NewStack(PNMPI_modHandle_t stack , void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4);

int XMPI_Bsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Bsend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Buffer_attach_NewStack(PNMPI_modHandle_t stack , void * buffer, int _pnmpi_arg_1);

int XMPI_Buffer_detach_NewStack(PNMPI_modHandle_t stack , void * buffer, int * _pnmpi_arg_1);

int XMPI_Cancel_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0);

int XMPI_Cart_coords_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Cart_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int XMPI_Cartdim_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Cart_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Cart_map_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Cart_rank_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Cart_shift_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Cart_sub_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int XMPI_Close_port_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0);

int XMPI_Comm_accept_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);

int XMPI_Comm_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Comm_compare_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Comm_connect_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);

int XMPI_Comm_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int XMPI_Comm_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Comm_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int XMPI_Comm_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Comm_disconnect_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0);

int XMPI_Comm_dup_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);

int XMPI_Comm_free_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0);

int XMPI_Comm_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int XMPI_Comm_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Comm_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Comm_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Comm_get_parent_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0);

int XMPI_Comm_group_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int XMPI_Comm_join_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);

int XMPI_Comm_rank_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Comm_remote_group_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int XMPI_Comm_remote_size_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Comm_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int XMPI_Comm_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int XMPI_Comm_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Comm_size_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Comm_spawn_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[]);

int XMPI_Comm_spawn_multiple_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[]);

int XMPI_Comm_split_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3);

int XMPI_Comm_test_inter_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Dims_create_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Dist_graph_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph);

int XMPI_Dist_graph_create_adjacent_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph);

int XMPI_Dist_graph_neighbors_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[]);

int XMPI_Dist_graph_neighbors_count_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm, int * indegree, int * outdegree, int * weighted);

int XMPI_Errhandler_create_NewStack(PNMPI_modHandle_t stack , MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Errhandler_free_NewStack(PNMPI_modHandle_t stack , MPI_Errhandler * _pnmpi_arg_0);

int XMPI_Errhandler_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Errhandler_set_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int XMPI_Error_class_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Error_string_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Exscan_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_File_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_File_close_NewStack(PNMPI_modHandle_t stack , MPI_File * _pnmpi_arg_0);

int XMPI_File_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_File_delete_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);

int XMPI_File_get_amode_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_File_get_atomicity_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_File_get_byte_offset_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2);

int XMPI_File_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_File_get_group_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int XMPI_File_get_info_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);

int XMPI_File_get_position_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int XMPI_File_get_position_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int XMPI_File_get_size_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int XMPI_File_get_type_extent_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int XMPI_File_get_view_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4);

int XMPI_File_iread_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int XMPI_File_iread_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);

int XMPI_File_iread_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int XMPI_File_iwrite_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int XMPI_File_iwrite_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);

int XMPI_File_iwrite_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int XMPI_File_open_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4);

int XMPI_File_preallocate_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);

int XMPI_File_read_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_read_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_read_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int XMPI_File_read_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_read_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int XMPI_File_read_at_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int XMPI_File_read_at_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);

int XMPI_File_read_at_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_read_ordered_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_read_ordered_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int XMPI_File_read_ordered_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_read_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_seek_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);

int XMPI_File_seek_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);

int XMPI_File_set_atomicity_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_File_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int XMPI_File_set_info_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);

int XMPI_File_set_size_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);

int XMPI_File_set_view_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5);

int XMPI_File_sync_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0);

int XMPI_File_write_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_write_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_write_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int XMPI_File_write_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_write_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int XMPI_File_write_at_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int XMPI_File_write_at_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);

int XMPI_File_write_at_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_write_ordered_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_File_write_ordered_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int XMPI_File_write_ordered_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_File_write_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_Finalize_NewStack(PNMPI_modHandle_t stack );

int XMPI_Finalized_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int XMPI_Free_mem_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0);

int XMPI_Gather_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int XMPI_Gatherv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int XMPI_Get_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);

int XMPI_Get_address_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int XMPI_Get_count_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Get_elements_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Get_processor_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Get_version_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Graph_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int XMPI_Graphdims_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Graph_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Graph_map_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Graph_neighbors_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Graph_neighbors_count_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Grequest_complete_NewStack(PNMPI_modHandle_t stack , MPI_Request _pnmpi_arg_0);

int XMPI_Grequest_start_NewStack(PNMPI_modHandle_t stack , MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int XMPI_Group_compare_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Group_difference_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int XMPI_Group_excl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);

int XMPI_Group_free_NewStack(PNMPI_modHandle_t stack , MPI_Group * _pnmpi_arg_0);

int XMPI_Group_incl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);

int XMPI_Group_intersection_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int XMPI_Group_range_excl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);

int XMPI_Group_range_incl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);

int XMPI_Group_rank_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Group_size_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Group_translate_ranks_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Group_union_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int XMPI_Ibsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Info_create_NewStack(PNMPI_modHandle_t stack , MPI_Info * _pnmpi_arg_0);

int XMPI_Info_delete_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Info_dup_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);

int XMPI_Info_free_NewStack(PNMPI_modHandle_t stack , MPI_Info * info);

int XMPI_Info_get_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Info_get_nkeys_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Info_get_nthkey_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2);

int XMPI_Info_get_valuelen_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Info_set_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2);

int XMPI_Init_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, char * * * _pnmpi_arg_1);

int XMPI_Initialized_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int XMPI_Init_thread_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Intercomm_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int XMPI_Intercomm_merge_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int XMPI_Iprobe_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_Irecv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Irsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Isend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Issend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Is_thread_main_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int XMPI_Keyval_create_NewStack(PNMPI_modHandle_t stack , MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int XMPI_Keyval_free_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int XMPI_Lookup_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int XMPI_Op_commutative_NewStack(PNMPI_modHandle_t stack , MPI_Op op, int * commute);

int XMPI_Op_create_NewStack(PNMPI_modHandle_t stack , MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2);

int XMPI_Open_port_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Op_free_NewStack(PNMPI_modHandle_t stack , MPI_Op * _pnmpi_arg_0);

int XMPI_Pack_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int XMPI_Pack_external_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6);

int XMPI_Pack_external_size_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3);

int XMPI_Pack_size_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Probe_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int XMPI_Publish_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int XMPI_Put_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);

int XMPI_Query_thread_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int XMPI_Recv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6);

int XMPI_Recv_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Reduce_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int XMPI_Reduce_local_NewStack(PNMPI_modHandle_t stack , void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op);

int XMPI_Reduce_scatter_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Reduce_scatter_block_NewStack(PNMPI_modHandle_t stack , void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);

int XMPI_Register_datarep_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4);

int XMPI_Request_free_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0);

int XMPI_Request_get_status_NewStack(PNMPI_modHandle_t stack , MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_Rsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Rsend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Scan_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Scatter_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int XMPI_Scatterv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int XMPI_Send_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Send_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Sendrecv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11);

int XMPI_Sendrecv_replace_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8);

int XMPI_Ssend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int XMPI_Ssend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int XMPI_Start_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0);

int XMPI_Startall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1);

int XMPI_Status_set_cancelled_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Status_set_elements_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2);

int XMPI_Test_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_Testall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int XMPI_Testany_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_Test_cancelled_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Testsome_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_Topo_test_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Type_commit_NewStack(PNMPI_modHandle_t stack , MPI_Datatype * _pnmpi_arg_0);

int XMPI_Type_contiguous_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int XMPI_Type_create_darray_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9);

int XMPI_Type_create_f90_complex_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int XMPI_Type_create_f90_integer_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);

int XMPI_Type_create_f90_real_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int XMPI_Type_create_hindexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_create_hvector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_create_indexed_block_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int XMPI_Type_create_resized_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3);

int XMPI_Type_create_struct_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_create_subarray_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6);

int XMPI_Type_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Type_dup_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);

int XMPI_Type_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int XMPI_Type_free_NewStack(PNMPI_modHandle_t stack , MPI_Datatype * _pnmpi_arg_0);

int XMPI_Type_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int XMPI_Type_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Type_get_contents_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[]);

int XMPI_Type_get_envelope_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int XMPI_Type_get_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int XMPI_Type_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Type_get_true_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int XMPI_Type_hindexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_hvector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_indexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_lb_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int XMPI_Type_match_size_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int XMPI_Type_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int XMPI_Type_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Type_size_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Type_struct_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Type_ub_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int XMPI_Type_vector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int XMPI_Unpack_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int XMPI_Unpack_external_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6);

int XMPI_Unpublish_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int XMPI_Wait_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1);

int XMPI_Waitall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int XMPI_Waitany_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int XMPI_Waitsome_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int XMPI_Win_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Win_complete_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0);

int XMPI_Win_create_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5);

int XMPI_Win_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Win_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int XMPI_Win_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);

int XMPI_Win_fence_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);

int XMPI_Win_free_NewStack(PNMPI_modHandle_t stack , MPI_Win * _pnmpi_arg_0);

int XMPI_Win_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int XMPI_Win_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int XMPI_Win_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int XMPI_Win_get_group_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int XMPI_Win_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int XMPI_Win_lock_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3);

int XMPI_Win_post_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);

int XMPI_Win_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int XMPI_Win_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int XMPI_Win_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1);

int XMPI_Win_start_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);

int XMPI_Win_test_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1);

int XMPI_Win_unlock_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);

int XMPI_Win_wait_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0);

double XMPI_Wtick_NewStack(PNMPI_modHandle_t stack );

double XMPI_Wtime_NewStack(PNMPI_modHandle_t stack );




#define MPI_Pcontrol_MAJOR (0/8)
#define MPI_Pcontrol_MINOR (1<<(0%8))

#define MPI_Abort_MAJOR (1/8)
#define MPI_Abort_MINOR (1<<(1%8))

#define MPI_Accumulate_MAJOR (2/8)
#define MPI_Accumulate_MINOR (1<<(2%8))

#define MPI_Add_error_class_MAJOR (3/8)
#define MPI_Add_error_class_MINOR (1<<(3%8))

#define MPI_Add_error_code_MAJOR (4/8)
#define MPI_Add_error_code_MINOR (1<<(4%8))

#define MPI_Add_error_string_MAJOR (5/8)
#define MPI_Add_error_string_MINOR (1<<(5%8))

#define MPI_Address_MAJOR (6/8)
#define MPI_Address_MINOR (1<<(6%8))

#define MPI_Allgather_MAJOR (7/8)
#define MPI_Allgather_MINOR (1<<(7%8))

#define MPI_Allgatherv_MAJOR (8/8)
#define MPI_Allgatherv_MINOR (1<<(8%8))

#define MPI_Alloc_mem_MAJOR (9/8)
#define MPI_Alloc_mem_MINOR (1<<(9%8))

#define MPI_Allreduce_MAJOR (10/8)
#define MPI_Allreduce_MINOR (1<<(10%8))

#define MPI_Alltoall_MAJOR (11/8)
#define MPI_Alltoall_MINOR (1<<(11%8))

#define MPI_Alltoallv_MAJOR (12/8)
#define MPI_Alltoallv_MINOR (1<<(12%8))

#define MPI_Alltoallw_MAJOR (13/8)
#define MPI_Alltoallw_MINOR (1<<(13%8))

#define MPI_Attr_delete_MAJOR (14/8)
#define MPI_Attr_delete_MINOR (1<<(14%8))

#define MPI_Attr_get_MAJOR (15/8)
#define MPI_Attr_get_MINOR (1<<(15%8))

#define MPI_Attr_put_MAJOR (16/8)
#define MPI_Attr_put_MINOR (1<<(16%8))

#define MPI_Barrier_MAJOR (17/8)
#define MPI_Barrier_MINOR (1<<(17%8))

#define MPI_Bcast_MAJOR (18/8)
#define MPI_Bcast_MINOR (1<<(18%8))

#define MPI_Bsend_MAJOR (19/8)
#define MPI_Bsend_MINOR (1<<(19%8))

#define MPI_Bsend_init_MAJOR (20/8)
#define MPI_Bsend_init_MINOR (1<<(20%8))

#define MPI_Buffer_attach_MAJOR (21/8)
#define MPI_Buffer_attach_MINOR (1<<(21%8))

#define MPI_Buffer_detach_MAJOR (22/8)
#define MPI_Buffer_detach_MINOR (1<<(22%8))

#define MPI_Cancel_MAJOR (23/8)
#define MPI_Cancel_MINOR (1<<(23%8))

#define MPI_Cart_coords_MAJOR (24/8)
#define MPI_Cart_coords_MINOR (1<<(24%8))

#define MPI_Cart_create_MAJOR (25/8)
#define MPI_Cart_create_MINOR (1<<(25%8))

#define MPI_Cartdim_get_MAJOR (26/8)
#define MPI_Cartdim_get_MINOR (1<<(26%8))

#define MPI_Cart_get_MAJOR (27/8)
#define MPI_Cart_get_MINOR (1<<(27%8))

#define MPI_Cart_map_MAJOR (28/8)
#define MPI_Cart_map_MINOR (1<<(28%8))

#define MPI_Cart_rank_MAJOR (29/8)
#define MPI_Cart_rank_MINOR (1<<(29%8))

#define MPI_Cart_shift_MAJOR (30/8)
#define MPI_Cart_shift_MINOR (1<<(30%8))

#define MPI_Cart_sub_MAJOR (31/8)
#define MPI_Cart_sub_MINOR (1<<(31%8))

#define MPI_Close_port_MAJOR (32/8)
#define MPI_Close_port_MINOR (1<<(32%8))

#define MPI_Comm_accept_MAJOR (33/8)
#define MPI_Comm_accept_MINOR (1<<(33%8))

#define MPI_Comm_call_errhandler_MAJOR (34/8)
#define MPI_Comm_call_errhandler_MINOR (1<<(34%8))

#define MPI_Comm_compare_MAJOR (35/8)
#define MPI_Comm_compare_MINOR (1<<(35%8))

#define MPI_Comm_connect_MAJOR (36/8)
#define MPI_Comm_connect_MINOR (1<<(36%8))

#define MPI_Comm_create_MAJOR (37/8)
#define MPI_Comm_create_MINOR (1<<(37%8))

#define MPI_Comm_create_errhandler_MAJOR (38/8)
#define MPI_Comm_create_errhandler_MINOR (1<<(38%8))

#define MPI_Comm_create_keyval_MAJOR (39/8)
#define MPI_Comm_create_keyval_MINOR (1<<(39%8))

#define MPI_Comm_delete_attr_MAJOR (40/8)
#define MPI_Comm_delete_attr_MINOR (1<<(40%8))

#define MPI_Comm_disconnect_MAJOR (41/8)
#define MPI_Comm_disconnect_MINOR (1<<(41%8))

#define MPI_Comm_dup_MAJOR (42/8)
#define MPI_Comm_dup_MINOR (1<<(42%8))

#define MPI_Comm_free_MAJOR (43/8)
#define MPI_Comm_free_MINOR (1<<(43%8))

#define MPI_Comm_free_keyval_MAJOR (44/8)
#define MPI_Comm_free_keyval_MINOR (1<<(44%8))

#define MPI_Comm_get_attr_MAJOR (45/8)
#define MPI_Comm_get_attr_MINOR (1<<(45%8))

#define MPI_Comm_get_errhandler_MAJOR (46/8)
#define MPI_Comm_get_errhandler_MINOR (1<<(46%8))

#define MPI_Comm_get_name_MAJOR (47/8)
#define MPI_Comm_get_name_MINOR (1<<(47%8))

#define MPI_Comm_get_parent_MAJOR (48/8)
#define MPI_Comm_get_parent_MINOR (1<<(48%8))

#define MPI_Comm_group_MAJOR (49/8)
#define MPI_Comm_group_MINOR (1<<(49%8))

#define MPI_Comm_join_MAJOR (50/8)
#define MPI_Comm_join_MINOR (1<<(50%8))

#define MPI_Comm_rank_MAJOR (51/8)
#define MPI_Comm_rank_MINOR (1<<(51%8))

#define MPI_Comm_remote_group_MAJOR (52/8)
#define MPI_Comm_remote_group_MINOR (1<<(52%8))

#define MPI_Comm_remote_size_MAJOR (53/8)
#define MPI_Comm_remote_size_MINOR (1<<(53%8))

#define MPI_Comm_set_attr_MAJOR (54/8)
#define MPI_Comm_set_attr_MINOR (1<<(54%8))

#define MPI_Comm_set_errhandler_MAJOR (55/8)
#define MPI_Comm_set_errhandler_MINOR (1<<(55%8))

#define MPI_Comm_set_name_MAJOR (56/8)
#define MPI_Comm_set_name_MINOR (1<<(56%8))

#define MPI_Comm_size_MAJOR (57/8)
#define MPI_Comm_size_MINOR (1<<(57%8))

#define MPI_Comm_spawn_MAJOR (58/8)
#define MPI_Comm_spawn_MINOR (1<<(58%8))

#define MPI_Comm_spawn_multiple_MAJOR (59/8)
#define MPI_Comm_spawn_multiple_MINOR (1<<(59%8))

#define MPI_Comm_split_MAJOR (60/8)
#define MPI_Comm_split_MINOR (1<<(60%8))

#define MPI_Comm_test_inter_MAJOR (61/8)
#define MPI_Comm_test_inter_MINOR (1<<(61%8))

#define MPI_Dims_create_MAJOR (62/8)
#define MPI_Dims_create_MINOR (1<<(62%8))

#define MPI_Dist_graph_create_MAJOR (63/8)
#define MPI_Dist_graph_create_MINOR (1<<(63%8))

#define MPI_Dist_graph_create_adjacent_MAJOR (64/8)
#define MPI_Dist_graph_create_adjacent_MINOR (1<<(64%8))

#define MPI_Dist_graph_neighbors_MAJOR (65/8)
#define MPI_Dist_graph_neighbors_MINOR (1<<(65%8))

#define MPI_Dist_graph_neighbors_count_MAJOR (66/8)
#define MPI_Dist_graph_neighbors_count_MINOR (1<<(66%8))

#define MPI_Errhandler_create_MAJOR (67/8)
#define MPI_Errhandler_create_MINOR (1<<(67%8))

#define MPI_Errhandler_free_MAJOR (68/8)
#define MPI_Errhandler_free_MINOR (1<<(68%8))

#define MPI_Errhandler_get_MAJOR (69/8)
#define MPI_Errhandler_get_MINOR (1<<(69%8))

#define MPI_Errhandler_set_MAJOR (70/8)
#define MPI_Errhandler_set_MINOR (1<<(70%8))

#define MPI_Error_class_MAJOR (71/8)
#define MPI_Error_class_MINOR (1<<(71%8))

#define MPI_Error_string_MAJOR (72/8)
#define MPI_Error_string_MINOR (1<<(72%8))

#define MPI_Exscan_MAJOR (73/8)
#define MPI_Exscan_MINOR (1<<(73%8))

#define MPI_File_call_errhandler_MAJOR (74/8)
#define MPI_File_call_errhandler_MINOR (1<<(74%8))

#define MPI_File_close_MAJOR (75/8)
#define MPI_File_close_MINOR (1<<(75%8))

#define MPI_File_create_errhandler_MAJOR (76/8)
#define MPI_File_create_errhandler_MINOR (1<<(76%8))

#define MPI_File_delete_MAJOR (77/8)
#define MPI_File_delete_MINOR (1<<(77%8))

#define MPI_File_get_amode_MAJOR (78/8)
#define MPI_File_get_amode_MINOR (1<<(78%8))

#define MPI_File_get_atomicity_MAJOR (79/8)
#define MPI_File_get_atomicity_MINOR (1<<(79%8))

#define MPI_File_get_byte_offset_MAJOR (80/8)
#define MPI_File_get_byte_offset_MINOR (1<<(80%8))

#define MPI_File_get_errhandler_MAJOR (81/8)
#define MPI_File_get_errhandler_MINOR (1<<(81%8))

#define MPI_File_get_group_MAJOR (82/8)
#define MPI_File_get_group_MINOR (1<<(82%8))

#define MPI_File_get_info_MAJOR (83/8)
#define MPI_File_get_info_MINOR (1<<(83%8))

#define MPI_File_get_position_MAJOR (84/8)
#define MPI_File_get_position_MINOR (1<<(84%8))

#define MPI_File_get_position_shared_MAJOR (85/8)
#define MPI_File_get_position_shared_MINOR (1<<(85%8))

#define MPI_File_get_size_MAJOR (86/8)
#define MPI_File_get_size_MINOR (1<<(86%8))

#define MPI_File_get_type_extent_MAJOR (87/8)
#define MPI_File_get_type_extent_MINOR (1<<(87%8))

#define MPI_File_get_view_MAJOR (88/8)
#define MPI_File_get_view_MINOR (1<<(88%8))

#define MPI_File_iread_MAJOR (89/8)
#define MPI_File_iread_MINOR (1<<(89%8))

#define MPI_File_iread_at_MAJOR (90/8)
#define MPI_File_iread_at_MINOR (1<<(90%8))

#define MPI_File_iread_shared_MAJOR (91/8)
#define MPI_File_iread_shared_MINOR (1<<(91%8))

#define MPI_File_iwrite_MAJOR (92/8)
#define MPI_File_iwrite_MINOR (1<<(92%8))

#define MPI_File_iwrite_at_MAJOR (93/8)
#define MPI_File_iwrite_at_MINOR (1<<(93%8))

#define MPI_File_iwrite_shared_MAJOR (94/8)
#define MPI_File_iwrite_shared_MINOR (1<<(94%8))

#define MPI_File_open_MAJOR (95/8)
#define MPI_File_open_MINOR (1<<(95%8))

#define MPI_File_preallocate_MAJOR (96/8)
#define MPI_File_preallocate_MINOR (1<<(96%8))

#define MPI_File_read_MAJOR (97/8)
#define MPI_File_read_MINOR (1<<(97%8))

#define MPI_File_read_all_MAJOR (98/8)
#define MPI_File_read_all_MINOR (1<<(98%8))

#define MPI_File_read_all_begin_MAJOR (99/8)
#define MPI_File_read_all_begin_MINOR (1<<(99%8))

#define MPI_File_read_all_end_MAJOR (100/8)
#define MPI_File_read_all_end_MINOR (1<<(100%8))

#define MPI_File_read_at_MAJOR (101/8)
#define MPI_File_read_at_MINOR (1<<(101%8))

#define MPI_File_read_at_all_MAJOR (102/8)
#define MPI_File_read_at_all_MINOR (1<<(102%8))

#define MPI_File_read_at_all_begin_MAJOR (103/8)
#define MPI_File_read_at_all_begin_MINOR (1<<(103%8))

#define MPI_File_read_at_all_end_MAJOR (104/8)
#define MPI_File_read_at_all_end_MINOR (1<<(104%8))

#define MPI_File_read_ordered_MAJOR (105/8)
#define MPI_File_read_ordered_MINOR (1<<(105%8))

#define MPI_File_read_ordered_begin_MAJOR (106/8)
#define MPI_File_read_ordered_begin_MINOR (1<<(106%8))

#define MPI_File_read_ordered_end_MAJOR (107/8)
#define MPI_File_read_ordered_end_MINOR (1<<(107%8))

#define MPI_File_read_shared_MAJOR (108/8)
#define MPI_File_read_shared_MINOR (1<<(108%8))

#define MPI_File_seek_MAJOR (109/8)
#define MPI_File_seek_MINOR (1<<(109%8))

#define MPI_File_seek_shared_MAJOR (110/8)
#define MPI_File_seek_shared_MINOR (1<<(110%8))

#define MPI_File_set_atomicity_MAJOR (111/8)
#define MPI_File_set_atomicity_MINOR (1<<(111%8))

#define MPI_File_set_errhandler_MAJOR (112/8)
#define MPI_File_set_errhandler_MINOR (1<<(112%8))

#define MPI_File_set_info_MAJOR (113/8)
#define MPI_File_set_info_MINOR (1<<(113%8))

#define MPI_File_set_size_MAJOR (114/8)
#define MPI_File_set_size_MINOR (1<<(114%8))

#define MPI_File_set_view_MAJOR (115/8)
#define MPI_File_set_view_MINOR (1<<(115%8))

#define MPI_File_sync_MAJOR (116/8)
#define MPI_File_sync_MINOR (1<<(116%8))

#define MPI_File_write_MAJOR (117/8)
#define MPI_File_write_MINOR (1<<(117%8))

#define MPI_File_write_all_MAJOR (118/8)
#define MPI_File_write_all_MINOR (1<<(118%8))

#define MPI_File_write_all_begin_MAJOR (119/8)
#define MPI_File_write_all_begin_MINOR (1<<(119%8))

#define MPI_File_write_all_end_MAJOR (120/8)
#define MPI_File_write_all_end_MINOR (1<<(120%8))

#define MPI_File_write_at_MAJOR (121/8)
#define MPI_File_write_at_MINOR (1<<(121%8))

#define MPI_File_write_at_all_MAJOR (122/8)
#define MPI_File_write_at_all_MINOR (1<<(122%8))

#define MPI_File_write_at_all_begin_MAJOR (123/8)
#define MPI_File_write_at_all_begin_MINOR (1<<(123%8))

#define MPI_File_write_at_all_end_MAJOR (124/8)
#define MPI_File_write_at_all_end_MINOR (1<<(124%8))

#define MPI_File_write_ordered_MAJOR (125/8)
#define MPI_File_write_ordered_MINOR (1<<(125%8))

#define MPI_File_write_ordered_begin_MAJOR (126/8)
#define MPI_File_write_ordered_begin_MINOR (1<<(126%8))

#define MPI_File_write_ordered_end_MAJOR (127/8)
#define MPI_File_write_ordered_end_MINOR (1<<(127%8))

#define MPI_File_write_shared_MAJOR (128/8)
#define MPI_File_write_shared_MINOR (1<<(128%8))

#define MPI_Finalize_MAJOR (129/8)
#define MPI_Finalize_MINOR (1<<(129%8))

#define MPI_Finalized_MAJOR (130/8)
#define MPI_Finalized_MINOR (1<<(130%8))

#define MPI_Free_mem_MAJOR (131/8)
#define MPI_Free_mem_MINOR (1<<(131%8))

#define MPI_Gather_MAJOR (132/8)
#define MPI_Gather_MINOR (1<<(132%8))

#define MPI_Gatherv_MAJOR (133/8)
#define MPI_Gatherv_MINOR (1<<(133%8))

#define MPI_Get_MAJOR (134/8)
#define MPI_Get_MINOR (1<<(134%8))

#define MPI_Get_address_MAJOR (135/8)
#define MPI_Get_address_MINOR (1<<(135%8))

#define MPI_Get_count_MAJOR (136/8)
#define MPI_Get_count_MINOR (1<<(136%8))

#define MPI_Get_elements_MAJOR (137/8)
#define MPI_Get_elements_MINOR (1<<(137%8))

#define MPI_Get_processor_name_MAJOR (138/8)
#define MPI_Get_processor_name_MINOR (1<<(138%8))

#define MPI_Get_version_MAJOR (139/8)
#define MPI_Get_version_MINOR (1<<(139%8))

#define MPI_Graph_create_MAJOR (140/8)
#define MPI_Graph_create_MINOR (1<<(140%8))

#define MPI_Graphdims_get_MAJOR (141/8)
#define MPI_Graphdims_get_MINOR (1<<(141%8))

#define MPI_Graph_get_MAJOR (142/8)
#define MPI_Graph_get_MINOR (1<<(142%8))

#define MPI_Graph_map_MAJOR (143/8)
#define MPI_Graph_map_MINOR (1<<(143%8))

#define MPI_Graph_neighbors_MAJOR (144/8)
#define MPI_Graph_neighbors_MINOR (1<<(144%8))

#define MPI_Graph_neighbors_count_MAJOR (145/8)
#define MPI_Graph_neighbors_count_MINOR (1<<(145%8))

#define MPI_Grequest_complete_MAJOR (146/8)
#define MPI_Grequest_complete_MINOR (1<<(146%8))

#define MPI_Grequest_start_MAJOR (147/8)
#define MPI_Grequest_start_MINOR (1<<(147%8))

#define MPI_Group_compare_MAJOR (148/8)
#define MPI_Group_compare_MINOR (1<<(148%8))

#define MPI_Group_difference_MAJOR (149/8)
#define MPI_Group_difference_MINOR (1<<(149%8))

#define MPI_Group_excl_MAJOR (150/8)
#define MPI_Group_excl_MINOR (1<<(150%8))

#define MPI_Group_free_MAJOR (151/8)
#define MPI_Group_free_MINOR (1<<(151%8))

#define MPI_Group_incl_MAJOR (152/8)
#define MPI_Group_incl_MINOR (1<<(152%8))

#define MPI_Group_intersection_MAJOR (153/8)
#define MPI_Group_intersection_MINOR (1<<(153%8))

#define MPI_Group_range_excl_MAJOR (154/8)
#define MPI_Group_range_excl_MINOR (1<<(154%8))

#define MPI_Group_range_incl_MAJOR (155/8)
#define MPI_Group_range_incl_MINOR (1<<(155%8))

#define MPI_Group_rank_MAJOR (156/8)
#define MPI_Group_rank_MINOR (1<<(156%8))

#define MPI_Group_size_MAJOR (157/8)
#define MPI_Group_size_MINOR (1<<(157%8))

#define MPI_Group_translate_ranks_MAJOR (158/8)
#define MPI_Group_translate_ranks_MINOR (1<<(158%8))

#define MPI_Group_union_MAJOR (159/8)
#define MPI_Group_union_MINOR (1<<(159%8))

#define MPI_Ibsend_MAJOR (160/8)
#define MPI_Ibsend_MINOR (1<<(160%8))

#define MPI_Info_create_MAJOR (161/8)
#define MPI_Info_create_MINOR (1<<(161%8))

#define MPI_Info_delete_MAJOR (162/8)
#define MPI_Info_delete_MINOR (1<<(162%8))

#define MPI_Info_dup_MAJOR (163/8)
#define MPI_Info_dup_MINOR (1<<(163%8))

#define MPI_Info_free_MAJOR (164/8)
#define MPI_Info_free_MINOR (1<<(164%8))

#define MPI_Info_get_MAJOR (165/8)
#define MPI_Info_get_MINOR (1<<(165%8))

#define MPI_Info_get_nkeys_MAJOR (166/8)
#define MPI_Info_get_nkeys_MINOR (1<<(166%8))

#define MPI_Info_get_nthkey_MAJOR (167/8)
#define MPI_Info_get_nthkey_MINOR (1<<(167%8))

#define MPI_Info_get_valuelen_MAJOR (168/8)
#define MPI_Info_get_valuelen_MINOR (1<<(168%8))

#define MPI_Info_set_MAJOR (169/8)
#define MPI_Info_set_MINOR (1<<(169%8))

#define MPI_Init_MAJOR (170/8)
#define MPI_Init_MINOR (1<<(170%8))

#define MPI_Initialized_MAJOR (171/8)
#define MPI_Initialized_MINOR (1<<(171%8))

#define MPI_Init_thread_MAJOR (172/8)
#define MPI_Init_thread_MINOR (1<<(172%8))

#define MPI_Intercomm_create_MAJOR (173/8)
#define MPI_Intercomm_create_MINOR (1<<(173%8))

#define MPI_Intercomm_merge_MAJOR (174/8)
#define MPI_Intercomm_merge_MINOR (1<<(174%8))

#define MPI_Iprobe_MAJOR (175/8)
#define MPI_Iprobe_MINOR (1<<(175%8))

#define MPI_Irecv_MAJOR (176/8)
#define MPI_Irecv_MINOR (1<<(176%8))

#define MPI_Irsend_MAJOR (177/8)
#define MPI_Irsend_MINOR (1<<(177%8))

#define MPI_Isend_MAJOR (178/8)
#define MPI_Isend_MINOR (1<<(178%8))

#define MPI_Issend_MAJOR (179/8)
#define MPI_Issend_MINOR (1<<(179%8))

#define MPI_Is_thread_main_MAJOR (180/8)
#define MPI_Is_thread_main_MINOR (1<<(180%8))

#define MPI_Keyval_create_MAJOR (181/8)
#define MPI_Keyval_create_MINOR (1<<(181%8))

#define MPI_Keyval_free_MAJOR (182/8)
#define MPI_Keyval_free_MINOR (1<<(182%8))

#define MPI_Lookup_name_MAJOR (183/8)
#define MPI_Lookup_name_MINOR (1<<(183%8))

#define MPI_Op_commutative_MAJOR (184/8)
#define MPI_Op_commutative_MINOR (1<<(184%8))

#define MPI_Op_create_MAJOR (185/8)
#define MPI_Op_create_MINOR (1<<(185%8))

#define MPI_Open_port_MAJOR (186/8)
#define MPI_Open_port_MINOR (1<<(186%8))

#define MPI_Op_free_MAJOR (187/8)
#define MPI_Op_free_MINOR (1<<(187%8))

#define MPI_Pack_MAJOR (188/8)
#define MPI_Pack_MINOR (1<<(188%8))

#define MPI_Pack_external_MAJOR (189/8)
#define MPI_Pack_external_MINOR (1<<(189%8))

#define MPI_Pack_external_size_MAJOR (190/8)
#define MPI_Pack_external_size_MINOR (1<<(190%8))

#define MPI_Pack_size_MAJOR (191/8)
#define MPI_Pack_size_MINOR (1<<(191%8))

#define MPI_Probe_MAJOR (192/8)
#define MPI_Probe_MINOR (1<<(192%8))

#define MPI_Publish_name_MAJOR (193/8)
#define MPI_Publish_name_MINOR (1<<(193%8))

#define MPI_Put_MAJOR (194/8)
#define MPI_Put_MINOR (1<<(194%8))

#define MPI_Query_thread_MAJOR (195/8)
#define MPI_Query_thread_MINOR (1<<(195%8))

#define MPI_Recv_MAJOR (196/8)
#define MPI_Recv_MINOR (1<<(196%8))

#define MPI_Recv_init_MAJOR (197/8)
#define MPI_Recv_init_MINOR (1<<(197%8))

#define MPI_Reduce_MAJOR (198/8)
#define MPI_Reduce_MINOR (1<<(198%8))

#define MPI_Reduce_local_MAJOR (199/8)
#define MPI_Reduce_local_MINOR (1<<(199%8))

#define MPI_Reduce_scatter_MAJOR (200/8)
#define MPI_Reduce_scatter_MINOR (1<<(200%8))

#define MPI_Reduce_scatter_block_MAJOR (201/8)
#define MPI_Reduce_scatter_block_MINOR (1<<(201%8))

#define MPI_Register_datarep_MAJOR (202/8)
#define MPI_Register_datarep_MINOR (1<<(202%8))

#define MPI_Request_free_MAJOR (203/8)
#define MPI_Request_free_MINOR (1<<(203%8))

#define MPI_Request_get_status_MAJOR (204/8)
#define MPI_Request_get_status_MINOR (1<<(204%8))

#define MPI_Rsend_MAJOR (205/8)
#define MPI_Rsend_MINOR (1<<(205%8))

#define MPI_Rsend_init_MAJOR (206/8)
#define MPI_Rsend_init_MINOR (1<<(206%8))

#define MPI_Scan_MAJOR (207/8)
#define MPI_Scan_MINOR (1<<(207%8))

#define MPI_Scatter_MAJOR (208/8)
#define MPI_Scatter_MINOR (1<<(208%8))

#define MPI_Scatterv_MAJOR (209/8)
#define MPI_Scatterv_MINOR (1<<(209%8))

#define MPI_Send_MAJOR (210/8)
#define MPI_Send_MINOR (1<<(210%8))

#define MPI_Send_init_MAJOR (211/8)
#define MPI_Send_init_MINOR (1<<(211%8))

#define MPI_Sendrecv_MAJOR (212/8)
#define MPI_Sendrecv_MINOR (1<<(212%8))

#define MPI_Sendrecv_replace_MAJOR (213/8)
#define MPI_Sendrecv_replace_MINOR (1<<(213%8))

#define MPI_Ssend_MAJOR (214/8)
#define MPI_Ssend_MINOR (1<<(214%8))

#define MPI_Ssend_init_MAJOR (215/8)
#define MPI_Ssend_init_MINOR (1<<(215%8))

#define MPI_Start_MAJOR (216/8)
#define MPI_Start_MINOR (1<<(216%8))

#define MPI_Startall_MAJOR (217/8)
#define MPI_Startall_MINOR (1<<(217%8))

#define MPI_Status_set_cancelled_MAJOR (218/8)
#define MPI_Status_set_cancelled_MINOR (1<<(218%8))

#define MPI_Status_set_elements_MAJOR (219/8)
#define MPI_Status_set_elements_MINOR (1<<(219%8))

#define MPI_Test_MAJOR (220/8)
#define MPI_Test_MINOR (1<<(220%8))

#define MPI_Testall_MAJOR (221/8)
#define MPI_Testall_MINOR (1<<(221%8))

#define MPI_Testany_MAJOR (222/8)
#define MPI_Testany_MINOR (1<<(222%8))

#define MPI_Test_cancelled_MAJOR (223/8)
#define MPI_Test_cancelled_MINOR (1<<(223%8))

#define MPI_Testsome_MAJOR (224/8)
#define MPI_Testsome_MINOR (1<<(224%8))

#define MPI_Topo_test_MAJOR (225/8)
#define MPI_Topo_test_MINOR (1<<(225%8))

#define MPI_Type_commit_MAJOR (226/8)
#define MPI_Type_commit_MINOR (1<<(226%8))

#define MPI_Type_contiguous_MAJOR (227/8)
#define MPI_Type_contiguous_MINOR (1<<(227%8))

#define MPI_Type_create_darray_MAJOR (228/8)
#define MPI_Type_create_darray_MINOR (1<<(228%8))

#define MPI_Type_create_f90_complex_MAJOR (229/8)
#define MPI_Type_create_f90_complex_MINOR (1<<(229%8))

#define MPI_Type_create_f90_integer_MAJOR (230/8)
#define MPI_Type_create_f90_integer_MINOR (1<<(230%8))

#define MPI_Type_create_f90_real_MAJOR (231/8)
#define MPI_Type_create_f90_real_MINOR (1<<(231%8))

#define MPI_Type_create_hindexed_MAJOR (232/8)
#define MPI_Type_create_hindexed_MINOR (1<<(232%8))

#define MPI_Type_create_hvector_MAJOR (233/8)
#define MPI_Type_create_hvector_MINOR (1<<(233%8))

#define MPI_Type_create_indexed_block_MAJOR (234/8)
#define MPI_Type_create_indexed_block_MINOR (1<<(234%8))

#define MPI_Type_create_keyval_MAJOR (235/8)
#define MPI_Type_create_keyval_MINOR (1<<(235%8))

#define MPI_Type_create_resized_MAJOR (236/8)
#define MPI_Type_create_resized_MINOR (1<<(236%8))

#define MPI_Type_create_struct_MAJOR (237/8)
#define MPI_Type_create_struct_MINOR (1<<(237%8))

#define MPI_Type_create_subarray_MAJOR (238/8)
#define MPI_Type_create_subarray_MINOR (1<<(238%8))

#define MPI_Type_delete_attr_MAJOR (239/8)
#define MPI_Type_delete_attr_MINOR (1<<(239%8))

#define MPI_Type_dup_MAJOR (240/8)
#define MPI_Type_dup_MINOR (1<<(240%8))

#define MPI_Type_extent_MAJOR (241/8)
#define MPI_Type_extent_MINOR (1<<(241%8))

#define MPI_Type_free_MAJOR (242/8)
#define MPI_Type_free_MINOR (1<<(242%8))

#define MPI_Type_free_keyval_MAJOR (243/8)
#define MPI_Type_free_keyval_MINOR (1<<(243%8))

#define MPI_Type_get_attr_MAJOR (244/8)
#define MPI_Type_get_attr_MINOR (1<<(244%8))

#define MPI_Type_get_contents_MAJOR (245/8)
#define MPI_Type_get_contents_MINOR (1<<(245%8))

#define MPI_Type_get_envelope_MAJOR (246/8)
#define MPI_Type_get_envelope_MINOR (1<<(246%8))

#define MPI_Type_get_extent_MAJOR (247/8)
#define MPI_Type_get_extent_MINOR (1<<(247%8))

#define MPI_Type_get_name_MAJOR (248/8)
#define MPI_Type_get_name_MINOR (1<<(248%8))

#define MPI_Type_get_true_extent_MAJOR (249/8)
#define MPI_Type_get_true_extent_MINOR (1<<(249%8))

#define MPI_Type_hindexed_MAJOR (250/8)
#define MPI_Type_hindexed_MINOR (1<<(250%8))

#define MPI_Type_hvector_MAJOR (251/8)
#define MPI_Type_hvector_MINOR (1<<(251%8))

#define MPI_Type_indexed_MAJOR (252/8)
#define MPI_Type_indexed_MINOR (1<<(252%8))

#define MPI_Type_lb_MAJOR (253/8)
#define MPI_Type_lb_MINOR (1<<(253%8))

#define MPI_Type_match_size_MAJOR (254/8)
#define MPI_Type_match_size_MINOR (1<<(254%8))

#define MPI_Type_set_attr_MAJOR (255/8)
#define MPI_Type_set_attr_MINOR (1<<(255%8))

#define MPI_Type_set_name_MAJOR (256/8)
#define MPI_Type_set_name_MINOR (1<<(256%8))

#define MPI_Type_size_MAJOR (257/8)
#define MPI_Type_size_MINOR (1<<(257%8))

#define MPI_Type_struct_MAJOR (258/8)
#define MPI_Type_struct_MINOR (1<<(258%8))

#define MPI_Type_ub_MAJOR (259/8)
#define MPI_Type_ub_MINOR (1<<(259%8))

#define MPI_Type_vector_MAJOR (260/8)
#define MPI_Type_vector_MINOR (1<<(260%8))

#define MPI_Unpack_MAJOR (261/8)
#define MPI_Unpack_MINOR (1<<(261%8))

#define MPI_Unpack_external_MAJOR (262/8)
#define MPI_Unpack_external_MINOR (1<<(262%8))

#define MPI_Unpublish_name_MAJOR (263/8)
#define MPI_Unpublish_name_MINOR (1<<(263%8))

#define MPI_Wait_MAJOR (264/8)
#define MPI_Wait_MINOR (1<<(264%8))

#define MPI_Waitall_MAJOR (265/8)
#define MPI_Waitall_MINOR (1<<(265%8))

#define MPI_Waitany_MAJOR (266/8)
#define MPI_Waitany_MINOR (1<<(266%8))

#define MPI_Waitsome_MAJOR (267/8)
#define MPI_Waitsome_MINOR (1<<(267%8))

#define MPI_Win_call_errhandler_MAJOR (268/8)
#define MPI_Win_call_errhandler_MINOR (1<<(268%8))

#define MPI_Win_complete_MAJOR (269/8)
#define MPI_Win_complete_MINOR (1<<(269%8))

#define MPI_Win_create_MAJOR (270/8)
#define MPI_Win_create_MINOR (1<<(270%8))

#define MPI_Win_create_errhandler_MAJOR (271/8)
#define MPI_Win_create_errhandler_MINOR (1<<(271%8))

#define MPI_Win_create_keyval_MAJOR (272/8)
#define MPI_Win_create_keyval_MINOR (1<<(272%8))

#define MPI_Win_delete_attr_MAJOR (273/8)
#define MPI_Win_delete_attr_MINOR (1<<(273%8))

#define MPI_Win_fence_MAJOR (274/8)
#define MPI_Win_fence_MINOR (1<<(274%8))

#define MPI_Win_free_MAJOR (275/8)
#define MPI_Win_free_MINOR (1<<(275%8))

#define MPI_Win_free_keyval_MAJOR (276/8)
#define MPI_Win_free_keyval_MINOR (1<<(276%8))

#define MPI_Win_get_attr_MAJOR (277/8)
#define MPI_Win_get_attr_MINOR (1<<(277%8))

#define MPI_Win_get_errhandler_MAJOR (278/8)
#define MPI_Win_get_errhandler_MINOR (1<<(278%8))

#define MPI_Win_get_group_MAJOR (279/8)
#define MPI_Win_get_group_MINOR (1<<(279%8))

#define MPI_Win_get_name_MAJOR (280/8)
#define MPI_Win_get_name_MINOR (1<<(280%8))

#define MPI_Win_lock_MAJOR (281/8)
#define MPI_Win_lock_MINOR (1<<(281%8))

#define MPI_Win_post_MAJOR (282/8)
#define MPI_Win_post_MINOR (1<<(282%8))

#define MPI_Win_set_attr_MAJOR (283/8)
#define MPI_Win_set_attr_MINOR (1<<(283%8))

#define MPI_Win_set_errhandler_MAJOR (284/8)
#define MPI_Win_set_errhandler_MINOR (1<<(284%8))

#define MPI_Win_set_name_MAJOR (285/8)
#define MPI_Win_set_name_MINOR (1<<(285%8))

#define MPI_Win_start_MAJOR (286/8)
#define MPI_Win_start_MINOR (1<<(286%8))

#define MPI_Win_test_MAJOR (287/8)
#define MPI_Win_test_MINOR (1<<(287%8))

#define MPI_Win_unlock_MAJOR (288/8)
#define MPI_Win_unlock_MINOR (1<<(288%8))

#define MPI_Win_wait_MAJOR (289/8)
#define MPI_Win_wait_MINOR (1<<(289%8))

#define MPI_Wtick_MAJOR (290/8)
#define MPI_Wtick_MINOR (1<<(290%8))

#define MPI_Wtime_MAJOR (291/8)
#define MPI_Wtime_MINOR (1<<(291%8))



#define Internal_XMPI_Abort NQJ_Abort

#define Internal_XMPI_Accumulate NQJ_Accumulate

#define Internal_XMPI_Add_error_class NQJ_Add_error_class

#define Internal_XMPI_Add_error_code NQJ_Add_error_code

#define Internal_XMPI_Add_error_string NQJ_Add_error_string

#define Internal_XMPI_Address NQJ_Address

#define Internal_XMPI_Allgather NQJ_Allgather

#define Internal_XMPI_Allgatherv NQJ_Allgatherv

#define Internal_XMPI_Alloc_mem NQJ_Alloc_mem

#define Internal_XMPI_Allreduce NQJ_Allreduce

#define Internal_XMPI_Alltoall NQJ_Alltoall

#define Internal_XMPI_Alltoallv NQJ_Alltoallv

#define Internal_XMPI_Alltoallw NQJ_Alltoallw

#define Internal_XMPI_Attr_delete NQJ_Attr_delete

#define Internal_XMPI_Attr_get NQJ_Attr_get

#define Internal_XMPI_Attr_put NQJ_Attr_put

#define Internal_XMPI_Barrier NQJ_Barrier

#define Internal_XMPI_Bcast NQJ_Bcast

#define Internal_XMPI_Bsend NQJ_Bsend

#define Internal_XMPI_Bsend_init NQJ_Bsend_init

#define Internal_XMPI_Buffer_attach NQJ_Buffer_attach

#define Internal_XMPI_Buffer_detach NQJ_Buffer_detach

#define Internal_XMPI_Cancel NQJ_Cancel

#define Internal_XMPI_Cart_coords NQJ_Cart_coords

#define Internal_XMPI_Cart_create NQJ_Cart_create

#define Internal_XMPI_Cartdim_get NQJ_Cartdim_get

#define Internal_XMPI_Cart_get NQJ_Cart_get

#define Internal_XMPI_Cart_map NQJ_Cart_map

#define Internal_XMPI_Cart_rank NQJ_Cart_rank

#define Internal_XMPI_Cart_shift NQJ_Cart_shift

#define Internal_XMPI_Cart_sub NQJ_Cart_sub

#define Internal_XMPI_Close_port NQJ_Close_port

#define Internal_XMPI_Comm_accept NQJ_Comm_accept

#define Internal_XMPI_Comm_call_errhandler NQJ_Comm_call_errhandler

#define Internal_XMPI_Comm_compare NQJ_Comm_compare

#define Internal_XMPI_Comm_connect NQJ_Comm_connect

#define Internal_XMPI_Comm_create NQJ_Comm_create

#define Internal_XMPI_Comm_create_errhandler NQJ_Comm_create_errhandler

#define Internal_XMPI_Comm_create_keyval NQJ_Comm_create_keyval

#define Internal_XMPI_Comm_delete_attr NQJ_Comm_delete_attr

#define Internal_XMPI_Comm_disconnect NQJ_Comm_disconnect

#define Internal_XMPI_Comm_dup NQJ_Comm_dup

#define Internal_XMPI_Comm_free NQJ_Comm_free

#define Internal_XMPI_Comm_free_keyval NQJ_Comm_free_keyval

#define Internal_XMPI_Comm_get_attr NQJ_Comm_get_attr

#define Internal_XMPI_Comm_get_errhandler NQJ_Comm_get_errhandler

#define Internal_XMPI_Comm_get_name NQJ_Comm_get_name

#define Internal_XMPI_Comm_get_parent NQJ_Comm_get_parent

#define Internal_XMPI_Comm_group NQJ_Comm_group

#define Internal_XMPI_Comm_join NQJ_Comm_join

#define Internal_XMPI_Comm_rank NQJ_Comm_rank

#define Internal_XMPI_Comm_remote_group NQJ_Comm_remote_group

#define Internal_XMPI_Comm_remote_size NQJ_Comm_remote_size

#define Internal_XMPI_Comm_set_attr NQJ_Comm_set_attr

#define Internal_XMPI_Comm_set_errhandler NQJ_Comm_set_errhandler

#define Internal_XMPI_Comm_set_name NQJ_Comm_set_name

#define Internal_XMPI_Comm_size NQJ_Comm_size

#define Internal_XMPI_Comm_spawn NQJ_Comm_spawn

#define Internal_XMPI_Comm_spawn_multiple NQJ_Comm_spawn_multiple

#define Internal_XMPI_Comm_split NQJ_Comm_split

#define Internal_XMPI_Comm_test_inter NQJ_Comm_test_inter

#define Internal_XMPI_Dims_create NQJ_Dims_create

#define Internal_XMPI_Dist_graph_create NQJ_Dist_graph_create

#define Internal_XMPI_Dist_graph_create_adjacent NQJ_Dist_graph_create_adjacent

#define Internal_XMPI_Dist_graph_neighbors NQJ_Dist_graph_neighbors

#define Internal_XMPI_Dist_graph_neighbors_count NQJ_Dist_graph_neighbors_count

#define Internal_XMPI_Errhandler_create NQJ_Errhandler_create

#define Internal_XMPI_Errhandler_free NQJ_Errhandler_free

#define Internal_XMPI_Errhandler_get NQJ_Errhandler_get

#define Internal_XMPI_Errhandler_set NQJ_Errhandler_set

#define Internal_XMPI_Error_class NQJ_Error_class

#define Internal_XMPI_Error_string NQJ_Error_string

#define Internal_XMPI_Exscan NQJ_Exscan

#define Internal_XMPI_File_call_errhandler NQJ_File_call_errhandler

#define Internal_XMPI_File_close NQJ_File_close

#define Internal_XMPI_File_create_errhandler NQJ_File_create_errhandler

#define Internal_XMPI_File_delete NQJ_File_delete

#define Internal_XMPI_File_get_amode NQJ_File_get_amode

#define Internal_XMPI_File_get_atomicity NQJ_File_get_atomicity

#define Internal_XMPI_File_get_byte_offset NQJ_File_get_byte_offset

#define Internal_XMPI_File_get_errhandler NQJ_File_get_errhandler

#define Internal_XMPI_File_get_group NQJ_File_get_group

#define Internal_XMPI_File_get_info NQJ_File_get_info

#define Internal_XMPI_File_get_position NQJ_File_get_position

#define Internal_XMPI_File_get_position_shared NQJ_File_get_position_shared

#define Internal_XMPI_File_get_size NQJ_File_get_size

#define Internal_XMPI_File_get_type_extent NQJ_File_get_type_extent

#define Internal_XMPI_File_get_view NQJ_File_get_view

#define Internal_XMPI_File_iread NQJ_File_iread

#define Internal_XMPI_File_iread_at NQJ_File_iread_at

#define Internal_XMPI_File_iread_shared NQJ_File_iread_shared

#define Internal_XMPI_File_iwrite NQJ_File_iwrite

#define Internal_XMPI_File_iwrite_at NQJ_File_iwrite_at

#define Internal_XMPI_File_iwrite_shared NQJ_File_iwrite_shared

#define Internal_XMPI_File_open NQJ_File_open

#define Internal_XMPI_File_preallocate NQJ_File_preallocate

#define Internal_XMPI_File_read NQJ_File_read

#define Internal_XMPI_File_read_all NQJ_File_read_all

#define Internal_XMPI_File_read_all_begin NQJ_File_read_all_begin

#define Internal_XMPI_File_read_all_end NQJ_File_read_all_end

#define Internal_XMPI_File_read_at NQJ_File_read_at

#define Internal_XMPI_File_read_at_all NQJ_File_read_at_all

#define Internal_XMPI_File_read_at_all_begin NQJ_File_read_at_all_begin

#define Internal_XMPI_File_read_at_all_end NQJ_File_read_at_all_end

#define Internal_XMPI_File_read_ordered NQJ_File_read_ordered

#define Internal_XMPI_File_read_ordered_begin NQJ_File_read_ordered_begin

#define Internal_XMPI_File_read_ordered_end NQJ_File_read_ordered_end

#define Internal_XMPI_File_read_shared NQJ_File_read_shared

#define Internal_XMPI_File_seek NQJ_File_seek

#define Internal_XMPI_File_seek_shared NQJ_File_seek_shared

#define Internal_XMPI_File_set_atomicity NQJ_File_set_atomicity

#define Internal_XMPI_File_set_errhandler NQJ_File_set_errhandler

#define Internal_XMPI_File_set_info NQJ_File_set_info

#define Internal_XMPI_File_set_size NQJ_File_set_size

#define Internal_XMPI_File_set_view NQJ_File_set_view

#define Internal_XMPI_File_sync NQJ_File_sync

#define Internal_XMPI_File_write NQJ_File_write

#define Internal_XMPI_File_write_all NQJ_File_write_all

#define Internal_XMPI_File_write_all_begin NQJ_File_write_all_begin

#define Internal_XMPI_File_write_all_end NQJ_File_write_all_end

#define Internal_XMPI_File_write_at NQJ_File_write_at

#define Internal_XMPI_File_write_at_all NQJ_File_write_at_all

#define Internal_XMPI_File_write_at_all_begin NQJ_File_write_at_all_begin

#define Internal_XMPI_File_write_at_all_end NQJ_File_write_at_all_end

#define Internal_XMPI_File_write_ordered NQJ_File_write_ordered

#define Internal_XMPI_File_write_ordered_begin NQJ_File_write_ordered_begin

#define Internal_XMPI_File_write_ordered_end NQJ_File_write_ordered_end

#define Internal_XMPI_File_write_shared NQJ_File_write_shared

#define Internal_XMPI_Finalize NQJ_Finalize

#define Internal_XMPI_Finalized NQJ_Finalized

#define Internal_XMPI_Free_mem NQJ_Free_mem

#define Internal_XMPI_Gather NQJ_Gather

#define Internal_XMPI_Gatherv NQJ_Gatherv

#define Internal_XMPI_Get NQJ_Get

#define Internal_XMPI_Get_address NQJ_Get_address

#define Internal_XMPI_Get_count NQJ_Get_count

#define Internal_XMPI_Get_elements NQJ_Get_elements

#define Internal_XMPI_Get_processor_name NQJ_Get_processor_name

#define Internal_XMPI_Get_version NQJ_Get_version

#define Internal_XMPI_Graph_create NQJ_Graph_create

#define Internal_XMPI_Graphdims_get NQJ_Graphdims_get

#define Internal_XMPI_Graph_get NQJ_Graph_get

#define Internal_XMPI_Graph_map NQJ_Graph_map

#define Internal_XMPI_Graph_neighbors NQJ_Graph_neighbors

#define Internal_XMPI_Graph_neighbors_count NQJ_Graph_neighbors_count

#define Internal_XMPI_Grequest_complete NQJ_Grequest_complete

#define Internal_XMPI_Grequest_start NQJ_Grequest_start

#define Internal_XMPI_Group_compare NQJ_Group_compare

#define Internal_XMPI_Group_difference NQJ_Group_difference

#define Internal_XMPI_Group_excl NQJ_Group_excl

#define Internal_XMPI_Group_free NQJ_Group_free

#define Internal_XMPI_Group_incl NQJ_Group_incl

#define Internal_XMPI_Group_intersection NQJ_Group_intersection

#define Internal_XMPI_Group_range_excl NQJ_Group_range_excl

#define Internal_XMPI_Group_range_incl NQJ_Group_range_incl

#define Internal_XMPI_Group_rank NQJ_Group_rank

#define Internal_XMPI_Group_size NQJ_Group_size

#define Internal_XMPI_Group_translate_ranks NQJ_Group_translate_ranks

#define Internal_XMPI_Group_union NQJ_Group_union

#define Internal_XMPI_Ibsend NQJ_Ibsend

#define Internal_XMPI_Info_create NQJ_Info_create

#define Internal_XMPI_Info_delete NQJ_Info_delete

#define Internal_XMPI_Info_dup NQJ_Info_dup

#define Internal_XMPI_Info_free NQJ_Info_free

#define Internal_XMPI_Info_get NQJ_Info_get

#define Internal_XMPI_Info_get_nkeys NQJ_Info_get_nkeys

#define Internal_XMPI_Info_get_nthkey NQJ_Info_get_nthkey

#define Internal_XMPI_Info_get_valuelen NQJ_Info_get_valuelen

#define Internal_XMPI_Info_set NQJ_Info_set

#define Internal_XMPI_Init NQJ_Init

#define Internal_XMPI_Initialized NQJ_Initialized

#define Internal_XMPI_Init_thread NQJ_Init_thread

#define Internal_XMPI_Intercomm_create NQJ_Intercomm_create

#define Internal_XMPI_Intercomm_merge NQJ_Intercomm_merge

#define Internal_XMPI_Iprobe NQJ_Iprobe

#define Internal_XMPI_Irecv NQJ_Irecv

#define Internal_XMPI_Irsend NQJ_Irsend

#define Internal_XMPI_Isend NQJ_Isend

#define Internal_XMPI_Issend NQJ_Issend

#define Internal_XMPI_Is_thread_main NQJ_Is_thread_main

#define Internal_XMPI_Keyval_create NQJ_Keyval_create

#define Internal_XMPI_Keyval_free NQJ_Keyval_free

#define Internal_XMPI_Lookup_name NQJ_Lookup_name

#define Internal_XMPI_Op_commutative NQJ_Op_commutative

#define Internal_XMPI_Op_create NQJ_Op_create

#define Internal_XMPI_Open_port NQJ_Open_port

#define Internal_XMPI_Op_free NQJ_Op_free

#define Internal_XMPI_Pack NQJ_Pack

#define Internal_XMPI_Pack_external NQJ_Pack_external

#define Internal_XMPI_Pack_external_size NQJ_Pack_external_size

#define Internal_XMPI_Pack_size NQJ_Pack_size

#define Internal_XMPI_Probe NQJ_Probe

#define Internal_XMPI_Publish_name NQJ_Publish_name

#define Internal_XMPI_Put NQJ_Put

#define Internal_XMPI_Query_thread NQJ_Query_thread

#define Internal_XMPI_Recv NQJ_Recv

#define Internal_XMPI_Recv_init NQJ_Recv_init

#define Internal_XMPI_Reduce NQJ_Reduce

#define Internal_XMPI_Reduce_local NQJ_Reduce_local

#define Internal_XMPI_Reduce_scatter NQJ_Reduce_scatter

#define Internal_XMPI_Reduce_scatter_block NQJ_Reduce_scatter_block

#define Internal_XMPI_Register_datarep NQJ_Register_datarep

#define Internal_XMPI_Request_free NQJ_Request_free

#define Internal_XMPI_Request_get_status NQJ_Request_get_status

#define Internal_XMPI_Rsend NQJ_Rsend

#define Internal_XMPI_Rsend_init NQJ_Rsend_init

#define Internal_XMPI_Scan NQJ_Scan

#define Internal_XMPI_Scatter NQJ_Scatter

#define Internal_XMPI_Scatterv NQJ_Scatterv

#define Internal_XMPI_Send NQJ_Send

#define Internal_XMPI_Send_init NQJ_Send_init

#define Internal_XMPI_Sendrecv NQJ_Sendrecv

#define Internal_XMPI_Sendrecv_replace NQJ_Sendrecv_replace

#define Internal_XMPI_Ssend NQJ_Ssend

#define Internal_XMPI_Ssend_init NQJ_Ssend_init

#define Internal_XMPI_Start NQJ_Start

#define Internal_XMPI_Startall NQJ_Startall

#define Internal_XMPI_Status_set_cancelled NQJ_Status_set_cancelled

#define Internal_XMPI_Status_set_elements NQJ_Status_set_elements

#define Internal_XMPI_Test NQJ_Test

#define Internal_XMPI_Testall NQJ_Testall

#define Internal_XMPI_Testany NQJ_Testany

#define Internal_XMPI_Test_cancelled NQJ_Test_cancelled

#define Internal_XMPI_Testsome NQJ_Testsome

#define Internal_XMPI_Topo_test NQJ_Topo_test

#define Internal_XMPI_Type_commit NQJ_Type_commit

#define Internal_XMPI_Type_contiguous NQJ_Type_contiguous

#define Internal_XMPI_Type_create_darray NQJ_Type_create_darray

#define Internal_XMPI_Type_create_f90_complex NQJ_Type_create_f90_complex

#define Internal_XMPI_Type_create_f90_integer NQJ_Type_create_f90_integer

#define Internal_XMPI_Type_create_f90_real NQJ_Type_create_f90_real

#define Internal_XMPI_Type_create_hindexed NQJ_Type_create_hindexed

#define Internal_XMPI_Type_create_hvector NQJ_Type_create_hvector

#define Internal_XMPI_Type_create_indexed_block NQJ_Type_create_indexed_block

#define Internal_XMPI_Type_create_keyval NQJ_Type_create_keyval

#define Internal_XMPI_Type_create_resized NQJ_Type_create_resized

#define Internal_XMPI_Type_create_struct NQJ_Type_create_struct

#define Internal_XMPI_Type_create_subarray NQJ_Type_create_subarray

#define Internal_XMPI_Type_delete_attr NQJ_Type_delete_attr

#define Internal_XMPI_Type_dup NQJ_Type_dup

#define Internal_XMPI_Type_extent NQJ_Type_extent

#define Internal_XMPI_Type_free NQJ_Type_free

#define Internal_XMPI_Type_free_keyval NQJ_Type_free_keyval

#define Internal_XMPI_Type_get_attr NQJ_Type_get_attr

#define Internal_XMPI_Type_get_contents NQJ_Type_get_contents

#define Internal_XMPI_Type_get_envelope NQJ_Type_get_envelope

#define Internal_XMPI_Type_get_extent NQJ_Type_get_extent

#define Internal_XMPI_Type_get_name NQJ_Type_get_name

#define Internal_XMPI_Type_get_true_extent NQJ_Type_get_true_extent

#define Internal_XMPI_Type_hindexed NQJ_Type_hindexed

#define Internal_XMPI_Type_hvector NQJ_Type_hvector

#define Internal_XMPI_Type_indexed NQJ_Type_indexed

#define Internal_XMPI_Type_lb NQJ_Type_lb

#define Internal_XMPI_Type_match_size NQJ_Type_match_size

#define Internal_XMPI_Type_set_attr NQJ_Type_set_attr

#define Internal_XMPI_Type_set_name NQJ_Type_set_name

#define Internal_XMPI_Type_size NQJ_Type_size

#define Internal_XMPI_Type_struct NQJ_Type_struct

#define Internal_XMPI_Type_ub NQJ_Type_ub

#define Internal_XMPI_Type_vector NQJ_Type_vector

#define Internal_XMPI_Unpack NQJ_Unpack

#define Internal_XMPI_Unpack_external NQJ_Unpack_external

#define Internal_XMPI_Unpublish_name NQJ_Unpublish_name

#define Internal_XMPI_Wait NQJ_Wait

#define Internal_XMPI_Waitall NQJ_Waitall

#define Internal_XMPI_Waitany NQJ_Waitany

#define Internal_XMPI_Waitsome NQJ_Waitsome

#define Internal_XMPI_Win_call_errhandler NQJ_Win_call_errhandler

#define Internal_XMPI_Win_complete NQJ_Win_complete

#define Internal_XMPI_Win_create NQJ_Win_create

#define Internal_XMPI_Win_create_errhandler NQJ_Win_create_errhandler

#define Internal_XMPI_Win_create_keyval NQJ_Win_create_keyval

#define Internal_XMPI_Win_delete_attr NQJ_Win_delete_attr

#define Internal_XMPI_Win_fence NQJ_Win_fence

#define Internal_XMPI_Win_free NQJ_Win_free

#define Internal_XMPI_Win_free_keyval NQJ_Win_free_keyval

#define Internal_XMPI_Win_get_attr NQJ_Win_get_attr

#define Internal_XMPI_Win_get_errhandler NQJ_Win_get_errhandler

#define Internal_XMPI_Win_get_group NQJ_Win_get_group

#define Internal_XMPI_Win_get_name NQJ_Win_get_name

#define Internal_XMPI_Win_lock NQJ_Win_lock

#define Internal_XMPI_Win_post NQJ_Win_post

#define Internal_XMPI_Win_set_attr NQJ_Win_set_attr

#define Internal_XMPI_Win_set_errhandler NQJ_Win_set_errhandler

#define Internal_XMPI_Win_set_name NQJ_Win_set_name

#define Internal_XMPI_Win_start NQJ_Win_start

#define Internal_XMPI_Win_test NQJ_Win_test

#define Internal_XMPI_Win_unlock NQJ_Win_unlock

#define Internal_XMPI_Win_wait NQJ_Win_wait

#define Internal_XMPI_Wtick NQJ_Wtick

#define Internal_XMPI_Wtime NQJ_Wtime



typedef int (*pnmpi_int_MPI_Abort_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Accumulate_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8);
typedef int (*pnmpi_int_MPI_Add_error_class_t)(int * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Add_error_code_t)(int _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Add_error_string_t)(int _pnmpi_arg_0, char * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Address_t)(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Allgather_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Allgatherv_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);
typedef int (*pnmpi_int_MPI_Alloc_mem_t)(MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr);
typedef int (*pnmpi_int_MPI_Allreduce_t)(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Alltoall_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Alltoallv_t)(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);
typedef int (*pnmpi_int_MPI_Alltoallw_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8);
typedef int (*pnmpi_int_MPI_Attr_delete_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Attr_get_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Attr_put_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Barrier_t)(MPI_Comm _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Bcast_t)(void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Bsend_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Bsend_init_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Buffer_attach_t)(void * buffer, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Buffer_detach_t)(void * buffer, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Cancel_t)(MPI_Request * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Cart_coords_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Cart_create_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Cartdim_get_t)(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Cart_get_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Cart_map_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Cart_rank_t)(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Cart_shift_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Cart_sub_t)(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Close_port_t)(char * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Comm_accept_t)(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Comm_call_errhandler_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_compare_t)(MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Comm_connect_t)(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Comm_create_t)(MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Comm_create_errhandler_t)(MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_create_keyval_t)(MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Comm_delete_attr_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_disconnect_t)(MPI_Comm * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Comm_dup_t)(MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_free_t)(MPI_Comm * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Comm_free_keyval_t)(int * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Comm_get_attr_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Comm_get_errhandler_t)(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_get_name_t)(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Comm_get_parent_t)(MPI_Comm * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Comm_group_t)(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_join_t)(int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_rank_t)(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_remote_group_t)(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_remote_size_t)(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_set_attr_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Comm_set_errhandler_t)(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_set_name_t)(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_size_t)(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Comm_spawn_t)(char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[]);
typedef int (*pnmpi_int_MPI_Comm_spawn_multiple_t)(int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[]);
typedef int (*pnmpi_int_MPI_Comm_split_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Comm_test_inter_t)(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Dims_create_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Dist_graph_create_t)(MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph);
typedef int (*pnmpi_int_MPI_Dist_graph_create_adjacent_t)(MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph);
typedef int (*pnmpi_int_MPI_Dist_graph_neighbors_t)(MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[]);
typedef int (*pnmpi_int_MPI_Dist_graph_neighbors_count_t)(MPI_Comm comm, int * indegree, int * outdegree, int * weighted);
typedef int (*pnmpi_int_MPI_Errhandler_create_t)(MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Errhandler_free_t)(MPI_Errhandler * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Errhandler_get_t)(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Errhandler_set_t)(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Error_class_t)(int _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Error_string_t)(int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Exscan_t)(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_File_call_errhandler_t)(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_close_t)(MPI_File * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_File_create_errhandler_t)(MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_delete_t)(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_get_amode_t)(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_get_atomicity_t)(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_get_byte_offset_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_File_get_errhandler_t)(MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_get_group_t)(MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_get_info_t)(MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_get_position_t)(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_get_position_shared_t)(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_get_size_t)(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_get_type_extent_t)(MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_File_get_view_t)(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_iread_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_iread_at_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_File_iread_shared_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_iwrite_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_iwrite_at_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_File_iwrite_shared_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_open_t)(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_preallocate_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_read_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_read_all_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_read_all_begin_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_File_read_all_end_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_File_read_at_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_File_read_at_all_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_File_read_at_all_begin_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_read_at_all_end_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_File_read_ordered_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_read_ordered_begin_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_File_read_ordered_end_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_File_read_shared_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_seek_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_File_seek_shared_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_File_set_atomicity_t)(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_set_errhandler_t)(MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_set_info_t)(MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_set_size_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_File_set_view_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_File_sync_t)(MPI_File _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_File_write_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_write_all_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_write_all_begin_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_File_write_all_end_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_File_write_at_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_File_write_at_all_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_File_write_at_all_begin_t)(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_write_at_all_end_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_File_write_ordered_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_File_write_ordered_begin_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_File_write_ordered_end_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_File_write_shared_t)(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Finalize_t)();
typedef int (*pnmpi_int_MPI_Finalized_t)(int * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Free_mem_t)(void * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Gather_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);
typedef int (*pnmpi_int_MPI_Gatherv_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);
typedef int (*pnmpi_int_MPI_Get_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);
typedef int (*pnmpi_int_MPI_Get_address_t)(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Get_count_t)(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Get_elements_t)(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Get_processor_name_t)(char * _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Get_version_t)(int * _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Graph_create_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Graphdims_get_t)(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Graph_get_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Graph_map_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Graph_neighbors_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Graph_neighbors_count_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Grequest_complete_t)(MPI_Request _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Grequest_start_t)(MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Group_compare_t)(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Group_difference_t)(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Group_excl_t)(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Group_free_t)(MPI_Group * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Group_incl_t)(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Group_intersection_t)(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Group_range_excl_t)(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Group_range_incl_t)(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Group_rank_t)(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Group_size_t)(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Group_translate_ranks_t)(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Group_union_t)(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Ibsend_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Info_create_t)(MPI_Info * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Info_delete_t)(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Info_dup_t)(MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Info_free_t)(MPI_Info * info);
typedef int (*pnmpi_int_MPI_Info_get_t)(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Info_get_nkeys_t)(MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Info_get_nthkey_t)(MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Info_get_valuelen_t)(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Info_set_t)(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Init_t)(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Initialized_t)(int * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Init_thread_t)(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Intercomm_create_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Intercomm_merge_t)(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Iprobe_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Irecv_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Irsend_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Isend_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Issend_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Is_thread_main_t)(int * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Keyval_create_t)(MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Keyval_free_t)(int * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Lookup_name_t)(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Op_commutative_t)(MPI_Op op, int * commute);
typedef int (*pnmpi_int_MPI_Op_create_t)(MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Open_port_t)(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Op_free_t)(MPI_Op * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Pack_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Pack_external_t)(char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Pack_external_size_t)(char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Pack_size_t)(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Probe_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Publish_name_t)(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Put_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);
typedef int (*pnmpi_int_MPI_Query_thread_t)(int * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Recv_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Recv_init_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Reduce_t)(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Reduce_local_t)(void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op);
typedef int (*pnmpi_int_MPI_Reduce_scatter_t)(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Reduce_scatter_block_t)(void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
typedef int (*pnmpi_int_MPI_Register_datarep_t)(char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Request_free_t)(MPI_Request * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Request_get_status_t)(MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Rsend_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Rsend_init_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Scan_t)(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Scatter_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);
typedef int (*pnmpi_int_MPI_Scatterv_t)(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);
typedef int (*pnmpi_int_MPI_Send_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Send_init_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Sendrecv_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11);
typedef int (*pnmpi_int_MPI_Sendrecv_replace_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8);
typedef int (*pnmpi_int_MPI_Ssend_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Ssend_init_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Start_t)(MPI_Request * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Startall_t)(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Status_set_cancelled_t)(MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Status_set_elements_t)(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Test_t)(MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Testall_t)(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Testany_t)(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Test_cancelled_t)(MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Testsome_t)(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Topo_test_t)(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Type_commit_t)(MPI_Datatype * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Type_contiguous_t)(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Type_create_darray_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9);
typedef int (*pnmpi_int_MPI_Type_create_f90_complex_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Type_create_f90_integer_t)(int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Type_create_f90_real_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Type_create_hindexed_t)(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Type_create_hvector_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Type_create_indexed_block_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Type_create_keyval_t)(MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Type_create_resized_t)(MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Type_create_struct_t)(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Type_create_subarray_t)(int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Type_delete_attr_t)(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Type_dup_t)(MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Type_extent_t)(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Type_free_t)(MPI_Datatype * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Type_free_keyval_t)(int * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Type_get_attr_t)(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Type_get_contents_t)(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[]);
typedef int (*pnmpi_int_MPI_Type_get_envelope_t)(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Type_get_extent_t)(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Type_get_name_t)(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Type_get_true_extent_t)(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Type_hindexed_t)(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Type_hvector_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Type_indexed_t)(int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Type_lb_t)(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Type_match_size_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Type_set_attr_t)(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Type_set_name_t)(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Type_size_t)(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Type_struct_t)(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Type_ub_t)(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Type_vector_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Unpack_t)(void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Unpack_external_t)(char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6);
typedef int (*pnmpi_int_MPI_Unpublish_name_t)(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Wait_t)(MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Waitall_t)(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Waitany_t)(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Waitsome_t)(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);
typedef int (*pnmpi_int_MPI_Win_call_errhandler_t)(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Win_complete_t)(MPI_Win _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Win_create_t)(void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5);
typedef int (*pnmpi_int_MPI_Win_create_errhandler_t)(MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Win_create_keyval_t)(MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Win_delete_attr_t)(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Win_fence_t)(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Win_free_t)(MPI_Win * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Win_free_keyval_t)(int * _pnmpi_arg_0);
typedef int (*pnmpi_int_MPI_Win_get_attr_t)(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Win_get_errhandler_t)(MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Win_get_group_t)(MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Win_get_name_t)(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Win_lock_t)(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3);
typedef int (*pnmpi_int_MPI_Win_post_t)(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Win_set_attr_t)(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Win_set_errhandler_t)(MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Win_set_name_t)(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Win_start_t)(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);
typedef int (*pnmpi_int_MPI_Win_test_t)(MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Win_unlock_t)(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);
typedef int (*pnmpi_int_MPI_Win_wait_t)(MPI_Win _pnmpi_arg_0);
typedef double (*pnmpi_int_MPI_Wtick_t)();
typedef double (*pnmpi_int_MPI_Wtime_t)();

typedef struct pnmpi_functions_d
{
  pnmpi_int_MPI_Pcontrol_t *pnmpi_int_MPI_Pcontrol;
  pnmpi_int_MPI_Abort_t *pnmpi_int_MPI_Abort;
  pnmpi_int_MPI_Accumulate_t *pnmpi_int_MPI_Accumulate;
  pnmpi_int_MPI_Add_error_class_t *pnmpi_int_MPI_Add_error_class;
  pnmpi_int_MPI_Add_error_code_t *pnmpi_int_MPI_Add_error_code;
  pnmpi_int_MPI_Add_error_string_t *pnmpi_int_MPI_Add_error_string;
  pnmpi_int_MPI_Address_t *pnmpi_int_MPI_Address;
  pnmpi_int_MPI_Allgather_t *pnmpi_int_MPI_Allgather;
  pnmpi_int_MPI_Allgatherv_t *pnmpi_int_MPI_Allgatherv;
  pnmpi_int_MPI_Alloc_mem_t *pnmpi_int_MPI_Alloc_mem;
  pnmpi_int_MPI_Allreduce_t *pnmpi_int_MPI_Allreduce;
  pnmpi_int_MPI_Alltoall_t *pnmpi_int_MPI_Alltoall;
  pnmpi_int_MPI_Alltoallv_t *pnmpi_int_MPI_Alltoallv;
  pnmpi_int_MPI_Alltoallw_t *pnmpi_int_MPI_Alltoallw;
  pnmpi_int_MPI_Attr_delete_t *pnmpi_int_MPI_Attr_delete;
  pnmpi_int_MPI_Attr_get_t *pnmpi_int_MPI_Attr_get;
  pnmpi_int_MPI_Attr_put_t *pnmpi_int_MPI_Attr_put;
  pnmpi_int_MPI_Barrier_t *pnmpi_int_MPI_Barrier;
  pnmpi_int_MPI_Bcast_t *pnmpi_int_MPI_Bcast;
  pnmpi_int_MPI_Bsend_t *pnmpi_int_MPI_Bsend;
  pnmpi_int_MPI_Bsend_init_t *pnmpi_int_MPI_Bsend_init;
  pnmpi_int_MPI_Buffer_attach_t *pnmpi_int_MPI_Buffer_attach;
  pnmpi_int_MPI_Buffer_detach_t *pnmpi_int_MPI_Buffer_detach;
  pnmpi_int_MPI_Cancel_t *pnmpi_int_MPI_Cancel;
  pnmpi_int_MPI_Cart_coords_t *pnmpi_int_MPI_Cart_coords;
  pnmpi_int_MPI_Cart_create_t *pnmpi_int_MPI_Cart_create;
  pnmpi_int_MPI_Cartdim_get_t *pnmpi_int_MPI_Cartdim_get;
  pnmpi_int_MPI_Cart_get_t *pnmpi_int_MPI_Cart_get;
  pnmpi_int_MPI_Cart_map_t *pnmpi_int_MPI_Cart_map;
  pnmpi_int_MPI_Cart_rank_t *pnmpi_int_MPI_Cart_rank;
  pnmpi_int_MPI_Cart_shift_t *pnmpi_int_MPI_Cart_shift;
  pnmpi_int_MPI_Cart_sub_t *pnmpi_int_MPI_Cart_sub;
  pnmpi_int_MPI_Close_port_t *pnmpi_int_MPI_Close_port;
  pnmpi_int_MPI_Comm_accept_t *pnmpi_int_MPI_Comm_accept;
  pnmpi_int_MPI_Comm_call_errhandler_t *pnmpi_int_MPI_Comm_call_errhandler;
  pnmpi_int_MPI_Comm_compare_t *pnmpi_int_MPI_Comm_compare;
  pnmpi_int_MPI_Comm_connect_t *pnmpi_int_MPI_Comm_connect;
  pnmpi_int_MPI_Comm_create_t *pnmpi_int_MPI_Comm_create;
  pnmpi_int_MPI_Comm_create_errhandler_t *pnmpi_int_MPI_Comm_create_errhandler;
  pnmpi_int_MPI_Comm_create_keyval_t *pnmpi_int_MPI_Comm_create_keyval;
  pnmpi_int_MPI_Comm_delete_attr_t *pnmpi_int_MPI_Comm_delete_attr;
  pnmpi_int_MPI_Comm_disconnect_t *pnmpi_int_MPI_Comm_disconnect;
  pnmpi_int_MPI_Comm_dup_t *pnmpi_int_MPI_Comm_dup;
  pnmpi_int_MPI_Comm_free_t *pnmpi_int_MPI_Comm_free;
  pnmpi_int_MPI_Comm_free_keyval_t *pnmpi_int_MPI_Comm_free_keyval;
  pnmpi_int_MPI_Comm_get_attr_t *pnmpi_int_MPI_Comm_get_attr;
  pnmpi_int_MPI_Comm_get_errhandler_t *pnmpi_int_MPI_Comm_get_errhandler;
  pnmpi_int_MPI_Comm_get_name_t *pnmpi_int_MPI_Comm_get_name;
  pnmpi_int_MPI_Comm_get_parent_t *pnmpi_int_MPI_Comm_get_parent;
  pnmpi_int_MPI_Comm_group_t *pnmpi_int_MPI_Comm_group;
  pnmpi_int_MPI_Comm_join_t *pnmpi_int_MPI_Comm_join;
  pnmpi_int_MPI_Comm_rank_t *pnmpi_int_MPI_Comm_rank;
  pnmpi_int_MPI_Comm_remote_group_t *pnmpi_int_MPI_Comm_remote_group;
  pnmpi_int_MPI_Comm_remote_size_t *pnmpi_int_MPI_Comm_remote_size;
  pnmpi_int_MPI_Comm_set_attr_t *pnmpi_int_MPI_Comm_set_attr;
  pnmpi_int_MPI_Comm_set_errhandler_t *pnmpi_int_MPI_Comm_set_errhandler;
  pnmpi_int_MPI_Comm_set_name_t *pnmpi_int_MPI_Comm_set_name;
  pnmpi_int_MPI_Comm_size_t *pnmpi_int_MPI_Comm_size;
  pnmpi_int_MPI_Comm_spawn_t *pnmpi_int_MPI_Comm_spawn;
  pnmpi_int_MPI_Comm_spawn_multiple_t *pnmpi_int_MPI_Comm_spawn_multiple;
  pnmpi_int_MPI_Comm_split_t *pnmpi_int_MPI_Comm_split;
  pnmpi_int_MPI_Comm_test_inter_t *pnmpi_int_MPI_Comm_test_inter;
  pnmpi_int_MPI_Dims_create_t *pnmpi_int_MPI_Dims_create;
  pnmpi_int_MPI_Dist_graph_create_t *pnmpi_int_MPI_Dist_graph_create;
  pnmpi_int_MPI_Dist_graph_create_adjacent_t *pnmpi_int_MPI_Dist_graph_create_adjacent;
  pnmpi_int_MPI_Dist_graph_neighbors_t *pnmpi_int_MPI_Dist_graph_neighbors;
  pnmpi_int_MPI_Dist_graph_neighbors_count_t *pnmpi_int_MPI_Dist_graph_neighbors_count;
  pnmpi_int_MPI_Errhandler_create_t *pnmpi_int_MPI_Errhandler_create;
  pnmpi_int_MPI_Errhandler_free_t *pnmpi_int_MPI_Errhandler_free;
  pnmpi_int_MPI_Errhandler_get_t *pnmpi_int_MPI_Errhandler_get;
  pnmpi_int_MPI_Errhandler_set_t *pnmpi_int_MPI_Errhandler_set;
  pnmpi_int_MPI_Error_class_t *pnmpi_int_MPI_Error_class;
  pnmpi_int_MPI_Error_string_t *pnmpi_int_MPI_Error_string;
  pnmpi_int_MPI_Exscan_t *pnmpi_int_MPI_Exscan;
  pnmpi_int_MPI_File_call_errhandler_t *pnmpi_int_MPI_File_call_errhandler;
  pnmpi_int_MPI_File_close_t *pnmpi_int_MPI_File_close;
  pnmpi_int_MPI_File_create_errhandler_t *pnmpi_int_MPI_File_create_errhandler;
  pnmpi_int_MPI_File_delete_t *pnmpi_int_MPI_File_delete;
  pnmpi_int_MPI_File_get_amode_t *pnmpi_int_MPI_File_get_amode;
  pnmpi_int_MPI_File_get_atomicity_t *pnmpi_int_MPI_File_get_atomicity;
  pnmpi_int_MPI_File_get_byte_offset_t *pnmpi_int_MPI_File_get_byte_offset;
  pnmpi_int_MPI_File_get_errhandler_t *pnmpi_int_MPI_File_get_errhandler;
  pnmpi_int_MPI_File_get_group_t *pnmpi_int_MPI_File_get_group;
  pnmpi_int_MPI_File_get_info_t *pnmpi_int_MPI_File_get_info;
  pnmpi_int_MPI_File_get_position_t *pnmpi_int_MPI_File_get_position;
  pnmpi_int_MPI_File_get_position_shared_t *pnmpi_int_MPI_File_get_position_shared;
  pnmpi_int_MPI_File_get_size_t *pnmpi_int_MPI_File_get_size;
  pnmpi_int_MPI_File_get_type_extent_t *pnmpi_int_MPI_File_get_type_extent;
  pnmpi_int_MPI_File_get_view_t *pnmpi_int_MPI_File_get_view;
  pnmpi_int_MPI_File_iread_t *pnmpi_int_MPI_File_iread;
  pnmpi_int_MPI_File_iread_at_t *pnmpi_int_MPI_File_iread_at;
  pnmpi_int_MPI_File_iread_shared_t *pnmpi_int_MPI_File_iread_shared;
  pnmpi_int_MPI_File_iwrite_t *pnmpi_int_MPI_File_iwrite;
  pnmpi_int_MPI_File_iwrite_at_t *pnmpi_int_MPI_File_iwrite_at;
  pnmpi_int_MPI_File_iwrite_shared_t *pnmpi_int_MPI_File_iwrite_shared;
  pnmpi_int_MPI_File_open_t *pnmpi_int_MPI_File_open;
  pnmpi_int_MPI_File_preallocate_t *pnmpi_int_MPI_File_preallocate;
  pnmpi_int_MPI_File_read_t *pnmpi_int_MPI_File_read;
  pnmpi_int_MPI_File_read_all_t *pnmpi_int_MPI_File_read_all;
  pnmpi_int_MPI_File_read_all_begin_t *pnmpi_int_MPI_File_read_all_begin;
  pnmpi_int_MPI_File_read_all_end_t *pnmpi_int_MPI_File_read_all_end;
  pnmpi_int_MPI_File_read_at_t *pnmpi_int_MPI_File_read_at;
  pnmpi_int_MPI_File_read_at_all_t *pnmpi_int_MPI_File_read_at_all;
  pnmpi_int_MPI_File_read_at_all_begin_t *pnmpi_int_MPI_File_read_at_all_begin;
  pnmpi_int_MPI_File_read_at_all_end_t *pnmpi_int_MPI_File_read_at_all_end;
  pnmpi_int_MPI_File_read_ordered_t *pnmpi_int_MPI_File_read_ordered;
  pnmpi_int_MPI_File_read_ordered_begin_t *pnmpi_int_MPI_File_read_ordered_begin;
  pnmpi_int_MPI_File_read_ordered_end_t *pnmpi_int_MPI_File_read_ordered_end;
  pnmpi_int_MPI_File_read_shared_t *pnmpi_int_MPI_File_read_shared;
  pnmpi_int_MPI_File_seek_t *pnmpi_int_MPI_File_seek;
  pnmpi_int_MPI_File_seek_shared_t *pnmpi_int_MPI_File_seek_shared;
  pnmpi_int_MPI_File_set_atomicity_t *pnmpi_int_MPI_File_set_atomicity;
  pnmpi_int_MPI_File_set_errhandler_t *pnmpi_int_MPI_File_set_errhandler;
  pnmpi_int_MPI_File_set_info_t *pnmpi_int_MPI_File_set_info;
  pnmpi_int_MPI_File_set_size_t *pnmpi_int_MPI_File_set_size;
  pnmpi_int_MPI_File_set_view_t *pnmpi_int_MPI_File_set_view;
  pnmpi_int_MPI_File_sync_t *pnmpi_int_MPI_File_sync;
  pnmpi_int_MPI_File_write_t *pnmpi_int_MPI_File_write;
  pnmpi_int_MPI_File_write_all_t *pnmpi_int_MPI_File_write_all;
  pnmpi_int_MPI_File_write_all_begin_t *pnmpi_int_MPI_File_write_all_begin;
  pnmpi_int_MPI_File_write_all_end_t *pnmpi_int_MPI_File_write_all_end;
  pnmpi_int_MPI_File_write_at_t *pnmpi_int_MPI_File_write_at;
  pnmpi_int_MPI_File_write_at_all_t *pnmpi_int_MPI_File_write_at_all;
  pnmpi_int_MPI_File_write_at_all_begin_t *pnmpi_int_MPI_File_write_at_all_begin;
  pnmpi_int_MPI_File_write_at_all_end_t *pnmpi_int_MPI_File_write_at_all_end;
  pnmpi_int_MPI_File_write_ordered_t *pnmpi_int_MPI_File_write_ordered;
  pnmpi_int_MPI_File_write_ordered_begin_t *pnmpi_int_MPI_File_write_ordered_begin;
  pnmpi_int_MPI_File_write_ordered_end_t *pnmpi_int_MPI_File_write_ordered_end;
  pnmpi_int_MPI_File_write_shared_t *pnmpi_int_MPI_File_write_shared;
  pnmpi_int_MPI_Finalize_t *pnmpi_int_MPI_Finalize;
  pnmpi_int_MPI_Finalized_t *pnmpi_int_MPI_Finalized;
  pnmpi_int_MPI_Free_mem_t *pnmpi_int_MPI_Free_mem;
  pnmpi_int_MPI_Gather_t *pnmpi_int_MPI_Gather;
  pnmpi_int_MPI_Gatherv_t *pnmpi_int_MPI_Gatherv;
  pnmpi_int_MPI_Get_t *pnmpi_int_MPI_Get;
  pnmpi_int_MPI_Get_address_t *pnmpi_int_MPI_Get_address;
  pnmpi_int_MPI_Get_count_t *pnmpi_int_MPI_Get_count;
  pnmpi_int_MPI_Get_elements_t *pnmpi_int_MPI_Get_elements;
  pnmpi_int_MPI_Get_processor_name_t *pnmpi_int_MPI_Get_processor_name;
  pnmpi_int_MPI_Get_version_t *pnmpi_int_MPI_Get_version;
  pnmpi_int_MPI_Graph_create_t *pnmpi_int_MPI_Graph_create;
  pnmpi_int_MPI_Graphdims_get_t *pnmpi_int_MPI_Graphdims_get;
  pnmpi_int_MPI_Graph_get_t *pnmpi_int_MPI_Graph_get;
  pnmpi_int_MPI_Graph_map_t *pnmpi_int_MPI_Graph_map;
  pnmpi_int_MPI_Graph_neighbors_t *pnmpi_int_MPI_Graph_neighbors;
  pnmpi_int_MPI_Graph_neighbors_count_t *pnmpi_int_MPI_Graph_neighbors_count;
  pnmpi_int_MPI_Grequest_complete_t *pnmpi_int_MPI_Grequest_complete;
  pnmpi_int_MPI_Grequest_start_t *pnmpi_int_MPI_Grequest_start;
  pnmpi_int_MPI_Group_compare_t *pnmpi_int_MPI_Group_compare;
  pnmpi_int_MPI_Group_difference_t *pnmpi_int_MPI_Group_difference;
  pnmpi_int_MPI_Group_excl_t *pnmpi_int_MPI_Group_excl;
  pnmpi_int_MPI_Group_free_t *pnmpi_int_MPI_Group_free;
  pnmpi_int_MPI_Group_incl_t *pnmpi_int_MPI_Group_incl;
  pnmpi_int_MPI_Group_intersection_t *pnmpi_int_MPI_Group_intersection;
  pnmpi_int_MPI_Group_range_excl_t *pnmpi_int_MPI_Group_range_excl;
  pnmpi_int_MPI_Group_range_incl_t *pnmpi_int_MPI_Group_range_incl;
  pnmpi_int_MPI_Group_rank_t *pnmpi_int_MPI_Group_rank;
  pnmpi_int_MPI_Group_size_t *pnmpi_int_MPI_Group_size;
  pnmpi_int_MPI_Group_translate_ranks_t *pnmpi_int_MPI_Group_translate_ranks;
  pnmpi_int_MPI_Group_union_t *pnmpi_int_MPI_Group_union;
  pnmpi_int_MPI_Ibsend_t *pnmpi_int_MPI_Ibsend;
  pnmpi_int_MPI_Info_create_t *pnmpi_int_MPI_Info_create;
  pnmpi_int_MPI_Info_delete_t *pnmpi_int_MPI_Info_delete;
  pnmpi_int_MPI_Info_dup_t *pnmpi_int_MPI_Info_dup;
  pnmpi_int_MPI_Info_free_t *pnmpi_int_MPI_Info_free;
  pnmpi_int_MPI_Info_get_t *pnmpi_int_MPI_Info_get;
  pnmpi_int_MPI_Info_get_nkeys_t *pnmpi_int_MPI_Info_get_nkeys;
  pnmpi_int_MPI_Info_get_nthkey_t *pnmpi_int_MPI_Info_get_nthkey;
  pnmpi_int_MPI_Info_get_valuelen_t *pnmpi_int_MPI_Info_get_valuelen;
  pnmpi_int_MPI_Info_set_t *pnmpi_int_MPI_Info_set;
  pnmpi_int_MPI_Init_t *pnmpi_int_MPI_Init;
  pnmpi_int_MPI_Initialized_t *pnmpi_int_MPI_Initialized;
  pnmpi_int_MPI_Init_thread_t *pnmpi_int_MPI_Init_thread;
  pnmpi_int_MPI_Intercomm_create_t *pnmpi_int_MPI_Intercomm_create;
  pnmpi_int_MPI_Intercomm_merge_t *pnmpi_int_MPI_Intercomm_merge;
  pnmpi_int_MPI_Iprobe_t *pnmpi_int_MPI_Iprobe;
  pnmpi_int_MPI_Irecv_t *pnmpi_int_MPI_Irecv;
  pnmpi_int_MPI_Irsend_t *pnmpi_int_MPI_Irsend;
  pnmpi_int_MPI_Isend_t *pnmpi_int_MPI_Isend;
  pnmpi_int_MPI_Issend_t *pnmpi_int_MPI_Issend;
  pnmpi_int_MPI_Is_thread_main_t *pnmpi_int_MPI_Is_thread_main;
  pnmpi_int_MPI_Keyval_create_t *pnmpi_int_MPI_Keyval_create;
  pnmpi_int_MPI_Keyval_free_t *pnmpi_int_MPI_Keyval_free;
  pnmpi_int_MPI_Lookup_name_t *pnmpi_int_MPI_Lookup_name;
  pnmpi_int_MPI_Op_commutative_t *pnmpi_int_MPI_Op_commutative;
  pnmpi_int_MPI_Op_create_t *pnmpi_int_MPI_Op_create;
  pnmpi_int_MPI_Open_port_t *pnmpi_int_MPI_Open_port;
  pnmpi_int_MPI_Op_free_t *pnmpi_int_MPI_Op_free;
  pnmpi_int_MPI_Pack_t *pnmpi_int_MPI_Pack;
  pnmpi_int_MPI_Pack_external_t *pnmpi_int_MPI_Pack_external;
  pnmpi_int_MPI_Pack_external_size_t *pnmpi_int_MPI_Pack_external_size;
  pnmpi_int_MPI_Pack_size_t *pnmpi_int_MPI_Pack_size;
  pnmpi_int_MPI_Probe_t *pnmpi_int_MPI_Probe;
  pnmpi_int_MPI_Publish_name_t *pnmpi_int_MPI_Publish_name;
  pnmpi_int_MPI_Put_t *pnmpi_int_MPI_Put;
  pnmpi_int_MPI_Query_thread_t *pnmpi_int_MPI_Query_thread;
  pnmpi_int_MPI_Recv_t *pnmpi_int_MPI_Recv;
  pnmpi_int_MPI_Recv_init_t *pnmpi_int_MPI_Recv_init;
  pnmpi_int_MPI_Reduce_t *pnmpi_int_MPI_Reduce;
  pnmpi_int_MPI_Reduce_local_t *pnmpi_int_MPI_Reduce_local;
  pnmpi_int_MPI_Reduce_scatter_t *pnmpi_int_MPI_Reduce_scatter;
  pnmpi_int_MPI_Reduce_scatter_block_t *pnmpi_int_MPI_Reduce_scatter_block;
  pnmpi_int_MPI_Register_datarep_t *pnmpi_int_MPI_Register_datarep;
  pnmpi_int_MPI_Request_free_t *pnmpi_int_MPI_Request_free;
  pnmpi_int_MPI_Request_get_status_t *pnmpi_int_MPI_Request_get_status;
  pnmpi_int_MPI_Rsend_t *pnmpi_int_MPI_Rsend;
  pnmpi_int_MPI_Rsend_init_t *pnmpi_int_MPI_Rsend_init;
  pnmpi_int_MPI_Scan_t *pnmpi_int_MPI_Scan;
  pnmpi_int_MPI_Scatter_t *pnmpi_int_MPI_Scatter;
  pnmpi_int_MPI_Scatterv_t *pnmpi_int_MPI_Scatterv;
  pnmpi_int_MPI_Send_t *pnmpi_int_MPI_Send;
  pnmpi_int_MPI_Send_init_t *pnmpi_int_MPI_Send_init;
  pnmpi_int_MPI_Sendrecv_t *pnmpi_int_MPI_Sendrecv;
  pnmpi_int_MPI_Sendrecv_replace_t *pnmpi_int_MPI_Sendrecv_replace;
  pnmpi_int_MPI_Ssend_t *pnmpi_int_MPI_Ssend;
  pnmpi_int_MPI_Ssend_init_t *pnmpi_int_MPI_Ssend_init;
  pnmpi_int_MPI_Start_t *pnmpi_int_MPI_Start;
  pnmpi_int_MPI_Startall_t *pnmpi_int_MPI_Startall;
  pnmpi_int_MPI_Status_set_cancelled_t *pnmpi_int_MPI_Status_set_cancelled;
  pnmpi_int_MPI_Status_set_elements_t *pnmpi_int_MPI_Status_set_elements;
  pnmpi_int_MPI_Test_t *pnmpi_int_MPI_Test;
  pnmpi_int_MPI_Testall_t *pnmpi_int_MPI_Testall;
  pnmpi_int_MPI_Testany_t *pnmpi_int_MPI_Testany;
  pnmpi_int_MPI_Test_cancelled_t *pnmpi_int_MPI_Test_cancelled;
  pnmpi_int_MPI_Testsome_t *pnmpi_int_MPI_Testsome;
  pnmpi_int_MPI_Topo_test_t *pnmpi_int_MPI_Topo_test;
  pnmpi_int_MPI_Type_commit_t *pnmpi_int_MPI_Type_commit;
  pnmpi_int_MPI_Type_contiguous_t *pnmpi_int_MPI_Type_contiguous;
  pnmpi_int_MPI_Type_create_darray_t *pnmpi_int_MPI_Type_create_darray;
  pnmpi_int_MPI_Type_create_f90_complex_t *pnmpi_int_MPI_Type_create_f90_complex;
  pnmpi_int_MPI_Type_create_f90_integer_t *pnmpi_int_MPI_Type_create_f90_integer;
  pnmpi_int_MPI_Type_create_f90_real_t *pnmpi_int_MPI_Type_create_f90_real;
  pnmpi_int_MPI_Type_create_hindexed_t *pnmpi_int_MPI_Type_create_hindexed;
  pnmpi_int_MPI_Type_create_hvector_t *pnmpi_int_MPI_Type_create_hvector;
  pnmpi_int_MPI_Type_create_indexed_block_t *pnmpi_int_MPI_Type_create_indexed_block;
  pnmpi_int_MPI_Type_create_keyval_t *pnmpi_int_MPI_Type_create_keyval;
  pnmpi_int_MPI_Type_create_resized_t *pnmpi_int_MPI_Type_create_resized;
  pnmpi_int_MPI_Type_create_struct_t *pnmpi_int_MPI_Type_create_struct;
  pnmpi_int_MPI_Type_create_subarray_t *pnmpi_int_MPI_Type_create_subarray;
  pnmpi_int_MPI_Type_delete_attr_t *pnmpi_int_MPI_Type_delete_attr;
  pnmpi_int_MPI_Type_dup_t *pnmpi_int_MPI_Type_dup;
  pnmpi_int_MPI_Type_extent_t *pnmpi_int_MPI_Type_extent;
  pnmpi_int_MPI_Type_free_t *pnmpi_int_MPI_Type_free;
  pnmpi_int_MPI_Type_free_keyval_t *pnmpi_int_MPI_Type_free_keyval;
  pnmpi_int_MPI_Type_get_attr_t *pnmpi_int_MPI_Type_get_attr;
  pnmpi_int_MPI_Type_get_contents_t *pnmpi_int_MPI_Type_get_contents;
  pnmpi_int_MPI_Type_get_envelope_t *pnmpi_int_MPI_Type_get_envelope;
  pnmpi_int_MPI_Type_get_extent_t *pnmpi_int_MPI_Type_get_extent;
  pnmpi_int_MPI_Type_get_name_t *pnmpi_int_MPI_Type_get_name;
  pnmpi_int_MPI_Type_get_true_extent_t *pnmpi_int_MPI_Type_get_true_extent;
  pnmpi_int_MPI_Type_hindexed_t *pnmpi_int_MPI_Type_hindexed;
  pnmpi_int_MPI_Type_hvector_t *pnmpi_int_MPI_Type_hvector;
  pnmpi_int_MPI_Type_indexed_t *pnmpi_int_MPI_Type_indexed;
  pnmpi_int_MPI_Type_lb_t *pnmpi_int_MPI_Type_lb;
  pnmpi_int_MPI_Type_match_size_t *pnmpi_int_MPI_Type_match_size;
  pnmpi_int_MPI_Type_set_attr_t *pnmpi_int_MPI_Type_set_attr;
  pnmpi_int_MPI_Type_set_name_t *pnmpi_int_MPI_Type_set_name;
  pnmpi_int_MPI_Type_size_t *pnmpi_int_MPI_Type_size;
  pnmpi_int_MPI_Type_struct_t *pnmpi_int_MPI_Type_struct;
  pnmpi_int_MPI_Type_ub_t *pnmpi_int_MPI_Type_ub;
  pnmpi_int_MPI_Type_vector_t *pnmpi_int_MPI_Type_vector;
  pnmpi_int_MPI_Unpack_t *pnmpi_int_MPI_Unpack;
  pnmpi_int_MPI_Unpack_external_t *pnmpi_int_MPI_Unpack_external;
  pnmpi_int_MPI_Unpublish_name_t *pnmpi_int_MPI_Unpublish_name;
  pnmpi_int_MPI_Wait_t *pnmpi_int_MPI_Wait;
  pnmpi_int_MPI_Waitall_t *pnmpi_int_MPI_Waitall;
  pnmpi_int_MPI_Waitany_t *pnmpi_int_MPI_Waitany;
  pnmpi_int_MPI_Waitsome_t *pnmpi_int_MPI_Waitsome;
  pnmpi_int_MPI_Win_call_errhandler_t *pnmpi_int_MPI_Win_call_errhandler;
  pnmpi_int_MPI_Win_complete_t *pnmpi_int_MPI_Win_complete;
  pnmpi_int_MPI_Win_create_t *pnmpi_int_MPI_Win_create;
  pnmpi_int_MPI_Win_create_errhandler_t *pnmpi_int_MPI_Win_create_errhandler;
  pnmpi_int_MPI_Win_create_keyval_t *pnmpi_int_MPI_Win_create_keyval;
  pnmpi_int_MPI_Win_delete_attr_t *pnmpi_int_MPI_Win_delete_attr;
  pnmpi_int_MPI_Win_fence_t *pnmpi_int_MPI_Win_fence;
  pnmpi_int_MPI_Win_free_t *pnmpi_int_MPI_Win_free;
  pnmpi_int_MPI_Win_free_keyval_t *pnmpi_int_MPI_Win_free_keyval;
  pnmpi_int_MPI_Win_get_attr_t *pnmpi_int_MPI_Win_get_attr;
  pnmpi_int_MPI_Win_get_errhandler_t *pnmpi_int_MPI_Win_get_errhandler;
  pnmpi_int_MPI_Win_get_group_t *pnmpi_int_MPI_Win_get_group;
  pnmpi_int_MPI_Win_get_name_t *pnmpi_int_MPI_Win_get_name;
  pnmpi_int_MPI_Win_lock_t *pnmpi_int_MPI_Win_lock;
  pnmpi_int_MPI_Win_post_t *pnmpi_int_MPI_Win_post;
  pnmpi_int_MPI_Win_set_attr_t *pnmpi_int_MPI_Win_set_attr;
  pnmpi_int_MPI_Win_set_errhandler_t *pnmpi_int_MPI_Win_set_errhandler;
  pnmpi_int_MPI_Win_set_name_t *pnmpi_int_MPI_Win_set_name;
  pnmpi_int_MPI_Win_start_t *pnmpi_int_MPI_Win_start;
  pnmpi_int_MPI_Win_test_t *pnmpi_int_MPI_Win_test;
  pnmpi_int_MPI_Win_unlock_t *pnmpi_int_MPI_Win_unlock;
  pnmpi_int_MPI_Win_wait_t *pnmpi_int_MPI_Win_wait;
  pnmpi_int_MPI_Wtick_t *pnmpi_int_MPI_Wtick;
  pnmpi_int_MPI_Wtime_t *pnmpi_int_MPI_Wtime;

} pnmpi_functions_t;


#define INITIALIZE_ALL_FUNCTION_STACKS(mods) \
INITIALIZE_FUNCTION_STACK("MPI_Pcontrol",MPI_Pcontrol_MAJOR,MPI_Pcontrol_MINOR,pnmpi_int_MPI_Pcontrol_t,pnmpi_int_MPI_Pcontrol,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Abort",MPI_Abort_MAJOR,MPI_Abort_MINOR,pnmpi_int_MPI_Abort_t,pnmpi_int_MPI_Abort,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Accumulate",MPI_Accumulate_MAJOR,MPI_Accumulate_MINOR,pnmpi_int_MPI_Accumulate_t,pnmpi_int_MPI_Accumulate,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Add_error_class",MPI_Add_error_class_MAJOR,MPI_Add_error_class_MINOR,pnmpi_int_MPI_Add_error_class_t,pnmpi_int_MPI_Add_error_class,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Add_error_code",MPI_Add_error_code_MAJOR,MPI_Add_error_code_MINOR,pnmpi_int_MPI_Add_error_code_t,pnmpi_int_MPI_Add_error_code,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Add_error_string",MPI_Add_error_string_MAJOR,MPI_Add_error_string_MINOR,pnmpi_int_MPI_Add_error_string_t,pnmpi_int_MPI_Add_error_string,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Address",MPI_Address_MAJOR,MPI_Address_MINOR,pnmpi_int_MPI_Address_t,pnmpi_int_MPI_Address,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Allgather",MPI_Allgather_MAJOR,MPI_Allgather_MINOR,pnmpi_int_MPI_Allgather_t,pnmpi_int_MPI_Allgather,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Allgatherv",MPI_Allgatherv_MAJOR,MPI_Allgatherv_MINOR,pnmpi_int_MPI_Allgatherv_t,pnmpi_int_MPI_Allgatherv,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Alloc_mem",MPI_Alloc_mem_MAJOR,MPI_Alloc_mem_MINOR,pnmpi_int_MPI_Alloc_mem_t,pnmpi_int_MPI_Alloc_mem,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Allreduce",MPI_Allreduce_MAJOR,MPI_Allreduce_MINOR,pnmpi_int_MPI_Allreduce_t,pnmpi_int_MPI_Allreduce,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Alltoall",MPI_Alltoall_MAJOR,MPI_Alltoall_MINOR,pnmpi_int_MPI_Alltoall_t,pnmpi_int_MPI_Alltoall,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Alltoallv",MPI_Alltoallv_MAJOR,MPI_Alltoallv_MINOR,pnmpi_int_MPI_Alltoallv_t,pnmpi_int_MPI_Alltoallv,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Alltoallw",MPI_Alltoallw_MAJOR,MPI_Alltoallw_MINOR,pnmpi_int_MPI_Alltoallw_t,pnmpi_int_MPI_Alltoallw,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Attr_delete",MPI_Attr_delete_MAJOR,MPI_Attr_delete_MINOR,pnmpi_int_MPI_Attr_delete_t,pnmpi_int_MPI_Attr_delete,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Attr_get",MPI_Attr_get_MAJOR,MPI_Attr_get_MINOR,pnmpi_int_MPI_Attr_get_t,pnmpi_int_MPI_Attr_get,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Attr_put",MPI_Attr_put_MAJOR,MPI_Attr_put_MINOR,pnmpi_int_MPI_Attr_put_t,pnmpi_int_MPI_Attr_put,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Barrier",MPI_Barrier_MAJOR,MPI_Barrier_MINOR,pnmpi_int_MPI_Barrier_t,pnmpi_int_MPI_Barrier,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Bcast",MPI_Bcast_MAJOR,MPI_Bcast_MINOR,pnmpi_int_MPI_Bcast_t,pnmpi_int_MPI_Bcast,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Bsend",MPI_Bsend_MAJOR,MPI_Bsend_MINOR,pnmpi_int_MPI_Bsend_t,pnmpi_int_MPI_Bsend,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Bsend_init",MPI_Bsend_init_MAJOR,MPI_Bsend_init_MINOR,pnmpi_int_MPI_Bsend_init_t,pnmpi_int_MPI_Bsend_init,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Buffer_attach",MPI_Buffer_attach_MAJOR,MPI_Buffer_attach_MINOR,pnmpi_int_MPI_Buffer_attach_t,pnmpi_int_MPI_Buffer_attach,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Buffer_detach",MPI_Buffer_detach_MAJOR,MPI_Buffer_detach_MINOR,pnmpi_int_MPI_Buffer_detach_t,pnmpi_int_MPI_Buffer_detach,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Cancel",MPI_Cancel_MAJOR,MPI_Cancel_MINOR,pnmpi_int_MPI_Cancel_t,pnmpi_int_MPI_Cancel,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Cart_coords",MPI_Cart_coords_MAJOR,MPI_Cart_coords_MINOR,pnmpi_int_MPI_Cart_coords_t,pnmpi_int_MPI_Cart_coords,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Cart_create",MPI_Cart_create_MAJOR,MPI_Cart_create_MINOR,pnmpi_int_MPI_Cart_create_t,pnmpi_int_MPI_Cart_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Cartdim_get",MPI_Cartdim_get_MAJOR,MPI_Cartdim_get_MINOR,pnmpi_int_MPI_Cartdim_get_t,pnmpi_int_MPI_Cartdim_get,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Cart_get",MPI_Cart_get_MAJOR,MPI_Cart_get_MINOR,pnmpi_int_MPI_Cart_get_t,pnmpi_int_MPI_Cart_get,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Cart_map",MPI_Cart_map_MAJOR,MPI_Cart_map_MINOR,pnmpi_int_MPI_Cart_map_t,pnmpi_int_MPI_Cart_map,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Cart_rank",MPI_Cart_rank_MAJOR,MPI_Cart_rank_MINOR,pnmpi_int_MPI_Cart_rank_t,pnmpi_int_MPI_Cart_rank,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Cart_shift",MPI_Cart_shift_MAJOR,MPI_Cart_shift_MINOR,pnmpi_int_MPI_Cart_shift_t,pnmpi_int_MPI_Cart_shift,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Cart_sub",MPI_Cart_sub_MAJOR,MPI_Cart_sub_MINOR,pnmpi_int_MPI_Cart_sub_t,pnmpi_int_MPI_Cart_sub,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Close_port",MPI_Close_port_MAJOR,MPI_Close_port_MINOR,pnmpi_int_MPI_Close_port_t,pnmpi_int_MPI_Close_port,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_accept",MPI_Comm_accept_MAJOR,MPI_Comm_accept_MINOR,pnmpi_int_MPI_Comm_accept_t,pnmpi_int_MPI_Comm_accept,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_call_errhandler",MPI_Comm_call_errhandler_MAJOR,MPI_Comm_call_errhandler_MINOR,pnmpi_int_MPI_Comm_call_errhandler_t,pnmpi_int_MPI_Comm_call_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_compare",MPI_Comm_compare_MAJOR,MPI_Comm_compare_MINOR,pnmpi_int_MPI_Comm_compare_t,pnmpi_int_MPI_Comm_compare,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_connect",MPI_Comm_connect_MAJOR,MPI_Comm_connect_MINOR,pnmpi_int_MPI_Comm_connect_t,pnmpi_int_MPI_Comm_connect,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_create",MPI_Comm_create_MAJOR,MPI_Comm_create_MINOR,pnmpi_int_MPI_Comm_create_t,pnmpi_int_MPI_Comm_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_create_errhandler",MPI_Comm_create_errhandler_MAJOR,MPI_Comm_create_errhandler_MINOR,pnmpi_int_MPI_Comm_create_errhandler_t,pnmpi_int_MPI_Comm_create_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_create_keyval",MPI_Comm_create_keyval_MAJOR,MPI_Comm_create_keyval_MINOR,pnmpi_int_MPI_Comm_create_keyval_t,pnmpi_int_MPI_Comm_create_keyval,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_delete_attr",MPI_Comm_delete_attr_MAJOR,MPI_Comm_delete_attr_MINOR,pnmpi_int_MPI_Comm_delete_attr_t,pnmpi_int_MPI_Comm_delete_attr,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_disconnect",MPI_Comm_disconnect_MAJOR,MPI_Comm_disconnect_MINOR,pnmpi_int_MPI_Comm_disconnect_t,pnmpi_int_MPI_Comm_disconnect,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_dup",MPI_Comm_dup_MAJOR,MPI_Comm_dup_MINOR,pnmpi_int_MPI_Comm_dup_t,pnmpi_int_MPI_Comm_dup,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_free",MPI_Comm_free_MAJOR,MPI_Comm_free_MINOR,pnmpi_int_MPI_Comm_free_t,pnmpi_int_MPI_Comm_free,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_free_keyval",MPI_Comm_free_keyval_MAJOR,MPI_Comm_free_keyval_MINOR,pnmpi_int_MPI_Comm_free_keyval_t,pnmpi_int_MPI_Comm_free_keyval,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_get_attr",MPI_Comm_get_attr_MAJOR,MPI_Comm_get_attr_MINOR,pnmpi_int_MPI_Comm_get_attr_t,pnmpi_int_MPI_Comm_get_attr,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_get_errhandler",MPI_Comm_get_errhandler_MAJOR,MPI_Comm_get_errhandler_MINOR,pnmpi_int_MPI_Comm_get_errhandler_t,pnmpi_int_MPI_Comm_get_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_get_name",MPI_Comm_get_name_MAJOR,MPI_Comm_get_name_MINOR,pnmpi_int_MPI_Comm_get_name_t,pnmpi_int_MPI_Comm_get_name,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_get_parent",MPI_Comm_get_parent_MAJOR,MPI_Comm_get_parent_MINOR,pnmpi_int_MPI_Comm_get_parent_t,pnmpi_int_MPI_Comm_get_parent,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_group",MPI_Comm_group_MAJOR,MPI_Comm_group_MINOR,pnmpi_int_MPI_Comm_group_t,pnmpi_int_MPI_Comm_group,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_join",MPI_Comm_join_MAJOR,MPI_Comm_join_MINOR,pnmpi_int_MPI_Comm_join_t,pnmpi_int_MPI_Comm_join,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_rank",MPI_Comm_rank_MAJOR,MPI_Comm_rank_MINOR,pnmpi_int_MPI_Comm_rank_t,pnmpi_int_MPI_Comm_rank,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_remote_group",MPI_Comm_remote_group_MAJOR,MPI_Comm_remote_group_MINOR,pnmpi_int_MPI_Comm_remote_group_t,pnmpi_int_MPI_Comm_remote_group,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_remote_size",MPI_Comm_remote_size_MAJOR,MPI_Comm_remote_size_MINOR,pnmpi_int_MPI_Comm_remote_size_t,pnmpi_int_MPI_Comm_remote_size,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_set_attr",MPI_Comm_set_attr_MAJOR,MPI_Comm_set_attr_MINOR,pnmpi_int_MPI_Comm_set_attr_t,pnmpi_int_MPI_Comm_set_attr,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_set_errhandler",MPI_Comm_set_errhandler_MAJOR,MPI_Comm_set_errhandler_MINOR,pnmpi_int_MPI_Comm_set_errhandler_t,pnmpi_int_MPI_Comm_set_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_set_name",MPI_Comm_set_name_MAJOR,MPI_Comm_set_name_MINOR,pnmpi_int_MPI_Comm_set_name_t,pnmpi_int_MPI_Comm_set_name,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_size",MPI_Comm_size_MAJOR,MPI_Comm_size_MINOR,pnmpi_int_MPI_Comm_size_t,pnmpi_int_MPI_Comm_size,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_spawn",MPI_Comm_spawn_MAJOR,MPI_Comm_spawn_MINOR,pnmpi_int_MPI_Comm_spawn_t,pnmpi_int_MPI_Comm_spawn,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_spawn_multiple",MPI_Comm_spawn_multiple_MAJOR,MPI_Comm_spawn_multiple_MINOR,pnmpi_int_MPI_Comm_spawn_multiple_t,pnmpi_int_MPI_Comm_spawn_multiple,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_split",MPI_Comm_split_MAJOR,MPI_Comm_split_MINOR,pnmpi_int_MPI_Comm_split_t,pnmpi_int_MPI_Comm_split,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Comm_test_inter",MPI_Comm_test_inter_MAJOR,MPI_Comm_test_inter_MINOR,pnmpi_int_MPI_Comm_test_inter_t,pnmpi_int_MPI_Comm_test_inter,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Dims_create",MPI_Dims_create_MAJOR,MPI_Dims_create_MINOR,pnmpi_int_MPI_Dims_create_t,pnmpi_int_MPI_Dims_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Dist_graph_create",MPI_Dist_graph_create_MAJOR,MPI_Dist_graph_create_MINOR,pnmpi_int_MPI_Dist_graph_create_t,pnmpi_int_MPI_Dist_graph_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Dist_graph_create_adjacent",MPI_Dist_graph_create_adjacent_MAJOR,MPI_Dist_graph_create_adjacent_MINOR,pnmpi_int_MPI_Dist_graph_create_adjacent_t,pnmpi_int_MPI_Dist_graph_create_adjacent,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Dist_graph_neighbors",MPI_Dist_graph_neighbors_MAJOR,MPI_Dist_graph_neighbors_MINOR,pnmpi_int_MPI_Dist_graph_neighbors_t,pnmpi_int_MPI_Dist_graph_neighbors,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Dist_graph_neighbors_count",MPI_Dist_graph_neighbors_count_MAJOR,MPI_Dist_graph_neighbors_count_MINOR,pnmpi_int_MPI_Dist_graph_neighbors_count_t,pnmpi_int_MPI_Dist_graph_neighbors_count,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Errhandler_create",MPI_Errhandler_create_MAJOR,MPI_Errhandler_create_MINOR,pnmpi_int_MPI_Errhandler_create_t,pnmpi_int_MPI_Errhandler_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Errhandler_free",MPI_Errhandler_free_MAJOR,MPI_Errhandler_free_MINOR,pnmpi_int_MPI_Errhandler_free_t,pnmpi_int_MPI_Errhandler_free,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Errhandler_get",MPI_Errhandler_get_MAJOR,MPI_Errhandler_get_MINOR,pnmpi_int_MPI_Errhandler_get_t,pnmpi_int_MPI_Errhandler_get,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Errhandler_set",MPI_Errhandler_set_MAJOR,MPI_Errhandler_set_MINOR,pnmpi_int_MPI_Errhandler_set_t,pnmpi_int_MPI_Errhandler_set,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Error_class",MPI_Error_class_MAJOR,MPI_Error_class_MINOR,pnmpi_int_MPI_Error_class_t,pnmpi_int_MPI_Error_class,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Error_string",MPI_Error_string_MAJOR,MPI_Error_string_MINOR,pnmpi_int_MPI_Error_string_t,pnmpi_int_MPI_Error_string,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Exscan",MPI_Exscan_MAJOR,MPI_Exscan_MINOR,pnmpi_int_MPI_Exscan_t,pnmpi_int_MPI_Exscan,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_call_errhandler",MPI_File_call_errhandler_MAJOR,MPI_File_call_errhandler_MINOR,pnmpi_int_MPI_File_call_errhandler_t,pnmpi_int_MPI_File_call_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_close",MPI_File_close_MAJOR,MPI_File_close_MINOR,pnmpi_int_MPI_File_close_t,pnmpi_int_MPI_File_close,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_create_errhandler",MPI_File_create_errhandler_MAJOR,MPI_File_create_errhandler_MINOR,pnmpi_int_MPI_File_create_errhandler_t,pnmpi_int_MPI_File_create_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_delete",MPI_File_delete_MAJOR,MPI_File_delete_MINOR,pnmpi_int_MPI_File_delete_t,pnmpi_int_MPI_File_delete,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_amode",MPI_File_get_amode_MAJOR,MPI_File_get_amode_MINOR,pnmpi_int_MPI_File_get_amode_t,pnmpi_int_MPI_File_get_amode,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_atomicity",MPI_File_get_atomicity_MAJOR,MPI_File_get_atomicity_MINOR,pnmpi_int_MPI_File_get_atomicity_t,pnmpi_int_MPI_File_get_atomicity,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_byte_offset",MPI_File_get_byte_offset_MAJOR,MPI_File_get_byte_offset_MINOR,pnmpi_int_MPI_File_get_byte_offset_t,pnmpi_int_MPI_File_get_byte_offset,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_errhandler",MPI_File_get_errhandler_MAJOR,MPI_File_get_errhandler_MINOR,pnmpi_int_MPI_File_get_errhandler_t,pnmpi_int_MPI_File_get_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_group",MPI_File_get_group_MAJOR,MPI_File_get_group_MINOR,pnmpi_int_MPI_File_get_group_t,pnmpi_int_MPI_File_get_group,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_info",MPI_File_get_info_MAJOR,MPI_File_get_info_MINOR,pnmpi_int_MPI_File_get_info_t,pnmpi_int_MPI_File_get_info,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_position",MPI_File_get_position_MAJOR,MPI_File_get_position_MINOR,pnmpi_int_MPI_File_get_position_t,pnmpi_int_MPI_File_get_position,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_position_shared",MPI_File_get_position_shared_MAJOR,MPI_File_get_position_shared_MINOR,pnmpi_int_MPI_File_get_position_shared_t,pnmpi_int_MPI_File_get_position_shared,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_size",MPI_File_get_size_MAJOR,MPI_File_get_size_MINOR,pnmpi_int_MPI_File_get_size_t,pnmpi_int_MPI_File_get_size,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_type_extent",MPI_File_get_type_extent_MAJOR,MPI_File_get_type_extent_MINOR,pnmpi_int_MPI_File_get_type_extent_t,pnmpi_int_MPI_File_get_type_extent,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_get_view",MPI_File_get_view_MAJOR,MPI_File_get_view_MINOR,pnmpi_int_MPI_File_get_view_t,pnmpi_int_MPI_File_get_view,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_iread",MPI_File_iread_MAJOR,MPI_File_iread_MINOR,pnmpi_int_MPI_File_iread_t,pnmpi_int_MPI_File_iread,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_iread_at",MPI_File_iread_at_MAJOR,MPI_File_iread_at_MINOR,pnmpi_int_MPI_File_iread_at_t,pnmpi_int_MPI_File_iread_at,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_iread_shared",MPI_File_iread_shared_MAJOR,MPI_File_iread_shared_MINOR,pnmpi_int_MPI_File_iread_shared_t,pnmpi_int_MPI_File_iread_shared,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_iwrite",MPI_File_iwrite_MAJOR,MPI_File_iwrite_MINOR,pnmpi_int_MPI_File_iwrite_t,pnmpi_int_MPI_File_iwrite,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_iwrite_at",MPI_File_iwrite_at_MAJOR,MPI_File_iwrite_at_MINOR,pnmpi_int_MPI_File_iwrite_at_t,pnmpi_int_MPI_File_iwrite_at,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_iwrite_shared",MPI_File_iwrite_shared_MAJOR,MPI_File_iwrite_shared_MINOR,pnmpi_int_MPI_File_iwrite_shared_t,pnmpi_int_MPI_File_iwrite_shared,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_open",MPI_File_open_MAJOR,MPI_File_open_MINOR,pnmpi_int_MPI_File_open_t,pnmpi_int_MPI_File_open,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_preallocate",MPI_File_preallocate_MAJOR,MPI_File_preallocate_MINOR,pnmpi_int_MPI_File_preallocate_t,pnmpi_int_MPI_File_preallocate,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read",MPI_File_read_MAJOR,MPI_File_read_MINOR,pnmpi_int_MPI_File_read_t,pnmpi_int_MPI_File_read,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_all",MPI_File_read_all_MAJOR,MPI_File_read_all_MINOR,pnmpi_int_MPI_File_read_all_t,pnmpi_int_MPI_File_read_all,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_all_begin",MPI_File_read_all_begin_MAJOR,MPI_File_read_all_begin_MINOR,pnmpi_int_MPI_File_read_all_begin_t,pnmpi_int_MPI_File_read_all_begin,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_all_end",MPI_File_read_all_end_MAJOR,MPI_File_read_all_end_MINOR,pnmpi_int_MPI_File_read_all_end_t,pnmpi_int_MPI_File_read_all_end,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_at",MPI_File_read_at_MAJOR,MPI_File_read_at_MINOR,pnmpi_int_MPI_File_read_at_t,pnmpi_int_MPI_File_read_at,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_at_all",MPI_File_read_at_all_MAJOR,MPI_File_read_at_all_MINOR,pnmpi_int_MPI_File_read_at_all_t,pnmpi_int_MPI_File_read_at_all,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_at_all_begin",MPI_File_read_at_all_begin_MAJOR,MPI_File_read_at_all_begin_MINOR,pnmpi_int_MPI_File_read_at_all_begin_t,pnmpi_int_MPI_File_read_at_all_begin,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_at_all_end",MPI_File_read_at_all_end_MAJOR,MPI_File_read_at_all_end_MINOR,pnmpi_int_MPI_File_read_at_all_end_t,pnmpi_int_MPI_File_read_at_all_end,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_ordered",MPI_File_read_ordered_MAJOR,MPI_File_read_ordered_MINOR,pnmpi_int_MPI_File_read_ordered_t,pnmpi_int_MPI_File_read_ordered,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_ordered_begin",MPI_File_read_ordered_begin_MAJOR,MPI_File_read_ordered_begin_MINOR,pnmpi_int_MPI_File_read_ordered_begin_t,pnmpi_int_MPI_File_read_ordered_begin,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_ordered_end",MPI_File_read_ordered_end_MAJOR,MPI_File_read_ordered_end_MINOR,pnmpi_int_MPI_File_read_ordered_end_t,pnmpi_int_MPI_File_read_ordered_end,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_read_shared",MPI_File_read_shared_MAJOR,MPI_File_read_shared_MINOR,pnmpi_int_MPI_File_read_shared_t,pnmpi_int_MPI_File_read_shared,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_seek",MPI_File_seek_MAJOR,MPI_File_seek_MINOR,pnmpi_int_MPI_File_seek_t,pnmpi_int_MPI_File_seek,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_seek_shared",MPI_File_seek_shared_MAJOR,MPI_File_seek_shared_MINOR,pnmpi_int_MPI_File_seek_shared_t,pnmpi_int_MPI_File_seek_shared,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_set_atomicity",MPI_File_set_atomicity_MAJOR,MPI_File_set_atomicity_MINOR,pnmpi_int_MPI_File_set_atomicity_t,pnmpi_int_MPI_File_set_atomicity,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_set_errhandler",MPI_File_set_errhandler_MAJOR,MPI_File_set_errhandler_MINOR,pnmpi_int_MPI_File_set_errhandler_t,pnmpi_int_MPI_File_set_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_set_info",MPI_File_set_info_MAJOR,MPI_File_set_info_MINOR,pnmpi_int_MPI_File_set_info_t,pnmpi_int_MPI_File_set_info,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_set_size",MPI_File_set_size_MAJOR,MPI_File_set_size_MINOR,pnmpi_int_MPI_File_set_size_t,pnmpi_int_MPI_File_set_size,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_set_view",MPI_File_set_view_MAJOR,MPI_File_set_view_MINOR,pnmpi_int_MPI_File_set_view_t,pnmpi_int_MPI_File_set_view,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_sync",MPI_File_sync_MAJOR,MPI_File_sync_MINOR,pnmpi_int_MPI_File_sync_t,pnmpi_int_MPI_File_sync,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write",MPI_File_write_MAJOR,MPI_File_write_MINOR,pnmpi_int_MPI_File_write_t,pnmpi_int_MPI_File_write,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_all",MPI_File_write_all_MAJOR,MPI_File_write_all_MINOR,pnmpi_int_MPI_File_write_all_t,pnmpi_int_MPI_File_write_all,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_all_begin",MPI_File_write_all_begin_MAJOR,MPI_File_write_all_begin_MINOR,pnmpi_int_MPI_File_write_all_begin_t,pnmpi_int_MPI_File_write_all_begin,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_all_end",MPI_File_write_all_end_MAJOR,MPI_File_write_all_end_MINOR,pnmpi_int_MPI_File_write_all_end_t,pnmpi_int_MPI_File_write_all_end,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_at",MPI_File_write_at_MAJOR,MPI_File_write_at_MINOR,pnmpi_int_MPI_File_write_at_t,pnmpi_int_MPI_File_write_at,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_at_all",MPI_File_write_at_all_MAJOR,MPI_File_write_at_all_MINOR,pnmpi_int_MPI_File_write_at_all_t,pnmpi_int_MPI_File_write_at_all,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_at_all_begin",MPI_File_write_at_all_begin_MAJOR,MPI_File_write_at_all_begin_MINOR,pnmpi_int_MPI_File_write_at_all_begin_t,pnmpi_int_MPI_File_write_at_all_begin,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_at_all_end",MPI_File_write_at_all_end_MAJOR,MPI_File_write_at_all_end_MINOR,pnmpi_int_MPI_File_write_at_all_end_t,pnmpi_int_MPI_File_write_at_all_end,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_ordered",MPI_File_write_ordered_MAJOR,MPI_File_write_ordered_MINOR,pnmpi_int_MPI_File_write_ordered_t,pnmpi_int_MPI_File_write_ordered,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_ordered_begin",MPI_File_write_ordered_begin_MAJOR,MPI_File_write_ordered_begin_MINOR,pnmpi_int_MPI_File_write_ordered_begin_t,pnmpi_int_MPI_File_write_ordered_begin,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_ordered_end",MPI_File_write_ordered_end_MAJOR,MPI_File_write_ordered_end_MINOR,pnmpi_int_MPI_File_write_ordered_end_t,pnmpi_int_MPI_File_write_ordered_end,mods);\
INITIALIZE_FUNCTION_STACK("MPI_File_write_shared",MPI_File_write_shared_MAJOR,MPI_File_write_shared_MINOR,pnmpi_int_MPI_File_write_shared_t,pnmpi_int_MPI_File_write_shared,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Finalize",MPI_Finalize_MAJOR,MPI_Finalize_MINOR,pnmpi_int_MPI_Finalize_t,pnmpi_int_MPI_Finalize,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Finalized",MPI_Finalized_MAJOR,MPI_Finalized_MINOR,pnmpi_int_MPI_Finalized_t,pnmpi_int_MPI_Finalized,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Free_mem",MPI_Free_mem_MAJOR,MPI_Free_mem_MINOR,pnmpi_int_MPI_Free_mem_t,pnmpi_int_MPI_Free_mem,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Gather",MPI_Gather_MAJOR,MPI_Gather_MINOR,pnmpi_int_MPI_Gather_t,pnmpi_int_MPI_Gather,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Gatherv",MPI_Gatherv_MAJOR,MPI_Gatherv_MINOR,pnmpi_int_MPI_Gatherv_t,pnmpi_int_MPI_Gatherv,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Get",MPI_Get_MAJOR,MPI_Get_MINOR,pnmpi_int_MPI_Get_t,pnmpi_int_MPI_Get,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Get_address",MPI_Get_address_MAJOR,MPI_Get_address_MINOR,pnmpi_int_MPI_Get_address_t,pnmpi_int_MPI_Get_address,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Get_count",MPI_Get_count_MAJOR,MPI_Get_count_MINOR,pnmpi_int_MPI_Get_count_t,pnmpi_int_MPI_Get_count,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Get_elements",MPI_Get_elements_MAJOR,MPI_Get_elements_MINOR,pnmpi_int_MPI_Get_elements_t,pnmpi_int_MPI_Get_elements,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Get_processor_name",MPI_Get_processor_name_MAJOR,MPI_Get_processor_name_MINOR,pnmpi_int_MPI_Get_processor_name_t,pnmpi_int_MPI_Get_processor_name,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Get_version",MPI_Get_version_MAJOR,MPI_Get_version_MINOR,pnmpi_int_MPI_Get_version_t,pnmpi_int_MPI_Get_version,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Graph_create",MPI_Graph_create_MAJOR,MPI_Graph_create_MINOR,pnmpi_int_MPI_Graph_create_t,pnmpi_int_MPI_Graph_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Graphdims_get",MPI_Graphdims_get_MAJOR,MPI_Graphdims_get_MINOR,pnmpi_int_MPI_Graphdims_get_t,pnmpi_int_MPI_Graphdims_get,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Graph_get",MPI_Graph_get_MAJOR,MPI_Graph_get_MINOR,pnmpi_int_MPI_Graph_get_t,pnmpi_int_MPI_Graph_get,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Graph_map",MPI_Graph_map_MAJOR,MPI_Graph_map_MINOR,pnmpi_int_MPI_Graph_map_t,pnmpi_int_MPI_Graph_map,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Graph_neighbors",MPI_Graph_neighbors_MAJOR,MPI_Graph_neighbors_MINOR,pnmpi_int_MPI_Graph_neighbors_t,pnmpi_int_MPI_Graph_neighbors,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Graph_neighbors_count",MPI_Graph_neighbors_count_MAJOR,MPI_Graph_neighbors_count_MINOR,pnmpi_int_MPI_Graph_neighbors_count_t,pnmpi_int_MPI_Graph_neighbors_count,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Grequest_complete",MPI_Grequest_complete_MAJOR,MPI_Grequest_complete_MINOR,pnmpi_int_MPI_Grequest_complete_t,pnmpi_int_MPI_Grequest_complete,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Grequest_start",MPI_Grequest_start_MAJOR,MPI_Grequest_start_MINOR,pnmpi_int_MPI_Grequest_start_t,pnmpi_int_MPI_Grequest_start,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_compare",MPI_Group_compare_MAJOR,MPI_Group_compare_MINOR,pnmpi_int_MPI_Group_compare_t,pnmpi_int_MPI_Group_compare,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_difference",MPI_Group_difference_MAJOR,MPI_Group_difference_MINOR,pnmpi_int_MPI_Group_difference_t,pnmpi_int_MPI_Group_difference,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_excl",MPI_Group_excl_MAJOR,MPI_Group_excl_MINOR,pnmpi_int_MPI_Group_excl_t,pnmpi_int_MPI_Group_excl,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_free",MPI_Group_free_MAJOR,MPI_Group_free_MINOR,pnmpi_int_MPI_Group_free_t,pnmpi_int_MPI_Group_free,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_incl",MPI_Group_incl_MAJOR,MPI_Group_incl_MINOR,pnmpi_int_MPI_Group_incl_t,pnmpi_int_MPI_Group_incl,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_intersection",MPI_Group_intersection_MAJOR,MPI_Group_intersection_MINOR,pnmpi_int_MPI_Group_intersection_t,pnmpi_int_MPI_Group_intersection,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_range_excl",MPI_Group_range_excl_MAJOR,MPI_Group_range_excl_MINOR,pnmpi_int_MPI_Group_range_excl_t,pnmpi_int_MPI_Group_range_excl,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_range_incl",MPI_Group_range_incl_MAJOR,MPI_Group_range_incl_MINOR,pnmpi_int_MPI_Group_range_incl_t,pnmpi_int_MPI_Group_range_incl,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_rank",MPI_Group_rank_MAJOR,MPI_Group_rank_MINOR,pnmpi_int_MPI_Group_rank_t,pnmpi_int_MPI_Group_rank,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_size",MPI_Group_size_MAJOR,MPI_Group_size_MINOR,pnmpi_int_MPI_Group_size_t,pnmpi_int_MPI_Group_size,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_translate_ranks",MPI_Group_translate_ranks_MAJOR,MPI_Group_translate_ranks_MINOR,pnmpi_int_MPI_Group_translate_ranks_t,pnmpi_int_MPI_Group_translate_ranks,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Group_union",MPI_Group_union_MAJOR,MPI_Group_union_MINOR,pnmpi_int_MPI_Group_union_t,pnmpi_int_MPI_Group_union,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Ibsend",MPI_Ibsend_MAJOR,MPI_Ibsend_MINOR,pnmpi_int_MPI_Ibsend_t,pnmpi_int_MPI_Ibsend,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Info_create",MPI_Info_create_MAJOR,MPI_Info_create_MINOR,pnmpi_int_MPI_Info_create_t,pnmpi_int_MPI_Info_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Info_delete",MPI_Info_delete_MAJOR,MPI_Info_delete_MINOR,pnmpi_int_MPI_Info_delete_t,pnmpi_int_MPI_Info_delete,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Info_dup",MPI_Info_dup_MAJOR,MPI_Info_dup_MINOR,pnmpi_int_MPI_Info_dup_t,pnmpi_int_MPI_Info_dup,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Info_free",MPI_Info_free_MAJOR,MPI_Info_free_MINOR,pnmpi_int_MPI_Info_free_t,pnmpi_int_MPI_Info_free,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Info_get",MPI_Info_get_MAJOR,MPI_Info_get_MINOR,pnmpi_int_MPI_Info_get_t,pnmpi_int_MPI_Info_get,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Info_get_nkeys",MPI_Info_get_nkeys_MAJOR,MPI_Info_get_nkeys_MINOR,pnmpi_int_MPI_Info_get_nkeys_t,pnmpi_int_MPI_Info_get_nkeys,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Info_get_nthkey",MPI_Info_get_nthkey_MAJOR,MPI_Info_get_nthkey_MINOR,pnmpi_int_MPI_Info_get_nthkey_t,pnmpi_int_MPI_Info_get_nthkey,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Info_get_valuelen",MPI_Info_get_valuelen_MAJOR,MPI_Info_get_valuelen_MINOR,pnmpi_int_MPI_Info_get_valuelen_t,pnmpi_int_MPI_Info_get_valuelen,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Info_set",MPI_Info_set_MAJOR,MPI_Info_set_MINOR,pnmpi_int_MPI_Info_set_t,pnmpi_int_MPI_Info_set,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Init",MPI_Init_MAJOR,MPI_Init_MINOR,pnmpi_int_MPI_Init_t,pnmpi_int_MPI_Init,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Initialized",MPI_Initialized_MAJOR,MPI_Initialized_MINOR,pnmpi_int_MPI_Initialized_t,pnmpi_int_MPI_Initialized,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Init_thread",MPI_Init_thread_MAJOR,MPI_Init_thread_MINOR,pnmpi_int_MPI_Init_thread_t,pnmpi_int_MPI_Init_thread,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Intercomm_create",MPI_Intercomm_create_MAJOR,MPI_Intercomm_create_MINOR,pnmpi_int_MPI_Intercomm_create_t,pnmpi_int_MPI_Intercomm_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Intercomm_merge",MPI_Intercomm_merge_MAJOR,MPI_Intercomm_merge_MINOR,pnmpi_int_MPI_Intercomm_merge_t,pnmpi_int_MPI_Intercomm_merge,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Iprobe",MPI_Iprobe_MAJOR,MPI_Iprobe_MINOR,pnmpi_int_MPI_Iprobe_t,pnmpi_int_MPI_Iprobe,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Irecv",MPI_Irecv_MAJOR,MPI_Irecv_MINOR,pnmpi_int_MPI_Irecv_t,pnmpi_int_MPI_Irecv,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Irsend",MPI_Irsend_MAJOR,MPI_Irsend_MINOR,pnmpi_int_MPI_Irsend_t,pnmpi_int_MPI_Irsend,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Isend",MPI_Isend_MAJOR,MPI_Isend_MINOR,pnmpi_int_MPI_Isend_t,pnmpi_int_MPI_Isend,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Issend",MPI_Issend_MAJOR,MPI_Issend_MINOR,pnmpi_int_MPI_Issend_t,pnmpi_int_MPI_Issend,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Is_thread_main",MPI_Is_thread_main_MAJOR,MPI_Is_thread_main_MINOR,pnmpi_int_MPI_Is_thread_main_t,pnmpi_int_MPI_Is_thread_main,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Keyval_create",MPI_Keyval_create_MAJOR,MPI_Keyval_create_MINOR,pnmpi_int_MPI_Keyval_create_t,pnmpi_int_MPI_Keyval_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Keyval_free",MPI_Keyval_free_MAJOR,MPI_Keyval_free_MINOR,pnmpi_int_MPI_Keyval_free_t,pnmpi_int_MPI_Keyval_free,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Lookup_name",MPI_Lookup_name_MAJOR,MPI_Lookup_name_MINOR,pnmpi_int_MPI_Lookup_name_t,pnmpi_int_MPI_Lookup_name,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Op_commutative",MPI_Op_commutative_MAJOR,MPI_Op_commutative_MINOR,pnmpi_int_MPI_Op_commutative_t,pnmpi_int_MPI_Op_commutative,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Op_create",MPI_Op_create_MAJOR,MPI_Op_create_MINOR,pnmpi_int_MPI_Op_create_t,pnmpi_int_MPI_Op_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Open_port",MPI_Open_port_MAJOR,MPI_Open_port_MINOR,pnmpi_int_MPI_Open_port_t,pnmpi_int_MPI_Open_port,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Op_free",MPI_Op_free_MAJOR,MPI_Op_free_MINOR,pnmpi_int_MPI_Op_free_t,pnmpi_int_MPI_Op_free,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Pack",MPI_Pack_MAJOR,MPI_Pack_MINOR,pnmpi_int_MPI_Pack_t,pnmpi_int_MPI_Pack,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Pack_external",MPI_Pack_external_MAJOR,MPI_Pack_external_MINOR,pnmpi_int_MPI_Pack_external_t,pnmpi_int_MPI_Pack_external,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Pack_external_size",MPI_Pack_external_size_MAJOR,MPI_Pack_external_size_MINOR,pnmpi_int_MPI_Pack_external_size_t,pnmpi_int_MPI_Pack_external_size,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Pack_size",MPI_Pack_size_MAJOR,MPI_Pack_size_MINOR,pnmpi_int_MPI_Pack_size_t,pnmpi_int_MPI_Pack_size,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Probe",MPI_Probe_MAJOR,MPI_Probe_MINOR,pnmpi_int_MPI_Probe_t,pnmpi_int_MPI_Probe,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Publish_name",MPI_Publish_name_MAJOR,MPI_Publish_name_MINOR,pnmpi_int_MPI_Publish_name_t,pnmpi_int_MPI_Publish_name,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Put",MPI_Put_MAJOR,MPI_Put_MINOR,pnmpi_int_MPI_Put_t,pnmpi_int_MPI_Put,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Query_thread",MPI_Query_thread_MAJOR,MPI_Query_thread_MINOR,pnmpi_int_MPI_Query_thread_t,pnmpi_int_MPI_Query_thread,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Recv",MPI_Recv_MAJOR,MPI_Recv_MINOR,pnmpi_int_MPI_Recv_t,pnmpi_int_MPI_Recv,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Recv_init",MPI_Recv_init_MAJOR,MPI_Recv_init_MINOR,pnmpi_int_MPI_Recv_init_t,pnmpi_int_MPI_Recv_init,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Reduce",MPI_Reduce_MAJOR,MPI_Reduce_MINOR,pnmpi_int_MPI_Reduce_t,pnmpi_int_MPI_Reduce,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Reduce_local",MPI_Reduce_local_MAJOR,MPI_Reduce_local_MINOR,pnmpi_int_MPI_Reduce_local_t,pnmpi_int_MPI_Reduce_local,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Reduce_scatter",MPI_Reduce_scatter_MAJOR,MPI_Reduce_scatter_MINOR,pnmpi_int_MPI_Reduce_scatter_t,pnmpi_int_MPI_Reduce_scatter,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Reduce_scatter_block",MPI_Reduce_scatter_block_MAJOR,MPI_Reduce_scatter_block_MINOR,pnmpi_int_MPI_Reduce_scatter_block_t,pnmpi_int_MPI_Reduce_scatter_block,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Register_datarep",MPI_Register_datarep_MAJOR,MPI_Register_datarep_MINOR,pnmpi_int_MPI_Register_datarep_t,pnmpi_int_MPI_Register_datarep,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Request_free",MPI_Request_free_MAJOR,MPI_Request_free_MINOR,pnmpi_int_MPI_Request_free_t,pnmpi_int_MPI_Request_free,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Request_get_status",MPI_Request_get_status_MAJOR,MPI_Request_get_status_MINOR,pnmpi_int_MPI_Request_get_status_t,pnmpi_int_MPI_Request_get_status,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Rsend",MPI_Rsend_MAJOR,MPI_Rsend_MINOR,pnmpi_int_MPI_Rsend_t,pnmpi_int_MPI_Rsend,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Rsend_init",MPI_Rsend_init_MAJOR,MPI_Rsend_init_MINOR,pnmpi_int_MPI_Rsend_init_t,pnmpi_int_MPI_Rsend_init,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Scan",MPI_Scan_MAJOR,MPI_Scan_MINOR,pnmpi_int_MPI_Scan_t,pnmpi_int_MPI_Scan,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Scatter",MPI_Scatter_MAJOR,MPI_Scatter_MINOR,pnmpi_int_MPI_Scatter_t,pnmpi_int_MPI_Scatter,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Scatterv",MPI_Scatterv_MAJOR,MPI_Scatterv_MINOR,pnmpi_int_MPI_Scatterv_t,pnmpi_int_MPI_Scatterv,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Send",MPI_Send_MAJOR,MPI_Send_MINOR,pnmpi_int_MPI_Send_t,pnmpi_int_MPI_Send,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Send_init",MPI_Send_init_MAJOR,MPI_Send_init_MINOR,pnmpi_int_MPI_Send_init_t,pnmpi_int_MPI_Send_init,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Sendrecv",MPI_Sendrecv_MAJOR,MPI_Sendrecv_MINOR,pnmpi_int_MPI_Sendrecv_t,pnmpi_int_MPI_Sendrecv,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Sendrecv_replace",MPI_Sendrecv_replace_MAJOR,MPI_Sendrecv_replace_MINOR,pnmpi_int_MPI_Sendrecv_replace_t,pnmpi_int_MPI_Sendrecv_replace,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Ssend",MPI_Ssend_MAJOR,MPI_Ssend_MINOR,pnmpi_int_MPI_Ssend_t,pnmpi_int_MPI_Ssend,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Ssend_init",MPI_Ssend_init_MAJOR,MPI_Ssend_init_MINOR,pnmpi_int_MPI_Ssend_init_t,pnmpi_int_MPI_Ssend_init,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Start",MPI_Start_MAJOR,MPI_Start_MINOR,pnmpi_int_MPI_Start_t,pnmpi_int_MPI_Start,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Startall",MPI_Startall_MAJOR,MPI_Startall_MINOR,pnmpi_int_MPI_Startall_t,pnmpi_int_MPI_Startall,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Status_set_cancelled",MPI_Status_set_cancelled_MAJOR,MPI_Status_set_cancelled_MINOR,pnmpi_int_MPI_Status_set_cancelled_t,pnmpi_int_MPI_Status_set_cancelled,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Status_set_elements",MPI_Status_set_elements_MAJOR,MPI_Status_set_elements_MINOR,pnmpi_int_MPI_Status_set_elements_t,pnmpi_int_MPI_Status_set_elements,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Test",MPI_Test_MAJOR,MPI_Test_MINOR,pnmpi_int_MPI_Test_t,pnmpi_int_MPI_Test,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Testall",MPI_Testall_MAJOR,MPI_Testall_MINOR,pnmpi_int_MPI_Testall_t,pnmpi_int_MPI_Testall,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Testany",MPI_Testany_MAJOR,MPI_Testany_MINOR,pnmpi_int_MPI_Testany_t,pnmpi_int_MPI_Testany,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Test_cancelled",MPI_Test_cancelled_MAJOR,MPI_Test_cancelled_MINOR,pnmpi_int_MPI_Test_cancelled_t,pnmpi_int_MPI_Test_cancelled,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Testsome",MPI_Testsome_MAJOR,MPI_Testsome_MINOR,pnmpi_int_MPI_Testsome_t,pnmpi_int_MPI_Testsome,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Topo_test",MPI_Topo_test_MAJOR,MPI_Topo_test_MINOR,pnmpi_int_MPI_Topo_test_t,pnmpi_int_MPI_Topo_test,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_commit",MPI_Type_commit_MAJOR,MPI_Type_commit_MINOR,pnmpi_int_MPI_Type_commit_t,pnmpi_int_MPI_Type_commit,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_contiguous",MPI_Type_contiguous_MAJOR,MPI_Type_contiguous_MINOR,pnmpi_int_MPI_Type_contiguous_t,pnmpi_int_MPI_Type_contiguous,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_darray",MPI_Type_create_darray_MAJOR,MPI_Type_create_darray_MINOR,pnmpi_int_MPI_Type_create_darray_t,pnmpi_int_MPI_Type_create_darray,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_f90_complex",MPI_Type_create_f90_complex_MAJOR,MPI_Type_create_f90_complex_MINOR,pnmpi_int_MPI_Type_create_f90_complex_t,pnmpi_int_MPI_Type_create_f90_complex,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_f90_integer",MPI_Type_create_f90_integer_MAJOR,MPI_Type_create_f90_integer_MINOR,pnmpi_int_MPI_Type_create_f90_integer_t,pnmpi_int_MPI_Type_create_f90_integer,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_f90_real",MPI_Type_create_f90_real_MAJOR,MPI_Type_create_f90_real_MINOR,pnmpi_int_MPI_Type_create_f90_real_t,pnmpi_int_MPI_Type_create_f90_real,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_hindexed",MPI_Type_create_hindexed_MAJOR,MPI_Type_create_hindexed_MINOR,pnmpi_int_MPI_Type_create_hindexed_t,pnmpi_int_MPI_Type_create_hindexed,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_hvector",MPI_Type_create_hvector_MAJOR,MPI_Type_create_hvector_MINOR,pnmpi_int_MPI_Type_create_hvector_t,pnmpi_int_MPI_Type_create_hvector,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_indexed_block",MPI_Type_create_indexed_block_MAJOR,MPI_Type_create_indexed_block_MINOR,pnmpi_int_MPI_Type_create_indexed_block_t,pnmpi_int_MPI_Type_create_indexed_block,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_keyval",MPI_Type_create_keyval_MAJOR,MPI_Type_create_keyval_MINOR,pnmpi_int_MPI_Type_create_keyval_t,pnmpi_int_MPI_Type_create_keyval,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_resized",MPI_Type_create_resized_MAJOR,MPI_Type_create_resized_MINOR,pnmpi_int_MPI_Type_create_resized_t,pnmpi_int_MPI_Type_create_resized,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_struct",MPI_Type_create_struct_MAJOR,MPI_Type_create_struct_MINOR,pnmpi_int_MPI_Type_create_struct_t,pnmpi_int_MPI_Type_create_struct,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_create_subarray",MPI_Type_create_subarray_MAJOR,MPI_Type_create_subarray_MINOR,pnmpi_int_MPI_Type_create_subarray_t,pnmpi_int_MPI_Type_create_subarray,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_delete_attr",MPI_Type_delete_attr_MAJOR,MPI_Type_delete_attr_MINOR,pnmpi_int_MPI_Type_delete_attr_t,pnmpi_int_MPI_Type_delete_attr,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_dup",MPI_Type_dup_MAJOR,MPI_Type_dup_MINOR,pnmpi_int_MPI_Type_dup_t,pnmpi_int_MPI_Type_dup,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_extent",MPI_Type_extent_MAJOR,MPI_Type_extent_MINOR,pnmpi_int_MPI_Type_extent_t,pnmpi_int_MPI_Type_extent,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_free",MPI_Type_free_MAJOR,MPI_Type_free_MINOR,pnmpi_int_MPI_Type_free_t,pnmpi_int_MPI_Type_free,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_free_keyval",MPI_Type_free_keyval_MAJOR,MPI_Type_free_keyval_MINOR,pnmpi_int_MPI_Type_free_keyval_t,pnmpi_int_MPI_Type_free_keyval,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_get_attr",MPI_Type_get_attr_MAJOR,MPI_Type_get_attr_MINOR,pnmpi_int_MPI_Type_get_attr_t,pnmpi_int_MPI_Type_get_attr,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_get_contents",MPI_Type_get_contents_MAJOR,MPI_Type_get_contents_MINOR,pnmpi_int_MPI_Type_get_contents_t,pnmpi_int_MPI_Type_get_contents,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_get_envelope",MPI_Type_get_envelope_MAJOR,MPI_Type_get_envelope_MINOR,pnmpi_int_MPI_Type_get_envelope_t,pnmpi_int_MPI_Type_get_envelope,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_get_extent",MPI_Type_get_extent_MAJOR,MPI_Type_get_extent_MINOR,pnmpi_int_MPI_Type_get_extent_t,pnmpi_int_MPI_Type_get_extent,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_get_name",MPI_Type_get_name_MAJOR,MPI_Type_get_name_MINOR,pnmpi_int_MPI_Type_get_name_t,pnmpi_int_MPI_Type_get_name,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_get_true_extent",MPI_Type_get_true_extent_MAJOR,MPI_Type_get_true_extent_MINOR,pnmpi_int_MPI_Type_get_true_extent_t,pnmpi_int_MPI_Type_get_true_extent,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_hindexed",MPI_Type_hindexed_MAJOR,MPI_Type_hindexed_MINOR,pnmpi_int_MPI_Type_hindexed_t,pnmpi_int_MPI_Type_hindexed,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_hvector",MPI_Type_hvector_MAJOR,MPI_Type_hvector_MINOR,pnmpi_int_MPI_Type_hvector_t,pnmpi_int_MPI_Type_hvector,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_indexed",MPI_Type_indexed_MAJOR,MPI_Type_indexed_MINOR,pnmpi_int_MPI_Type_indexed_t,pnmpi_int_MPI_Type_indexed,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_lb",MPI_Type_lb_MAJOR,MPI_Type_lb_MINOR,pnmpi_int_MPI_Type_lb_t,pnmpi_int_MPI_Type_lb,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_match_size",MPI_Type_match_size_MAJOR,MPI_Type_match_size_MINOR,pnmpi_int_MPI_Type_match_size_t,pnmpi_int_MPI_Type_match_size,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_set_attr",MPI_Type_set_attr_MAJOR,MPI_Type_set_attr_MINOR,pnmpi_int_MPI_Type_set_attr_t,pnmpi_int_MPI_Type_set_attr,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_set_name",MPI_Type_set_name_MAJOR,MPI_Type_set_name_MINOR,pnmpi_int_MPI_Type_set_name_t,pnmpi_int_MPI_Type_set_name,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_size",MPI_Type_size_MAJOR,MPI_Type_size_MINOR,pnmpi_int_MPI_Type_size_t,pnmpi_int_MPI_Type_size,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_struct",MPI_Type_struct_MAJOR,MPI_Type_struct_MINOR,pnmpi_int_MPI_Type_struct_t,pnmpi_int_MPI_Type_struct,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_ub",MPI_Type_ub_MAJOR,MPI_Type_ub_MINOR,pnmpi_int_MPI_Type_ub_t,pnmpi_int_MPI_Type_ub,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Type_vector",MPI_Type_vector_MAJOR,MPI_Type_vector_MINOR,pnmpi_int_MPI_Type_vector_t,pnmpi_int_MPI_Type_vector,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Unpack",MPI_Unpack_MAJOR,MPI_Unpack_MINOR,pnmpi_int_MPI_Unpack_t,pnmpi_int_MPI_Unpack,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Unpack_external",MPI_Unpack_external_MAJOR,MPI_Unpack_external_MINOR,pnmpi_int_MPI_Unpack_external_t,pnmpi_int_MPI_Unpack_external,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Unpublish_name",MPI_Unpublish_name_MAJOR,MPI_Unpublish_name_MINOR,pnmpi_int_MPI_Unpublish_name_t,pnmpi_int_MPI_Unpublish_name,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Wait",MPI_Wait_MAJOR,MPI_Wait_MINOR,pnmpi_int_MPI_Wait_t,pnmpi_int_MPI_Wait,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Waitall",MPI_Waitall_MAJOR,MPI_Waitall_MINOR,pnmpi_int_MPI_Waitall_t,pnmpi_int_MPI_Waitall,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Waitany",MPI_Waitany_MAJOR,MPI_Waitany_MINOR,pnmpi_int_MPI_Waitany_t,pnmpi_int_MPI_Waitany,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Waitsome",MPI_Waitsome_MAJOR,MPI_Waitsome_MINOR,pnmpi_int_MPI_Waitsome_t,pnmpi_int_MPI_Waitsome,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_call_errhandler",MPI_Win_call_errhandler_MAJOR,MPI_Win_call_errhandler_MINOR,pnmpi_int_MPI_Win_call_errhandler_t,pnmpi_int_MPI_Win_call_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_complete",MPI_Win_complete_MAJOR,MPI_Win_complete_MINOR,pnmpi_int_MPI_Win_complete_t,pnmpi_int_MPI_Win_complete,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_create",MPI_Win_create_MAJOR,MPI_Win_create_MINOR,pnmpi_int_MPI_Win_create_t,pnmpi_int_MPI_Win_create,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_create_errhandler",MPI_Win_create_errhandler_MAJOR,MPI_Win_create_errhandler_MINOR,pnmpi_int_MPI_Win_create_errhandler_t,pnmpi_int_MPI_Win_create_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_create_keyval",MPI_Win_create_keyval_MAJOR,MPI_Win_create_keyval_MINOR,pnmpi_int_MPI_Win_create_keyval_t,pnmpi_int_MPI_Win_create_keyval,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_delete_attr",MPI_Win_delete_attr_MAJOR,MPI_Win_delete_attr_MINOR,pnmpi_int_MPI_Win_delete_attr_t,pnmpi_int_MPI_Win_delete_attr,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_fence",MPI_Win_fence_MAJOR,MPI_Win_fence_MINOR,pnmpi_int_MPI_Win_fence_t,pnmpi_int_MPI_Win_fence,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_free",MPI_Win_free_MAJOR,MPI_Win_free_MINOR,pnmpi_int_MPI_Win_free_t,pnmpi_int_MPI_Win_free,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_free_keyval",MPI_Win_free_keyval_MAJOR,MPI_Win_free_keyval_MINOR,pnmpi_int_MPI_Win_free_keyval_t,pnmpi_int_MPI_Win_free_keyval,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_get_attr",MPI_Win_get_attr_MAJOR,MPI_Win_get_attr_MINOR,pnmpi_int_MPI_Win_get_attr_t,pnmpi_int_MPI_Win_get_attr,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_get_errhandler",MPI_Win_get_errhandler_MAJOR,MPI_Win_get_errhandler_MINOR,pnmpi_int_MPI_Win_get_errhandler_t,pnmpi_int_MPI_Win_get_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_get_group",MPI_Win_get_group_MAJOR,MPI_Win_get_group_MINOR,pnmpi_int_MPI_Win_get_group_t,pnmpi_int_MPI_Win_get_group,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_get_name",MPI_Win_get_name_MAJOR,MPI_Win_get_name_MINOR,pnmpi_int_MPI_Win_get_name_t,pnmpi_int_MPI_Win_get_name,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_lock",MPI_Win_lock_MAJOR,MPI_Win_lock_MINOR,pnmpi_int_MPI_Win_lock_t,pnmpi_int_MPI_Win_lock,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_post",MPI_Win_post_MAJOR,MPI_Win_post_MINOR,pnmpi_int_MPI_Win_post_t,pnmpi_int_MPI_Win_post,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_set_attr",MPI_Win_set_attr_MAJOR,MPI_Win_set_attr_MINOR,pnmpi_int_MPI_Win_set_attr_t,pnmpi_int_MPI_Win_set_attr,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_set_errhandler",MPI_Win_set_errhandler_MAJOR,MPI_Win_set_errhandler_MINOR,pnmpi_int_MPI_Win_set_errhandler_t,pnmpi_int_MPI_Win_set_errhandler,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_set_name",MPI_Win_set_name_MAJOR,MPI_Win_set_name_MINOR,pnmpi_int_MPI_Win_set_name_t,pnmpi_int_MPI_Win_set_name,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_start",MPI_Win_start_MAJOR,MPI_Win_start_MINOR,pnmpi_int_MPI_Win_start_t,pnmpi_int_MPI_Win_start,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_test",MPI_Win_test_MAJOR,MPI_Win_test_MINOR,pnmpi_int_MPI_Win_test_t,pnmpi_int_MPI_Win_test,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_unlock",MPI_Win_unlock_MAJOR,MPI_Win_unlock_MINOR,pnmpi_int_MPI_Win_unlock_t,pnmpi_int_MPI_Win_unlock,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Win_wait",MPI_Win_wait_MAJOR,MPI_Win_wait_MINOR,pnmpi_int_MPI_Win_wait_t,pnmpi_int_MPI_Win_wait,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Wtick",MPI_Wtick_MAJOR,MPI_Wtick_MINOR,pnmpi_int_MPI_Wtick_t,pnmpi_int_MPI_Wtick,mods);\
INITIALIZE_FUNCTION_STACK("MPI_Wtime",MPI_Wtime_MAJOR,MPI_Wtime_MINOR,pnmpi_int_MPI_Wtime_t,pnmpi_int_MPI_Wtime,mods);\

