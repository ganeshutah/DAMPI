
int PMPI_Abort_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Accumulate_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8);

int PMPI_Add_error_class_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Add_error_code_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Add_error_string_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Address_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int PMPI_Allgather_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int PMPI_Allgatherv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int PMPI_Alloc_mem_NewStack(PNMPI_modHandle_t stack , MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr);

int PMPI_Allreduce_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Alltoall_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int PMPI_Alltoallv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int PMPI_Alltoallw_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8);

int PMPI_Attr_delete_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Attr_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Attr_put_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int PMPI_Barrier_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0);

int PMPI_Bcast_NewStack(PNMPI_modHandle_t stack , void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4);

int PMPI_Bsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Bsend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Buffer_attach_NewStack(PNMPI_modHandle_t stack , void * buffer, int _pnmpi_arg_1);

int PMPI_Buffer_detach_NewStack(PNMPI_modHandle_t stack , void * buffer, int * _pnmpi_arg_1);

int PMPI_Cancel_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0);

int PMPI_Cart_coords_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Cart_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int PMPI_Cartdim_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Cart_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Cart_map_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Cart_rank_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Cart_shift_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Cart_sub_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int PMPI_Close_port_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0);

int PMPI_Comm_accept_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);

int PMPI_Comm_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Comm_compare_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Comm_connect_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4);

int PMPI_Comm_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int PMPI_Comm_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Comm_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int PMPI_Comm_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Comm_disconnect_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0);

int PMPI_Comm_dup_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);

int PMPI_Comm_free_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0);

int PMPI_Comm_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Comm_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Comm_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Comm_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Comm_get_parent_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0);

int PMPI_Comm_group_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int PMPI_Comm_join_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1);

int PMPI_Comm_rank_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Comm_remote_group_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int PMPI_Comm_remote_size_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Comm_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int PMPI_Comm_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int PMPI_Comm_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Comm_size_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Comm_spawn_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[]);

int PMPI_Comm_spawn_multiple_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[]);

int PMPI_Comm_split_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3);

int PMPI_Comm_test_inter_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Dims_create_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Dist_graph_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph);

int PMPI_Dist_graph_create_adjacent_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph);

int PMPI_Dist_graph_neighbors_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[]);

int PMPI_Dist_graph_neighbors_count_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm, int * indegree, int * outdegree, int * weighted);

int PMPI_Errhandler_create_NewStack(PNMPI_modHandle_t stack , MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Errhandler_free_NewStack(PNMPI_modHandle_t stack , MPI_Errhandler * _pnmpi_arg_0);

int PMPI_Errhandler_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Errhandler_set_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int PMPI_Error_class_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Error_string_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Exscan_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_File_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_File_close_NewStack(PNMPI_modHandle_t stack , MPI_File * _pnmpi_arg_0);

int PMPI_File_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_File_delete_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);

int PMPI_File_get_amode_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_File_get_atomicity_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_File_get_byte_offset_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2);

int PMPI_File_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_File_get_group_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int PMPI_File_get_info_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);

int PMPI_File_get_position_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int PMPI_File_get_position_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int PMPI_File_get_size_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1);

int PMPI_File_get_type_extent_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int PMPI_File_get_view_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4);

int PMPI_File_iread_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int PMPI_File_iread_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);

int PMPI_File_iread_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int PMPI_File_iwrite_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int PMPI_File_iwrite_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5);

int PMPI_File_iwrite_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int PMPI_File_open_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4);

int PMPI_File_preallocate_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);

int PMPI_File_read_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_read_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_read_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int PMPI_File_read_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_read_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int PMPI_File_read_at_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int PMPI_File_read_at_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);

int PMPI_File_read_at_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_read_ordered_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_read_ordered_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int PMPI_File_read_ordered_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_read_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_seek_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);

int PMPI_File_seek_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2);

int PMPI_File_set_atomicity_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_File_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int PMPI_File_set_info_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1);

int PMPI_File_set_size_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1);

int PMPI_File_set_view_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5);

int PMPI_File_sync_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0);

int PMPI_File_write_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_write_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_write_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int PMPI_File_write_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_write_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int PMPI_File_write_at_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5);

int PMPI_File_write_at_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4);

int PMPI_File_write_at_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_write_ordered_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_File_write_ordered_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3);

int PMPI_File_write_ordered_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_File_write_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_Finalize_NewStack(PNMPI_modHandle_t stack );

int PMPI_Finalized_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Free_mem_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0);

int PMPI_Gather_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int PMPI_Gatherv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int PMPI_Get_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);

int PMPI_Get_address_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int PMPI_Get_count_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Get_elements_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Get_processor_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Get_version_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Graph_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int PMPI_Graphdims_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Graph_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Graph_map_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Graph_neighbors_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Graph_neighbors_count_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Grequest_complete_NewStack(PNMPI_modHandle_t stack , MPI_Request _pnmpi_arg_0);

int PMPI_Grequest_start_NewStack(PNMPI_modHandle_t stack , MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4);

int PMPI_Group_compare_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Group_difference_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int PMPI_Group_excl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);

int PMPI_Group_free_NewStack(PNMPI_modHandle_t stack , MPI_Group * _pnmpi_arg_0);

