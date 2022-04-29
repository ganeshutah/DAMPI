/* /uusoc/facility/res/uv/avo/dampi/trunk/pnmpi/wrapper/wrapper_f77.c */
/* DO NOT EDIT -- AUTOMATICALLY GENERATED! */
/* Timestamp: 16 January 2014 18:57  */
/* Location: proof posix */





/* --------------- MPI_Allgather --------------- */


extern void F77_MPI_ALLGATHER(void  *sendbuf, int  * sendcount, MPI_Fint  * sendtype, void  *recvbuf, int  * recvcount, MPI_Fint  * recvtype, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_sendtype;
MPI_Datatype c_recvtype;
MPI_Comm c_comm;

c_sendtype = MPI_Type_f2c(*sendtype);
c_recvtype = MPI_Type_f2c(*recvtype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Allgather at base level");

if (NOT_ACTIVATED(MPI_Allgather_MAJOR, MPI_Allgather_MINOR))
  rc=PMPI_Allgather( sendbuf,  * sendcount,  * &c_sendtype, recvbuf,  * recvcount,  * &c_recvtype,  * &c_comm );
else
  rc=Internal_XMPI_Allgather( sendbuf,  * sendcount,  * &c_sendtype, recvbuf,  * recvcount,  * &c_recvtype,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_allgather */



/* --------------- MPI_Allgatherv --------------- */


extern void F77_MPI_ALLGATHERV(void  *sendbuf, int  * sendcount, MPI_Fint  * sendtype, void  *recvbuf, int  *recvcounts, int  *displs, MPI_Fint  * recvtype, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_sendtype;
MPI_Datatype c_recvtype;
MPI_Comm c_comm;

c_sendtype = MPI_Type_f2c(*sendtype);
c_recvtype = MPI_Type_f2c(*recvtype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Allgatherv at base level");

if (NOT_ACTIVATED(MPI_Allgatherv_MAJOR, MPI_Allgatherv_MINOR))
  rc=PMPI_Allgatherv( sendbuf,  * sendcount,  * &c_sendtype, recvbuf, recvcounts, displs,  * &c_recvtype,  * &c_comm );
else
  rc=Internal_XMPI_Allgatherv( sendbuf,  * sendcount,  * &c_sendtype, recvbuf, recvcounts, displs,  * &c_recvtype,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_allgatherv */



/* --------------- MPI_Allreduce --------------- */


extern void F77_MPI_ALLREDUCE(void  *sendbuf, void  *recvbuf, int  * count, MPI_Fint  * datatype, MPI_Fint  * op, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Op c_op;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_op = MPI_Op_f2c(*op);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Allreduce at base level");

if (NOT_ACTIVATED(MPI_Allreduce_MAJOR, MPI_Allreduce_MINOR))
  rc=PMPI_Allreduce( sendbuf, recvbuf,  * count,  * &c_datatype,  * &c_op,  * &c_comm );
else
  rc=Internal_XMPI_Allreduce( sendbuf, recvbuf,  * count,  * &c_datatype,  * &c_op,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_allreduce */



/* --------------- MPI_Alltoall --------------- */


extern void F77_MPI_ALLTOALL(void  *sendbuf, int  * sendcount, MPI_Fint  * sendtype, void  *recvbuf, int  * recvcnt, MPI_Fint  * recvtype, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_sendtype;
MPI_Datatype c_recvtype;
MPI_Comm c_comm;

c_sendtype = MPI_Type_f2c(*sendtype);
c_recvtype = MPI_Type_f2c(*recvtype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Alltoall at base level");

if (NOT_ACTIVATED(MPI_Alltoall_MAJOR, MPI_Alltoall_MINOR))
  rc=PMPI_Alltoall( sendbuf,  * sendcount,  * &c_sendtype, recvbuf,  * recvcnt,  * &c_recvtype,  * &c_comm );
else
  rc=Internal_XMPI_Alltoall( sendbuf,  * sendcount,  * &c_sendtype, recvbuf,  * recvcnt,  * &c_recvtype,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_alltoall */



/* --------------- MPI_Alltoallv --------------- */


extern void F77_MPI_ALLTOALLV(void  *sendbuf, int  *sendcnts, int  *sdispls, MPI_Fint  * sendtype, void  *recvbuf, int  *recvcnts, int  *rdispls, MPI_Fint  * recvtype, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_sendtype;
MPI_Datatype c_recvtype;
MPI_Comm c_comm;

c_sendtype = MPI_Type_f2c(*sendtype);
c_recvtype = MPI_Type_f2c(*recvtype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Alltoallv at base level");

if (NOT_ACTIVATED(MPI_Alltoallv_MAJOR, MPI_Alltoallv_MINOR))
  rc=PMPI_Alltoallv( sendbuf, sendcnts, sdispls,  * &c_sendtype, recvbuf, recvcnts, rdispls,  * &c_recvtype,  * &c_comm );
else
  rc=Internal_XMPI_Alltoallv( sendbuf, sendcnts, sdispls,  * &c_sendtype, recvbuf, recvcnts, rdispls,  * &c_recvtype,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_alltoallv */



/* --------------- MPI_Attr_delete --------------- */


extern void F77_MPI_ATTR_DELETE(MPI_Fint  * comm, int  * keyval , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Attr_delete at base level");

if (NOT_ACTIVATED(MPI_Attr_delete_MAJOR, MPI_Attr_delete_MINOR))
  rc=PMPI_Attr_delete(  * &c_comm,  * keyval );
else
  rc=Internal_XMPI_Attr_delete(  * &c_comm,  * keyval );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_attr_delete */



/* --------------- MPI_Attr_get --------------- */


extern void F77_MPI_ATTR_GET(MPI_Fint  * comm, int  * keyval, void  *attr_value, int  *flag , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Attr_get at base level");

if (NOT_ACTIVATED(MPI_Attr_get_MAJOR, MPI_Attr_get_MINOR))
  rc=PMPI_Attr_get(  * &c_comm,  * keyval, attr_value, flag );
else
  rc=Internal_XMPI_Attr_get(  * &c_comm,  * keyval, attr_value, flag );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_attr_get */



/* --------------- MPI_Attr_put --------------- */


extern void F77_MPI_ATTR_PUT(MPI_Fint  * comm, int  * keyval, void  *attr_value , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Attr_put at base level");

if (NOT_ACTIVATED(MPI_Attr_put_MAJOR, MPI_Attr_put_MINOR))
  rc=PMPI_Attr_put(  * &c_comm,  * keyval, attr_value );
else
  rc=Internal_XMPI_Attr_put(  * &c_comm,  * keyval, attr_value );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_attr_put */



/* --------------- MPI_Barrier --------------- */


extern void F77_MPI_BARRIER(MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Barrier at base level");

if (NOT_ACTIVATED(MPI_Barrier_MAJOR, MPI_Barrier_MINOR))
  rc=PMPI_Barrier(  * &c_comm );
else
  rc=Internal_XMPI_Barrier(  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_barrier */



/* --------------- MPI_Bcast --------------- */


extern void F77_MPI_BCAST(void  *buffer, int  * count, MPI_Fint  * datatype, int  * root, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Bcast at base level");

if (NOT_ACTIVATED(MPI_Bcast_MAJOR, MPI_Bcast_MINOR))
  rc=PMPI_Bcast( buffer,  * count,  * &c_datatype,  * root,  * &c_comm );
else
  rc=Internal_XMPI_Bcast( buffer,  * count,  * &c_datatype,  * root,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_bcast */



/* --------------- MPI_Bsend --------------- */


extern void F77_MPI_BSEND(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Bsend at base level");

if (NOT_ACTIVATED(MPI_Bsend_MAJOR, MPI_Bsend_MINOR))
  rc=PMPI_Bsend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm );
else
  rc=Internal_XMPI_Bsend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_bsend */



/* --------------- MPI_Bsend_init --------------- */


extern void F77_MPI_BSEND_INIT(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm, MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;
MPI_Request c_request;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Bsend_init at base level");

if (NOT_ACTIVATED(MPI_Bsend_init_MAJOR, MPI_Bsend_init_MINOR))
  rc=PMPI_Bsend_init( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );
else
  rc=Internal_XMPI_Bsend_init( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_bsend_init */



/* --------------- MPI_Buffer_attach --------------- */


extern void F77_MPI_BUFFER_ATTACH(void  *buffer, int  * size , MPI_Fint *ierr){
int rc;


DBGPRINT3("Entering Old Fortran MPI_Buffer_attach at base level");

if (NOT_ACTIVATED(MPI_Buffer_attach_MAJOR, MPI_Buffer_attach_MINOR))
  rc=PMPI_Buffer_attach( buffer,  * size );
else
  rc=Internal_XMPI_Buffer_attach( buffer,  * size );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_buffer_attach */



/* --------------- MPI_Buffer_detach --------------- */


extern void F77_MPI_BUFFER_DETACH(void  *bufferptr, int  *size , MPI_Fint *ierr){
int rc;


DBGPRINT3("Entering Old Fortran MPI_Buffer_detach at base level");

if (NOT_ACTIVATED(MPI_Buffer_detach_MAJOR, MPI_Buffer_detach_MINOR))
  rc=PMPI_Buffer_detach( bufferptr, size );
else
  rc=Internal_XMPI_Buffer_detach( bufferptr, size );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_buffer_detach */



/* --------------- MPI_Cancel --------------- */


extern void F77_MPI_CANCEL(MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Request c_request;

c_request = MPI_Request_f2c(*request);

DBGPRINT3("Entering Old Fortran MPI_Cancel at base level");

if (NOT_ACTIVATED(MPI_Cancel_MAJOR, MPI_Cancel_MINOR))
  rc=PMPI_Cancel( &c_request );
else
  rc=Internal_XMPI_Cancel( &c_request );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_cancel */



/* --------------- MPI_Cart_coords --------------- */


extern void F77_MPI_CART_COORDS(MPI_Fint  * comm, int  * rank, int  * maxdims, int  *coords , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Cart_coords at base level");

if (NOT_ACTIVATED(MPI_Cart_coords_MAJOR, MPI_Cart_coords_MINOR))
  rc=PMPI_Cart_coords(  * &c_comm,  * rank,  * maxdims, coords );
else
  rc=Internal_XMPI_Cart_coords(  * &c_comm,  * rank,  * maxdims, coords );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_cart_coords */



/* --------------- MPI_Cart_create --------------- */


extern void F77_MPI_CART_CREATE(MPI_Fint  * comm_old, int  * ndims, int  *dims, int  *periods, int  * reorder, MPI_Fint  *comm_cart , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm_old;
MPI_Comm c_comm_cart;

c_comm_old = MPI_Comm_f2c(*comm_old);

DBGPRINT3("Entering Old Fortran MPI_Cart_create at base level");

if (NOT_ACTIVATED(MPI_Cart_create_MAJOR, MPI_Cart_create_MINOR))
  rc=PMPI_Cart_create(  * &c_comm_old,  * ndims, dims, periods,  * reorder, &c_comm_cart );
else
  rc=Internal_XMPI_Cart_create(  * &c_comm_old,  * ndims, dims, periods,  * reorder, &c_comm_cart );

*ierr = (MPI_Fint)rc;
*comm_cart = MPI_Comm_c2f(c_comm_cart);
return;
} /* mpi_cart_create */



/* --------------- MPI_Cart_get --------------- */


extern void F77_MPI_CART_GET(MPI_Fint  * comm, int  * maxdims, int  *dims, int  *periods, int  *coords , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Cart_get at base level");

if (NOT_ACTIVATED(MPI_Cart_get_MAJOR, MPI_Cart_get_MINOR))
  rc=PMPI_Cart_get(  * &c_comm,  * maxdims, dims, periods, coords );
else
  rc=Internal_XMPI_Cart_get(  * &c_comm,  * maxdims, dims, periods, coords );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_cart_get */



/* --------------- MPI_Cart_map --------------- */


extern void F77_MPI_CART_MAP(MPI_Fint  * comm_old, int  * ndims, int  *dims, int  *periods, int  *newrank , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm_old;

c_comm_old = MPI_Comm_f2c(*comm_old);

DBGPRINT3("Entering Old Fortran MPI_Cart_map at base level");

if (NOT_ACTIVATED(MPI_Cart_map_MAJOR, MPI_Cart_map_MINOR))
  rc=PMPI_Cart_map(  * &c_comm_old,  * ndims, dims, periods, newrank );
else
  rc=Internal_XMPI_Cart_map(  * &c_comm_old,  * ndims, dims, periods, newrank );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_cart_map */



/* --------------- MPI_Cart_rank --------------- */


extern void F77_MPI_CART_RANK(MPI_Fint  * comm, int  *coords, int  *rank , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Cart_rank at base level");

if (NOT_ACTIVATED(MPI_Cart_rank_MAJOR, MPI_Cart_rank_MINOR))
  rc=PMPI_Cart_rank(  * &c_comm, coords, rank );
else
  rc=Internal_XMPI_Cart_rank(  * &c_comm, coords, rank );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_cart_rank */



/* --------------- MPI_Cart_shift --------------- */


extern void F77_MPI_CART_SHIFT(MPI_Fint  * comm, int  * direction, int  * displ, int  *source, int  *dest , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Cart_shift at base level");

if (NOT_ACTIVATED(MPI_Cart_shift_MAJOR, MPI_Cart_shift_MINOR))
  rc=PMPI_Cart_shift(  * &c_comm,  * direction,  * displ, source, dest );
else
  rc=Internal_XMPI_Cart_shift(  * &c_comm,  * direction,  * displ, source, dest );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_cart_shift */



/* --------------- MPI_Cart_sub --------------- */


extern void F77_MPI_CART_SUB(MPI_Fint  * comm, int  *remain_dims, MPI_Fint  *comm_new , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;
MPI_Comm c_comm_new;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Cart_sub at base level");

if (NOT_ACTIVATED(MPI_Cart_sub_MAJOR, MPI_Cart_sub_MINOR))
  rc=PMPI_Cart_sub(  * &c_comm, remain_dims, &c_comm_new );
else
  rc=Internal_XMPI_Cart_sub(  * &c_comm, remain_dims, &c_comm_new );

*ierr = (MPI_Fint)rc;
*comm_new = MPI_Comm_c2f(c_comm_new);
return;
} /* mpi_cart_sub */



/* --------------- MPI_Cartdim_get --------------- */


extern void F77_MPI_CARTDIM_GET(MPI_Fint  * comm, int  *ndims , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Cartdim_get at base level");

if (NOT_ACTIVATED(MPI_Cartdim_get_MAJOR, MPI_Cartdim_get_MINOR))
  rc=PMPI_Cartdim_get(  * &c_comm, ndims );
else
  rc=Internal_XMPI_Cartdim_get(  * &c_comm, ndims );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_cartdim_get */



/* --------------- MPI_Comm_create --------------- */


extern void F77_MPI_COMM_CREATE(MPI_Fint  * comm, MPI_Fint  * group, MPI_Fint  *comm_out , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;
MPI_Group c_group;
MPI_Comm c_comm_out;

c_comm = MPI_Comm_f2c(*comm);
c_group = MPI_Group_f2c(*group);

DBGPRINT3("Entering Old Fortran MPI_Comm_create at base level");

if (NOT_ACTIVATED(MPI_Comm_create_MAJOR, MPI_Comm_create_MINOR))
  rc=PMPI_Comm_create(  * &c_comm,  * &c_group, &c_comm_out );
else
  rc=Internal_XMPI_Comm_create(  * &c_comm,  * &c_group, &c_comm_out );

*ierr = (MPI_Fint)rc;
*comm_out = MPI_Comm_c2f(c_comm_out);
return;
} /* mpi_comm_create */



/* --------------- MPI_Comm_dup --------------- */


extern void F77_MPI_COMM_DUP(MPI_Fint  * comm, MPI_Fint  *comm_out , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;
MPI_Comm c_comm_out;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Comm_dup at base level");

if (NOT_ACTIVATED(MPI_Comm_dup_MAJOR, MPI_Comm_dup_MINOR))
  rc=PMPI_Comm_dup(  * &c_comm, &c_comm_out );
else
  rc=Internal_XMPI_Comm_dup(  * &c_comm, &c_comm_out );

*ierr = (MPI_Fint)rc;
*comm_out = MPI_Comm_c2f(c_comm_out);
return;
} /* mpi_comm_dup */



/* --------------- MPI_Comm_free --------------- */


extern void F77_MPI_COMM_FREE(MPI_Fint  *commp , MPI_Fint *ierr){
int rc;
MPI_Comm c_commp;

c_commp = MPI_Comm_f2c(*commp);

DBGPRINT3("Entering Old Fortran MPI_Comm_free at base level");

if (NOT_ACTIVATED(MPI_Comm_free_MAJOR, MPI_Comm_free_MINOR))
  rc=PMPI_Comm_free( &c_commp );
else
  rc=Internal_XMPI_Comm_free( &c_commp );

*ierr = (MPI_Fint)rc;
*commp = MPI_Comm_c2f(c_commp);
return;
} /* mpi_comm_free */



/* --------------- MPI_Comm_group --------------- */


extern void F77_MPI_COMM_GROUP(MPI_Fint  * comm, MPI_Fint  *group , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;
MPI_Group c_group;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Comm_group at base level");

if (NOT_ACTIVATED(MPI_Comm_group_MAJOR, MPI_Comm_group_MINOR))
  rc=PMPI_Comm_group(  * &c_comm, &c_group );
else
  rc=Internal_XMPI_Comm_group(  * &c_comm, &c_group );

*ierr = (MPI_Fint)rc;
*group = MPI_Group_c2f(c_group);
return;
} /* mpi_comm_group */



/* --------------- MPI_Comm_remote_group --------------- */


extern void F77_MPI_COMM_REMOTE_GROUP(MPI_Fint  * comm, MPI_Fint  *group , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;
MPI_Group c_group;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Comm_remote_group at base level");

if (NOT_ACTIVATED(MPI_Comm_remote_group_MAJOR, MPI_Comm_remote_group_MINOR))
  rc=PMPI_Comm_remote_group(  * &c_comm, &c_group );
else
  rc=Internal_XMPI_Comm_remote_group(  * &c_comm, &c_group );

*ierr = (MPI_Fint)rc;
*group = MPI_Group_c2f(c_group);
return;
} /* mpi_comm_remote_group */



/* --------------- MPI_Comm_remote_size --------------- */


extern void F77_MPI_COMM_REMOTE_SIZE(MPI_Fint  * comm, int  *size , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Comm_remote_size at base level");

if (NOT_ACTIVATED(MPI_Comm_remote_size_MAJOR, MPI_Comm_remote_size_MINOR))
  rc=PMPI_Comm_remote_size(  * &c_comm, size );
else
  rc=Internal_XMPI_Comm_remote_size(  * &c_comm, size );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_comm_remote_size */



/* --------------- MPI_Comm_split --------------- */


extern void F77_MPI_COMM_SPLIT(MPI_Fint  * comm, int  * color, int  * key, MPI_Fint  *comm_out , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;
MPI_Comm c_comm_out;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Comm_split at base level");

if (NOT_ACTIVATED(MPI_Comm_split_MAJOR, MPI_Comm_split_MINOR))
  rc=PMPI_Comm_split(  * &c_comm,  * color,  * key, &c_comm_out );
else
  rc=Internal_XMPI_Comm_split(  * &c_comm,  * color,  * key, &c_comm_out );

*ierr = (MPI_Fint)rc;
*comm_out = MPI_Comm_c2f(c_comm_out);
return;
} /* mpi_comm_split */



/* --------------- MPI_Comm_test_inter --------------- */


extern void F77_MPI_COMM_TEST_INTER(MPI_Fint  * comm, int  *flag , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Comm_test_inter at base level");

if (NOT_ACTIVATED(MPI_Comm_test_inter_MAJOR, MPI_Comm_test_inter_MINOR))
  rc=PMPI_Comm_test_inter(  * &c_comm, flag );
else
  rc=Internal_XMPI_Comm_test_inter(  * &c_comm, flag );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_comm_test_inter */



/* --------------- MPI_Dims_create --------------- */


extern void F77_MPI_DIMS_CREATE(int  * nnodes, int  * ndims, int  *dims , MPI_Fint *ierr){
int rc;


DBGPRINT3("Entering Old Fortran MPI_Dims_create at base level");

if (NOT_ACTIVATED(MPI_Dims_create_MAJOR, MPI_Dims_create_MINOR))
  rc=PMPI_Dims_create(  * nnodes,  * ndims, dims );
else
  rc=Internal_XMPI_Dims_create(  * nnodes,  * ndims, dims );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_dims_create */



/* --------------- MPI_Error_class --------------- */


extern void F77_MPI_ERROR_CLASS(int  * errorcode, int  *errorclass , MPI_Fint *ierr){
int rc;


DBGPRINT3("Entering Old Fortran MPI_Error_class at base level");

if (NOT_ACTIVATED(MPI_Error_class_MAJOR, MPI_Error_class_MINOR))
  rc=PMPI_Error_class(  * errorcode, errorclass );
else
  rc=Internal_XMPI_Error_class(  * errorcode, errorclass );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_error_class */



/* --------------- MPI_File_close --------------- */


extern void F77_MPI_FILE_CLOSE(MPI_Fint  *fh , MPI_Fint *ierr){
int rc;
MPI_File c_fh;

c_fh = MPI_File_f2c(*fh);

DBGPRINT3("Entering Old Fortran MPI_File_close at base level");

if (NOT_ACTIVATED(MPI_File_close_MAJOR, MPI_File_close_MINOR))
  rc=PMPI_File_close( &c_fh );
else
  rc=Internal_XMPI_File_close( &c_fh );

*ierr = (MPI_Fint)rc;
*fh = MPI_File_c2f(c_fh);
return;
} /* mpi_file_close */



/* --------------- MPI_File_open --------------- */


extern void F77_MPI_FILE_OPEN(MPI_Fint  * comm, char  *filename, int  * amode, MPI_Fint  * info, MPI_Fint  *fh , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;
MPI_Info c_info;
MPI_File c_fh;

c_comm = MPI_Comm_f2c(*comm);
c_info = MPI_Info_f2c(*info);

DBGPRINT3("Entering Old Fortran MPI_File_open at base level");

if (NOT_ACTIVATED(MPI_File_open_MAJOR, MPI_File_open_MINOR))
  rc=PMPI_File_open(  * &c_comm, filename,  * amode,  * &c_info, &c_fh );
else
  rc=Internal_XMPI_File_open(  * &c_comm, filename,  * amode,  * &c_info, &c_fh );

*ierr = (MPI_Fint)rc;
*fh = MPI_File_c2f(c_fh);
return;
} /* mpi_file_open */



/* --------------- MPI_File_preallocate --------------- */


extern void F77_MPI_FILE_PREALLOCATE(MPI_Fint  * fh, MPI_Offset  * size , MPI_Fint *ierr){
int rc;
MPI_File c_fh;

c_fh = MPI_File_f2c(*fh);

DBGPRINT3("Entering Old Fortran MPI_File_preallocate at base level");

if (NOT_ACTIVATED(MPI_File_preallocate_MAJOR, MPI_File_preallocate_MINOR))
  rc=PMPI_File_preallocate(  * &c_fh,  * size );
else
  rc=Internal_XMPI_File_preallocate(  * &c_fh,  * size );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_file_preallocate */



/* --------------- MPI_File_read --------------- */


extern void F77_MPI_FILE_READ(MPI_Fint  * fh, void  *buf, int  * count, MPI_Fint  * datatype, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_File c_fh;
MPI_Datatype c_datatype;

c_fh = MPI_File_f2c(*fh);
c_datatype = MPI_Type_f2c(*datatype);

DBGPRINT3("Entering Old Fortran MPI_File_read at base level");

if (NOT_ACTIVATED(MPI_File_read_MAJOR, MPI_File_read_MINOR))
  rc=PMPI_File_read(  * &c_fh, buf,  * count,  * &c_datatype, status );
else
  rc=Internal_XMPI_File_read(  * &c_fh, buf,  * count,  * &c_datatype, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_file_read */



/* --------------- MPI_File_read_all --------------- */


extern void F77_MPI_FILE_READ_ALL(MPI_Fint  * fh, void  *buf, int  * count, MPI_Fint  * datatype, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_File c_fh;
MPI_Datatype c_datatype;

c_fh = MPI_File_f2c(*fh);
c_datatype = MPI_Type_f2c(*datatype);

DBGPRINT3("Entering Old Fortran MPI_File_read_all at base level");

if (NOT_ACTIVATED(MPI_File_read_all_MAJOR, MPI_File_read_all_MINOR))
  rc=PMPI_File_read_all(  * &c_fh, buf,  * count,  * &c_datatype, status );
else
  rc=Internal_XMPI_File_read_all(  * &c_fh, buf,  * count,  * &c_datatype, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_file_read_all */



/* --------------- MPI_File_read_at --------------- */


extern void F77_MPI_FILE_READ_AT(MPI_Fint  * fh, MPI_Offset  * offset, void  *buf, int  * count, MPI_Fint  * datatype, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_File c_fh;
MPI_Datatype c_datatype;

c_fh = MPI_File_f2c(*fh);
c_datatype = MPI_Type_f2c(*datatype);

DBGPRINT3("Entering Old Fortran MPI_File_read_at at base level");

if (NOT_ACTIVATED(MPI_File_read_at_MAJOR, MPI_File_read_at_MINOR))
  rc=PMPI_File_read_at(  * &c_fh,  * offset, buf,  * count,  * &c_datatype, status );
else
  rc=Internal_XMPI_File_read_at(  * &c_fh,  * offset, buf,  * count,  * &c_datatype, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_file_read_at */



/* --------------- MPI_File_seek --------------- */


extern void F77_MPI_FILE_SEEK(MPI_Fint  * fh, MPI_Offset  * offset, int  * whence , MPI_Fint *ierr){
int rc;
MPI_File c_fh;

c_fh = MPI_File_f2c(*fh);

DBGPRINT3("Entering Old Fortran MPI_File_seek at base level");

if (NOT_ACTIVATED(MPI_File_seek_MAJOR, MPI_File_seek_MINOR))
  rc=PMPI_File_seek(  * &c_fh,  * offset,  * whence );
else
  rc=Internal_XMPI_File_seek(  * &c_fh,  * offset,  * whence );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_file_seek */



/* --------------- MPI_File_set_view --------------- */


extern void F77_MPI_FILE_SET_VIEW(MPI_Fint  * fh, MPI_Offset  * disp, MPI_Fint  * etype, MPI_Fint  * filetype, char  *datarep, MPI_Fint  * info , MPI_Fint *ierr){
int rc;
MPI_File c_fh;
MPI_Datatype c_etype;
MPI_Datatype c_filetype;
MPI_Info c_info;

c_fh = MPI_File_f2c(*fh);
c_etype = MPI_Type_f2c(*etype);
c_filetype = MPI_Type_f2c(*filetype);
c_info = MPI_Info_f2c(*info);

DBGPRINT3("Entering Old Fortran MPI_File_set_view at base level");

if (NOT_ACTIVATED(MPI_File_set_view_MAJOR, MPI_File_set_view_MINOR))
  rc=PMPI_File_set_view(  * &c_fh,  * disp,  * &c_etype,  * &c_filetype, datarep,  * &c_info );
else
  rc=Internal_XMPI_File_set_view(  * &c_fh,  * disp,  * &c_etype,  * &c_filetype, datarep,  * &c_info );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_file_set_view */



/* --------------- MPI_File_write --------------- */


extern void F77_MPI_FILE_WRITE(MPI_Fint  * fh, void  *buf, int  * count, MPI_Fint  * datatype, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_File c_fh;
MPI_Datatype c_datatype;

c_fh = MPI_File_f2c(*fh);
c_datatype = MPI_Type_f2c(*datatype);

DBGPRINT3("Entering Old Fortran MPI_File_write at base level");

if (NOT_ACTIVATED(MPI_File_write_MAJOR, MPI_File_write_MINOR))
  rc=PMPI_File_write(  * &c_fh, buf,  * count,  * &c_datatype, status );
else
  rc=Internal_XMPI_File_write(  * &c_fh, buf,  * count,  * &c_datatype, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_file_write */



/* --------------- MPI_File_write_all --------------- */


extern void F77_MPI_FILE_WRITE_ALL(MPI_Fint  * fh, void  *buf, int  * count, MPI_Fint  * datatype, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_File c_fh;
MPI_Datatype c_datatype;

c_fh = MPI_File_f2c(*fh);
c_datatype = MPI_Type_f2c(*datatype);

DBGPRINT3("Entering Old Fortran MPI_File_write_all at base level");

if (NOT_ACTIVATED(MPI_File_write_all_MAJOR, MPI_File_write_all_MINOR))
  rc=PMPI_File_write_all(  * &c_fh, buf,  * count,  * &c_datatype, status );
else
  rc=Internal_XMPI_File_write_all(  * &c_fh, buf,  * count,  * &c_datatype, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_file_write_all */



/* --------------- MPI_File_write_at --------------- */


extern void F77_MPI_FILE_WRITE_AT(MPI_Fint  * fh, MPI_Offset  * offset, void  *buf, int  * count, MPI_Fint  * datatype, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_File c_fh;
MPI_Datatype c_datatype;

c_fh = MPI_File_f2c(*fh);
c_datatype = MPI_Type_f2c(*datatype);

DBGPRINT3("Entering Old Fortran MPI_File_write_at at base level");

if (NOT_ACTIVATED(MPI_File_write_at_MAJOR, MPI_File_write_at_MINOR))
  rc=PMPI_File_write_at(  * &c_fh,  * offset, buf,  * count,  * &c_datatype, status );
else
  rc=Internal_XMPI_File_write_at(  * &c_fh,  * offset, buf,  * count,  * &c_datatype, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_file_write_at */



/* --------------- MPI_Gather --------------- */


extern void F77_MPI_GATHER(void  *sendbuf, int  * sendcnt, MPI_Fint  * sendtype, void  *recvbuf, int  * recvcount, MPI_Fint  * recvtype, int  * root, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_sendtype;
MPI_Datatype c_recvtype;
MPI_Comm c_comm;

c_sendtype = MPI_Type_f2c(*sendtype);
c_recvtype = MPI_Type_f2c(*recvtype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Gather at base level");

if (NOT_ACTIVATED(MPI_Gather_MAJOR, MPI_Gather_MINOR))
  rc=PMPI_Gather( sendbuf,  * sendcnt,  * &c_sendtype, recvbuf,  * recvcount,  * &c_recvtype,  * root,  * &c_comm );
else
  rc=Internal_XMPI_Gather( sendbuf,  * sendcnt,  * &c_sendtype, recvbuf,  * recvcount,  * &c_recvtype,  * root,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_gather */



/* --------------- MPI_Gatherv --------------- */


extern void F77_MPI_GATHERV(void  *sendbuf, int  * sendcnt, MPI_Fint  * sendtype, void  *recvbuf, int  *recvcnts, int  *displs, MPI_Fint  * recvtype, int  * root, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_sendtype;
MPI_Datatype c_recvtype;
MPI_Comm c_comm;

c_sendtype = MPI_Type_f2c(*sendtype);
c_recvtype = MPI_Type_f2c(*recvtype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Gatherv at base level");

if (NOT_ACTIVATED(MPI_Gatherv_MAJOR, MPI_Gatherv_MINOR))
  rc=PMPI_Gatherv( sendbuf,  * sendcnt,  * &c_sendtype, recvbuf, recvcnts, displs,  * &c_recvtype,  * root,  * &c_comm );
else
  rc=Internal_XMPI_Gatherv( sendbuf,  * sendcnt,  * &c_sendtype, recvbuf, recvcnts, displs,  * &c_recvtype,  * root,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_gatherv */



/* --------------- MPI_Graph_create --------------- */


extern void F77_MPI_GRAPH_CREATE(MPI_Fint  * comm_old, int  * nnodes, int  *index, int  *edges, int  * reorder, MPI_Fint  *comm_graph , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm_old;
MPI_Comm c_comm_graph;

c_comm_old = MPI_Comm_f2c(*comm_old);

DBGPRINT3("Entering Old Fortran MPI_Graph_create at base level");

if (NOT_ACTIVATED(MPI_Graph_create_MAJOR, MPI_Graph_create_MINOR))
  rc=PMPI_Graph_create(  * &c_comm_old,  * nnodes, index, edges,  * reorder, &c_comm_graph );
else
  rc=Internal_XMPI_Graph_create(  * &c_comm_old,  * nnodes, index, edges,  * reorder, &c_comm_graph );

*ierr = (MPI_Fint)rc;
*comm_graph = MPI_Comm_c2f(c_comm_graph);
return;
} /* mpi_graph_create */



/* --------------- MPI_Graph_get --------------- */


extern void F77_MPI_GRAPH_GET(MPI_Fint  * comm, int  * maxindex, int  * maxedges, int  *index, int  *edges , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Graph_get at base level");

if (NOT_ACTIVATED(MPI_Graph_get_MAJOR, MPI_Graph_get_MINOR))
  rc=PMPI_Graph_get(  * &c_comm,  * maxindex,  * maxedges, index, edges );
else
  rc=Internal_XMPI_Graph_get(  * &c_comm,  * maxindex,  * maxedges, index, edges );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_graph_get */



/* --------------- MPI_Graph_map --------------- */


extern void F77_MPI_GRAPH_MAP(MPI_Fint  * comm_old, int  * nnodes, int  *index, int  *edges, int  *newrank , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm_old;

c_comm_old = MPI_Comm_f2c(*comm_old);

DBGPRINT3("Entering Old Fortran MPI_Graph_map at base level");

if (NOT_ACTIVATED(MPI_Graph_map_MAJOR, MPI_Graph_map_MINOR))
  rc=PMPI_Graph_map(  * &c_comm_old,  * nnodes, index, edges, newrank );
else
  rc=Internal_XMPI_Graph_map(  * &c_comm_old,  * nnodes, index, edges, newrank );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_graph_map */



/* --------------- MPI_Graph_neighbors --------------- */


extern void F77_MPI_GRAPH_NEIGHBORS(MPI_Fint  * comm, int  * rank, int  * maxneighbors, int  *neighbors , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Graph_neighbors at base level");

if (NOT_ACTIVATED(MPI_Graph_neighbors_MAJOR, MPI_Graph_neighbors_MINOR))
  rc=PMPI_Graph_neighbors(  * &c_comm,  * rank,  * maxneighbors, neighbors );
else
  rc=Internal_XMPI_Graph_neighbors(  * &c_comm,  * rank,  * maxneighbors, neighbors );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_graph_neighbors */



/* --------------- MPI_Graph_neighbors_count --------------- */


extern void F77_MPI_GRAPH_NEIGHBORS_COUNT(MPI_Fint  * comm, int  * rank, int  *nneighbors , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Graph_neighbors_count at base level");

if (NOT_ACTIVATED(MPI_Graph_neighbors_count_MAJOR, MPI_Graph_neighbors_count_MINOR))
  rc=PMPI_Graph_neighbors_count(  * &c_comm,  * rank, nneighbors );
else
  rc=Internal_XMPI_Graph_neighbors_count(  * &c_comm,  * rank, nneighbors );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_graph_neighbors_count */



/* --------------- MPI_Graphdims_get --------------- */


extern void F77_MPI_GRAPHDIMS_GET(MPI_Fint  * comm, int  *nnodes, int  *nedges , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Graphdims_get at base level");

if (NOT_ACTIVATED(MPI_Graphdims_get_MAJOR, MPI_Graphdims_get_MINOR))
  rc=PMPI_Graphdims_get(  * &c_comm, nnodes, nedges );
else
  rc=Internal_XMPI_Graphdims_get(  * &c_comm, nnodes, nedges );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_graphdims_get */



/* --------------- MPI_Group_compare --------------- */


extern void F77_MPI_GROUP_COMPARE(MPI_Fint  * group1, MPI_Fint  * group2, int  *result , MPI_Fint *ierr){
int rc;
MPI_Group c_group1;
MPI_Group c_group2;

c_group1 = MPI_Group_f2c(*group1);
c_group2 = MPI_Group_f2c(*group2);

DBGPRINT3("Entering Old Fortran MPI_Group_compare at base level");

if (NOT_ACTIVATED(MPI_Group_compare_MAJOR, MPI_Group_compare_MINOR))
  rc=PMPI_Group_compare(  * &c_group1,  * &c_group2, result );
else
  rc=Internal_XMPI_Group_compare(  * &c_group1,  * &c_group2, result );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_group_compare */



/* --------------- MPI_Group_difference --------------- */


extern void F77_MPI_GROUP_DIFFERENCE(MPI_Fint  * group1, MPI_Fint  * group2, MPI_Fint  *group_out , MPI_Fint *ierr){
int rc;
MPI_Group c_group1;
MPI_Group c_group2;
MPI_Group c_group_out;

c_group1 = MPI_Group_f2c(*group1);
c_group2 = MPI_Group_f2c(*group2);

DBGPRINT3("Entering Old Fortran MPI_Group_difference at base level");

if (NOT_ACTIVATED(MPI_Group_difference_MAJOR, MPI_Group_difference_MINOR))
  rc=PMPI_Group_difference(  * &c_group1,  * &c_group2, &c_group_out );
else
  rc=Internal_XMPI_Group_difference(  * &c_group1,  * &c_group2, &c_group_out );

*ierr = (MPI_Fint)rc;
*group_out = MPI_Group_c2f(c_group_out);
return;
} /* mpi_group_difference */



/* --------------- MPI_Group_excl --------------- */


extern void F77_MPI_GROUP_EXCL(MPI_Fint  * group, int  * n, int  *ranks, MPI_Fint  *newgroup , MPI_Fint *ierr){
int rc;
MPI_Group c_group;
MPI_Group c_newgroup;

c_group = MPI_Group_f2c(*group);

DBGPRINT3("Entering Old Fortran MPI_Group_excl at base level");

if (NOT_ACTIVATED(MPI_Group_excl_MAJOR, MPI_Group_excl_MINOR))
  rc=PMPI_Group_excl(  * &c_group,  * n, ranks, &c_newgroup );
else
  rc=Internal_XMPI_Group_excl(  * &c_group,  * n, ranks, &c_newgroup );

*ierr = (MPI_Fint)rc;
*newgroup = MPI_Group_c2f(c_newgroup);
return;
} /* mpi_group_excl */



/* --------------- MPI_Group_free --------------- */


extern void F77_MPI_GROUP_FREE(MPI_Fint  *group , MPI_Fint *ierr){
int rc;
MPI_Group c_group;

c_group = MPI_Group_f2c(*group);

DBGPRINT3("Entering Old Fortran MPI_Group_free at base level");

if (NOT_ACTIVATED(MPI_Group_free_MAJOR, MPI_Group_free_MINOR))
  rc=PMPI_Group_free( &c_group );
else
  rc=Internal_XMPI_Group_free( &c_group );

*ierr = (MPI_Fint)rc;
*group = MPI_Group_c2f(c_group);
return;
} /* mpi_group_free */



/* --------------- MPI_Group_incl --------------- */


extern void F77_MPI_GROUP_INCL(MPI_Fint  * group, int  * n, int  *ranks, MPI_Fint  *group_out , MPI_Fint *ierr){
int rc;
MPI_Group c_group;
MPI_Group c_group_out;

c_group = MPI_Group_f2c(*group);

DBGPRINT3("Entering Old Fortran MPI_Group_incl at base level");

if (NOT_ACTIVATED(MPI_Group_incl_MAJOR, MPI_Group_incl_MINOR))
  rc=PMPI_Group_incl(  * &c_group,  * n, ranks, &c_group_out );
else
  rc=Internal_XMPI_Group_incl(  * &c_group,  * n, ranks, &c_group_out );

*ierr = (MPI_Fint)rc;
*group_out = MPI_Group_c2f(c_group_out);
return;
} /* mpi_group_incl */



/* --------------- MPI_Group_intersection --------------- */


extern void F77_MPI_GROUP_INTERSECTION(MPI_Fint  * group1, MPI_Fint  * group2, MPI_Fint  *group_out , MPI_Fint *ierr){
int rc;
MPI_Group c_group1;
MPI_Group c_group2;
MPI_Group c_group_out;

c_group1 = MPI_Group_f2c(*group1);
c_group2 = MPI_Group_f2c(*group2);

DBGPRINT3("Entering Old Fortran MPI_Group_intersection at base level");

if (NOT_ACTIVATED(MPI_Group_intersection_MAJOR, MPI_Group_intersection_MINOR))
  rc=PMPI_Group_intersection(  * &c_group1,  * &c_group2, &c_group_out );
else
  rc=Internal_XMPI_Group_intersection(  * &c_group1,  * &c_group2, &c_group_out );

*ierr = (MPI_Fint)rc;
*group_out = MPI_Group_c2f(c_group_out);
return;
} /* mpi_group_intersection */



/* --------------- MPI_Group_translate_ranks --------------- */


extern void F77_MPI_GROUP_TRANSLATE_RANKS(MPI_Fint  * group_a, int  * n, int  *ranks_a, MPI_Fint  * group_b, int  *ranks_b , MPI_Fint *ierr){
int rc;
MPI_Group c_group_a;
MPI_Group c_group_b;

c_group_a = MPI_Group_f2c(*group_a);
c_group_b = MPI_Group_f2c(*group_b);

DBGPRINT3("Entering Old Fortran MPI_Group_translate_ranks at base level");

if (NOT_ACTIVATED(MPI_Group_translate_ranks_MAJOR, MPI_Group_translate_ranks_MINOR))
  rc=PMPI_Group_translate_ranks(  * &c_group_a,  * n, ranks_a,  * &c_group_b, ranks_b );
else
  rc=Internal_XMPI_Group_translate_ranks(  * &c_group_a,  * n, ranks_a,  * &c_group_b, ranks_b );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_group_translate_ranks */



/* --------------- MPI_Group_union --------------- */


extern void F77_MPI_GROUP_UNION(MPI_Fint  * group1, MPI_Fint  * group2, MPI_Fint  *group_out , MPI_Fint *ierr){
int rc;
MPI_Group c_group1;
MPI_Group c_group2;
MPI_Group c_group_out;

c_group1 = MPI_Group_f2c(*group1);
c_group2 = MPI_Group_f2c(*group2);

DBGPRINT3("Entering Old Fortran MPI_Group_union at base level");

if (NOT_ACTIVATED(MPI_Group_union_MAJOR, MPI_Group_union_MINOR))
  rc=PMPI_Group_union(  * &c_group1,  * &c_group2, &c_group_out );
else
  rc=Internal_XMPI_Group_union(  * &c_group1,  * &c_group2, &c_group_out );

*ierr = (MPI_Fint)rc;
*group_out = MPI_Group_c2f(c_group_out);
return;
} /* mpi_group_union */



/* --------------- MPI_Ibsend --------------- */


extern void F77_MPI_IBSEND(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm, MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;
MPI_Request c_request;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Ibsend at base level");

if (NOT_ACTIVATED(MPI_Ibsend_MAJOR, MPI_Ibsend_MINOR))
  rc=PMPI_Ibsend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );
else
  rc=Internal_XMPI_Ibsend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_ibsend */



/* --------------- MPI_Intercomm_create --------------- */


extern void F77_MPI_INTERCOMM_CREATE(MPI_Fint  * local_comm, int  * local_leader, MPI_Fint  * peer_comm, int  * remote_leader, int  * tag, MPI_Fint  *comm_out , MPI_Fint *ierr){
int rc;
MPI_Comm c_local_comm;
MPI_Comm c_peer_comm;
MPI_Comm c_comm_out;

c_local_comm = MPI_Comm_f2c(*local_comm);
c_peer_comm = MPI_Comm_f2c(*peer_comm);

DBGPRINT3("Entering Old Fortran MPI_Intercomm_create at base level");

if (NOT_ACTIVATED(MPI_Intercomm_create_MAJOR, MPI_Intercomm_create_MINOR))
  rc=PMPI_Intercomm_create(  * &c_local_comm,  * local_leader,  * &c_peer_comm,  * remote_leader,  * tag, &c_comm_out );
else
  rc=Internal_XMPI_Intercomm_create(  * &c_local_comm,  * local_leader,  * &c_peer_comm,  * remote_leader,  * tag, &c_comm_out );

*ierr = (MPI_Fint)rc;
*comm_out = MPI_Comm_c2f(c_comm_out);
return;
} /* mpi_intercomm_create */



/* --------------- MPI_Intercomm_merge --------------- */


extern void F77_MPI_INTERCOMM_MERGE(MPI_Fint  * comm, int  * high, MPI_Fint  *comm_out , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;
MPI_Comm c_comm_out;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Intercomm_merge at base level");

if (NOT_ACTIVATED(MPI_Intercomm_merge_MAJOR, MPI_Intercomm_merge_MINOR))
  rc=PMPI_Intercomm_merge(  * &c_comm,  * high, &c_comm_out );
else
  rc=Internal_XMPI_Intercomm_merge(  * &c_comm,  * high, &c_comm_out );

*ierr = (MPI_Fint)rc;
*comm_out = MPI_Comm_c2f(c_comm_out);
return;
} /* mpi_intercomm_merge */



/* --------------- MPI_Iprobe --------------- */


extern void F77_MPI_IPROBE(int  * source, int  * tag, MPI_Fint  * comm, int  *flag, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Iprobe at base level");

if (NOT_ACTIVATED(MPI_Iprobe_MAJOR, MPI_Iprobe_MINOR))
  rc=PMPI_Iprobe(  * source,  * tag,  * &c_comm, flag, status );
else
  rc=Internal_XMPI_Iprobe(  * source,  * tag,  * &c_comm, flag, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_iprobe */



/* --------------- MPI_Irecv --------------- */


extern void F77_MPI_IRECV(void  *buf, int  * count, MPI_Fint  * datatype, int  * source, int  * tag, MPI_Fint  * comm, MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;
MPI_Request c_request;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Irecv at base level");

if (NOT_ACTIVATED(MPI_Irecv_MAJOR, MPI_Irecv_MINOR))
  rc=PMPI_Irecv( buf,  * count,  * &c_datatype,  * source,  * tag,  * &c_comm, &c_request );
else
  rc=Internal_XMPI_Irecv( buf,  * count,  * &c_datatype,  * source,  * tag,  * &c_comm, &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_irecv */



/* --------------- MPI_Irsend --------------- */


extern void F77_MPI_IRSEND(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm, MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;
MPI_Request c_request;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Irsend at base level");

if (NOT_ACTIVATED(MPI_Irsend_MAJOR, MPI_Irsend_MINOR))
  rc=PMPI_Irsend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );
else
  rc=Internal_XMPI_Irsend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_irsend */



/* --------------- MPI_Isend --------------- */


extern void F77_MPI_ISEND(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm, MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;
MPI_Request c_request;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Isend at base level");

if (NOT_ACTIVATED(MPI_Isend_MAJOR, MPI_Isend_MINOR))
  rc=PMPI_Isend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );
else
  rc=Internal_XMPI_Isend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_isend */



/* --------------- MPI_Issend --------------- */


extern void F77_MPI_ISSEND(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm, MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;
MPI_Request c_request;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Issend at base level");

if (NOT_ACTIVATED(MPI_Issend_MAJOR, MPI_Issend_MINOR))
  rc=PMPI_Issend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );
else
  rc=Internal_XMPI_Issend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_issend */



/* --------------- MPI_Keyval_create --------------- */


extern void F77_MPI_KEYVAL_CREATE(MPI_Copy_function  *copy_fn, MPI_Delete_function  *delete_fn, int  *keyval, void  *extra_state , MPI_Fint *ierr){
int rc;


DBGPRINT3("Entering Old Fortran MPI_Keyval_create at base level");

if (NOT_ACTIVATED(MPI_Keyval_create_MAJOR, MPI_Keyval_create_MINOR))
  rc=PMPI_Keyval_create( copy_fn, delete_fn, keyval, extra_state );
else
  rc=Internal_XMPI_Keyval_create( copy_fn, delete_fn, keyval, extra_state );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_keyval_create */



/* --------------- MPI_Keyval_free --------------- */


extern void F77_MPI_KEYVAL_FREE(int  *keyval , MPI_Fint *ierr){
int rc;


DBGPRINT3("Entering Old Fortran MPI_Keyval_free at base level");

if (NOT_ACTIVATED(MPI_Keyval_free_MAJOR, MPI_Keyval_free_MINOR))
  rc=PMPI_Keyval_free( keyval );
else
  rc=Internal_XMPI_Keyval_free( keyval );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_keyval_free */



/* --------------- MPI_Pack --------------- */


extern void F77_MPI_PACK(void  *inbuf, int  * incount, MPI_Fint  * datatype, void  *outbuf, int  * count, int  *position, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Pack at base level");

if (NOT_ACTIVATED(MPI_Pack_MAJOR, MPI_Pack_MINOR))
  rc=PMPI_Pack( inbuf,  * incount,  * &c_datatype, outbuf,  * count, position,  * &c_comm );
else
  rc=Internal_XMPI_Pack( inbuf,  * incount,  * &c_datatype, outbuf,  * count, position,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_pack */



/* --------------- MPI_Probe --------------- */


extern void F77_MPI_PROBE(int  * source, int  * tag, MPI_Fint  * comm, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Probe at base level");

if (NOT_ACTIVATED(MPI_Probe_MAJOR, MPI_Probe_MINOR))
  rc=PMPI_Probe(  * source,  * tag,  * &c_comm, status );
else
  rc=Internal_XMPI_Probe(  * source,  * tag,  * &c_comm, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_probe */



/* --------------- MPI_Recv --------------- */


extern void F77_MPI_RECV(void  *buf, int  * count, MPI_Fint  * datatype, int  * source, int  * tag, MPI_Fint  * comm, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Recv at base level");

if (NOT_ACTIVATED(MPI_Recv_MAJOR, MPI_Recv_MINOR))
  rc=PMPI_Recv( buf,  * count,  * &c_datatype,  * source,  * tag,  * &c_comm, status );
else
  rc=Internal_XMPI_Recv( buf,  * count,  * &c_datatype,  * source,  * tag,  * &c_comm, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_recv */



/* --------------- MPI_Recv_init --------------- */


extern void F77_MPI_RECV_INIT(void  *buf, int  * count, MPI_Fint  * datatype, int  * source, int  * tag, MPI_Fint  * comm, MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;
MPI_Request c_request;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Recv_init at base level");

if (NOT_ACTIVATED(MPI_Recv_init_MAJOR, MPI_Recv_init_MINOR))
  rc=PMPI_Recv_init( buf,  * count,  * &c_datatype,  * source,  * tag,  * &c_comm, &c_request );
else
  rc=Internal_XMPI_Recv_init( buf,  * count,  * &c_datatype,  * source,  * tag,  * &c_comm, &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_recv_init */



/* --------------- MPI_Reduce --------------- */


extern void F77_MPI_REDUCE(void  *sendbuf, void  *recvbuf, int  * count, MPI_Fint  * datatype, MPI_Fint  * op, int  * root, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Op c_op;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_op = MPI_Op_f2c(*op);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Reduce at base level");

if (NOT_ACTIVATED(MPI_Reduce_MAJOR, MPI_Reduce_MINOR))
  rc=PMPI_Reduce( sendbuf, recvbuf,  * count,  * &c_datatype,  * &c_op,  * root,  * &c_comm );
else
  rc=Internal_XMPI_Reduce( sendbuf, recvbuf,  * count,  * &c_datatype,  * &c_op,  * root,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_reduce */



/* --------------- MPI_Reduce_scatter --------------- */


extern void F77_MPI_REDUCE_SCATTER(void  *sendbuf, void  *recvbuf, int  *recvcnts, MPI_Fint  * datatype, MPI_Fint  * op, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Op c_op;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_op = MPI_Op_f2c(*op);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Reduce_scatter at base level");

if (NOT_ACTIVATED(MPI_Reduce_scatter_MAJOR, MPI_Reduce_scatter_MINOR))
  rc=PMPI_Reduce_scatter( sendbuf, recvbuf, recvcnts,  * &c_datatype,  * &c_op,  * &c_comm );
else
  rc=Internal_XMPI_Reduce_scatter( sendbuf, recvbuf, recvcnts,  * &c_datatype,  * &c_op,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_reduce_scatter */



/* --------------- MPI_Request_free --------------- */


extern void F77_MPI_REQUEST_FREE(MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Request c_request;

c_request = MPI_Request_f2c(*request);

DBGPRINT3("Entering Old Fortran MPI_Request_free at base level");

if (NOT_ACTIVATED(MPI_Request_free_MAJOR, MPI_Request_free_MINOR))
  rc=PMPI_Request_free( &c_request );
else
  rc=Internal_XMPI_Request_free( &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_request_free */



/* --------------- MPI_Rsend --------------- */


extern void F77_MPI_RSEND(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Rsend at base level");

if (NOT_ACTIVATED(MPI_Rsend_MAJOR, MPI_Rsend_MINOR))
  rc=PMPI_Rsend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm );
else
  rc=Internal_XMPI_Rsend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_rsend */



/* --------------- MPI_Rsend_init --------------- */


extern void F77_MPI_RSEND_INIT(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm, MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;
MPI_Request c_request;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Rsend_init at base level");

if (NOT_ACTIVATED(MPI_Rsend_init_MAJOR, MPI_Rsend_init_MINOR))
  rc=PMPI_Rsend_init( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );
else
  rc=Internal_XMPI_Rsend_init( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_rsend_init */



/* --------------- MPI_Scan --------------- */


extern void F77_MPI_SCAN(void  *sendbuf, void  *recvbuf, int  * count, MPI_Fint  * datatype, MPI_Fint  * op, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Op c_op;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_op = MPI_Op_f2c(*op);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Scan at base level");

if (NOT_ACTIVATED(MPI_Scan_MAJOR, MPI_Scan_MINOR))
  rc=PMPI_Scan( sendbuf, recvbuf,  * count,  * &c_datatype,  * &c_op,  * &c_comm );
else
  rc=Internal_XMPI_Scan( sendbuf, recvbuf,  * count,  * &c_datatype,  * &c_op,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_scan */



/* --------------- MPI_Scatter --------------- */


extern void F77_MPI_SCATTER(void  *sendbuf, int  * sendcnt, MPI_Fint  * sendtype, void  *recvbuf, int  * recvcnt, MPI_Fint  * recvtype, int  * root, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_sendtype;
MPI_Datatype c_recvtype;
MPI_Comm c_comm;

c_sendtype = MPI_Type_f2c(*sendtype);
c_recvtype = MPI_Type_f2c(*recvtype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Scatter at base level");

if (NOT_ACTIVATED(MPI_Scatter_MAJOR, MPI_Scatter_MINOR))
  rc=PMPI_Scatter( sendbuf,  * sendcnt,  * &c_sendtype, recvbuf,  * recvcnt,  * &c_recvtype,  * root,  * &c_comm );
else
  rc=Internal_XMPI_Scatter( sendbuf,  * sendcnt,  * &c_sendtype, recvbuf,  * recvcnt,  * &c_recvtype,  * root,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_scatter */



/* --------------- MPI_Scatterv --------------- */


extern void F77_MPI_SCATTERV(void  *sendbuf, int  *sendcnts, int  *displs, MPI_Fint  * sendtype, void  *recvbuf, int  * recvcnt, MPI_Fint  * recvtype, int  * root, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_sendtype;
MPI_Datatype c_recvtype;
MPI_Comm c_comm;

c_sendtype = MPI_Type_f2c(*sendtype);
c_recvtype = MPI_Type_f2c(*recvtype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Scatterv at base level");

if (NOT_ACTIVATED(MPI_Scatterv_MAJOR, MPI_Scatterv_MINOR))
  rc=PMPI_Scatterv( sendbuf, sendcnts, displs,  * &c_sendtype, recvbuf,  * recvcnt,  * &c_recvtype,  * root,  * &c_comm );
else
  rc=Internal_XMPI_Scatterv( sendbuf, sendcnts, displs,  * &c_sendtype, recvbuf,  * recvcnt,  * &c_recvtype,  * root,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_scatterv */



/* --------------- MPI_Send --------------- */


extern void F77_MPI_SEND(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Send at base level");

if (NOT_ACTIVATED(MPI_Send_MAJOR, MPI_Send_MINOR))
  rc=PMPI_Send( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm );
else
  rc=Internal_XMPI_Send( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_send */



/* --------------- MPI_Send_init --------------- */


extern void F77_MPI_SEND_INIT(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm, MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;
MPI_Request c_request;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Send_init at base level");

if (NOT_ACTIVATED(MPI_Send_init_MAJOR, MPI_Send_init_MINOR))
  rc=PMPI_Send_init( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );
else
  rc=Internal_XMPI_Send_init( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_send_init */



/* --------------- MPI_Sendrecv --------------- */


extern void F77_MPI_SENDRECV(void  *sendbuf, int  * sendcount, MPI_Fint  * sendtype, int  * dest, int  * sendtag, void  *recvbuf, int  * recvcount, MPI_Fint  * recvtype, int  * source, int  * recvtag, MPI_Fint  * comm, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_Datatype c_sendtype;
MPI_Datatype c_recvtype;
MPI_Comm c_comm;

c_sendtype = MPI_Type_f2c(*sendtype);
c_recvtype = MPI_Type_f2c(*recvtype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Sendrecv at base level");

if (NOT_ACTIVATED(MPI_Sendrecv_MAJOR, MPI_Sendrecv_MINOR))
  rc=PMPI_Sendrecv( sendbuf,  * sendcount,  * &c_sendtype,  * dest,  * sendtag, recvbuf,  * recvcount,  * &c_recvtype,  * source,  * recvtag,  * &c_comm, status );
else
  rc=Internal_XMPI_Sendrecv( sendbuf,  * sendcount,  * &c_sendtype,  * dest,  * sendtag, recvbuf,  * recvcount,  * &c_recvtype,  * source,  * recvtag,  * &c_comm, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_sendrecv */



/* --------------- MPI_Sendrecv_replace --------------- */


extern void F77_MPI_SENDRECV_REPLACE(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * sendtag, int  * source, int  * recvtag, MPI_Fint  * comm, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Sendrecv_replace at base level");

if (NOT_ACTIVATED(MPI_Sendrecv_replace_MAJOR, MPI_Sendrecv_replace_MINOR))
  rc=PMPI_Sendrecv_replace( buf,  * count,  * &c_datatype,  * dest,  * sendtag,  * source,  * recvtag,  * &c_comm, status );
else
  rc=Internal_XMPI_Sendrecv_replace( buf,  * count,  * &c_datatype,  * dest,  * sendtag,  * source,  * recvtag,  * &c_comm, status );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_sendrecv_replace */



/* --------------- MPI_Ssend --------------- */


extern void F77_MPI_SSEND(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Ssend at base level");

if (NOT_ACTIVATED(MPI_Ssend_MAJOR, MPI_Ssend_MINOR))
  rc=PMPI_Ssend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm );
else
  rc=Internal_XMPI_Ssend( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_ssend */



/* --------------- MPI_Ssend_init --------------- */


extern void F77_MPI_SSEND_INIT(void  *buf, int  * count, MPI_Fint  * datatype, int  * dest, int  * tag, MPI_Fint  * comm, MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;
MPI_Request c_request;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Ssend_init at base level");

if (NOT_ACTIVATED(MPI_Ssend_init_MAJOR, MPI_Ssend_init_MINOR))
  rc=PMPI_Ssend_init( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );
else
  rc=Internal_XMPI_Ssend_init( buf,  * count,  * &c_datatype,  * dest,  * tag,  * &c_comm, &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_ssend_init */



/* --------------- MPI_Start --------------- */


extern void F77_MPI_START(MPI_Fint  *request , MPI_Fint *ierr){
int rc;
MPI_Request c_request;

c_request = MPI_Request_f2c(*request);

DBGPRINT3("Entering Old Fortran MPI_Start at base level");

if (NOT_ACTIVATED(MPI_Start_MAJOR, MPI_Start_MINOR))
  rc=PMPI_Start( &c_request );
else
  rc=Internal_XMPI_Start( &c_request );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_start */



/* --------------- MPI_Startall --------------- */


extern void F77_MPI_STARTALL(int  * count, MPI_Fint  *array_of_requests , MPI_Fint *ierr){
int rc;
MPI_Request *c_array_of_requests;

c_array_of_requests = (MPI_Request*)malloc(sizeof(MPI_Request)*(*count));
if ( c_array_of_requests == NULL ) { *ierr=MPI_ERROR_MEM; return; }
{
  int i; 
  for (i = 0; i < *count; i++) { 
    c_array_of_requests[i] = MPI_Request_f2c(array_of_requests[i]);
  }
}

DBGPRINT3("Entering Old Fortran MPI_Startall at base level");

if (NOT_ACTIVATED(MPI_Startall_MAJOR, MPI_Startall_MINOR))
  rc=PMPI_Startall(  * count, c_array_of_requests );
else
  rc=Internal_XMPI_Startall(  * count, c_array_of_requests );

*ierr = (MPI_Fint)rc;
{
  int i; 
  for (i = 0; i < *count; i++) { 
    array_of_requests[i] = MPI_Request_c2f(c_array_of_requests[i]);
  }
}
free(c_array_of_requests);
return;
} /* mpi_startall */



/* --------------- MPI_Test --------------- */


extern void F77_MPI_TEST(MPI_Fint  *request, int  *flag, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_Request c_request;

c_request = MPI_Request_f2c(*request);

DBGPRINT3("Entering Old Fortran MPI_Test at base level");

if (NOT_ACTIVATED(MPI_Test_MAJOR, MPI_Test_MINOR))
  rc=PMPI_Test( &c_request, flag, status );
else
  rc=Internal_XMPI_Test( &c_request, flag, status );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_test */



/* --------------- MPI_Testall --------------- */


extern void F77_MPI_TESTALL(int  * count, MPI_Fint  *array_of_requests, int  *flag, MPI_Status  *array_of_statuses , MPI_Fint *ierr){
int rc;
MPI_Request *c_array_of_requests;

c_array_of_requests = (MPI_Request*)malloc(sizeof(MPI_Request)*(*count));
if ( c_array_of_requests == NULL ) { *ierr=MPI_ERROR_MEM; return; }
{
  int i; 
  for (i = 0; i < *count; i++) { 
    c_array_of_requests[i] = MPI_Request_f2c(array_of_requests[i]);
  }
}

DBGPRINT3("Entering Old Fortran MPI_Testall at base level");

if (NOT_ACTIVATED(MPI_Testall_MAJOR, MPI_Testall_MINOR))
  rc=PMPI_Testall(  * count, c_array_of_requests, flag, array_of_statuses );
else
  rc=Internal_XMPI_Testall(  * count, c_array_of_requests, flag, array_of_statuses );

*ierr = (MPI_Fint)rc;
{
  int i; 
  for (i = 0; i < *count; i++) { 
    array_of_requests[i] = MPI_Request_c2f(c_array_of_requests[i]);
  }
}
free(c_array_of_requests);
return;
} /* mpi_testall */



/* --------------- MPI_Testany --------------- */


extern void F77_MPI_TESTANY(int  * count, MPI_Fint  *array_of_requests, int  *index, int  *flag, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_Request *c_array_of_requests;

c_array_of_requests = (MPI_Request*)malloc(sizeof(MPI_Request)*(*count));
if ( c_array_of_requests == NULL ) { *ierr=MPI_ERROR_MEM; return; }
{
  int i; 
  for (i = 0; i < *count; i++) { 
    c_array_of_requests[i] = MPI_Request_f2c(array_of_requests[i]);
  }
}

DBGPRINT3("Entering Old Fortran MPI_Testany at base level");

if (NOT_ACTIVATED(MPI_Testany_MAJOR, MPI_Testany_MINOR))
  rc=PMPI_Testany(  * count, c_array_of_requests, index, flag, status );
else
  rc=Internal_XMPI_Testany(  * count, c_array_of_requests, index, flag, status );

*ierr = (MPI_Fint)rc;
{
  int i; 
  for (i = 0; i < *count; i++) { 
    array_of_requests[i] = MPI_Request_c2f(c_array_of_requests[i]);
  }
}
free(c_array_of_requests);
return;
} /* mpi_testany */



/* --------------- MPI_Testsome --------------- */


extern void F77_MPI_TESTSOME(int  * incount, MPI_Fint  *array_of_requests, int  *count, int  *array_of_indices, MPI_Status  *array_of_statuses , MPI_Fint *ierr){
int rc;
MPI_Request *c_array_of_requests;

c_array_of_requests = (MPI_Request*)malloc(sizeof(MPI_Request)*(*incount));
if ( c_array_of_requests == NULL ) { *ierr=MPI_ERROR_MEM; return; }
{
  int i; 
  for (i = 0; i < *incount; i++) { 
    c_array_of_requests[i] = MPI_Request_f2c(array_of_requests[i]);
  }
}

DBGPRINT3("Entering Old Fortran MPI_Testsome at base level");

if (NOT_ACTIVATED(MPI_Testsome_MAJOR, MPI_Testsome_MINOR))
  rc=PMPI_Testsome(  * incount, c_array_of_requests, count, array_of_indices, array_of_statuses );
else
  rc=Internal_XMPI_Testsome(  * incount, c_array_of_requests, count, array_of_indices, array_of_statuses );

*ierr = (MPI_Fint)rc;
{
  int i; 
  for (i = 0; i < *incount; i++) { 
    array_of_requests[i] = MPI_Request_c2f(c_array_of_requests[i]);
  }
}
free(c_array_of_requests);
return;
} /* mpi_testsome */



/* --------------- MPI_Topo_test --------------- */


extern void F77_MPI_TOPO_TEST(MPI_Fint  * comm, int  *top_type , MPI_Fint *ierr){
int rc;
MPI_Comm c_comm;

c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Topo_test at base level");

if (NOT_ACTIVATED(MPI_Topo_test_MAJOR, MPI_Topo_test_MINOR))
  rc=PMPI_Topo_test(  * &c_comm, top_type );
else
  rc=Internal_XMPI_Topo_test(  * &c_comm, top_type );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_topo_test */



/* --------------- MPI_Type_commit --------------- */


extern void F77_MPI_TYPE_COMMIT(MPI_Fint  *datatype , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;

c_datatype = MPI_Type_f2c(*datatype);

DBGPRINT3("Entering Old Fortran MPI_Type_commit at base level");

if (NOT_ACTIVATED(MPI_Type_commit_MAJOR, MPI_Type_commit_MINOR))
  rc=PMPI_Type_commit( &c_datatype );
else
  rc=Internal_XMPI_Type_commit( &c_datatype );

*ierr = (MPI_Fint)rc;
*datatype = MPI_Type_c2f(c_datatype);
return;
} /* mpi_type_commit */



/* --------------- MPI_Type_free --------------- */


extern void F77_MPI_TYPE_FREE(MPI_Fint  *datatype , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;

c_datatype = MPI_Type_f2c(*datatype);

DBGPRINT3("Entering Old Fortran MPI_Type_free at base level");

if (NOT_ACTIVATED(MPI_Type_free_MAJOR, MPI_Type_free_MINOR))
  rc=PMPI_Type_free( &c_datatype );
else
  rc=Internal_XMPI_Type_free( &c_datatype );

*ierr = (MPI_Fint)rc;
*datatype = MPI_Type_c2f(c_datatype);
return;
} /* mpi_type_free */



/* --------------- MPI_Type_get_contents --------------- */


extern void F77_MPI_TYPE_GET_CONTENTS(MPI_Fint  * datatype, int  * max_integers, int  * max_addresses, int  * max_datatypes, int  *array_of_integers, MPI_Aint  *array_of_addresses, MPI_Fint  *array_of_datatypes , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Datatype *c_array_of_datatypes;

c_array_of_datatypes = (MPI_Datatype*)malloc(sizeof(MPI_Datatype)*(*max_integers));
if ( c_array_of_datatypes == NULL ) { *ierr=MPI_ERROR_MEM; return; }
c_datatype = MPI_Type_f2c(*datatype);

DBGPRINT3("Entering Old Fortran MPI_Type_get_contents at base level");

if (NOT_ACTIVATED(MPI_Type_get_contents_MAJOR, MPI_Type_get_contents_MINOR))
  rc=PMPI_Type_get_contents(  * &c_datatype,  * max_integers,  * max_addresses,  * max_datatypes, array_of_integers, array_of_addresses, c_array_of_datatypes );
else
  rc=Internal_XMPI_Type_get_contents(  * &c_datatype,  * max_integers,  * max_addresses,  * max_datatypes, array_of_integers, array_of_addresses, c_array_of_datatypes );

*ierr = (MPI_Fint)rc;
{
  int i; 
  for (i = 0; i < *max_integers; i++) { 
    array_of_datatypes[i] = MPI_Type_c2f(c_array_of_datatypes[i]);
  }
}
free(c_array_of_datatypes);
return;
} /* mpi_type_get_contents */



/* --------------- MPI_Type_get_envelope --------------- */


extern void F77_MPI_TYPE_GET_ENVELOPE(MPI_Fint  * datatype, int  *num_integers, int  *num_addresses, int  *num_datatypes, int  *combiner , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;

c_datatype = MPI_Type_f2c(*datatype);

DBGPRINT3("Entering Old Fortran MPI_Type_get_envelope at base level");

if (NOT_ACTIVATED(MPI_Type_get_envelope_MAJOR, MPI_Type_get_envelope_MINOR))
  rc=PMPI_Type_get_envelope(  * &c_datatype, num_integers, num_addresses, num_datatypes, combiner );
else
  rc=Internal_XMPI_Type_get_envelope(  * &c_datatype, num_integers, num_addresses, num_datatypes, combiner );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_type_get_envelope */



/* --------------- MPI_Unpack --------------- */


extern void F77_MPI_UNPACK(void  *inbuf, int  * insize, int  *position, void  *outbuf, int  * count, MPI_Fint  * datatype, MPI_Fint  * comm , MPI_Fint *ierr){
int rc;
MPI_Datatype c_datatype;
MPI_Comm c_comm;

c_datatype = MPI_Type_f2c(*datatype);
c_comm = MPI_Comm_f2c(*comm);

DBGPRINT3("Entering Old Fortran MPI_Unpack at base level");

if (NOT_ACTIVATED(MPI_Unpack_MAJOR, MPI_Unpack_MINOR))
  rc=PMPI_Unpack( inbuf,  * insize, position, outbuf,  * count,  * &c_datatype,  * &c_comm );
else
  rc=Internal_XMPI_Unpack( inbuf,  * insize, position, outbuf,  * count,  * &c_datatype,  * &c_comm );

*ierr = (MPI_Fint)rc;
return;
} /* mpi_unpack */



/* --------------- MPI_Wait --------------- */


extern void F77_MPI_WAIT(MPI_Fint  *request, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_Request c_request;

c_request = MPI_Request_f2c(*request);

DBGPRINT3("Entering Old Fortran MPI_Wait at base level");

if (NOT_ACTIVATED(MPI_Wait_MAJOR, MPI_Wait_MINOR))
  rc=PMPI_Wait( &c_request, status );
else
  rc=Internal_XMPI_Wait( &c_request, status );

*ierr = (MPI_Fint)rc;
*request = MPI_Request_c2f(c_request);
return;
} /* mpi_wait */



/* --------------- MPI_Waitall --------------- */


extern void F77_MPI_WAITALL(int  * count, MPI_Fint  *array_of_requests, MPI_Status  *array_of_statuses , MPI_Fint *ierr){
int rc;
MPI_Request *c_array_of_requests;

c_array_of_requests = (MPI_Request*)malloc(sizeof(MPI_Request)*(*count));
if ( c_array_of_requests == NULL ) { *ierr=MPI_ERROR_MEM; return; }
{
  int i; 
  for (i = 0; i < *count; i++) { 
    c_array_of_requests[i] = MPI_Request_f2c(array_of_requests[i]);
  }
}

DBGPRINT3("Entering Old Fortran MPI_Waitall at base level");

if (NOT_ACTIVATED(MPI_Waitall_MAJOR, MPI_Waitall_MINOR))
  rc=PMPI_Waitall(  * count, c_array_of_requests, array_of_statuses );
else
  rc=Internal_XMPI_Waitall(  * count, c_array_of_requests, array_of_statuses );

*ierr = (MPI_Fint)rc;
{
  int i; 
  for (i = 0; i < *count; i++) { 
    array_of_requests[i] = MPI_Request_c2f(c_array_of_requests[i]);
  }
}
free(c_array_of_requests);
return;
} /* mpi_waitall */



/* --------------- MPI_Waitany --------------- */


extern void F77_MPI_WAITANY(int  * count, MPI_Fint  *array_of_requests, int  *index, MPI_Status  *status , MPI_Fint *ierr){
int rc;
MPI_Request *c_array_of_requests;

c_array_of_requests = (MPI_Request*)malloc(sizeof(MPI_Request)*(*count));
if ( c_array_of_requests == NULL ) { *ierr=MPI_ERROR_MEM; return; }
{
  int i; 
  for (i = 0; i < *count; i++) { 
    c_array_of_requests[i] = MPI_Request_f2c(array_of_requests[i]);
  }
}

DBGPRINT3("Entering Old Fortran MPI_Waitany at base level");

if (NOT_ACTIVATED(MPI_Waitany_MAJOR, MPI_Waitany_MINOR))
  rc=PMPI_Waitany(  * count, c_array_of_requests, index, status );
else
  rc=Internal_XMPI_Waitany(  * count, c_array_of_requests, index, status );

*ierr = (MPI_Fint)rc;
{
  int i; 
  for (i = 0; i < *count; i++) { 
    array_of_requests[i] = MPI_Request_c2f(c_array_of_requests[i]);
  }
}
free(c_array_of_requests);
return;
} /* mpi_waitany */



/* --------------- MPI_Waitsome --------------- */


extern void F77_MPI_WAITSOME(int  * incount, MPI_Fint  *array_of_requests, int  *count, int  *array_of_indices, MPI_Status  *array_of_statuses , MPI_Fint *ierr){
int rc;
MPI_Request *c_array_of_requests;

c_array_of_requests = (MPI_Request*)malloc(sizeof(MPI_Request)*(*incount));
if ( c_array_of_requests == NULL ) { *ierr=MPI_ERROR_MEM; return; }
{
  int i; 
  for (i = 0; i < *incount; i++) { 
    c_array_of_requests[i] = MPI_Request_f2c(array_of_requests[i]);
  }
}

DBGPRINT3("Entering Old Fortran MPI_Waitsome at base level");

if (NOT_ACTIVATED(MPI_Waitsome_MAJOR, MPI_Waitsome_MINOR))
  rc=PMPI_Waitsome(  * incount, c_array_of_requests, count, array_of_indices, array_of_statuses );
else
  rc=Internal_XMPI_Waitsome(  * incount, c_array_of_requests, count, array_of_indices, array_of_statuses );

*ierr = (MPI_Fint)rc;
{
  int i; 
  for (i = 0; i < *incount; i++) { 
    array_of_requests[i] = MPI_Request_c2f(c_array_of_requests[i]);
  }
}
free(c_array_of_requests);
return;
} /* mpi_waitsome */


/* eof */