int PMPI_Group_incl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3);

int PMPI_Group_intersection_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int PMPI_Group_range_excl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);

int PMPI_Group_range_incl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3);

int PMPI_Group_rank_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Group_size_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Group_translate_ranks_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Group_union_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2);

int PMPI_Ibsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Info_create_NewStack(PNMPI_modHandle_t stack , MPI_Info * _pnmpi_arg_0);

int PMPI_Info_delete_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Info_dup_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1);

int PMPI_Info_free_NewStack(PNMPI_modHandle_t stack , MPI_Info * info);

int PMPI_Info_get_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Info_get_nkeys_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Info_get_nthkey_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2);

int PMPI_Info_get_valuelen_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Info_set_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2);

int PMPI_Init_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, char * * * _pnmpi_arg_1);

int PMPI_Initialized_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Init_thread_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Intercomm_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5);

int PMPI_Intercomm_merge_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2);

int PMPI_Iprobe_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_Irecv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Irsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Isend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Issend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Is_thread_main_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Keyval_create_NewStack(PNMPI_modHandle_t stack , MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int PMPI_Keyval_free_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Lookup_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int PMPI_Op_commutative_NewStack(PNMPI_modHandle_t stack , MPI_Op op, int * commute);

int PMPI_Op_create_NewStack(PNMPI_modHandle_t stack , MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2);

int PMPI_Open_port_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Op_free_NewStack(PNMPI_modHandle_t stack , MPI_Op * _pnmpi_arg_0);

int PMPI_Pack_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int PMPI_Pack_external_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6);

int PMPI_Pack_external_size_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3);

int PMPI_Pack_size_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Probe_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int PMPI_Publish_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int PMPI_Put_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7);

int PMPI_Query_thread_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Recv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6);

int PMPI_Recv_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Reduce_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int PMPI_Reduce_local_NewStack(PNMPI_modHandle_t stack , void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op);

int PMPI_Reduce_scatter_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Reduce_scatter_block_NewStack(PNMPI_modHandle_t stack , void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);

int PMPI_Register_datarep_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4);

int PMPI_Request_free_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0);

int PMPI_Request_get_status_NewStack(PNMPI_modHandle_t stack , MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_Rsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Rsend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Scan_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Scatter_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7);

int PMPI_Scatterv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8);

int PMPI_Send_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Send_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Sendrecv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11);

int PMPI_Sendrecv_replace_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8);

int PMPI_Ssend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5);

int PMPI_Ssend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6);

int PMPI_Start_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0);

int PMPI_Startall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1);

int PMPI_Status_set_cancelled_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Status_set_elements_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2);

int PMPI_Test_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_Testall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int PMPI_Testany_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_Test_cancelled_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Testsome_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_Topo_test_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Type_commit_NewStack(PNMPI_modHandle_t stack , MPI_Datatype * _pnmpi_arg_0);

int PMPI_Type_contiguous_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int PMPI_Type_create_darray_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9);

int PMPI_Type_create_f90_complex_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int PMPI_Type_create_f90_integer_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);

int PMPI_Type_create_f90_real_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int PMPI_Type_create_hindexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_create_hvector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_create_indexed_block_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int PMPI_Type_create_resized_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3);

int PMPI_Type_create_struct_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_create_subarray_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6);

int PMPI_Type_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Type_dup_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1);

int PMPI_Type_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int PMPI_Type_free_NewStack(PNMPI_modHandle_t stack , MPI_Datatype * _pnmpi_arg_0);

int PMPI_Type_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Type_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Type_get_contents_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[]);

int PMPI_Type_get_envelope_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4);

int PMPI_Type_get_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int PMPI_Type_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Type_get_true_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2);

int PMPI_Type_hindexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_hvector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_indexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_lb_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int PMPI_Type_match_size_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2);

int PMPI_Type_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int PMPI_Type_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Type_size_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Type_struct_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Type_ub_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1);

int PMPI_Type_vector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4);

int PMPI_Unpack_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6);

int PMPI_Unpack_external_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6);

int PMPI_Unpublish_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2);

int PMPI_Wait_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1);

int PMPI_Waitall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2);

int PMPI_Waitany_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3);

int PMPI_Waitsome_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4);

int PMPI_Win_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Win_complete_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0);

int PMPI_Win_create_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5);

int PMPI_Win_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Win_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3);

int PMPI_Win_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1);

int PMPI_Win_fence_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);

int PMPI_Win_free_NewStack(PNMPI_modHandle_t stack , MPI_Win * _pnmpi_arg_0);

int PMPI_Win_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0);

int PMPI_Win_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3);

int PMPI_Win_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1);

int PMPI_Win_get_group_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1);

int PMPI_Win_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2);

int PMPI_Win_lock_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3);

int PMPI_Win_post_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);

int PMPI_Win_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2);

int PMPI_Win_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1);

int PMPI_Win_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1);

int PMPI_Win_start_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2);

int PMPI_Win_test_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1);

int PMPI_Win_unlock_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1);

int PMPI_Win_wait_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0);

double PMPI_Wtick_NewStack(PNMPI_modHandle_t stack );

double PMPI_Wtime_NewStack(PNMPI_modHandle_t stack );


