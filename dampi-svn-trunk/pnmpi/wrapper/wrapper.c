/* automatically generated wrapper code */


int NQJ_Abort(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Abort_MAJOR,MPI_Abort_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Abort[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Abort at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Abort));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Abort)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Abort at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Abort");
  res=PMPI_Abort(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Abort");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Accumulate(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Accumulate_MAJOR,MPI_Accumulate_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Accumulate[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Accumulate at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Accumulate));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Accumulate)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
	      DBGPRINT3("Done with wrapper in MPI_Accumulate at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Accumulate");
  res=PMPI_Accumulate(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  DBGPRINT3("Done with original MPI in MPI_Accumulate");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Add_error_class(int * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Add_error_class_MAJOR,MPI_Add_error_class_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Add_error_class[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Add_error_class at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Add_error_class));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Add_error_class)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Add_error_class at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Add_error_class");
  res=PMPI_Add_error_class(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Add_error_class");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Add_error_code(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Add_error_code_MAJOR,MPI_Add_error_code_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Add_error_code[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Add_error_code at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Add_error_code));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Add_error_code)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Add_error_code at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Add_error_code");
  res=PMPI_Add_error_code(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Add_error_code");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Add_error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Add_error_string_MAJOR,MPI_Add_error_string_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Add_error_string[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Add_error_string at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Add_error_string));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Add_error_string)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Add_error_string at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Add_error_string");
  res=PMPI_Add_error_string(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Add_error_string");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Address_MAJOR,MPI_Address_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Address[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Address at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Address));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Address)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Address at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Address");
  res=PMPI_Address(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Address");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Allgather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Allgather_MAJOR,MPI_Allgather_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Allgather[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Allgather at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Allgather));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Allgather)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Allgather at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Allgather");
  res=PMPI_Allgather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Allgather");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Allgatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Allgatherv_MAJOR,MPI_Allgatherv_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Allgatherv[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Allgatherv at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Allgatherv));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Allgatherv)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
	      DBGPRINT3("Done with wrapper in MPI_Allgatherv at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Allgatherv");
  res=PMPI_Allgatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  DBGPRINT3("Done with original MPI in MPI_Allgatherv");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Alloc_mem(MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Alloc_mem_MAJOR,MPI_Alloc_mem_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Alloc_mem[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Alloc_mem at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Alloc_mem));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Alloc_mem)[pnmpi_level](_pnmpi_arg_0, info, baseptr);
	      DBGPRINT3("Done with wrapper in MPI_Alloc_mem at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Alloc_mem");
  res=PMPI_Alloc_mem(_pnmpi_arg_0, info, baseptr);
  DBGPRINT3("Done with original MPI in MPI_Alloc_mem");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Allreduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Allreduce_MAJOR,MPI_Allreduce_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Allreduce[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Allreduce at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Allreduce));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Allreduce)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Allreduce at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Allreduce");
  res=PMPI_Allreduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Allreduce");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Alltoall(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Alltoall_MAJOR,MPI_Alltoall_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Alltoall[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Alltoall at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Alltoall));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Alltoall)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Alltoall at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Alltoall");
  res=PMPI_Alltoall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Alltoall");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Alltoallv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Alltoallv_MAJOR,MPI_Alltoallv_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Alltoallv[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Alltoallv at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Alltoallv));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Alltoallv)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
	      DBGPRINT3("Done with wrapper in MPI_Alltoallv at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Alltoallv");
  res=PMPI_Alltoallv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  DBGPRINT3("Done with original MPI in MPI_Alltoallv");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Alltoallw(void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Alltoallw_MAJOR,MPI_Alltoallw_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Alltoallw[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Alltoallw at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Alltoallw));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Alltoallw)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
	      DBGPRINT3("Done with wrapper in MPI_Alltoallw at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Alltoallw");
  res=PMPI_Alltoallw(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  DBGPRINT3("Done with original MPI in MPI_Alltoallw");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Attr_delete(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Attr_delete_MAJOR,MPI_Attr_delete_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Attr_delete[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Attr_delete at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Attr_delete));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Attr_delete)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Attr_delete at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Attr_delete");
  res=PMPI_Attr_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Attr_delete");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Attr_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Attr_get_MAJOR,MPI_Attr_get_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Attr_get[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Attr_get at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Attr_get));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Attr_get)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Attr_get at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Attr_get");
  res=PMPI_Attr_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Attr_get");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Attr_put(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Attr_put_MAJOR,MPI_Attr_put_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Attr_put[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Attr_put at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Attr_put));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Attr_put)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Attr_put at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Attr_put");
  res=PMPI_Attr_put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Attr_put");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Barrier(MPI_Comm _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Barrier_MAJOR,MPI_Barrier_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Barrier[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Barrier at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Barrier));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Barrier)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Barrier at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Barrier");
  res=PMPI_Barrier(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Barrier");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Bcast(void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Bcast_MAJOR,MPI_Bcast_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Bcast[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Bcast at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Bcast));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Bcast)[pnmpi_level](buffer, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Bcast at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Bcast");
  res=PMPI_Bcast(buffer, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Bcast");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Bsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Bsend_MAJOR,MPI_Bsend_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Bsend[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Bsend at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Bsend));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Bsend)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Bsend at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Bsend");
  res=PMPI_Bsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Bsend");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Bsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Bsend_init_MAJOR,MPI_Bsend_init_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Bsend_init[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Bsend_init at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Bsend_init));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Bsend_init)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Bsend_init at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Bsend_init");
  res=PMPI_Bsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Bsend_init");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Buffer_attach(void * buffer, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Buffer_attach_MAJOR,MPI_Buffer_attach_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Buffer_attach[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Buffer_attach at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Buffer_attach));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Buffer_attach)[pnmpi_level](buffer, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Buffer_attach at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Buffer_attach");
  res=PMPI_Buffer_attach(buffer, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Buffer_attach");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Buffer_detach(void * buffer, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Buffer_detach_MAJOR,MPI_Buffer_detach_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Buffer_detach[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Buffer_detach at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Buffer_detach));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Buffer_detach)[pnmpi_level](buffer, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Buffer_detach at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Buffer_detach");
  res=PMPI_Buffer_detach(buffer, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Buffer_detach");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Cancel(MPI_Request * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Cancel_MAJOR,MPI_Cancel_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Cancel[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Cancel at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Cancel));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Cancel)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Cancel at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Cancel");
  res=PMPI_Cancel(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Cancel");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Cart_coords(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Cart_coords_MAJOR,MPI_Cart_coords_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Cart_coords[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Cart_coords at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Cart_coords));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Cart_coords)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Cart_coords at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Cart_coords");
  res=PMPI_Cart_coords(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Cart_coords");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Cart_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Cart_create_MAJOR,MPI_Cart_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Cart_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Cart_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Cart_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Cart_create)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Cart_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Cart_create");
  res=PMPI_Cart_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Cart_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Cartdim_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Cartdim_get_MAJOR,MPI_Cartdim_get_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Cartdim_get[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Cartdim_get at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Cartdim_get));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Cartdim_get)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Cartdim_get at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Cartdim_get");
  res=PMPI_Cartdim_get(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Cartdim_get");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Cart_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Cart_get_MAJOR,MPI_Cart_get_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Cart_get[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Cart_get at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Cart_get));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Cart_get)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Cart_get at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Cart_get");
  res=PMPI_Cart_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Cart_get");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Cart_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Cart_map_MAJOR,MPI_Cart_map_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Cart_map[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Cart_map at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Cart_map));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Cart_map)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Cart_map at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Cart_map");
  res=PMPI_Cart_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Cart_map");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Cart_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Cart_rank_MAJOR,MPI_Cart_rank_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Cart_rank[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Cart_rank at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Cart_rank));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Cart_rank)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Cart_rank at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Cart_rank");
  res=PMPI_Cart_rank(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Cart_rank");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Cart_shift(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Cart_shift_MAJOR,MPI_Cart_shift_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Cart_shift[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Cart_shift at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Cart_shift));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Cart_shift)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Cart_shift at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Cart_shift");
  res=PMPI_Cart_shift(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Cart_shift");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Cart_sub(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Cart_sub_MAJOR,MPI_Cart_sub_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Cart_sub[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Cart_sub at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Cart_sub));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Cart_sub)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Cart_sub at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Cart_sub");
  res=PMPI_Cart_sub(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Cart_sub");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Close_port(char * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Close_port_MAJOR,MPI_Close_port_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Close_port[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Close_port at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Close_port));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Close_port)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Close_port at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Close_port");
  res=PMPI_Close_port(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Close_port");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_accept(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_accept_MAJOR,MPI_Comm_accept_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_accept[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_accept at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_accept));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_accept)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Comm_accept at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_accept");
  res=PMPI_Comm_accept(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Comm_accept");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_call_errhandler(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_call_errhandler_MAJOR,MPI_Comm_call_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_call_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_call_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_call_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_call_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_call_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_call_errhandler");
  res=PMPI_Comm_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_call_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_compare(MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_compare_MAJOR,MPI_Comm_compare_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_compare[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_compare at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_compare));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_compare)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Comm_compare at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_compare");
  res=PMPI_Comm_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Comm_compare");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_connect(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_connect_MAJOR,MPI_Comm_connect_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_connect[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_connect at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_connect));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_connect)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Comm_connect at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_connect");
  res=PMPI_Comm_connect(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Comm_connect");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_create(MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_create_MAJOR,MPI_Comm_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_create)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Comm_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_create");
  res=PMPI_Comm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Comm_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_create_errhandler(MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_create_errhandler_MAJOR,MPI_Comm_create_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_create_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_create_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_create_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_create_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_create_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_create_errhandler");
  res=PMPI_Comm_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_create_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_create_keyval(MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_create_keyval_MAJOR,MPI_Comm_create_keyval_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_create_keyval[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_create_keyval at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_create_keyval));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_create_keyval)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Comm_create_keyval at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_create_keyval");
  res=PMPI_Comm_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Comm_create_keyval");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_delete_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_delete_attr_MAJOR,MPI_Comm_delete_attr_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_delete_attr[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_delete_attr at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_delete_attr));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_delete_attr)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_delete_attr at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_delete_attr");
  res=PMPI_Comm_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_delete_attr");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_disconnect(MPI_Comm * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_disconnect_MAJOR,MPI_Comm_disconnect_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_disconnect[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_disconnect at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_disconnect));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_disconnect)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Comm_disconnect at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_disconnect");
  res=PMPI_Comm_disconnect(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Comm_disconnect");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_dup(MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_dup_MAJOR,MPI_Comm_dup_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_dup[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_dup at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_dup));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_dup)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_dup at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_dup");
  res=PMPI_Comm_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_dup");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_free(MPI_Comm * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_free_MAJOR,MPI_Comm_free_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_free[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_free at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_free));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_free)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Comm_free at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_free");
  res=PMPI_Comm_free(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Comm_free");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_free_keyval(int * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_free_keyval_MAJOR,MPI_Comm_free_keyval_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_free_keyval[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_free_keyval at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_free_keyval));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_free_keyval)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Comm_free_keyval at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_free_keyval");
  res=PMPI_Comm_free_keyval(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Comm_free_keyval");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_get_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_get_attr_MAJOR,MPI_Comm_get_attr_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_get_attr[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_get_attr at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_get_attr));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_get_attr)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Comm_get_attr at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_get_attr");
  res=PMPI_Comm_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Comm_get_attr");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_get_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_get_errhandler_MAJOR,MPI_Comm_get_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_get_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_get_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_get_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_get_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_get_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_get_errhandler");
  res=PMPI_Comm_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_get_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_get_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_get_name_MAJOR,MPI_Comm_get_name_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_get_name[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_get_name at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_get_name));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_get_name)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Comm_get_name at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_get_name");
  res=PMPI_Comm_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Comm_get_name");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_get_parent(MPI_Comm * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_get_parent_MAJOR,MPI_Comm_get_parent_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_get_parent[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_get_parent at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_get_parent));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_get_parent)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Comm_get_parent at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_get_parent");
  res=PMPI_Comm_get_parent(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Comm_get_parent");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_group_MAJOR,MPI_Comm_group_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_group[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_group at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_group));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_group)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_group at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_group");
  res=PMPI_Comm_group(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_group");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_join(int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_join_MAJOR,MPI_Comm_join_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_join[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_join at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_join));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_join)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_join at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_join");
  res=PMPI_Comm_join(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_join");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_rank_MAJOR,MPI_Comm_rank_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_rank[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_rank at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_rank));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_rank)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_rank at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_rank");
  res=PMPI_Comm_rank(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_rank");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_remote_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_remote_group_MAJOR,MPI_Comm_remote_group_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_remote_group[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_remote_group at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_remote_group));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_remote_group)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_remote_group at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_remote_group");
  res=PMPI_Comm_remote_group(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_remote_group");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_remote_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_remote_size_MAJOR,MPI_Comm_remote_size_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_remote_size[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_remote_size at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_remote_size));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_remote_size)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_remote_size at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_remote_size");
  res=PMPI_Comm_remote_size(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_remote_size");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_set_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_set_attr_MAJOR,MPI_Comm_set_attr_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_set_attr[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_set_attr at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_set_attr));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_set_attr)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Comm_set_attr at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_set_attr");
  res=PMPI_Comm_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Comm_set_attr");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_set_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_set_errhandler_MAJOR,MPI_Comm_set_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_set_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_set_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_set_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_set_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_set_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_set_errhandler");
  res=PMPI_Comm_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_set_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_set_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_set_name_MAJOR,MPI_Comm_set_name_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_set_name[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_set_name at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_set_name));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_set_name)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_set_name at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_set_name");
  res=PMPI_Comm_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_set_name");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_size_MAJOR,MPI_Comm_size_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_size[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_size at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_size));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_size)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_size at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_size");
  res=PMPI_Comm_size(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_size");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_spawn(char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[])
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_spawn_MAJOR,MPI_Comm_spawn_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_spawn[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_spawn at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_spawn));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_spawn)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
	      DBGPRINT3("Done with wrapper in MPI_Comm_spawn at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_spawn");
  res=PMPI_Comm_spawn(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  DBGPRINT3("Done with original MPI in MPI_Comm_spawn");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_spawn_multiple(int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[])
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_spawn_multiple_MAJOR,MPI_Comm_spawn_multiple_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_spawn_multiple[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_spawn_multiple at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_spawn_multiple));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_spawn_multiple)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
	      DBGPRINT3("Done with wrapper in MPI_Comm_spawn_multiple at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_spawn_multiple");
  res=PMPI_Comm_spawn_multiple(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  DBGPRINT3("Done with original MPI in MPI_Comm_spawn_multiple");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_split(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_split_MAJOR,MPI_Comm_split_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_split[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_split at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_split));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_split)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Comm_split at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_split");
  res=PMPI_Comm_split(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Comm_split");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Comm_test_inter(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Comm_test_inter_MAJOR,MPI_Comm_test_inter_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Comm_test_inter[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Comm_test_inter at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Comm_test_inter));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Comm_test_inter)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Comm_test_inter at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Comm_test_inter");
  res=PMPI_Comm_test_inter(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Comm_test_inter");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Dims_create(int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Dims_create_MAJOR,MPI_Dims_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Dims_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Dims_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Dims_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Dims_create)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Dims_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Dims_create");
  res=PMPI_Dims_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Dims_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Dist_graph_create(MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Dist_graph_create_MAJOR,MPI_Dist_graph_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Dist_graph_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Dist_graph_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Dist_graph_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Dist_graph_create)[pnmpi_level](comm_old, n, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, info, reorder, comm_dist_graph);
	      DBGPRINT3("Done with wrapper in MPI_Dist_graph_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Dist_graph_create");
  res=PMPI_Dist_graph_create(comm_old, n, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, info, reorder, comm_dist_graph);
  DBGPRINT3("Done with original MPI in MPI_Dist_graph_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Dist_graph_create_adjacent(MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Dist_graph_create_adjacent_MAJOR,MPI_Dist_graph_create_adjacent_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Dist_graph_create_adjacent[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Dist_graph_create_adjacent at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Dist_graph_create_adjacent));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Dist_graph_create_adjacent)[pnmpi_level](comm_old, indegree, _pnmpi_arg_2, _pnmpi_arg_3, outdegree, _pnmpi_arg_5, _pnmpi_arg_6, info, reorder, comm_dist_graph);
	      DBGPRINT3("Done with wrapper in MPI_Dist_graph_create_adjacent at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Dist_graph_create_adjacent");
  res=PMPI_Dist_graph_create_adjacent(comm_old, indegree, _pnmpi_arg_2, _pnmpi_arg_3, outdegree, _pnmpi_arg_5, _pnmpi_arg_6, info, reorder, comm_dist_graph);
  DBGPRINT3("Done with original MPI in MPI_Dist_graph_create_adjacent");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Dist_graph_neighbors(MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[])
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Dist_graph_neighbors_MAJOR,MPI_Dist_graph_neighbors_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Dist_graph_neighbors[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Dist_graph_neighbors at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Dist_graph_neighbors));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Dist_graph_neighbors)[pnmpi_level](comm, maxindegree, _pnmpi_arg_2, _pnmpi_arg_3, maxoutdegree, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Dist_graph_neighbors at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Dist_graph_neighbors");
  res=PMPI_Dist_graph_neighbors(comm, maxindegree, _pnmpi_arg_2, _pnmpi_arg_3, maxoutdegree, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Dist_graph_neighbors");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Dist_graph_neighbors_count(MPI_Comm comm, int * indegree, int * outdegree, int * weighted)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Dist_graph_neighbors_count_MAJOR,MPI_Dist_graph_neighbors_count_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Dist_graph_neighbors_count[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Dist_graph_neighbors_count at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Dist_graph_neighbors_count));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Dist_graph_neighbors_count)[pnmpi_level](comm, indegree, outdegree, weighted);
	      DBGPRINT3("Done with wrapper in MPI_Dist_graph_neighbors_count at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Dist_graph_neighbors_count");
  res=PMPI_Dist_graph_neighbors_count(comm, indegree, outdegree, weighted);
  DBGPRINT3("Done with original MPI in MPI_Dist_graph_neighbors_count");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Errhandler_create(MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Errhandler_create_MAJOR,MPI_Errhandler_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Errhandler_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Errhandler_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Errhandler_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Errhandler_create)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Errhandler_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Errhandler_create");
  res=PMPI_Errhandler_create(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Errhandler_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Errhandler_free(MPI_Errhandler * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Errhandler_free_MAJOR,MPI_Errhandler_free_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Errhandler_free[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Errhandler_free at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Errhandler_free));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Errhandler_free)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Errhandler_free at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Errhandler_free");
  res=PMPI_Errhandler_free(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Errhandler_free");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Errhandler_get(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Errhandler_get_MAJOR,MPI_Errhandler_get_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Errhandler_get[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Errhandler_get at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Errhandler_get));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Errhandler_get)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Errhandler_get at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Errhandler_get");
  res=PMPI_Errhandler_get(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Errhandler_get");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Errhandler_set(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Errhandler_set_MAJOR,MPI_Errhandler_set_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Errhandler_set[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Errhandler_set at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Errhandler_set));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Errhandler_set)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Errhandler_set at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Errhandler_set");
  res=PMPI_Errhandler_set(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Errhandler_set");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Error_class(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Error_class_MAJOR,MPI_Error_class_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Error_class[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Error_class at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Error_class));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Error_class)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Error_class at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Error_class");
  res=PMPI_Error_class(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Error_class");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Error_string_MAJOR,MPI_Error_string_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Error_string[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Error_string at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Error_string));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Error_string)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Error_string at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Error_string");
  res=PMPI_Error_string(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Error_string");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Exscan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Exscan_MAJOR,MPI_Exscan_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Exscan[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Exscan at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Exscan));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Exscan)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Exscan at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Exscan");
  res=PMPI_Exscan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Exscan");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_call_errhandler(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_call_errhandler_MAJOR,MPI_File_call_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_call_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_call_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_call_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_call_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_call_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_call_errhandler");
  res=PMPI_File_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_call_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_close(MPI_File * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_close_MAJOR,MPI_File_close_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_close[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_close at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_close));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_close)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_File_close at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_close");
  res=PMPI_File_close(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_File_close");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_create_errhandler(MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_create_errhandler_MAJOR,MPI_File_create_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_create_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_create_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_create_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_create_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_create_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_create_errhandler");
  res=PMPI_File_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_create_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_delete(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_delete_MAJOR,MPI_File_delete_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_delete[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_delete at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_delete));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_delete)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_delete at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_delete");
  res=PMPI_File_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_delete");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_amode(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_amode_MAJOR,MPI_File_get_amode_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_amode[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_amode at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_amode));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_amode)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_get_amode at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_amode");
  res=PMPI_File_get_amode(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_get_amode");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_atomicity(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_atomicity_MAJOR,MPI_File_get_atomicity_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_atomicity[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_atomicity at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_atomicity));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_atomicity)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_get_atomicity at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_atomicity");
  res=PMPI_File_get_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_get_atomicity");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_byte_offset(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_byte_offset_MAJOR,MPI_File_get_byte_offset_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_byte_offset[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_byte_offset at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_byte_offset));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_byte_offset)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_File_get_byte_offset at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_byte_offset");
  res=PMPI_File_get_byte_offset(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_File_get_byte_offset");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_errhandler_MAJOR,MPI_File_get_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_get_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_errhandler");
  res=PMPI_File_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_get_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_group(MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_group_MAJOR,MPI_File_get_group_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_group[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_group at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_group));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_group)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_get_group at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_group");
  res=PMPI_File_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_get_group");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_info(MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_info_MAJOR,MPI_File_get_info_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_info[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_info at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_info));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_info)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_get_info at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_info");
  res=PMPI_File_get_info(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_get_info");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_position(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_position_MAJOR,MPI_File_get_position_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_position[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_position at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_position));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_position)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_get_position at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_position");
  res=PMPI_File_get_position(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_get_position");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_position_shared(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_position_shared_MAJOR,MPI_File_get_position_shared_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_position_shared[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_position_shared at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_position_shared));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_position_shared)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_get_position_shared at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_position_shared");
  res=PMPI_File_get_position_shared(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_get_position_shared");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_size(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_size_MAJOR,MPI_File_get_size_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_size[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_size at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_size));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_size)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_get_size at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_size");
  res=PMPI_File_get_size(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_get_size");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_type_extent(MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_type_extent_MAJOR,MPI_File_get_type_extent_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_type_extent[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_type_extent at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_type_extent));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_type_extent)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_File_get_type_extent at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_type_extent");
  res=PMPI_File_get_type_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_File_get_type_extent");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_get_view(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_get_view_MAJOR,MPI_File_get_view_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_get_view[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_get_view at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_get_view));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_get_view)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_get_view at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_get_view");
  res=PMPI_File_get_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_get_view");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_iread(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_iread_MAJOR,MPI_File_iread_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_iread[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_iread at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_iread));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_iread)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_iread at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_iread");
  res=PMPI_File_iread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_iread");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_iread_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_iread_at_MAJOR,MPI_File_iread_at_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_iread_at[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_iread_at at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_iread_at));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_iread_at)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_File_iread_at at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_iread_at");
  res=PMPI_File_iread_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_File_iread_at");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_iread_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_iread_shared_MAJOR,MPI_File_iread_shared_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_iread_shared[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_iread_shared at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_iread_shared));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_iread_shared)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_iread_shared at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_iread_shared");
  res=PMPI_File_iread_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_iread_shared");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_iwrite(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_iwrite_MAJOR,MPI_File_iwrite_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_iwrite[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_iwrite at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_iwrite));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_iwrite)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_iwrite at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_iwrite");
  res=PMPI_File_iwrite(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_iwrite");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_iwrite_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_iwrite_at_MAJOR,MPI_File_iwrite_at_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_iwrite_at[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_iwrite_at at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_iwrite_at));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_iwrite_at)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_File_iwrite_at at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_iwrite_at");
  res=PMPI_File_iwrite_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_File_iwrite_at");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_iwrite_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_iwrite_shared_MAJOR,MPI_File_iwrite_shared_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_iwrite_shared[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_iwrite_shared at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_iwrite_shared));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_iwrite_shared)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_iwrite_shared at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_iwrite_shared");
  res=PMPI_File_iwrite_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_iwrite_shared");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_open(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_open_MAJOR,MPI_File_open_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_open[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_open at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_open));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_open)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_open at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_open");
  res=PMPI_File_open(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_open");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_preallocate(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_preallocate_MAJOR,MPI_File_preallocate_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_preallocate[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_preallocate at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_preallocate));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_preallocate)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_preallocate at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_preallocate");
  res=PMPI_File_preallocate(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_preallocate");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_MAJOR,MPI_File_read_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_read at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read");
  res=PMPI_File_read(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_read");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_all_MAJOR,MPI_File_read_all_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_all[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_all at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_all));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_all)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_read_all at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_all");
  res=PMPI_File_read_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_read_all");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_all_begin_MAJOR,MPI_File_read_all_begin_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_all_begin[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_all_begin at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_all_begin));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_all_begin)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_File_read_all_begin at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_all_begin");
  res=PMPI_File_read_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_File_read_all_begin");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_all_end_MAJOR,MPI_File_read_all_end_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_all_end[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_all_end at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_all_end));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_all_end)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_File_read_all_end at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_all_end");
  res=PMPI_File_read_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_File_read_all_end");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_at_MAJOR,MPI_File_read_at_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_at[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_at at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_at));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_at)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_File_read_at at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_at");
  res=PMPI_File_read_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_File_read_at");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_at_all_MAJOR,MPI_File_read_at_all_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_at_all[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_at_all at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_at_all));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_at_all)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_File_read_at_all at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_at_all");
  res=PMPI_File_read_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_File_read_at_all");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_at_all_begin_MAJOR,MPI_File_read_at_all_begin_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_at_all_begin[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_at_all_begin at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_at_all_begin));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_at_all_begin)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_read_at_all_begin at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_at_all_begin");
  res=PMPI_File_read_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_read_at_all_begin");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_at_all_end_MAJOR,MPI_File_read_at_all_end_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_at_all_end[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_at_all_end at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_at_all_end));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_at_all_end)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_File_read_at_all_end at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_at_all_end");
  res=PMPI_File_read_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_File_read_at_all_end");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_ordered_MAJOR,MPI_File_read_ordered_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_ordered[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_ordered at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_ordered));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_ordered)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_read_ordered at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_ordered");
  res=PMPI_File_read_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_read_ordered");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_ordered_begin_MAJOR,MPI_File_read_ordered_begin_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_ordered_begin[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_ordered_begin at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_ordered_begin));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_ordered_begin)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_File_read_ordered_begin at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_ordered_begin");
  res=PMPI_File_read_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_File_read_ordered_begin");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_ordered_end_MAJOR,MPI_File_read_ordered_end_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_ordered_end[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_ordered_end at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_ordered_end));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_ordered_end)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_File_read_ordered_end at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_ordered_end");
  res=PMPI_File_read_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_File_read_ordered_end");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_read_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_read_shared_MAJOR,MPI_File_read_shared_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_read_shared[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_read_shared at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_read_shared));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_read_shared)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_read_shared at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_read_shared");
  res=PMPI_File_read_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_read_shared");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_seek(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_seek_MAJOR,MPI_File_seek_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_seek[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_seek at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_seek));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_seek)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_File_seek at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_seek");
  res=PMPI_File_seek(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_File_seek");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_seek_shared(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_seek_shared_MAJOR,MPI_File_seek_shared_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_seek_shared[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_seek_shared at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_seek_shared));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_seek_shared)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_File_seek_shared at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_seek_shared");
  res=PMPI_File_seek_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_File_seek_shared");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_set_atomicity(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_set_atomicity_MAJOR,MPI_File_set_atomicity_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_set_atomicity[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_set_atomicity at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_set_atomicity));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_set_atomicity)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_set_atomicity at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_set_atomicity");
  res=PMPI_File_set_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_set_atomicity");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_set_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_set_errhandler_MAJOR,MPI_File_set_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_set_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_set_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_set_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_set_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_set_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_set_errhandler");
  res=PMPI_File_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_set_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_set_info(MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_set_info_MAJOR,MPI_File_set_info_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_set_info[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_set_info at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_set_info));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_set_info)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_set_info at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_set_info");
  res=PMPI_File_set_info(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_set_info");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_set_size(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_set_size_MAJOR,MPI_File_set_size_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_set_size[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_set_size at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_set_size));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_set_size)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_File_set_size at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_set_size");
  res=PMPI_File_set_size(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_File_set_size");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_set_view(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_set_view_MAJOR,MPI_File_set_view_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_set_view[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_set_view at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_set_view));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_set_view)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_File_set_view at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_set_view");
  res=PMPI_File_set_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_File_set_view");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_sync(MPI_File _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_sync_MAJOR,MPI_File_sync_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_sync[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_sync at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_sync));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_sync)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_File_sync at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_sync");
  res=PMPI_File_sync(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_File_sync");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_MAJOR,MPI_File_write_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_write at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write");
  res=PMPI_File_write(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_write");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_all_MAJOR,MPI_File_write_all_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_all[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_all at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_all));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_all)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_write_all at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_all");
  res=PMPI_File_write_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_write_all");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_all_begin_MAJOR,MPI_File_write_all_begin_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_all_begin[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_all_begin at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_all_begin));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_all_begin)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_File_write_all_begin at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_all_begin");
  res=PMPI_File_write_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_File_write_all_begin");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_all_end_MAJOR,MPI_File_write_all_end_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_all_end[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_all_end at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_all_end));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_all_end)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_File_write_all_end at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_all_end");
  res=PMPI_File_write_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_File_write_all_end");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_at_MAJOR,MPI_File_write_at_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_at[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_at at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_at));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_at)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_File_write_at at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_at");
  res=PMPI_File_write_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_File_write_at");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_at_all_MAJOR,MPI_File_write_at_all_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_at_all[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_at_all at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_at_all));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_at_all)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_File_write_at_all at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_at_all");
  res=PMPI_File_write_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_File_write_at_all");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_at_all_begin_MAJOR,MPI_File_write_at_all_begin_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_at_all_begin[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_at_all_begin at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_at_all_begin));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_at_all_begin)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_write_at_all_begin at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_at_all_begin");
  res=PMPI_File_write_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_write_at_all_begin");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_at_all_end_MAJOR,MPI_File_write_at_all_end_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_at_all_end[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_at_all_end at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_at_all_end));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_at_all_end)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_File_write_at_all_end at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_at_all_end");
  res=PMPI_File_write_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_File_write_at_all_end");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_ordered_MAJOR,MPI_File_write_ordered_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_ordered[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_ordered at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_ordered));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_ordered)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_write_ordered at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_ordered");
  res=PMPI_File_write_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_write_ordered");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_ordered_begin_MAJOR,MPI_File_write_ordered_begin_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_ordered_begin[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_ordered_begin at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_ordered_begin));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_ordered_begin)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_File_write_ordered_begin at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_ordered_begin");
  res=PMPI_File_write_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_File_write_ordered_begin");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_ordered_end_MAJOR,MPI_File_write_ordered_end_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_ordered_end[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_ordered_end at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_ordered_end));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_ordered_end)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_File_write_ordered_end at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_ordered_end");
  res=PMPI_File_write_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_File_write_ordered_end");
  pnmpi_level=start_level;
  return res;
}

int NQJ_File_write_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_File_write_shared_MAJOR,MPI_File_write_shared_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_File_write_shared[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_File_write_shared at level %i FROM %px",pnmpi_level,&(Internal_XMPI_File_write_shared));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_File_write_shared)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_File_write_shared at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_File_write_shared");
  res=PMPI_File_write_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_File_write_shared");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Finalized(int * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Finalized_MAJOR,MPI_Finalized_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Finalized[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Finalized at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Finalized));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Finalized)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Finalized at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Finalized");
  res=PMPI_Finalized(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Finalized");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Free_mem(void * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Free_mem_MAJOR,MPI_Free_mem_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Free_mem[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Free_mem at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Free_mem));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Free_mem)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Free_mem at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Free_mem");
  res=PMPI_Free_mem(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Free_mem");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Gather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Gather_MAJOR,MPI_Gather_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Gather[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Gather at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Gather));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Gather)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
	      DBGPRINT3("Done with wrapper in MPI_Gather at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Gather");
  res=PMPI_Gather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  DBGPRINT3("Done with original MPI in MPI_Gather");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Gatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Gatherv_MAJOR,MPI_Gatherv_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Gatherv[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Gatherv at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Gatherv));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Gatherv)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
	      DBGPRINT3("Done with wrapper in MPI_Gatherv at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Gatherv");
  res=PMPI_Gatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  DBGPRINT3("Done with original MPI in MPI_Gatherv");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Get(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Get_MAJOR,MPI_Get_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Get[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Get at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Get));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Get)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
	      DBGPRINT3("Done with wrapper in MPI_Get at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Get");
  res=PMPI_Get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  DBGPRINT3("Done with original MPI in MPI_Get");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Get_address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Get_address_MAJOR,MPI_Get_address_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Get_address[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Get_address at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Get_address));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Get_address)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Get_address at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Get_address");
  res=PMPI_Get_address(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Get_address");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Get_count(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Get_count_MAJOR,MPI_Get_count_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Get_count[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Get_count at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Get_count));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Get_count)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Get_count at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Get_count");
  res=PMPI_Get_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Get_count");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Get_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Get_elements_MAJOR,MPI_Get_elements_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Get_elements[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Get_elements at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Get_elements));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Get_elements)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Get_elements at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Get_elements");
  res=PMPI_Get_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Get_elements");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Get_processor_name(char * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Get_processor_name_MAJOR,MPI_Get_processor_name_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Get_processor_name[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Get_processor_name at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Get_processor_name));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Get_processor_name)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Get_processor_name at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Get_processor_name");
  res=PMPI_Get_processor_name(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Get_processor_name");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Get_version(int * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Get_version_MAJOR,MPI_Get_version_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Get_version[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Get_version at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Get_version));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Get_version)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Get_version at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Get_version");
  res=PMPI_Get_version(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Get_version");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Graph_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Graph_create_MAJOR,MPI_Graph_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Graph_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Graph_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Graph_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Graph_create)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Graph_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Graph_create");
  res=PMPI_Graph_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Graph_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Graphdims_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Graphdims_get_MAJOR,MPI_Graphdims_get_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Graphdims_get[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Graphdims_get at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Graphdims_get));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Graphdims_get)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Graphdims_get at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Graphdims_get");
  res=PMPI_Graphdims_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Graphdims_get");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Graph_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Graph_get_MAJOR,MPI_Graph_get_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Graph_get[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Graph_get at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Graph_get));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Graph_get)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Graph_get at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Graph_get");
  res=PMPI_Graph_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Graph_get");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Graph_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Graph_map_MAJOR,MPI_Graph_map_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Graph_map[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Graph_map at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Graph_map));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Graph_map)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Graph_map at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Graph_map");
  res=PMPI_Graph_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Graph_map");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Graph_neighbors(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Graph_neighbors_MAJOR,MPI_Graph_neighbors_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Graph_neighbors[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Graph_neighbors at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Graph_neighbors));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Graph_neighbors)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Graph_neighbors at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Graph_neighbors");
  res=PMPI_Graph_neighbors(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Graph_neighbors");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Graph_neighbors_count(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Graph_neighbors_count_MAJOR,MPI_Graph_neighbors_count_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Graph_neighbors_count[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Graph_neighbors_count at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Graph_neighbors_count));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Graph_neighbors_count)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Graph_neighbors_count at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Graph_neighbors_count");
  res=PMPI_Graph_neighbors_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Graph_neighbors_count");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Grequest_complete(MPI_Request _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Grequest_complete_MAJOR,MPI_Grequest_complete_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Grequest_complete[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Grequest_complete at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Grequest_complete));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Grequest_complete)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Grequest_complete at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Grequest_complete");
  res=PMPI_Grequest_complete(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Grequest_complete");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Grequest_start(MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Grequest_start_MAJOR,MPI_Grequest_start_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Grequest_start[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Grequest_start at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Grequest_start));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Grequest_start)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Grequest_start at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Grequest_start");
  res=PMPI_Grequest_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Grequest_start");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_compare(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_compare_MAJOR,MPI_Group_compare_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_compare[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_compare at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_compare));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_compare)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Group_compare at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_compare");
  res=PMPI_Group_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Group_compare");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_difference(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_difference_MAJOR,MPI_Group_difference_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_difference[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_difference at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_difference));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_difference)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Group_difference at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_difference");
  res=PMPI_Group_difference(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Group_difference");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_excl_MAJOR,MPI_Group_excl_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_excl[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_excl at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_excl));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_excl)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Group_excl at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_excl");
  res=PMPI_Group_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Group_excl");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_free(MPI_Group * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_free_MAJOR,MPI_Group_free_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_free[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_free at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_free));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_free)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Group_free at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_free");
  res=PMPI_Group_free(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Group_free");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_incl_MAJOR,MPI_Group_incl_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_incl[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_incl at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_incl));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_incl)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Group_incl at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_incl");
  res=PMPI_Group_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Group_incl");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_intersection(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_intersection_MAJOR,MPI_Group_intersection_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_intersection[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_intersection at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_intersection));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_intersection)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Group_intersection at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_intersection");
  res=PMPI_Group_intersection(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Group_intersection");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_range_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_range_excl_MAJOR,MPI_Group_range_excl_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_range_excl[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_range_excl at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_range_excl));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_range_excl)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Group_range_excl at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_range_excl");
  res=PMPI_Group_range_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Group_range_excl");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_range_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_range_incl_MAJOR,MPI_Group_range_incl_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_range_incl[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_range_incl at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_range_incl));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_range_incl)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Group_range_incl at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_range_incl");
  res=PMPI_Group_range_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Group_range_incl");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_rank(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_rank_MAJOR,MPI_Group_rank_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_rank[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_rank at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_rank));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_rank)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Group_rank at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_rank");
  res=PMPI_Group_rank(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Group_rank");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_size(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_size_MAJOR,MPI_Group_size_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_size[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_size at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_size));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_size)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Group_size at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_size");
  res=PMPI_Group_size(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Group_size");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_translate_ranks(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_translate_ranks_MAJOR,MPI_Group_translate_ranks_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_translate_ranks[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_translate_ranks at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_translate_ranks));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_translate_ranks)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Group_translate_ranks at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_translate_ranks");
  res=PMPI_Group_translate_ranks(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Group_translate_ranks");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Group_union(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Group_union_MAJOR,MPI_Group_union_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Group_union[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Group_union at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Group_union));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Group_union)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Group_union at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Group_union");
  res=PMPI_Group_union(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Group_union");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Ibsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Ibsend_MAJOR,MPI_Ibsend_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Ibsend[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Ibsend at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Ibsend));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Ibsend)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Ibsend at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Ibsend");
  res=PMPI_Ibsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Ibsend");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Info_create(MPI_Info * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Info_create_MAJOR,MPI_Info_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Info_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Info_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Info_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Info_create)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Info_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Info_create");
  res=PMPI_Info_create(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Info_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Info_delete(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Info_delete_MAJOR,MPI_Info_delete_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Info_delete[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Info_delete at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Info_delete));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Info_delete)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Info_delete at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Info_delete");
  res=PMPI_Info_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Info_delete");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Info_dup(MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Info_dup_MAJOR,MPI_Info_dup_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Info_dup[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Info_dup at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Info_dup));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Info_dup)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Info_dup at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Info_dup");
  res=PMPI_Info_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Info_dup");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Info_free(MPI_Info * info)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Info_free_MAJOR,MPI_Info_free_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Info_free[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Info_free at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Info_free));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Info_free)[pnmpi_level](info);
	      DBGPRINT3("Done with wrapper in MPI_Info_free at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Info_free");
  res=PMPI_Info_free(info);
  DBGPRINT3("Done with original MPI in MPI_Info_free");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Info_get(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Info_get_MAJOR,MPI_Info_get_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Info_get[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Info_get at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Info_get));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Info_get)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Info_get at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Info_get");
  res=PMPI_Info_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Info_get");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Info_get_nkeys(MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Info_get_nkeys_MAJOR,MPI_Info_get_nkeys_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Info_get_nkeys[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Info_get_nkeys at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Info_get_nkeys));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Info_get_nkeys)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Info_get_nkeys at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Info_get_nkeys");
  res=PMPI_Info_get_nkeys(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Info_get_nkeys");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Info_get_nthkey(MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Info_get_nthkey_MAJOR,MPI_Info_get_nthkey_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Info_get_nthkey[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Info_get_nthkey at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Info_get_nthkey));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Info_get_nthkey)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Info_get_nthkey at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Info_get_nthkey");
  res=PMPI_Info_get_nthkey(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Info_get_nthkey");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Info_get_valuelen(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Info_get_valuelen_MAJOR,MPI_Info_get_valuelen_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Info_get_valuelen[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Info_get_valuelen at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Info_get_valuelen));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Info_get_valuelen)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Info_get_valuelen at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Info_get_valuelen");
  res=PMPI_Info_get_valuelen(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Info_get_valuelen");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Info_set(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Info_set_MAJOR,MPI_Info_set_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Info_set[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Info_set at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Info_set));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Info_set)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Info_set at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Info_set");
  res=PMPI_Info_set(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Info_set");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Initialized(int * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Initialized_MAJOR,MPI_Initialized_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Initialized[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Initialized at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Initialized));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Initialized)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Initialized at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Initialized");
  res=PMPI_Initialized(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Initialized");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Init_thread(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Init_thread_MAJOR,MPI_Init_thread_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Init_thread[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Init_thread at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Init_thread));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Init_thread)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Init_thread at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Init_thread");
  res=PMPI_Init_thread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Init_thread");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Intercomm_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Intercomm_create_MAJOR,MPI_Intercomm_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Intercomm_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Intercomm_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Intercomm_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Intercomm_create)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Intercomm_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Intercomm_create");
  res=PMPI_Intercomm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Intercomm_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Intercomm_merge(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Intercomm_merge_MAJOR,MPI_Intercomm_merge_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Intercomm_merge[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Intercomm_merge at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Intercomm_merge));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Intercomm_merge)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Intercomm_merge at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Intercomm_merge");
  res=PMPI_Intercomm_merge(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Intercomm_merge");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Iprobe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Iprobe_MAJOR,MPI_Iprobe_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Iprobe[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Iprobe at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Iprobe));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Iprobe)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Iprobe at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Iprobe");
  res=PMPI_Iprobe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Iprobe");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Irecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Irecv_MAJOR,MPI_Irecv_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Irecv[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Irecv at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Irecv));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Irecv)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Irecv at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Irecv");
  res=PMPI_Irecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Irecv");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Irsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Irsend_MAJOR,MPI_Irsend_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Irsend[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Irsend at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Irsend));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Irsend)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Irsend at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Irsend");
  res=PMPI_Irsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Irsend");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Isend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Isend_MAJOR,MPI_Isend_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Isend[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Isend at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Isend));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Isend)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Isend at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Isend");
  res=PMPI_Isend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Isend");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Issend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Issend_MAJOR,MPI_Issend_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Issend[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Issend at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Issend));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Issend)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Issend at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Issend");
  res=PMPI_Issend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Issend");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Is_thread_main(int * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Is_thread_main_MAJOR,MPI_Is_thread_main_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Is_thread_main[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Is_thread_main at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Is_thread_main));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Is_thread_main)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Is_thread_main at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Is_thread_main");
  res=PMPI_Is_thread_main(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Is_thread_main");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Keyval_create(MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Keyval_create_MAJOR,MPI_Keyval_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Keyval_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Keyval_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Keyval_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Keyval_create)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Keyval_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Keyval_create");
  res=PMPI_Keyval_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Keyval_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Keyval_free(int * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Keyval_free_MAJOR,MPI_Keyval_free_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Keyval_free[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Keyval_free at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Keyval_free));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Keyval_free)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Keyval_free at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Keyval_free");
  res=PMPI_Keyval_free(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Keyval_free");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Lookup_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Lookup_name_MAJOR,MPI_Lookup_name_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Lookup_name[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Lookup_name at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Lookup_name));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Lookup_name)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Lookup_name at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Lookup_name");
  res=PMPI_Lookup_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Lookup_name");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Op_commutative(MPI_Op op, int * commute)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Op_commutative_MAJOR,MPI_Op_commutative_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Op_commutative[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Op_commutative at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Op_commutative));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Op_commutative)[pnmpi_level](op, commute);
	      DBGPRINT3("Done with wrapper in MPI_Op_commutative at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Op_commutative");
  res=PMPI_Op_commutative(op, commute);
  DBGPRINT3("Done with original MPI in MPI_Op_commutative");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Op_create(MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Op_create_MAJOR,MPI_Op_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Op_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Op_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Op_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Op_create)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Op_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Op_create");
  res=PMPI_Op_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Op_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Open_port(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Open_port_MAJOR,MPI_Open_port_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Open_port[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Open_port at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Open_port));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Open_port)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Open_port at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Open_port");
  res=PMPI_Open_port(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Open_port");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Op_free(MPI_Op * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Op_free_MAJOR,MPI_Op_free_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Op_free[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Op_free at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Op_free));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Op_free)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Op_free at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Op_free");
  res=PMPI_Op_free(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Op_free");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Pack(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Pack_MAJOR,MPI_Pack_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Pack[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Pack at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Pack));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Pack)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Pack at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Pack");
  res=PMPI_Pack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Pack");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Pack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Pack_external_MAJOR,MPI_Pack_external_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Pack_external[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Pack_external at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Pack_external));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Pack_external)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Pack_external at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Pack_external");
  res=PMPI_Pack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Pack_external");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Pack_external_size(char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Pack_external_size_MAJOR,MPI_Pack_external_size_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Pack_external_size[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Pack_external_size at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Pack_external_size));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Pack_external_size)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Pack_external_size at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Pack_external_size");
  res=PMPI_Pack_external_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Pack_external_size");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Pack_size(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Pack_size_MAJOR,MPI_Pack_size_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Pack_size[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Pack_size at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Pack_size));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Pack_size)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Pack_size at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Pack_size");
  res=PMPI_Pack_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Pack_size");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Probe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Probe_MAJOR,MPI_Probe_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Probe[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Probe at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Probe));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Probe)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Probe at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Probe");
  res=PMPI_Probe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Probe");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Publish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Publish_name_MAJOR,MPI_Publish_name_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Publish_name[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Publish_name at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Publish_name));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Publish_name)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Publish_name at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Publish_name");
  res=PMPI_Publish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Publish_name");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Put(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Put_MAJOR,MPI_Put_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Put[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Put at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Put));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Put)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
	      DBGPRINT3("Done with wrapper in MPI_Put at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Put");
  res=PMPI_Put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  DBGPRINT3("Done with original MPI in MPI_Put");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Query_thread(int * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Query_thread_MAJOR,MPI_Query_thread_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Query_thread[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Query_thread at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Query_thread));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Query_thread)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Query_thread at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Query_thread");
  res=PMPI_Query_thread(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Query_thread");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Recv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Recv_MAJOR,MPI_Recv_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Recv[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Recv at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Recv));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Recv)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Recv at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Recv");
  res=PMPI_Recv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Recv");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Recv_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Recv_init_MAJOR,MPI_Recv_init_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Recv_init[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Recv_init at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Recv_init));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Recv_init)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Recv_init at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Recv_init");
  res=PMPI_Recv_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Recv_init");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Reduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Reduce_MAJOR,MPI_Reduce_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Reduce[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Reduce at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Reduce));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Reduce)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Reduce at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Reduce");
  res=PMPI_Reduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Reduce");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Reduce_local(void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Reduce_local_MAJOR,MPI_Reduce_local_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Reduce_local[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Reduce_local at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Reduce_local));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Reduce_local)[pnmpi_level](inbuf, inoutbuf, count, datatype, op);
	      DBGPRINT3("Done with wrapper in MPI_Reduce_local at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Reduce_local");
  res=PMPI_Reduce_local(inbuf, inoutbuf, count, datatype, op);
  DBGPRINT3("Done with original MPI in MPI_Reduce_local");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Reduce_scatter(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Reduce_scatter_MAJOR,MPI_Reduce_scatter_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Reduce_scatter[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Reduce_scatter at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Reduce_scatter));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Reduce_scatter)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Reduce_scatter at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Reduce_scatter");
  res=PMPI_Reduce_scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Reduce_scatter");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Reduce_scatter_block(void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Reduce_scatter_block_MAJOR,MPI_Reduce_scatter_block_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Reduce_scatter_block[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Reduce_scatter_block at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Reduce_scatter_block));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Reduce_scatter_block)[pnmpi_level](sendbuf, recvbuf, recvcount, datatype, op, comm);
	      DBGPRINT3("Done with wrapper in MPI_Reduce_scatter_block at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Reduce_scatter_block");
  res=PMPI_Reduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm);
  DBGPRINT3("Done with original MPI in MPI_Reduce_scatter_block");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Register_datarep(char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Register_datarep_MAJOR,MPI_Register_datarep_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Register_datarep[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Register_datarep at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Register_datarep));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Register_datarep)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Register_datarep at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Register_datarep");
  res=PMPI_Register_datarep(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Register_datarep");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Request_free(MPI_Request * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Request_free_MAJOR,MPI_Request_free_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Request_free[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Request_free at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Request_free));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Request_free)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Request_free at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Request_free");
  res=PMPI_Request_free(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Request_free");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Request_get_status(MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Request_get_status_MAJOR,MPI_Request_get_status_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Request_get_status[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Request_get_status at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Request_get_status));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Request_get_status)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Request_get_status at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Request_get_status");
  res=PMPI_Request_get_status(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Request_get_status");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Rsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Rsend_MAJOR,MPI_Rsend_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Rsend[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Rsend at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Rsend));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Rsend)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Rsend at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Rsend");
  res=PMPI_Rsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Rsend");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Rsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Rsend_init_MAJOR,MPI_Rsend_init_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Rsend_init[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Rsend_init at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Rsend_init));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Rsend_init)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Rsend_init at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Rsend_init");
  res=PMPI_Rsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Rsend_init");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Scan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Scan_MAJOR,MPI_Scan_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Scan[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Scan at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Scan));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Scan)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Scan at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Scan");
  res=PMPI_Scan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Scan");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Scatter(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Scatter_MAJOR,MPI_Scatter_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Scatter[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Scatter at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Scatter));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Scatter)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
	      DBGPRINT3("Done with wrapper in MPI_Scatter at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Scatter");
  res=PMPI_Scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  DBGPRINT3("Done with original MPI in MPI_Scatter");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Scatterv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Scatterv_MAJOR,MPI_Scatterv_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Scatterv[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Scatterv at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Scatterv));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Scatterv)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, displs, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
	      DBGPRINT3("Done with wrapper in MPI_Scatterv at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Scatterv");
  res=PMPI_Scatterv(_pnmpi_arg_0, _pnmpi_arg_1, displs, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  DBGPRINT3("Done with original MPI in MPI_Scatterv");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Send(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Send_MAJOR,MPI_Send_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Send[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Send at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Send));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Send)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Send at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Send");
  res=PMPI_Send(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Send");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Send_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Send_init_MAJOR,MPI_Send_init_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Send_init[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Send_init at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Send_init));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Send_init)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Send_init at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Send_init");
  res=PMPI_Send_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Send_init");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Sendrecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Sendrecv_MAJOR,MPI_Sendrecv_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Sendrecv[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Sendrecv at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Sendrecv));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Sendrecv)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9, _pnmpi_arg_10, _pnmpi_arg_11);
	      DBGPRINT3("Done with wrapper in MPI_Sendrecv at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Sendrecv");
  res=PMPI_Sendrecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9, _pnmpi_arg_10, _pnmpi_arg_11);
  DBGPRINT3("Done with original MPI in MPI_Sendrecv");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Sendrecv_replace(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Sendrecv_replace_MAJOR,MPI_Sendrecv_replace_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Sendrecv_replace[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Sendrecv_replace at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Sendrecv_replace));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Sendrecv_replace)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
	      DBGPRINT3("Done with wrapper in MPI_Sendrecv_replace at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Sendrecv_replace");
  res=PMPI_Sendrecv_replace(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  DBGPRINT3("Done with original MPI in MPI_Sendrecv_replace");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Ssend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Ssend_MAJOR,MPI_Ssend_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Ssend[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Ssend at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Ssend));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Ssend)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Ssend at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Ssend");
  res=PMPI_Ssend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Ssend");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Ssend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Ssend_init_MAJOR,MPI_Ssend_init_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Ssend_init[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Ssend_init at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Ssend_init));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Ssend_init)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Ssend_init at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Ssend_init");
  res=PMPI_Ssend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Ssend_init");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Start(MPI_Request * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Start_MAJOR,MPI_Start_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Start[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Start at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Start));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Start)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Start at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Start");
  res=PMPI_Start(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Start");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Startall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Startall_MAJOR,MPI_Startall_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Startall[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Startall at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Startall));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Startall)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Startall at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Startall");
  res=PMPI_Startall(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Startall");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Status_set_cancelled(MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Status_set_cancelled_MAJOR,MPI_Status_set_cancelled_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Status_set_cancelled[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Status_set_cancelled at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Status_set_cancelled));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Status_set_cancelled)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Status_set_cancelled at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Status_set_cancelled");
  res=PMPI_Status_set_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Status_set_cancelled");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Status_set_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Status_set_elements_MAJOR,MPI_Status_set_elements_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Status_set_elements[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Status_set_elements at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Status_set_elements));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Status_set_elements)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Status_set_elements at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Status_set_elements");
  res=PMPI_Status_set_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Status_set_elements");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Test(MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Test_MAJOR,MPI_Test_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Test[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Test at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Test));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Test)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Test at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Test");
  res=PMPI_Test(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Test");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Testall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Testall_MAJOR,MPI_Testall_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Testall[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Testall at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Testall));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Testall)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Testall at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Testall");
  res=PMPI_Testall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Testall");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Testany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Testany_MAJOR,MPI_Testany_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Testany[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Testany at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Testany));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Testany)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Testany at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Testany");
  res=PMPI_Testany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Testany");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Test_cancelled(MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Test_cancelled_MAJOR,MPI_Test_cancelled_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Test_cancelled[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Test_cancelled at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Test_cancelled));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Test_cancelled)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Test_cancelled at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Test_cancelled");
  res=PMPI_Test_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Test_cancelled");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Testsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Testsome_MAJOR,MPI_Testsome_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Testsome[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Testsome at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Testsome));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Testsome)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Testsome at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Testsome");
  res=PMPI_Testsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Testsome");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Topo_test(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Topo_test_MAJOR,MPI_Topo_test_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Topo_test[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Topo_test at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Topo_test));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Topo_test)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Topo_test at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Topo_test");
  res=PMPI_Topo_test(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Topo_test");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_commit(MPI_Datatype * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_commit_MAJOR,MPI_Type_commit_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_commit[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_commit at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_commit));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_commit)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Type_commit at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_commit");
  res=PMPI_Type_commit(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Type_commit");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_contiguous(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_contiguous_MAJOR,MPI_Type_contiguous_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_contiguous[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_contiguous at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_contiguous));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_contiguous)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Type_contiguous at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_contiguous");
  res=PMPI_Type_contiguous(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Type_contiguous");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_darray(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_darray_MAJOR,MPI_Type_create_darray_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_darray[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_darray at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_darray));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_darray)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_darray at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_darray");
  res=PMPI_Type_create_darray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9);
  DBGPRINT3("Done with original MPI in MPI_Type_create_darray");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_f90_complex(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_f90_complex_MAJOR,MPI_Type_create_f90_complex_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_f90_complex[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_f90_complex at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_f90_complex));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_f90_complex)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_f90_complex at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_f90_complex");
  res=PMPI_Type_create_f90_complex(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Type_create_f90_complex");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_f90_integer(int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_f90_integer_MAJOR,MPI_Type_create_f90_integer_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_f90_integer[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_f90_integer at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_f90_integer));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_f90_integer)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_f90_integer at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_f90_integer");
  res=PMPI_Type_create_f90_integer(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Type_create_f90_integer");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_f90_real(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_f90_real_MAJOR,MPI_Type_create_f90_real_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_f90_real[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_f90_real at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_f90_real));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_f90_real)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_f90_real at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_f90_real");
  res=PMPI_Type_create_f90_real(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Type_create_f90_real");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_hindexed(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_hindexed_MAJOR,MPI_Type_create_hindexed_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_hindexed[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_hindexed at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_hindexed));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_hindexed)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_hindexed at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_hindexed");
  res=PMPI_Type_create_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Type_create_hindexed");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_hvector_MAJOR,MPI_Type_create_hvector_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_hvector[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_hvector at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_hvector));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_hvector)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_hvector at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_hvector");
  res=PMPI_Type_create_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Type_create_hvector");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_indexed_block(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_indexed_block_MAJOR,MPI_Type_create_indexed_block_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_indexed_block[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_indexed_block at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_indexed_block));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_indexed_block)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_indexed_block at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_indexed_block");
  res=PMPI_Type_create_indexed_block(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Type_create_indexed_block");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_keyval(MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_keyval_MAJOR,MPI_Type_create_keyval_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_keyval[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_keyval at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_keyval));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_keyval)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_keyval at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_keyval");
  res=PMPI_Type_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Type_create_keyval");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_resized(MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_resized_MAJOR,MPI_Type_create_resized_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_resized[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_resized at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_resized));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_resized)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_resized at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_resized");
  res=PMPI_Type_create_resized(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Type_create_resized");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_struct(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_struct_MAJOR,MPI_Type_create_struct_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_struct[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_struct at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_struct));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_struct)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_struct at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_struct");
  res=PMPI_Type_create_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Type_create_struct");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_create_subarray(int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_create_subarray_MAJOR,MPI_Type_create_subarray_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_subarray[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_create_subarray at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_create_subarray));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_create_subarray)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Type_create_subarray at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_create_subarray");
  res=PMPI_Type_create_subarray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Type_create_subarray");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_delete_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_delete_attr_MAJOR,MPI_Type_delete_attr_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_delete_attr[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_delete_attr at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_delete_attr));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_delete_attr)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Type_delete_attr at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_delete_attr");
  res=PMPI_Type_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Type_delete_attr");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_dup(MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_dup_MAJOR,MPI_Type_dup_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_dup[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_dup at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_dup));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_dup)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Type_dup at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_dup");
  res=PMPI_Type_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Type_dup");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_extent_MAJOR,MPI_Type_extent_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_extent[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_extent at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_extent));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_extent)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Type_extent at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_extent");
  res=PMPI_Type_extent(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Type_extent");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_free(MPI_Datatype * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_free_MAJOR,MPI_Type_free_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_free[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_free at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_free));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_free)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Type_free at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_free");
  res=PMPI_Type_free(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Type_free");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_free_keyval(int * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_free_keyval_MAJOR,MPI_Type_free_keyval_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_free_keyval[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_free_keyval at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_free_keyval));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_free_keyval)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Type_free_keyval at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_free_keyval");
  res=PMPI_Type_free_keyval(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Type_free_keyval");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_get_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_get_attr_MAJOR,MPI_Type_get_attr_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_attr[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_get_attr at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_get_attr));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_attr)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Type_get_attr at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_get_attr");
  res=PMPI_Type_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Type_get_attr");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_get_contents(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[])
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_get_contents_MAJOR,MPI_Type_get_contents_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_contents[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_get_contents at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_get_contents));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_contents)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Type_get_contents at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_get_contents");
  res=PMPI_Type_get_contents(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Type_get_contents");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_get_envelope(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_get_envelope_MAJOR,MPI_Type_get_envelope_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_envelope[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_get_envelope at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_get_envelope));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_envelope)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Type_get_envelope at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_get_envelope");
  res=PMPI_Type_get_envelope(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Type_get_envelope");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_get_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_get_extent_MAJOR,MPI_Type_get_extent_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_extent[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_get_extent at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_get_extent));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_extent)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Type_get_extent at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_get_extent");
  res=PMPI_Type_get_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Type_get_extent");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_get_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_get_name_MAJOR,MPI_Type_get_name_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_name[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_get_name at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_get_name));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_name)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Type_get_name at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_get_name");
  res=PMPI_Type_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Type_get_name");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_get_true_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_get_true_extent_MAJOR,MPI_Type_get_true_extent_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_true_extent[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_get_true_extent at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_get_true_extent));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_get_true_extent)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Type_get_true_extent at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_get_true_extent");
  res=PMPI_Type_get_true_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Type_get_true_extent");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_hindexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_hindexed_MAJOR,MPI_Type_hindexed_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_hindexed[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_hindexed at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_hindexed));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_hindexed)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Type_hindexed at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_hindexed");
  res=PMPI_Type_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Type_hindexed");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_hvector_MAJOR,MPI_Type_hvector_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_hvector[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_hvector at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_hvector));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_hvector)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Type_hvector at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_hvector");
  res=PMPI_Type_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Type_hvector");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_indexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_indexed_MAJOR,MPI_Type_indexed_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_indexed[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_indexed at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_indexed));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_indexed)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Type_indexed at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_indexed");
  res=PMPI_Type_indexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Type_indexed");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_lb(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_lb_MAJOR,MPI_Type_lb_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_lb[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_lb at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_lb));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_lb)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Type_lb at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_lb");
  res=PMPI_Type_lb(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Type_lb");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_match_size(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_match_size_MAJOR,MPI_Type_match_size_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_match_size[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_match_size at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_match_size));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_match_size)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Type_match_size at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_match_size");
  res=PMPI_Type_match_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Type_match_size");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_set_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_set_attr_MAJOR,MPI_Type_set_attr_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_set_attr[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_set_attr at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_set_attr));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_set_attr)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Type_set_attr at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_set_attr");
  res=PMPI_Type_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Type_set_attr");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_set_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_set_name_MAJOR,MPI_Type_set_name_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_set_name[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_set_name at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_set_name));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_set_name)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Type_set_name at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_set_name");
  res=PMPI_Type_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Type_set_name");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_size(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_size_MAJOR,MPI_Type_size_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_size[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_size at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_size));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_size)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Type_size at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_size");
  res=PMPI_Type_size(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Type_size");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_struct(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_struct_MAJOR,MPI_Type_struct_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_struct[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_struct at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_struct));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_struct)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Type_struct at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_struct");
  res=PMPI_Type_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Type_struct");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_ub(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_ub_MAJOR,MPI_Type_ub_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_ub[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_ub at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_ub));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_ub)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Type_ub at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_ub");
  res=PMPI_Type_ub(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Type_ub");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Type_vector(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Type_vector_MAJOR,MPI_Type_vector_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Type_vector[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Type_vector at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Type_vector));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Type_vector)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Type_vector at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Type_vector");
  res=PMPI_Type_vector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Type_vector");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Unpack(void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Unpack_MAJOR,MPI_Unpack_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Unpack[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Unpack at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Unpack));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Unpack)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Unpack at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Unpack");
  res=PMPI_Unpack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Unpack");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Unpack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Unpack_external_MAJOR,MPI_Unpack_external_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Unpack_external[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Unpack_external at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Unpack_external));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Unpack_external)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
	      DBGPRINT3("Done with wrapper in MPI_Unpack_external at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Unpack_external");
  res=PMPI_Unpack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  DBGPRINT3("Done with original MPI in MPI_Unpack_external");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Unpublish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Unpublish_name_MAJOR,MPI_Unpublish_name_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Unpublish_name[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Unpublish_name at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Unpublish_name));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Unpublish_name)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Unpublish_name at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Unpublish_name");
  res=PMPI_Unpublish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Unpublish_name");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Wait(MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Wait_MAJOR,MPI_Wait_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Wait[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Wait at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Wait));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Wait)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Wait at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Wait");
  res=PMPI_Wait(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Wait");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Waitall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Waitall_MAJOR,MPI_Waitall_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Waitall[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Waitall at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Waitall));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Waitall)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Waitall at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Waitall");
  res=PMPI_Waitall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Waitall");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Waitany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Waitany_MAJOR,MPI_Waitany_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Waitany[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Waitany at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Waitany));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Waitany)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Waitany at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Waitany");
  res=PMPI_Waitany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Waitany");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Waitsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Waitsome_MAJOR,MPI_Waitsome_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Waitsome[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Waitsome at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Waitsome));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Waitsome)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
	      DBGPRINT3("Done with wrapper in MPI_Waitsome at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Waitsome");
  res=PMPI_Waitsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  DBGPRINT3("Done with original MPI in MPI_Waitsome");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_call_errhandler(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_call_errhandler_MAJOR,MPI_Win_call_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_call_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_call_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_call_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_call_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Win_call_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_call_errhandler");
  res=PMPI_Win_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Win_call_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_complete(MPI_Win _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_complete_MAJOR,MPI_Win_complete_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_complete[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_complete at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_complete));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_complete)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Win_complete at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_complete");
  res=PMPI_Win_complete(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Win_complete");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_create(void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_create_MAJOR,MPI_Win_create_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_create[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_create at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_create));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_create)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
	      DBGPRINT3("Done with wrapper in MPI_Win_create at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_create");
  res=PMPI_Win_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  DBGPRINT3("Done with original MPI in MPI_Win_create");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_create_errhandler(MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_create_errhandler_MAJOR,MPI_Win_create_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_create_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_create_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_create_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_create_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Win_create_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_create_errhandler");
  res=PMPI_Win_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Win_create_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_create_keyval(MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_create_keyval_MAJOR,MPI_Win_create_keyval_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_create_keyval[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_create_keyval at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_create_keyval));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_create_keyval)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Win_create_keyval at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_create_keyval");
  res=PMPI_Win_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Win_create_keyval");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_delete_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_delete_attr_MAJOR,MPI_Win_delete_attr_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_delete_attr[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_delete_attr at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_delete_attr));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_delete_attr)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Win_delete_attr at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_delete_attr");
  res=PMPI_Win_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Win_delete_attr");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_fence(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_fence_MAJOR,MPI_Win_fence_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_fence[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_fence at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_fence));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_fence)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Win_fence at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_fence");
  res=PMPI_Win_fence(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Win_fence");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_free(MPI_Win * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_free_MAJOR,MPI_Win_free_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_free[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_free at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_free));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_free)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Win_free at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_free");
  res=PMPI_Win_free(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Win_free");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_free_keyval(int * _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_free_keyval_MAJOR,MPI_Win_free_keyval_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_free_keyval[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_free_keyval at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_free_keyval));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_free_keyval)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Win_free_keyval at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_free_keyval");
  res=PMPI_Win_free_keyval(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Win_free_keyval");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_get_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_get_attr_MAJOR,MPI_Win_get_attr_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_get_attr[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_get_attr at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_get_attr));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_get_attr)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Win_get_attr at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_get_attr");
  res=PMPI_Win_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Win_get_attr");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_get_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_get_errhandler_MAJOR,MPI_Win_get_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_get_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_get_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_get_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_get_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Win_get_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_get_errhandler");
  res=PMPI_Win_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Win_get_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_get_group(MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_get_group_MAJOR,MPI_Win_get_group_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_get_group[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_get_group at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_get_group));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_get_group)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Win_get_group at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_get_group");
  res=PMPI_Win_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Win_get_group");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_get_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_get_name_MAJOR,MPI_Win_get_name_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_get_name[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_get_name at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_get_name));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_get_name)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Win_get_name at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_get_name");
  res=PMPI_Win_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Win_get_name");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_lock(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_lock_MAJOR,MPI_Win_lock_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_lock[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_lock at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_lock));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_lock)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
	      DBGPRINT3("Done with wrapper in MPI_Win_lock at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_lock");
  res=PMPI_Win_lock(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  DBGPRINT3("Done with original MPI in MPI_Win_lock");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_post(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_post_MAJOR,MPI_Win_post_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_post[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_post at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_post));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_post)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Win_post at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_post");
  res=PMPI_Win_post(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Win_post");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_set_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_set_attr_MAJOR,MPI_Win_set_attr_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_set_attr[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_set_attr at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_set_attr));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_set_attr)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Win_set_attr at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_set_attr");
  res=PMPI_Win_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Win_set_attr");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_set_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_set_errhandler_MAJOR,MPI_Win_set_errhandler_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_set_errhandler[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_set_errhandler at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_set_errhandler));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_set_errhandler)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Win_set_errhandler at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_set_errhandler");
  res=PMPI_Win_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Win_set_errhandler");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_set_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_set_name_MAJOR,MPI_Win_set_name_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_set_name[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_set_name at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_set_name));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_set_name)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Win_set_name at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_set_name");
  res=PMPI_Win_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Win_set_name");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_start(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_start_MAJOR,MPI_Win_start_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_start[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_start at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_start));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_start)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
	      DBGPRINT3("Done with wrapper in MPI_Win_start at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_start");
  res=PMPI_Win_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  DBGPRINT3("Done with original MPI in MPI_Win_start");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_test(MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_test_MAJOR,MPI_Win_test_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_test[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_test at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_test));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_test)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Win_test at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_test");
  res=PMPI_Win_test(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Win_test");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_unlock(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_unlock_MAJOR,MPI_Win_unlock_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_unlock[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_unlock at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_unlock));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_unlock)[pnmpi_level](_pnmpi_arg_0, _pnmpi_arg_1);
	      DBGPRINT3("Done with wrapper in MPI_Win_unlock at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_unlock");
  res=PMPI_Win_unlock(_pnmpi_arg_0, _pnmpi_arg_1);
  DBGPRINT3("Done with original MPI in MPI_Win_unlock");
  pnmpi_level=start_level;
  return res;
}

int NQJ_Win_wait(MPI_Win _pnmpi_arg_0)
{
  int res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Win_wait_MAJOR,MPI_Win_wait_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Win_wait[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Win_wait at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Win_wait));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Win_wait)[pnmpi_level](_pnmpi_arg_0);
	      DBGPRINT3("Done with wrapper in MPI_Win_wait at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Win_wait");
  res=PMPI_Win_wait(_pnmpi_arg_0);
  DBGPRINT3("Done with original MPI in MPI_Win_wait");
  pnmpi_level=start_level;
  return res;
}

double NQJ_Wtick(void)
{
  double res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Wtick_MAJOR,MPI_Wtick_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Wtick[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Wtick at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Wtick));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Wtick)[pnmpi_level]();
	      DBGPRINT3("Done with wrapper in MPI_Wtick at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Wtick");
  res=PMPI_Wtick();
  DBGPRINT3("Done with original MPI in MPI_Wtick");
  pnmpi_level=start_level;
  return res;
}

double NQJ_Wtime(void)
{
  double res;
  int start_level;
  
  start_level=pnmpi_level;
  
  if (IS_ACTIVATED(MPI_Wtime_MAJOR,MPI_Wtime_MINOR))
    {
       while ((pnmpi_level<pnmpi_max_level) && (modules.module[pnmpi_level]->stack_delimiter==0))
        {
          if (pnmpi_function_ptrs.pnmpi_int_MPI_Wtime[pnmpi_level]!=NULL)
	    {
	      DBGPRINT3("Calling a wrapper in MPI_Wtime at level %i FROM %px",pnmpi_level,&(Internal_XMPI_Wtime));
	      res=(pnmpi_function_ptrs.pnmpi_int_MPI_Wtime)[pnmpi_level]();
	      DBGPRINT3("Done with wrapper in MPI_Wtime at level %i - reseting to %i",pnmpi_level,start_level);
	      pnmpi_level=start_level;
	      return res;
            }
          pnmpi_level++;
       }
    }

  DBGPRINT3("Calling a original MPI in MPI_Wtime");
  res=PMPI_Wtime();
  DBGPRINT3("Done with original MPI in MPI_Wtime");
  pnmpi_level=start_level;
  return res;
}




int MPI_Abort(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Abort at base level - Location = %px",&(MPI_Abort));

  if (NOT_ACTIVATED(MPI_Abort_MAJOR,MPI_Abort_MINOR))
    return PMPI_Abort(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Abort(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Accumulate(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8)
{
  DBGPRINT3("Entering Old MPI_Accumulate at base level - Location = %px",&(MPI_Accumulate));

  if (NOT_ACTIVATED(MPI_Accumulate_MAJOR,MPI_Accumulate_MINOR))
    return PMPI_Accumulate(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  else
    return Internal_XMPI_Accumulate(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Add_error_class(int * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Add_error_class at base level - Location = %px",&(MPI_Add_error_class));

  if (NOT_ACTIVATED(MPI_Add_error_class_MAJOR,MPI_Add_error_class_MINOR))
    return PMPI_Add_error_class(_pnmpi_arg_0);
  else
    return Internal_XMPI_Add_error_class(_pnmpi_arg_0);
}

int MPI_Add_error_code(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Add_error_code at base level - Location = %px",&(MPI_Add_error_code));

  if (NOT_ACTIVATED(MPI_Add_error_code_MAJOR,MPI_Add_error_code_MINOR))
    return PMPI_Add_error_code(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Add_error_code(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Add_error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Add_error_string at base level - Location = %px",&(MPI_Add_error_string));

  if (NOT_ACTIVATED(MPI_Add_error_string_MAJOR,MPI_Add_error_string_MINOR))
    return PMPI_Add_error_string(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Add_error_string(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Address at base level - Location = %px",&(MPI_Address));

  if (NOT_ACTIVATED(MPI_Address_MAJOR,MPI_Address_MINOR))
    return PMPI_Address(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Address(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Allgather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Allgather at base level - Location = %px",&(MPI_Allgather));

  if (NOT_ACTIVATED(MPI_Allgather_MAJOR,MPI_Allgather_MINOR))
    return PMPI_Allgather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Allgather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Allgatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  DBGPRINT3("Entering Old MPI_Allgatherv at base level - Location = %px",&(MPI_Allgatherv));

  if (NOT_ACTIVATED(MPI_Allgatherv_MAJOR,MPI_Allgatherv_MINOR))
    return PMPI_Allgatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  else
    return Internal_XMPI_Allgatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Alloc_mem(MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr)
{
  DBGPRINT3("Entering Old MPI_Alloc_mem at base level - Location = %px",&(MPI_Alloc_mem));

  if (NOT_ACTIVATED(MPI_Alloc_mem_MAJOR,MPI_Alloc_mem_MINOR))
    return PMPI_Alloc_mem(_pnmpi_arg_0, info, baseptr);
  else
    return Internal_XMPI_Alloc_mem(_pnmpi_arg_0, info, baseptr);
}

int MPI_Allreduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Allreduce at base level - Location = %px",&(MPI_Allreduce));

  if (NOT_ACTIVATED(MPI_Allreduce_MAJOR,MPI_Allreduce_MINOR))
    return PMPI_Allreduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Allreduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Alltoall(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Alltoall at base level - Location = %px",&(MPI_Alltoall));

  if (NOT_ACTIVATED(MPI_Alltoall_MAJOR,MPI_Alltoall_MINOR))
    return PMPI_Alltoall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Alltoall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Alltoallv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  DBGPRINT3("Entering Old MPI_Alltoallv at base level - Location = %px",&(MPI_Alltoallv));

  if (NOT_ACTIVATED(MPI_Alltoallv_MAJOR,MPI_Alltoallv_MINOR))
    return PMPI_Alltoallv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  else
    return Internal_XMPI_Alltoallv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Alltoallw(void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8)
{
  DBGPRINT3("Entering Old MPI_Alltoallw at base level - Location = %px",&(MPI_Alltoallw));

  if (NOT_ACTIVATED(MPI_Alltoallw_MAJOR,MPI_Alltoallw_MINOR))
    return PMPI_Alltoallw(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  else
    return Internal_XMPI_Alltoallw(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Attr_delete(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Attr_delete at base level - Location = %px",&(MPI_Attr_delete));

  if (NOT_ACTIVATED(MPI_Attr_delete_MAJOR,MPI_Attr_delete_MINOR))
    return PMPI_Attr_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Attr_delete(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Attr_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Attr_get at base level - Location = %px",&(MPI_Attr_get));

  if (NOT_ACTIVATED(MPI_Attr_get_MAJOR,MPI_Attr_get_MINOR))
    return PMPI_Attr_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Attr_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Attr_put(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Attr_put at base level - Location = %px",&(MPI_Attr_put));

  if (NOT_ACTIVATED(MPI_Attr_put_MAJOR,MPI_Attr_put_MINOR))
    return PMPI_Attr_put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Attr_put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Barrier(MPI_Comm _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Barrier at base level - Location = %px",&(MPI_Barrier));

  if (NOT_ACTIVATED(MPI_Barrier_MAJOR,MPI_Barrier_MINOR))
    return PMPI_Barrier(_pnmpi_arg_0);
  else
    return Internal_XMPI_Barrier(_pnmpi_arg_0);
}

int MPI_Bcast(void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Bcast at base level - Location = %px",&(MPI_Bcast));

  if (NOT_ACTIVATED(MPI_Bcast_MAJOR,MPI_Bcast_MINOR))
    return PMPI_Bcast(buffer, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Bcast(buffer, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Bsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Bsend at base level - Location = %px",&(MPI_Bsend));

  if (NOT_ACTIVATED(MPI_Bsend_MAJOR,MPI_Bsend_MINOR))
    return PMPI_Bsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Bsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Bsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Bsend_init at base level - Location = %px",&(MPI_Bsend_init));

  if (NOT_ACTIVATED(MPI_Bsend_init_MAJOR,MPI_Bsend_init_MINOR))
    return PMPI_Bsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Bsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Buffer_attach(void * buffer, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Buffer_attach at base level - Location = %px",&(MPI_Buffer_attach));

  if (NOT_ACTIVATED(MPI_Buffer_attach_MAJOR,MPI_Buffer_attach_MINOR))
    return PMPI_Buffer_attach(buffer, _pnmpi_arg_1);
  else
    return Internal_XMPI_Buffer_attach(buffer, _pnmpi_arg_1);
}

int MPI_Buffer_detach(void * buffer, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Buffer_detach at base level - Location = %px",&(MPI_Buffer_detach));

  if (NOT_ACTIVATED(MPI_Buffer_detach_MAJOR,MPI_Buffer_detach_MINOR))
    return PMPI_Buffer_detach(buffer, _pnmpi_arg_1);
  else
    return Internal_XMPI_Buffer_detach(buffer, _pnmpi_arg_1);
}

int MPI_Cancel(MPI_Request * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Cancel at base level - Location = %px",&(MPI_Cancel));

  if (NOT_ACTIVATED(MPI_Cancel_MAJOR,MPI_Cancel_MINOR))
    return PMPI_Cancel(_pnmpi_arg_0);
  else
    return Internal_XMPI_Cancel(_pnmpi_arg_0);
}

int MPI_Cart_coords(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Cart_coords at base level - Location = %px",&(MPI_Cart_coords));

  if (NOT_ACTIVATED(MPI_Cart_coords_MAJOR,MPI_Cart_coords_MINOR))
    return PMPI_Cart_coords(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Cart_coords(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Cart_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Cart_create at base level - Location = %px",&(MPI_Cart_create));

  if (NOT_ACTIVATED(MPI_Cart_create_MAJOR,MPI_Cart_create_MINOR))
    return PMPI_Cart_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Cart_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Cartdim_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Cartdim_get at base level - Location = %px",&(MPI_Cartdim_get));

  if (NOT_ACTIVATED(MPI_Cartdim_get_MAJOR,MPI_Cartdim_get_MINOR))
    return PMPI_Cartdim_get(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Cartdim_get(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Cart_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Cart_get at base level - Location = %px",&(MPI_Cart_get));

  if (NOT_ACTIVATED(MPI_Cart_get_MAJOR,MPI_Cart_get_MINOR))
    return PMPI_Cart_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Cart_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Cart_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Cart_map at base level - Location = %px",&(MPI_Cart_map));

  if (NOT_ACTIVATED(MPI_Cart_map_MAJOR,MPI_Cart_map_MINOR))
    return PMPI_Cart_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Cart_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Cart_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Cart_rank at base level - Location = %px",&(MPI_Cart_rank));

  if (NOT_ACTIVATED(MPI_Cart_rank_MAJOR,MPI_Cart_rank_MINOR))
    return PMPI_Cart_rank(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Cart_rank(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Cart_shift(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Cart_shift at base level - Location = %px",&(MPI_Cart_shift));

  if (NOT_ACTIVATED(MPI_Cart_shift_MAJOR,MPI_Cart_shift_MINOR))
    return PMPI_Cart_shift(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Cart_shift(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Cart_sub(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Cart_sub at base level - Location = %px",&(MPI_Cart_sub));

  if (NOT_ACTIVATED(MPI_Cart_sub_MAJOR,MPI_Cart_sub_MINOR))
    return PMPI_Cart_sub(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Cart_sub(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Close_port(char * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Close_port at base level - Location = %px",&(MPI_Close_port));

  if (NOT_ACTIVATED(MPI_Close_port_MAJOR,MPI_Close_port_MINOR))
    return PMPI_Close_port(_pnmpi_arg_0);
  else
    return Internal_XMPI_Close_port(_pnmpi_arg_0);
}

int MPI_Comm_accept(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Comm_accept at base level - Location = %px",&(MPI_Comm_accept));

  if (NOT_ACTIVATED(MPI_Comm_accept_MAJOR,MPI_Comm_accept_MINOR))
    return PMPI_Comm_accept(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Comm_accept(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Comm_call_errhandler(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_call_errhandler at base level - Location = %px",&(MPI_Comm_call_errhandler));

  if (NOT_ACTIVATED(MPI_Comm_call_errhandler_MAJOR,MPI_Comm_call_errhandler_MINOR))
    return PMPI_Comm_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_compare(MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Comm_compare at base level - Location = %px",&(MPI_Comm_compare));

  if (NOT_ACTIVATED(MPI_Comm_compare_MAJOR,MPI_Comm_compare_MINOR))
    return PMPI_Comm_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Comm_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_connect(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Comm_connect at base level - Location = %px",&(MPI_Comm_connect));

  if (NOT_ACTIVATED(MPI_Comm_connect_MAJOR,MPI_Comm_connect_MINOR))
    return PMPI_Comm_connect(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Comm_connect(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Comm_create(MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Comm_create at base level - Location = %px",&(MPI_Comm_create));

  if (NOT_ACTIVATED(MPI_Comm_create_MAJOR,MPI_Comm_create_MINOR))
    return PMPI_Comm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Comm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_create_errhandler(MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_create_errhandler at base level - Location = %px",&(MPI_Comm_create_errhandler));

  if (NOT_ACTIVATED(MPI_Comm_create_errhandler_MAJOR,MPI_Comm_create_errhandler_MINOR))
    return PMPI_Comm_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_create_keyval(MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Comm_create_keyval at base level - Location = %px",&(MPI_Comm_create_keyval));

  if (NOT_ACTIVATED(MPI_Comm_create_keyval_MAJOR,MPI_Comm_create_keyval_MINOR))
    return PMPI_Comm_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Comm_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Comm_delete_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_delete_attr at base level - Location = %px",&(MPI_Comm_delete_attr));

  if (NOT_ACTIVATED(MPI_Comm_delete_attr_MAJOR,MPI_Comm_delete_attr_MINOR))
    return PMPI_Comm_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_disconnect(MPI_Comm * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Comm_disconnect at base level - Location = %px",&(MPI_Comm_disconnect));

  if (NOT_ACTIVATED(MPI_Comm_disconnect_MAJOR,MPI_Comm_disconnect_MINOR))
    return PMPI_Comm_disconnect(_pnmpi_arg_0);
  else
    return Internal_XMPI_Comm_disconnect(_pnmpi_arg_0);
}

int MPI_Comm_dup(MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_dup at base level - Location = %px",&(MPI_Comm_dup));

  if (NOT_ACTIVATED(MPI_Comm_dup_MAJOR,MPI_Comm_dup_MINOR))
    return PMPI_Comm_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_dup(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_free(MPI_Comm * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Comm_free at base level - Location = %px",&(MPI_Comm_free));

  if (NOT_ACTIVATED(MPI_Comm_free_MAJOR,MPI_Comm_free_MINOR))
    return PMPI_Comm_free(_pnmpi_arg_0);
  else
    return Internal_XMPI_Comm_free(_pnmpi_arg_0);
}

int MPI_Comm_free_keyval(int * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Comm_free_keyval at base level - Location = %px",&(MPI_Comm_free_keyval));

  if (NOT_ACTIVATED(MPI_Comm_free_keyval_MAJOR,MPI_Comm_free_keyval_MINOR))
    return PMPI_Comm_free_keyval(_pnmpi_arg_0);
  else
    return Internal_XMPI_Comm_free_keyval(_pnmpi_arg_0);
}

int MPI_Comm_get_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Comm_get_attr at base level - Location = %px",&(MPI_Comm_get_attr));

  if (NOT_ACTIVATED(MPI_Comm_get_attr_MAJOR,MPI_Comm_get_attr_MINOR))
    return PMPI_Comm_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Comm_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Comm_get_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_get_errhandler at base level - Location = %px",&(MPI_Comm_get_errhandler));

  if (NOT_ACTIVATED(MPI_Comm_get_errhandler_MAJOR,MPI_Comm_get_errhandler_MINOR))
    return PMPI_Comm_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_get_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Comm_get_name at base level - Location = %px",&(MPI_Comm_get_name));

  if (NOT_ACTIVATED(MPI_Comm_get_name_MAJOR,MPI_Comm_get_name_MINOR))
    return PMPI_Comm_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Comm_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_get_parent(MPI_Comm * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Comm_get_parent at base level - Location = %px",&(MPI_Comm_get_parent));

  if (NOT_ACTIVATED(MPI_Comm_get_parent_MAJOR,MPI_Comm_get_parent_MINOR))
    return PMPI_Comm_get_parent(_pnmpi_arg_0);
  else
    return Internal_XMPI_Comm_get_parent(_pnmpi_arg_0);
}

int MPI_Comm_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_group at base level - Location = %px",&(MPI_Comm_group));

  if (NOT_ACTIVATED(MPI_Comm_group_MAJOR,MPI_Comm_group_MINOR))
    return PMPI_Comm_group(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_group(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_join(int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_join at base level - Location = %px",&(MPI_Comm_join));

  if (NOT_ACTIVATED(MPI_Comm_join_MAJOR,MPI_Comm_join_MINOR))
    return PMPI_Comm_join(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_join(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_rank at base level - Location = %px",&(MPI_Comm_rank));

  if (NOT_ACTIVATED(MPI_Comm_rank_MAJOR,MPI_Comm_rank_MINOR))
    return PMPI_Comm_rank(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_rank(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_remote_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_remote_group at base level - Location = %px",&(MPI_Comm_remote_group));

  if (NOT_ACTIVATED(MPI_Comm_remote_group_MAJOR,MPI_Comm_remote_group_MINOR))
    return PMPI_Comm_remote_group(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_remote_group(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_remote_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_remote_size at base level - Location = %px",&(MPI_Comm_remote_size));

  if (NOT_ACTIVATED(MPI_Comm_remote_size_MAJOR,MPI_Comm_remote_size_MINOR))
    return PMPI_Comm_remote_size(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_remote_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_set_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Comm_set_attr at base level - Location = %px",&(MPI_Comm_set_attr));

  if (NOT_ACTIVATED(MPI_Comm_set_attr_MAJOR,MPI_Comm_set_attr_MINOR))
    return PMPI_Comm_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Comm_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Comm_set_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_set_errhandler at base level - Location = %px",&(MPI_Comm_set_errhandler));

  if (NOT_ACTIVATED(MPI_Comm_set_errhandler_MAJOR,MPI_Comm_set_errhandler_MINOR))
    return PMPI_Comm_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_set_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_set_name at base level - Location = %px",&(MPI_Comm_set_name));

  if (NOT_ACTIVATED(MPI_Comm_set_name_MAJOR,MPI_Comm_set_name_MINOR))
    return PMPI_Comm_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_size at base level - Location = %px",&(MPI_Comm_size));

  if (NOT_ACTIVATED(MPI_Comm_size_MAJOR,MPI_Comm_size_MINOR))
    return PMPI_Comm_size(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Comm_spawn(char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[])
{
  DBGPRINT3("Entering Old MPI_Comm_spawn at base level - Location = %px",&(MPI_Comm_spawn));

  if (NOT_ACTIVATED(MPI_Comm_spawn_MAJOR,MPI_Comm_spawn_MINOR))
    return PMPI_Comm_spawn(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  else
    return Internal_XMPI_Comm_spawn(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Comm_spawn_multiple(int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[])
{
  DBGPRINT3("Entering Old MPI_Comm_spawn_multiple at base level - Location = %px",&(MPI_Comm_spawn_multiple));

  if (NOT_ACTIVATED(MPI_Comm_spawn_multiple_MAJOR,MPI_Comm_spawn_multiple_MINOR))
    return PMPI_Comm_spawn_multiple(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  else
    return Internal_XMPI_Comm_spawn_multiple(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Comm_split(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Comm_split at base level - Location = %px",&(MPI_Comm_split));

  if (NOT_ACTIVATED(MPI_Comm_split_MAJOR,MPI_Comm_split_MINOR))
    return PMPI_Comm_split(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Comm_split(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Comm_test_inter(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Comm_test_inter at base level - Location = %px",&(MPI_Comm_test_inter));

  if (NOT_ACTIVATED(MPI_Comm_test_inter_MAJOR,MPI_Comm_test_inter_MINOR))
    return PMPI_Comm_test_inter(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Comm_test_inter(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Dims_create(int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Dims_create at base level - Location = %px",&(MPI_Dims_create));

  if (NOT_ACTIVATED(MPI_Dims_create_MAJOR,MPI_Dims_create_MINOR))
    return PMPI_Dims_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Dims_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Dist_graph_create(MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  DBGPRINT3("Entering Old MPI_Dist_graph_create at base level - Location = %px",&(MPI_Dist_graph_create));

  if (NOT_ACTIVATED(MPI_Dist_graph_create_MAJOR,MPI_Dist_graph_create_MINOR))
    return PMPI_Dist_graph_create(comm_old, n, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, info, reorder, comm_dist_graph);
  else
    return Internal_XMPI_Dist_graph_create(comm_old, n, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, info, reorder, comm_dist_graph);
}

int MPI_Dist_graph_create_adjacent(MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  DBGPRINT3("Entering Old MPI_Dist_graph_create_adjacent at base level - Location = %px",&(MPI_Dist_graph_create_adjacent));

  if (NOT_ACTIVATED(MPI_Dist_graph_create_adjacent_MAJOR,MPI_Dist_graph_create_adjacent_MINOR))
    return PMPI_Dist_graph_create_adjacent(comm_old, indegree, _pnmpi_arg_2, _pnmpi_arg_3, outdegree, _pnmpi_arg_5, _pnmpi_arg_6, info, reorder, comm_dist_graph);
  else
    return Internal_XMPI_Dist_graph_create_adjacent(comm_old, indegree, _pnmpi_arg_2, _pnmpi_arg_3, outdegree, _pnmpi_arg_5, _pnmpi_arg_6, info, reorder, comm_dist_graph);
}

int MPI_Dist_graph_neighbors(MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[])
{
  DBGPRINT3("Entering Old MPI_Dist_graph_neighbors at base level - Location = %px",&(MPI_Dist_graph_neighbors));

  if (NOT_ACTIVATED(MPI_Dist_graph_neighbors_MAJOR,MPI_Dist_graph_neighbors_MINOR))
    return PMPI_Dist_graph_neighbors(comm, maxindegree, _pnmpi_arg_2, _pnmpi_arg_3, maxoutdegree, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Dist_graph_neighbors(comm, maxindegree, _pnmpi_arg_2, _pnmpi_arg_3, maxoutdegree, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Dist_graph_neighbors_count(MPI_Comm comm, int * indegree, int * outdegree, int * weighted)
{
  DBGPRINT3("Entering Old MPI_Dist_graph_neighbors_count at base level - Location = %px",&(MPI_Dist_graph_neighbors_count));

  if (NOT_ACTIVATED(MPI_Dist_graph_neighbors_count_MAJOR,MPI_Dist_graph_neighbors_count_MINOR))
    return PMPI_Dist_graph_neighbors_count(comm, indegree, outdegree, weighted);
  else
    return Internal_XMPI_Dist_graph_neighbors_count(comm, indegree, outdegree, weighted);
}

int MPI_Errhandler_create(MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Errhandler_create at base level - Location = %px",&(MPI_Errhandler_create));

  if (NOT_ACTIVATED(MPI_Errhandler_create_MAJOR,MPI_Errhandler_create_MINOR))
    return PMPI_Errhandler_create(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Errhandler_create(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Errhandler_free(MPI_Errhandler * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Errhandler_free at base level - Location = %px",&(MPI_Errhandler_free));

  if (NOT_ACTIVATED(MPI_Errhandler_free_MAJOR,MPI_Errhandler_free_MINOR))
    return PMPI_Errhandler_free(_pnmpi_arg_0);
  else
    return Internal_XMPI_Errhandler_free(_pnmpi_arg_0);
}

int MPI_Errhandler_get(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Errhandler_get at base level - Location = %px",&(MPI_Errhandler_get));

  if (NOT_ACTIVATED(MPI_Errhandler_get_MAJOR,MPI_Errhandler_get_MINOR))
    return PMPI_Errhandler_get(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Errhandler_get(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Errhandler_set(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Errhandler_set at base level - Location = %px",&(MPI_Errhandler_set));

  if (NOT_ACTIVATED(MPI_Errhandler_set_MAJOR,MPI_Errhandler_set_MINOR))
    return PMPI_Errhandler_set(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Errhandler_set(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Error_class(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Error_class at base level - Location = %px",&(MPI_Error_class));

  if (NOT_ACTIVATED(MPI_Error_class_MAJOR,MPI_Error_class_MINOR))
    return PMPI_Error_class(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Error_class(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Error_string at base level - Location = %px",&(MPI_Error_string));

  if (NOT_ACTIVATED(MPI_Error_string_MAJOR,MPI_Error_string_MINOR))
    return PMPI_Error_string(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Error_string(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Exscan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Exscan at base level - Location = %px",&(MPI_Exscan));

  if (NOT_ACTIVATED(MPI_Exscan_MAJOR,MPI_Exscan_MINOR))
    return PMPI_Exscan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Exscan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_call_errhandler(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_call_errhandler at base level - Location = %px",&(MPI_File_call_errhandler));

  if (NOT_ACTIVATED(MPI_File_call_errhandler_MAJOR,MPI_File_call_errhandler_MINOR))
    return PMPI_File_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_close(MPI_File * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_File_close at base level - Location = %px",&(MPI_File_close));

  if (NOT_ACTIVATED(MPI_File_close_MAJOR,MPI_File_close_MINOR))
    return PMPI_File_close(_pnmpi_arg_0);
  else
    return Internal_XMPI_File_close(_pnmpi_arg_0);
}

int MPI_File_create_errhandler(MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_create_errhandler at base level - Location = %px",&(MPI_File_create_errhandler));

  if (NOT_ACTIVATED(MPI_File_create_errhandler_MAJOR,MPI_File_create_errhandler_MINOR))
    return PMPI_File_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_delete(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_delete at base level - Location = %px",&(MPI_File_delete));

  if (NOT_ACTIVATED(MPI_File_delete_MAJOR,MPI_File_delete_MINOR))
    return PMPI_File_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_delete(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_amode(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_get_amode at base level - Location = %px",&(MPI_File_get_amode));

  if (NOT_ACTIVATED(MPI_File_get_amode_MAJOR,MPI_File_get_amode_MINOR))
    return PMPI_File_get_amode(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_get_amode(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_atomicity(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_get_atomicity at base level - Location = %px",&(MPI_File_get_atomicity));

  if (NOT_ACTIVATED(MPI_File_get_atomicity_MAJOR,MPI_File_get_atomicity_MINOR))
    return PMPI_File_get_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_get_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_byte_offset(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_File_get_byte_offset at base level - Location = %px",&(MPI_File_get_byte_offset));

  if (NOT_ACTIVATED(MPI_File_get_byte_offset_MAJOR,MPI_File_get_byte_offset_MINOR))
    return PMPI_File_get_byte_offset(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_File_get_byte_offset(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_get_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_get_errhandler at base level - Location = %px",&(MPI_File_get_errhandler));

  if (NOT_ACTIVATED(MPI_File_get_errhandler_MAJOR,MPI_File_get_errhandler_MINOR))
    return PMPI_File_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_group(MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_get_group at base level - Location = %px",&(MPI_File_get_group));

  if (NOT_ACTIVATED(MPI_File_get_group_MAJOR,MPI_File_get_group_MINOR))
    return PMPI_File_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_info(MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_get_info at base level - Location = %px",&(MPI_File_get_info));

  if (NOT_ACTIVATED(MPI_File_get_info_MAJOR,MPI_File_get_info_MINOR))
    return PMPI_File_get_info(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_get_info(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_position(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_get_position at base level - Location = %px",&(MPI_File_get_position));

  if (NOT_ACTIVATED(MPI_File_get_position_MAJOR,MPI_File_get_position_MINOR))
    return PMPI_File_get_position(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_get_position(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_position_shared(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_get_position_shared at base level - Location = %px",&(MPI_File_get_position_shared));

  if (NOT_ACTIVATED(MPI_File_get_position_shared_MAJOR,MPI_File_get_position_shared_MINOR))
    return PMPI_File_get_position_shared(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_get_position_shared(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_size(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_get_size at base level - Location = %px",&(MPI_File_get_size));

  if (NOT_ACTIVATED(MPI_File_get_size_MAJOR,MPI_File_get_size_MINOR))
    return PMPI_File_get_size(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_get_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_get_type_extent(MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_File_get_type_extent at base level - Location = %px",&(MPI_File_get_type_extent));

  if (NOT_ACTIVATED(MPI_File_get_type_extent_MAJOR,MPI_File_get_type_extent_MINOR))
    return PMPI_File_get_type_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_File_get_type_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_get_view(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_get_view at base level - Location = %px",&(MPI_File_get_view));

  if (NOT_ACTIVATED(MPI_File_get_view_MAJOR,MPI_File_get_view_MINOR))
    return PMPI_File_get_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_get_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iread(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_iread at base level - Location = %px",&(MPI_File_iread));

  if (NOT_ACTIVATED(MPI_File_iread_MAJOR,MPI_File_iread_MINOR))
    return PMPI_File_iread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_iread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iread_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_File_iread_at at base level - Location = %px",&(MPI_File_iread_at));

  if (NOT_ACTIVATED(MPI_File_iread_at_MAJOR,MPI_File_iread_at_MINOR))
    return PMPI_File_iread_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_File_iread_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_iread_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_iread_shared at base level - Location = %px",&(MPI_File_iread_shared));

  if (NOT_ACTIVATED(MPI_File_iread_shared_MAJOR,MPI_File_iread_shared_MINOR))
    return PMPI_File_iread_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_iread_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iwrite(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_iwrite at base level - Location = %px",&(MPI_File_iwrite));

  if (NOT_ACTIVATED(MPI_File_iwrite_MAJOR,MPI_File_iwrite_MINOR))
    return PMPI_File_iwrite(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_iwrite(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_iwrite_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_File_iwrite_at at base level - Location = %px",&(MPI_File_iwrite_at));

  if (NOT_ACTIVATED(MPI_File_iwrite_at_MAJOR,MPI_File_iwrite_at_MINOR))
    return PMPI_File_iwrite_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_File_iwrite_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_iwrite_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_iwrite_shared at base level - Location = %px",&(MPI_File_iwrite_shared));

  if (NOT_ACTIVATED(MPI_File_iwrite_shared_MAJOR,MPI_File_iwrite_shared_MINOR))
    return PMPI_File_iwrite_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_iwrite_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_open(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_open at base level - Location = %px",&(MPI_File_open));

  if (NOT_ACTIVATED(MPI_File_open_MAJOR,MPI_File_open_MINOR))
    return PMPI_File_open(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_open(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_preallocate(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_preallocate at base level - Location = %px",&(MPI_File_preallocate));

  if (NOT_ACTIVATED(MPI_File_preallocate_MAJOR,MPI_File_preallocate_MINOR))
    return PMPI_File_preallocate(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_preallocate(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_read(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_read at base level - Location = %px",&(MPI_File_read));

  if (NOT_ACTIVATED(MPI_File_read_MAJOR,MPI_File_read_MINOR))
    return PMPI_File_read(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_read(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_read_all at base level - Location = %px",&(MPI_File_read_all));

  if (NOT_ACTIVATED(MPI_File_read_all_MAJOR,MPI_File_read_all_MINOR))
    return PMPI_File_read_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_read_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_File_read_all_begin at base level - Location = %px",&(MPI_File_read_all_begin));

  if (NOT_ACTIVATED(MPI_File_read_all_begin_MAJOR,MPI_File_read_all_begin_MINOR))
    return PMPI_File_read_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_File_read_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_read_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_File_read_all_end at base level - Location = %px",&(MPI_File_read_all_end));

  if (NOT_ACTIVATED(MPI_File_read_all_end_MAJOR,MPI_File_read_all_end_MINOR))
    return PMPI_File_read_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_File_read_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_read_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_File_read_at at base level - Location = %px",&(MPI_File_read_at));

  if (NOT_ACTIVATED(MPI_File_read_at_MAJOR,MPI_File_read_at_MINOR))
    return PMPI_File_read_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_File_read_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_read_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_File_read_at_all at base level - Location = %px",&(MPI_File_read_at_all));

  if (NOT_ACTIVATED(MPI_File_read_at_all_MAJOR,MPI_File_read_at_all_MINOR))
    return PMPI_File_read_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_File_read_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_read_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_read_at_all_begin at base level - Location = %px",&(MPI_File_read_at_all_begin));

  if (NOT_ACTIVATED(MPI_File_read_at_all_begin_MAJOR,MPI_File_read_at_all_begin_MINOR))
    return PMPI_File_read_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_read_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_File_read_at_all_end at base level - Location = %px",&(MPI_File_read_at_all_end));

  if (NOT_ACTIVATED(MPI_File_read_at_all_end_MAJOR,MPI_File_read_at_all_end_MINOR))
    return PMPI_File_read_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_File_read_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_read_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_read_ordered at base level - Location = %px",&(MPI_File_read_ordered));

  if (NOT_ACTIVATED(MPI_File_read_ordered_MAJOR,MPI_File_read_ordered_MINOR))
    return PMPI_File_read_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_read_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_read_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_File_read_ordered_begin at base level - Location = %px",&(MPI_File_read_ordered_begin));

  if (NOT_ACTIVATED(MPI_File_read_ordered_begin_MAJOR,MPI_File_read_ordered_begin_MINOR))
    return PMPI_File_read_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_File_read_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_read_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_File_read_ordered_end at base level - Location = %px",&(MPI_File_read_ordered_end));

  if (NOT_ACTIVATED(MPI_File_read_ordered_end_MAJOR,MPI_File_read_ordered_end_MINOR))
    return PMPI_File_read_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_File_read_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_read_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_read_shared at base level - Location = %px",&(MPI_File_read_shared));

  if (NOT_ACTIVATED(MPI_File_read_shared_MAJOR,MPI_File_read_shared_MINOR))
    return PMPI_File_read_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_read_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_seek(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_File_seek at base level - Location = %px",&(MPI_File_seek));

  if (NOT_ACTIVATED(MPI_File_seek_MAJOR,MPI_File_seek_MINOR))
    return PMPI_File_seek(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_File_seek(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_seek_shared(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_File_seek_shared at base level - Location = %px",&(MPI_File_seek_shared));

  if (NOT_ACTIVATED(MPI_File_seek_shared_MAJOR,MPI_File_seek_shared_MINOR))
    return PMPI_File_seek_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_File_seek_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_set_atomicity(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_set_atomicity at base level - Location = %px",&(MPI_File_set_atomicity));

  if (NOT_ACTIVATED(MPI_File_set_atomicity_MAJOR,MPI_File_set_atomicity_MINOR))
    return PMPI_File_set_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_set_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_set_errhandler at base level - Location = %px",&(MPI_File_set_errhandler));

  if (NOT_ACTIVATED(MPI_File_set_errhandler_MAJOR,MPI_File_set_errhandler_MINOR))
    return PMPI_File_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_info(MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_set_info at base level - Location = %px",&(MPI_File_set_info));

  if (NOT_ACTIVATED(MPI_File_set_info_MAJOR,MPI_File_set_info_MINOR))
    return PMPI_File_set_info(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_set_info(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_size(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_File_set_size at base level - Location = %px",&(MPI_File_set_size));

  if (NOT_ACTIVATED(MPI_File_set_size_MAJOR,MPI_File_set_size_MINOR))
    return PMPI_File_set_size(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_File_set_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_File_set_view(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_File_set_view at base level - Location = %px",&(MPI_File_set_view));

  if (NOT_ACTIVATED(MPI_File_set_view_MAJOR,MPI_File_set_view_MINOR))
    return PMPI_File_set_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_File_set_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_sync(MPI_File _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_File_sync at base level - Location = %px",&(MPI_File_sync));

  if (NOT_ACTIVATED(MPI_File_sync_MAJOR,MPI_File_sync_MINOR))
    return PMPI_File_sync(_pnmpi_arg_0);
  else
    return Internal_XMPI_File_sync(_pnmpi_arg_0);
}

int MPI_File_write(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_write at base level - Location = %px",&(MPI_File_write));

  if (NOT_ACTIVATED(MPI_File_write_MAJOR,MPI_File_write_MINOR))
    return PMPI_File_write(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_write(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_write_all at base level - Location = %px",&(MPI_File_write_all));

  if (NOT_ACTIVATED(MPI_File_write_all_MAJOR,MPI_File_write_all_MINOR))
    return PMPI_File_write_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_write_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_File_write_all_begin at base level - Location = %px",&(MPI_File_write_all_begin));

  if (NOT_ACTIVATED(MPI_File_write_all_begin_MAJOR,MPI_File_write_all_begin_MINOR))
    return PMPI_File_write_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_File_write_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_write_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_File_write_all_end at base level - Location = %px",&(MPI_File_write_all_end));

  if (NOT_ACTIVATED(MPI_File_write_all_end_MAJOR,MPI_File_write_all_end_MINOR))
    return PMPI_File_write_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_File_write_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_write_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_File_write_at at base level - Location = %px",&(MPI_File_write_at));

  if (NOT_ACTIVATED(MPI_File_write_at_MAJOR,MPI_File_write_at_MINOR))
    return PMPI_File_write_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_File_write_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_write_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_File_write_at_all at base level - Location = %px",&(MPI_File_write_at_all));

  if (NOT_ACTIVATED(MPI_File_write_at_all_MAJOR,MPI_File_write_at_all_MINOR))
    return PMPI_File_write_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_File_write_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_File_write_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_write_at_all_begin at base level - Location = %px",&(MPI_File_write_at_all_begin));

  if (NOT_ACTIVATED(MPI_File_write_at_all_begin_MAJOR,MPI_File_write_at_all_begin_MINOR))
    return PMPI_File_write_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_write_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_File_write_at_all_end at base level - Location = %px",&(MPI_File_write_at_all_end));

  if (NOT_ACTIVATED(MPI_File_write_at_all_end_MAJOR,MPI_File_write_at_all_end_MINOR))
    return PMPI_File_write_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_File_write_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_write_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_write_ordered at base level - Location = %px",&(MPI_File_write_ordered));

  if (NOT_ACTIVATED(MPI_File_write_ordered_MAJOR,MPI_File_write_ordered_MINOR))
    return PMPI_File_write_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_write_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_File_write_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_File_write_ordered_begin at base level - Location = %px",&(MPI_File_write_ordered_begin));

  if (NOT_ACTIVATED(MPI_File_write_ordered_begin_MAJOR,MPI_File_write_ordered_begin_MINOR))
    return PMPI_File_write_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_File_write_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_File_write_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_File_write_ordered_end at base level - Location = %px",&(MPI_File_write_ordered_end));

  if (NOT_ACTIVATED(MPI_File_write_ordered_end_MAJOR,MPI_File_write_ordered_end_MINOR))
    return PMPI_File_write_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_File_write_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_File_write_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_File_write_shared at base level - Location = %px",&(MPI_File_write_shared));

  if (NOT_ACTIVATED(MPI_File_write_shared_MAJOR,MPI_File_write_shared_MINOR))
    return PMPI_File_write_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_File_write_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Finalized(int * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Finalized at base level - Location = %px",&(MPI_Finalized));

  if (NOT_ACTIVATED(MPI_Finalized_MAJOR,MPI_Finalized_MINOR))
    return PMPI_Finalized(_pnmpi_arg_0);
  else
    return Internal_XMPI_Finalized(_pnmpi_arg_0);
}

int MPI_Free_mem(void * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Free_mem at base level - Location = %px",&(MPI_Free_mem));

  if (NOT_ACTIVATED(MPI_Free_mem_MAJOR,MPI_Free_mem_MINOR))
    return PMPI_Free_mem(_pnmpi_arg_0);
  else
    return Internal_XMPI_Free_mem(_pnmpi_arg_0);
}

int MPI_Gather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  DBGPRINT3("Entering Old MPI_Gather at base level - Location = %px",&(MPI_Gather));

  if (NOT_ACTIVATED(MPI_Gather_MAJOR,MPI_Gather_MINOR))
    return PMPI_Gather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  else
    return Internal_XMPI_Gather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Gatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  DBGPRINT3("Entering Old MPI_Gatherv at base level - Location = %px",&(MPI_Gatherv));

  if (NOT_ACTIVATED(MPI_Gatherv_MAJOR,MPI_Gatherv_MINOR))
    return PMPI_Gatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  else
    return Internal_XMPI_Gatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Get(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  DBGPRINT3("Entering Old MPI_Get at base level - Location = %px",&(MPI_Get));

  if (NOT_ACTIVATED(MPI_Get_MAJOR,MPI_Get_MINOR))
    return PMPI_Get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  else
    return Internal_XMPI_Get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Get_address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Get_address at base level - Location = %px",&(MPI_Get_address));

  if (NOT_ACTIVATED(MPI_Get_address_MAJOR,MPI_Get_address_MINOR))
    return PMPI_Get_address(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Get_address(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Get_count(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Get_count at base level - Location = %px",&(MPI_Get_count));

  if (NOT_ACTIVATED(MPI_Get_count_MAJOR,MPI_Get_count_MINOR))
    return PMPI_Get_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Get_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Get_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Get_elements at base level - Location = %px",&(MPI_Get_elements));

  if (NOT_ACTIVATED(MPI_Get_elements_MAJOR,MPI_Get_elements_MINOR))
    return PMPI_Get_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Get_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Get_processor_name(char * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Get_processor_name at base level - Location = %px",&(MPI_Get_processor_name));

  if (NOT_ACTIVATED(MPI_Get_processor_name_MAJOR,MPI_Get_processor_name_MINOR))
    return PMPI_Get_processor_name(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Get_processor_name(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Get_version(int * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Get_version at base level - Location = %px",&(MPI_Get_version));

  if (NOT_ACTIVATED(MPI_Get_version_MAJOR,MPI_Get_version_MINOR))
    return PMPI_Get_version(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Get_version(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Graph_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Graph_create at base level - Location = %px",&(MPI_Graph_create));

  if (NOT_ACTIVATED(MPI_Graph_create_MAJOR,MPI_Graph_create_MINOR))
    return PMPI_Graph_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Graph_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Graphdims_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Graphdims_get at base level - Location = %px",&(MPI_Graphdims_get));

  if (NOT_ACTIVATED(MPI_Graphdims_get_MAJOR,MPI_Graphdims_get_MINOR))
    return PMPI_Graphdims_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Graphdims_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Graph_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Graph_get at base level - Location = %px",&(MPI_Graph_get));

  if (NOT_ACTIVATED(MPI_Graph_get_MAJOR,MPI_Graph_get_MINOR))
    return PMPI_Graph_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Graph_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Graph_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Graph_map at base level - Location = %px",&(MPI_Graph_map));

  if (NOT_ACTIVATED(MPI_Graph_map_MAJOR,MPI_Graph_map_MINOR))
    return PMPI_Graph_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Graph_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Graph_neighbors(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Graph_neighbors at base level - Location = %px",&(MPI_Graph_neighbors));

  if (NOT_ACTIVATED(MPI_Graph_neighbors_MAJOR,MPI_Graph_neighbors_MINOR))
    return PMPI_Graph_neighbors(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Graph_neighbors(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Graph_neighbors_count(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Graph_neighbors_count at base level - Location = %px",&(MPI_Graph_neighbors_count));

  if (NOT_ACTIVATED(MPI_Graph_neighbors_count_MAJOR,MPI_Graph_neighbors_count_MINOR))
    return PMPI_Graph_neighbors_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Graph_neighbors_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Grequest_complete(MPI_Request _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Grequest_complete at base level - Location = %px",&(MPI_Grequest_complete));

  if (NOT_ACTIVATED(MPI_Grequest_complete_MAJOR,MPI_Grequest_complete_MINOR))
    return PMPI_Grequest_complete(_pnmpi_arg_0);
  else
    return Internal_XMPI_Grequest_complete(_pnmpi_arg_0);
}

int MPI_Grequest_start(MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Grequest_start at base level - Location = %px",&(MPI_Grequest_start));

  if (NOT_ACTIVATED(MPI_Grequest_start_MAJOR,MPI_Grequest_start_MINOR))
    return PMPI_Grequest_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Grequest_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Group_compare(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Group_compare at base level - Location = %px",&(MPI_Group_compare));

  if (NOT_ACTIVATED(MPI_Group_compare_MAJOR,MPI_Group_compare_MINOR))
    return PMPI_Group_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Group_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Group_difference(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Group_difference at base level - Location = %px",&(MPI_Group_difference));

  if (NOT_ACTIVATED(MPI_Group_difference_MAJOR,MPI_Group_difference_MINOR))
    return PMPI_Group_difference(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Group_difference(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Group_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Group_excl at base level - Location = %px",&(MPI_Group_excl));

  if (NOT_ACTIVATED(MPI_Group_excl_MAJOR,MPI_Group_excl_MINOR))
    return PMPI_Group_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Group_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_free(MPI_Group * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Group_free at base level - Location = %px",&(MPI_Group_free));

  if (NOT_ACTIVATED(MPI_Group_free_MAJOR,MPI_Group_free_MINOR))
    return PMPI_Group_free(_pnmpi_arg_0);
  else
    return Internal_XMPI_Group_free(_pnmpi_arg_0);
}

int MPI_Group_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Group_incl at base level - Location = %px",&(MPI_Group_incl));

  if (NOT_ACTIVATED(MPI_Group_incl_MAJOR,MPI_Group_incl_MINOR))
    return PMPI_Group_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Group_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_intersection(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Group_intersection at base level - Location = %px",&(MPI_Group_intersection));

  if (NOT_ACTIVATED(MPI_Group_intersection_MAJOR,MPI_Group_intersection_MINOR))
    return PMPI_Group_intersection(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Group_intersection(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Group_range_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Group_range_excl at base level - Location = %px",&(MPI_Group_range_excl));

  if (NOT_ACTIVATED(MPI_Group_range_excl_MAJOR,MPI_Group_range_excl_MINOR))
    return PMPI_Group_range_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Group_range_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_range_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Group_range_incl at base level - Location = %px",&(MPI_Group_range_incl));

  if (NOT_ACTIVATED(MPI_Group_range_incl_MAJOR,MPI_Group_range_incl_MINOR))
    return PMPI_Group_range_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Group_range_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Group_rank(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Group_rank at base level - Location = %px",&(MPI_Group_rank));

  if (NOT_ACTIVATED(MPI_Group_rank_MAJOR,MPI_Group_rank_MINOR))
    return PMPI_Group_rank(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Group_rank(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Group_size(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Group_size at base level - Location = %px",&(MPI_Group_size));

  if (NOT_ACTIVATED(MPI_Group_size_MAJOR,MPI_Group_size_MINOR))
    return PMPI_Group_size(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Group_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Group_translate_ranks(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Group_translate_ranks at base level - Location = %px",&(MPI_Group_translate_ranks));

  if (NOT_ACTIVATED(MPI_Group_translate_ranks_MAJOR,MPI_Group_translate_ranks_MINOR))
    return PMPI_Group_translate_ranks(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Group_translate_ranks(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Group_union(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Group_union at base level - Location = %px",&(MPI_Group_union));

  if (NOT_ACTIVATED(MPI_Group_union_MAJOR,MPI_Group_union_MINOR))
    return PMPI_Group_union(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Group_union(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Ibsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Ibsend at base level - Location = %px",&(MPI_Ibsend));

  if (NOT_ACTIVATED(MPI_Ibsend_MAJOR,MPI_Ibsend_MINOR))
    return PMPI_Ibsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Ibsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Info_create(MPI_Info * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Info_create at base level - Location = %px",&(MPI_Info_create));

  if (NOT_ACTIVATED(MPI_Info_create_MAJOR,MPI_Info_create_MINOR))
    return PMPI_Info_create(_pnmpi_arg_0);
  else
    return Internal_XMPI_Info_create(_pnmpi_arg_0);
}

int MPI_Info_delete(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Info_delete at base level - Location = %px",&(MPI_Info_delete));

  if (NOT_ACTIVATED(MPI_Info_delete_MAJOR,MPI_Info_delete_MINOR))
    return PMPI_Info_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Info_delete(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Info_dup(MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Info_dup at base level - Location = %px",&(MPI_Info_dup));

  if (NOT_ACTIVATED(MPI_Info_dup_MAJOR,MPI_Info_dup_MINOR))
    return PMPI_Info_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Info_dup(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Info_free(MPI_Info * info)
{
  DBGPRINT3("Entering Old MPI_Info_free at base level - Location = %px",&(MPI_Info_free));

  if (NOT_ACTIVATED(MPI_Info_free_MAJOR,MPI_Info_free_MINOR))
    return PMPI_Info_free(info);
  else
    return Internal_XMPI_Info_free(info);
}

int MPI_Info_get(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Info_get at base level - Location = %px",&(MPI_Info_get));

  if (NOT_ACTIVATED(MPI_Info_get_MAJOR,MPI_Info_get_MINOR))
    return PMPI_Info_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Info_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Info_get_nkeys(MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Info_get_nkeys at base level - Location = %px",&(MPI_Info_get_nkeys));

  if (NOT_ACTIVATED(MPI_Info_get_nkeys_MAJOR,MPI_Info_get_nkeys_MINOR))
    return PMPI_Info_get_nkeys(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Info_get_nkeys(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Info_get_nthkey(MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Info_get_nthkey at base level - Location = %px",&(MPI_Info_get_nthkey));

  if (NOT_ACTIVATED(MPI_Info_get_nthkey_MAJOR,MPI_Info_get_nthkey_MINOR))
    return PMPI_Info_get_nthkey(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Info_get_nthkey(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Info_get_valuelen(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Info_get_valuelen at base level - Location = %px",&(MPI_Info_get_valuelen));

  if (NOT_ACTIVATED(MPI_Info_get_valuelen_MAJOR,MPI_Info_get_valuelen_MINOR))
    return PMPI_Info_get_valuelen(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Info_get_valuelen(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Info_set(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Info_set at base level - Location = %px",&(MPI_Info_set));

  if (NOT_ACTIVATED(MPI_Info_set_MAJOR,MPI_Info_set_MINOR))
    return PMPI_Info_set(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Info_set(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Initialized(int * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Initialized at base level - Location = %px",&(MPI_Initialized));

  if (NOT_ACTIVATED(MPI_Initialized_MAJOR,MPI_Initialized_MINOR))
    return PMPI_Initialized(_pnmpi_arg_0);
  else
    return Internal_XMPI_Initialized(_pnmpi_arg_0);
}

int MPI_Init_thread(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Init_thread at base level - Location = %px",&(MPI_Init_thread));

  if (NOT_ACTIVATED(MPI_Init_thread_MAJOR,MPI_Init_thread_MINOR))
    return PMPI_Init_thread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Init_thread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Intercomm_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Intercomm_create at base level - Location = %px",&(MPI_Intercomm_create));

  if (NOT_ACTIVATED(MPI_Intercomm_create_MAJOR,MPI_Intercomm_create_MINOR))
    return PMPI_Intercomm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Intercomm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Intercomm_merge(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Intercomm_merge at base level - Location = %px",&(MPI_Intercomm_merge));

  if (NOT_ACTIVATED(MPI_Intercomm_merge_MAJOR,MPI_Intercomm_merge_MINOR))
    return PMPI_Intercomm_merge(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Intercomm_merge(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Iprobe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Iprobe at base level - Location = %px",&(MPI_Iprobe));

  if (NOT_ACTIVATED(MPI_Iprobe_MAJOR,MPI_Iprobe_MINOR))
    return PMPI_Iprobe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Iprobe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Irecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Irecv at base level - Location = %px",&(MPI_Irecv));

  if (NOT_ACTIVATED(MPI_Irecv_MAJOR,MPI_Irecv_MINOR))
    return PMPI_Irecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Irecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Irsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Irsend at base level - Location = %px",&(MPI_Irsend));

  if (NOT_ACTIVATED(MPI_Irsend_MAJOR,MPI_Irsend_MINOR))
    return PMPI_Irsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Irsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Isend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Isend at base level - Location = %px",&(MPI_Isend));

  if (NOT_ACTIVATED(MPI_Isend_MAJOR,MPI_Isend_MINOR))
    return PMPI_Isend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Isend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Issend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Issend at base level - Location = %px",&(MPI_Issend));

  if (NOT_ACTIVATED(MPI_Issend_MAJOR,MPI_Issend_MINOR))
    return PMPI_Issend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Issend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Is_thread_main(int * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Is_thread_main at base level - Location = %px",&(MPI_Is_thread_main));

  if (NOT_ACTIVATED(MPI_Is_thread_main_MAJOR,MPI_Is_thread_main_MINOR))
    return PMPI_Is_thread_main(_pnmpi_arg_0);
  else
    return Internal_XMPI_Is_thread_main(_pnmpi_arg_0);
}

int MPI_Keyval_create(MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Keyval_create at base level - Location = %px",&(MPI_Keyval_create));

  if (NOT_ACTIVATED(MPI_Keyval_create_MAJOR,MPI_Keyval_create_MINOR))
    return PMPI_Keyval_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Keyval_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Keyval_free(int * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Keyval_free at base level - Location = %px",&(MPI_Keyval_free));

  if (NOT_ACTIVATED(MPI_Keyval_free_MAJOR,MPI_Keyval_free_MINOR))
    return PMPI_Keyval_free(_pnmpi_arg_0);
  else
    return Internal_XMPI_Keyval_free(_pnmpi_arg_0);
}

int MPI_Lookup_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Lookup_name at base level - Location = %px",&(MPI_Lookup_name));

  if (NOT_ACTIVATED(MPI_Lookup_name_MAJOR,MPI_Lookup_name_MINOR))
    return PMPI_Lookup_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Lookup_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Op_commutative(MPI_Op op, int * commute)
{
  DBGPRINT3("Entering Old MPI_Op_commutative at base level - Location = %px",&(MPI_Op_commutative));

  if (NOT_ACTIVATED(MPI_Op_commutative_MAJOR,MPI_Op_commutative_MINOR))
    return PMPI_Op_commutative(op, commute);
  else
    return Internal_XMPI_Op_commutative(op, commute);
}

int MPI_Op_create(MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Op_create at base level - Location = %px",&(MPI_Op_create));

  if (NOT_ACTIVATED(MPI_Op_create_MAJOR,MPI_Op_create_MINOR))
    return PMPI_Op_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Op_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Open_port(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Open_port at base level - Location = %px",&(MPI_Open_port));

  if (NOT_ACTIVATED(MPI_Open_port_MAJOR,MPI_Open_port_MINOR))
    return PMPI_Open_port(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Open_port(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Op_free(MPI_Op * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Op_free at base level - Location = %px",&(MPI_Op_free));

  if (NOT_ACTIVATED(MPI_Op_free_MAJOR,MPI_Op_free_MINOR))
    return PMPI_Op_free(_pnmpi_arg_0);
  else
    return Internal_XMPI_Op_free(_pnmpi_arg_0);
}

int MPI_Pack(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Pack at base level - Location = %px",&(MPI_Pack));

  if (NOT_ACTIVATED(MPI_Pack_MAJOR,MPI_Pack_MINOR))
    return PMPI_Pack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Pack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Pack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Pack_external at base level - Location = %px",&(MPI_Pack_external));

  if (NOT_ACTIVATED(MPI_Pack_external_MAJOR,MPI_Pack_external_MINOR))
    return PMPI_Pack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Pack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Pack_external_size(char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Pack_external_size at base level - Location = %px",&(MPI_Pack_external_size));

  if (NOT_ACTIVATED(MPI_Pack_external_size_MAJOR,MPI_Pack_external_size_MINOR))
    return PMPI_Pack_external_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Pack_external_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Pack_size(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Pack_size at base level - Location = %px",&(MPI_Pack_size));

  if (NOT_ACTIVATED(MPI_Pack_size_MAJOR,MPI_Pack_size_MINOR))
    return PMPI_Pack_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Pack_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Probe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Probe at base level - Location = %px",&(MPI_Probe));

  if (NOT_ACTIVATED(MPI_Probe_MAJOR,MPI_Probe_MINOR))
    return PMPI_Probe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Probe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Publish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Publish_name at base level - Location = %px",&(MPI_Publish_name));

  if (NOT_ACTIVATED(MPI_Publish_name_MAJOR,MPI_Publish_name_MINOR))
    return PMPI_Publish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Publish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Put(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  DBGPRINT3("Entering Old MPI_Put at base level - Location = %px",&(MPI_Put));

  if (NOT_ACTIVATED(MPI_Put_MAJOR,MPI_Put_MINOR))
    return PMPI_Put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  else
    return Internal_XMPI_Put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Query_thread(int * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Query_thread at base level - Location = %px",&(MPI_Query_thread));

  if (NOT_ACTIVATED(MPI_Query_thread_MAJOR,MPI_Query_thread_MINOR))
    return PMPI_Query_thread(_pnmpi_arg_0);
  else
    return Internal_XMPI_Query_thread(_pnmpi_arg_0);
}

int MPI_Recv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Recv at base level - Location = %px",&(MPI_Recv));

  if (NOT_ACTIVATED(MPI_Recv_MAJOR,MPI_Recv_MINOR))
    return PMPI_Recv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Recv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Recv_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Recv_init at base level - Location = %px",&(MPI_Recv_init));

  if (NOT_ACTIVATED(MPI_Recv_init_MAJOR,MPI_Recv_init_MINOR))
    return PMPI_Recv_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Recv_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Reduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Reduce at base level - Location = %px",&(MPI_Reduce));

  if (NOT_ACTIVATED(MPI_Reduce_MAJOR,MPI_Reduce_MINOR))
    return PMPI_Reduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Reduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Reduce_local(void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op)
{
  DBGPRINT3("Entering Old MPI_Reduce_local at base level - Location = %px",&(MPI_Reduce_local));

  if (NOT_ACTIVATED(MPI_Reduce_local_MAJOR,MPI_Reduce_local_MINOR))
    return PMPI_Reduce_local(inbuf, inoutbuf, count, datatype, op);
  else
    return Internal_XMPI_Reduce_local(inbuf, inoutbuf, count, datatype, op);
}

int MPI_Reduce_scatter(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Reduce_scatter at base level - Location = %px",&(MPI_Reduce_scatter));

  if (NOT_ACTIVATED(MPI_Reduce_scatter_MAJOR,MPI_Reduce_scatter_MINOR))
    return PMPI_Reduce_scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Reduce_scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Reduce_scatter_block(void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  DBGPRINT3("Entering Old MPI_Reduce_scatter_block at base level - Location = %px",&(MPI_Reduce_scatter_block));

  if (NOT_ACTIVATED(MPI_Reduce_scatter_block_MAJOR,MPI_Reduce_scatter_block_MINOR))
    return PMPI_Reduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm);
  else
    return Internal_XMPI_Reduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm);
}

int MPI_Register_datarep(char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Register_datarep at base level - Location = %px",&(MPI_Register_datarep));

  if (NOT_ACTIVATED(MPI_Register_datarep_MAJOR,MPI_Register_datarep_MINOR))
    return PMPI_Register_datarep(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Register_datarep(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Request_free(MPI_Request * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Request_free at base level - Location = %px",&(MPI_Request_free));

  if (NOT_ACTIVATED(MPI_Request_free_MAJOR,MPI_Request_free_MINOR))
    return PMPI_Request_free(_pnmpi_arg_0);
  else
    return Internal_XMPI_Request_free(_pnmpi_arg_0);
}

int MPI_Request_get_status(MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Request_get_status at base level - Location = %px",&(MPI_Request_get_status));

  if (NOT_ACTIVATED(MPI_Request_get_status_MAJOR,MPI_Request_get_status_MINOR))
    return PMPI_Request_get_status(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Request_get_status(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Rsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Rsend at base level - Location = %px",&(MPI_Rsend));

  if (NOT_ACTIVATED(MPI_Rsend_MAJOR,MPI_Rsend_MINOR))
    return PMPI_Rsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Rsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Rsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Rsend_init at base level - Location = %px",&(MPI_Rsend_init));

  if (NOT_ACTIVATED(MPI_Rsend_init_MAJOR,MPI_Rsend_init_MINOR))
    return PMPI_Rsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Rsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Scan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Scan at base level - Location = %px",&(MPI_Scan));

  if (NOT_ACTIVATED(MPI_Scan_MAJOR,MPI_Scan_MINOR))
    return PMPI_Scan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Scan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Scatter(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  DBGPRINT3("Entering Old MPI_Scatter at base level - Location = %px",&(MPI_Scatter));

  if (NOT_ACTIVATED(MPI_Scatter_MAJOR,MPI_Scatter_MINOR))
    return PMPI_Scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  else
    return Internal_XMPI_Scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
}

int MPI_Scatterv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  DBGPRINT3("Entering Old MPI_Scatterv at base level - Location = %px",&(MPI_Scatterv));

  if (NOT_ACTIVATED(MPI_Scatterv_MAJOR,MPI_Scatterv_MINOR))
    return PMPI_Scatterv(_pnmpi_arg_0, _pnmpi_arg_1, displs, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  else
    return Internal_XMPI_Scatterv(_pnmpi_arg_0, _pnmpi_arg_1, displs, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Send(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Send at base level - Location = %px",&(MPI_Send));

  if (NOT_ACTIVATED(MPI_Send_MAJOR,MPI_Send_MINOR))
    return PMPI_Send(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Send(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Send_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Send_init at base level - Location = %px",&(MPI_Send_init));

  if (NOT_ACTIVATED(MPI_Send_init_MAJOR,MPI_Send_init_MINOR))
    return PMPI_Send_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Send_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Sendrecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11)
{
  DBGPRINT3("Entering Old MPI_Sendrecv at base level - Location = %px",&(MPI_Sendrecv));

  if (NOT_ACTIVATED(MPI_Sendrecv_MAJOR,MPI_Sendrecv_MINOR))
    return PMPI_Sendrecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9, _pnmpi_arg_10, _pnmpi_arg_11);
  else
    return Internal_XMPI_Sendrecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9, _pnmpi_arg_10, _pnmpi_arg_11);
}

int MPI_Sendrecv_replace(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8)
{
  DBGPRINT3("Entering Old MPI_Sendrecv_replace at base level - Location = %px",&(MPI_Sendrecv_replace));

  if (NOT_ACTIVATED(MPI_Sendrecv_replace_MAJOR,MPI_Sendrecv_replace_MINOR))
    return PMPI_Sendrecv_replace(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  else
    return Internal_XMPI_Sendrecv_replace(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
}

int MPI_Ssend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Ssend at base level - Location = %px",&(MPI_Ssend));

  if (NOT_ACTIVATED(MPI_Ssend_MAJOR,MPI_Ssend_MINOR))
    return PMPI_Ssend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Ssend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Ssend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Ssend_init at base level - Location = %px",&(MPI_Ssend_init));

  if (NOT_ACTIVATED(MPI_Ssend_init_MAJOR,MPI_Ssend_init_MINOR))
    return PMPI_Ssend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Ssend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Start(MPI_Request * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Start at base level - Location = %px",&(MPI_Start));

  if (NOT_ACTIVATED(MPI_Start_MAJOR,MPI_Start_MINOR))
    return PMPI_Start(_pnmpi_arg_0);
  else
    return Internal_XMPI_Start(_pnmpi_arg_0);
}

int MPI_Startall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Startall at base level - Location = %px",&(MPI_Startall));

  if (NOT_ACTIVATED(MPI_Startall_MAJOR,MPI_Startall_MINOR))
    return PMPI_Startall(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Startall(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Status_set_cancelled(MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Status_set_cancelled at base level - Location = %px",&(MPI_Status_set_cancelled));

  if (NOT_ACTIVATED(MPI_Status_set_cancelled_MAJOR,MPI_Status_set_cancelled_MINOR))
    return PMPI_Status_set_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Status_set_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Status_set_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Status_set_elements at base level - Location = %px",&(MPI_Status_set_elements));

  if (NOT_ACTIVATED(MPI_Status_set_elements_MAJOR,MPI_Status_set_elements_MINOR))
    return PMPI_Status_set_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Status_set_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Test(MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Test at base level - Location = %px",&(MPI_Test));

  if (NOT_ACTIVATED(MPI_Test_MAJOR,MPI_Test_MINOR))
    return PMPI_Test(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Test(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Testall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Testall at base level - Location = %px",&(MPI_Testall));

  if (NOT_ACTIVATED(MPI_Testall_MAJOR,MPI_Testall_MINOR))
    return PMPI_Testall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Testall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Testany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Testany at base level - Location = %px",&(MPI_Testany));

  if (NOT_ACTIVATED(MPI_Testany_MAJOR,MPI_Testany_MINOR))
    return PMPI_Testany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Testany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Test_cancelled(MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Test_cancelled at base level - Location = %px",&(MPI_Test_cancelled));

  if (NOT_ACTIVATED(MPI_Test_cancelled_MAJOR,MPI_Test_cancelled_MINOR))
    return PMPI_Test_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Test_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Testsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Testsome at base level - Location = %px",&(MPI_Testsome));

  if (NOT_ACTIVATED(MPI_Testsome_MAJOR,MPI_Testsome_MINOR))
    return PMPI_Testsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Testsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Topo_test(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Topo_test at base level - Location = %px",&(MPI_Topo_test));

  if (NOT_ACTIVATED(MPI_Topo_test_MAJOR,MPI_Topo_test_MINOR))
    return PMPI_Topo_test(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Topo_test(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_commit(MPI_Datatype * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Type_commit at base level - Location = %px",&(MPI_Type_commit));

  if (NOT_ACTIVATED(MPI_Type_commit_MAJOR,MPI_Type_commit_MINOR))
    return PMPI_Type_commit(_pnmpi_arg_0);
  else
    return Internal_XMPI_Type_commit(_pnmpi_arg_0);
}

int MPI_Type_contiguous(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Type_contiguous at base level - Location = %px",&(MPI_Type_contiguous));

  if (NOT_ACTIVATED(MPI_Type_contiguous_MAJOR,MPI_Type_contiguous_MINOR))
    return PMPI_Type_contiguous(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Type_contiguous(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_create_darray(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9)
{
  DBGPRINT3("Entering Old MPI_Type_create_darray at base level - Location = %px",&(MPI_Type_create_darray));

  if (NOT_ACTIVATED(MPI_Type_create_darray_MAJOR,MPI_Type_create_darray_MINOR))
    return PMPI_Type_create_darray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9);
  else
    return Internal_XMPI_Type_create_darray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9);
}

int MPI_Type_create_f90_complex(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Type_create_f90_complex at base level - Location = %px",&(MPI_Type_create_f90_complex));

  if (NOT_ACTIVATED(MPI_Type_create_f90_complex_MAJOR,MPI_Type_create_f90_complex_MINOR))
    return PMPI_Type_create_f90_complex(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Type_create_f90_complex(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_create_f90_integer(int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Type_create_f90_integer at base level - Location = %px",&(MPI_Type_create_f90_integer));

  if (NOT_ACTIVATED(MPI_Type_create_f90_integer_MAJOR,MPI_Type_create_f90_integer_MINOR))
    return PMPI_Type_create_f90_integer(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Type_create_f90_integer(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_create_f90_real(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Type_create_f90_real at base level - Location = %px",&(MPI_Type_create_f90_real));

  if (NOT_ACTIVATED(MPI_Type_create_f90_real_MAJOR,MPI_Type_create_f90_real_MINOR))
    return PMPI_Type_create_f90_real(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Type_create_f90_real(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_create_hindexed(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Type_create_hindexed at base level - Location = %px",&(MPI_Type_create_hindexed));

  if (NOT_ACTIVATED(MPI_Type_create_hindexed_MAJOR,MPI_Type_create_hindexed_MINOR))
    return PMPI_Type_create_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Type_create_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Type_create_hvector at base level - Location = %px",&(MPI_Type_create_hvector));

  if (NOT_ACTIVATED(MPI_Type_create_hvector_MAJOR,MPI_Type_create_hvector_MINOR))
    return PMPI_Type_create_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Type_create_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_indexed_block(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Type_create_indexed_block at base level - Location = %px",&(MPI_Type_create_indexed_block));

  if (NOT_ACTIVATED(MPI_Type_create_indexed_block_MAJOR,MPI_Type_create_indexed_block_MINOR))
    return PMPI_Type_create_indexed_block(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Type_create_indexed_block(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_keyval(MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Type_create_keyval at base level - Location = %px",&(MPI_Type_create_keyval));

  if (NOT_ACTIVATED(MPI_Type_create_keyval_MAJOR,MPI_Type_create_keyval_MINOR))
    return PMPI_Type_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Type_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Type_create_resized(MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Type_create_resized at base level - Location = %px",&(MPI_Type_create_resized));

  if (NOT_ACTIVATED(MPI_Type_create_resized_MAJOR,MPI_Type_create_resized_MINOR))
    return PMPI_Type_create_resized(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Type_create_resized(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Type_create_struct(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Type_create_struct at base level - Location = %px",&(MPI_Type_create_struct));

  if (NOT_ACTIVATED(MPI_Type_create_struct_MAJOR,MPI_Type_create_struct_MINOR))
    return PMPI_Type_create_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Type_create_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_create_subarray(int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Type_create_subarray at base level - Location = %px",&(MPI_Type_create_subarray));

  if (NOT_ACTIVATED(MPI_Type_create_subarray_MAJOR,MPI_Type_create_subarray_MINOR))
    return PMPI_Type_create_subarray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Type_create_subarray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Type_delete_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Type_delete_attr at base level - Location = %px",&(MPI_Type_delete_attr));

  if (NOT_ACTIVATED(MPI_Type_delete_attr_MAJOR,MPI_Type_delete_attr_MINOR))
    return PMPI_Type_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Type_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_dup(MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Type_dup at base level - Location = %px",&(MPI_Type_dup));

  if (NOT_ACTIVATED(MPI_Type_dup_MAJOR,MPI_Type_dup_MINOR))
    return PMPI_Type_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Type_dup(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Type_extent at base level - Location = %px",&(MPI_Type_extent));

  if (NOT_ACTIVATED(MPI_Type_extent_MAJOR,MPI_Type_extent_MINOR))
    return PMPI_Type_extent(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Type_extent(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_free(MPI_Datatype * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Type_free at base level - Location = %px",&(MPI_Type_free));

  if (NOT_ACTIVATED(MPI_Type_free_MAJOR,MPI_Type_free_MINOR))
    return PMPI_Type_free(_pnmpi_arg_0);
  else
    return Internal_XMPI_Type_free(_pnmpi_arg_0);
}

int MPI_Type_free_keyval(int * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Type_free_keyval at base level - Location = %px",&(MPI_Type_free_keyval));

  if (NOT_ACTIVATED(MPI_Type_free_keyval_MAJOR,MPI_Type_free_keyval_MINOR))
    return PMPI_Type_free_keyval(_pnmpi_arg_0);
  else
    return Internal_XMPI_Type_free_keyval(_pnmpi_arg_0);
}

int MPI_Type_get_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Type_get_attr at base level - Location = %px",&(MPI_Type_get_attr));

  if (NOT_ACTIVATED(MPI_Type_get_attr_MAJOR,MPI_Type_get_attr_MINOR))
    return PMPI_Type_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Type_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Type_get_contents(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[])
{
  DBGPRINT3("Entering Old MPI_Type_get_contents at base level - Location = %px",&(MPI_Type_get_contents));

  if (NOT_ACTIVATED(MPI_Type_get_contents_MAJOR,MPI_Type_get_contents_MINOR))
    return PMPI_Type_get_contents(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Type_get_contents(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Type_get_envelope(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Type_get_envelope at base level - Location = %px",&(MPI_Type_get_envelope));

  if (NOT_ACTIVATED(MPI_Type_get_envelope_MAJOR,MPI_Type_get_envelope_MINOR))
    return PMPI_Type_get_envelope(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Type_get_envelope(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_get_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Type_get_extent at base level - Location = %px",&(MPI_Type_get_extent));

  if (NOT_ACTIVATED(MPI_Type_get_extent_MAJOR,MPI_Type_get_extent_MINOR))
    return PMPI_Type_get_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Type_get_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_get_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Type_get_name at base level - Location = %px",&(MPI_Type_get_name));

  if (NOT_ACTIVATED(MPI_Type_get_name_MAJOR,MPI_Type_get_name_MINOR))
    return PMPI_Type_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Type_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_get_true_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Type_get_true_extent at base level - Location = %px",&(MPI_Type_get_true_extent));

  if (NOT_ACTIVATED(MPI_Type_get_true_extent_MAJOR,MPI_Type_get_true_extent_MINOR))
    return PMPI_Type_get_true_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Type_get_true_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_hindexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Type_hindexed at base level - Location = %px",&(MPI_Type_hindexed));

  if (NOT_ACTIVATED(MPI_Type_hindexed_MAJOR,MPI_Type_hindexed_MINOR))
    return PMPI_Type_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Type_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Type_hvector at base level - Location = %px",&(MPI_Type_hvector));

  if (NOT_ACTIVATED(MPI_Type_hvector_MAJOR,MPI_Type_hvector_MINOR))
    return PMPI_Type_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Type_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_indexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Type_indexed at base level - Location = %px",&(MPI_Type_indexed));

  if (NOT_ACTIVATED(MPI_Type_indexed_MAJOR,MPI_Type_indexed_MINOR))
    return PMPI_Type_indexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Type_indexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_lb(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Type_lb at base level - Location = %px",&(MPI_Type_lb));

  if (NOT_ACTIVATED(MPI_Type_lb_MAJOR,MPI_Type_lb_MINOR))
    return PMPI_Type_lb(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Type_lb(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_match_size(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Type_match_size at base level - Location = %px",&(MPI_Type_match_size));

  if (NOT_ACTIVATED(MPI_Type_match_size_MAJOR,MPI_Type_match_size_MINOR))
    return PMPI_Type_match_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Type_match_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_set_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Type_set_attr at base level - Location = %px",&(MPI_Type_set_attr));

  if (NOT_ACTIVATED(MPI_Type_set_attr_MAJOR,MPI_Type_set_attr_MINOR))
    return PMPI_Type_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Type_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Type_set_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Type_set_name at base level - Location = %px",&(MPI_Type_set_name));

  if (NOT_ACTIVATED(MPI_Type_set_name_MAJOR,MPI_Type_set_name_MINOR))
    return PMPI_Type_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Type_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_size(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Type_size at base level - Location = %px",&(MPI_Type_size));

  if (NOT_ACTIVATED(MPI_Type_size_MAJOR,MPI_Type_size_MINOR))
    return PMPI_Type_size(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Type_size(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_struct(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Type_struct at base level - Location = %px",&(MPI_Type_struct));

  if (NOT_ACTIVATED(MPI_Type_struct_MAJOR,MPI_Type_struct_MINOR))
    return PMPI_Type_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Type_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Type_ub(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Type_ub at base level - Location = %px",&(MPI_Type_ub));

  if (NOT_ACTIVATED(MPI_Type_ub_MAJOR,MPI_Type_ub_MINOR))
    return PMPI_Type_ub(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Type_ub(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Type_vector(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Type_vector at base level - Location = %px",&(MPI_Type_vector));

  if (NOT_ACTIVATED(MPI_Type_vector_MAJOR,MPI_Type_vector_MINOR))
    return PMPI_Type_vector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Type_vector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Unpack(void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Unpack at base level - Location = %px",&(MPI_Unpack));

  if (NOT_ACTIVATED(MPI_Unpack_MAJOR,MPI_Unpack_MINOR))
    return PMPI_Unpack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Unpack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Unpack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6)
{
  DBGPRINT3("Entering Old MPI_Unpack_external at base level - Location = %px",&(MPI_Unpack_external));

  if (NOT_ACTIVATED(MPI_Unpack_external_MAJOR,MPI_Unpack_external_MINOR))
    return PMPI_Unpack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  else
    return Internal_XMPI_Unpack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
}

int MPI_Unpublish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Unpublish_name at base level - Location = %px",&(MPI_Unpublish_name));

  if (NOT_ACTIVATED(MPI_Unpublish_name_MAJOR,MPI_Unpublish_name_MINOR))
    return PMPI_Unpublish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Unpublish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Wait(MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Wait at base level - Location = %px",&(MPI_Wait));

  if (NOT_ACTIVATED(MPI_Wait_MAJOR,MPI_Wait_MINOR))
    return PMPI_Wait(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Wait(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Waitall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Waitall at base level - Location = %px",&(MPI_Waitall));

  if (NOT_ACTIVATED(MPI_Waitall_MAJOR,MPI_Waitall_MINOR))
    return PMPI_Waitall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Waitall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Waitany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Waitany at base level - Location = %px",&(MPI_Waitany));

  if (NOT_ACTIVATED(MPI_Waitany_MAJOR,MPI_Waitany_MINOR))
    return PMPI_Waitany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Waitany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Waitsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  DBGPRINT3("Entering Old MPI_Waitsome at base level - Location = %px",&(MPI_Waitsome));

  if (NOT_ACTIVATED(MPI_Waitsome_MAJOR,MPI_Waitsome_MINOR))
    return PMPI_Waitsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  else
    return Internal_XMPI_Waitsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
}

int MPI_Win_call_errhandler(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Win_call_errhandler at base level - Location = %px",&(MPI_Win_call_errhandler));

  if (NOT_ACTIVATED(MPI_Win_call_errhandler_MAJOR,MPI_Win_call_errhandler_MINOR))
    return PMPI_Win_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Win_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_complete(MPI_Win _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Win_complete at base level - Location = %px",&(MPI_Win_complete));

  if (NOT_ACTIVATED(MPI_Win_complete_MAJOR,MPI_Win_complete_MINOR))
    return PMPI_Win_complete(_pnmpi_arg_0);
  else
    return Internal_XMPI_Win_complete(_pnmpi_arg_0);
}

int MPI_Win_create(void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5)
{
  DBGPRINT3("Entering Old MPI_Win_create at base level - Location = %px",&(MPI_Win_create));

  if (NOT_ACTIVATED(MPI_Win_create_MAJOR,MPI_Win_create_MINOR))
    return PMPI_Win_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  else
    return Internal_XMPI_Win_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
}

int MPI_Win_create_errhandler(MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Win_create_errhandler at base level - Location = %px",&(MPI_Win_create_errhandler));

  if (NOT_ACTIVATED(MPI_Win_create_errhandler_MAJOR,MPI_Win_create_errhandler_MINOR))
    return PMPI_Win_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Win_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_create_keyval(MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Win_create_keyval at base level - Location = %px",&(MPI_Win_create_keyval));

  if (NOT_ACTIVATED(MPI_Win_create_keyval_MAJOR,MPI_Win_create_keyval_MINOR))
    return PMPI_Win_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Win_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Win_delete_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Win_delete_attr at base level - Location = %px",&(MPI_Win_delete_attr));

  if (NOT_ACTIVATED(MPI_Win_delete_attr_MAJOR,MPI_Win_delete_attr_MINOR))
    return PMPI_Win_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Win_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_fence(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Win_fence at base level - Location = %px",&(MPI_Win_fence));

  if (NOT_ACTIVATED(MPI_Win_fence_MAJOR,MPI_Win_fence_MINOR))
    return PMPI_Win_fence(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Win_fence(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_free(MPI_Win * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Win_free at base level - Location = %px",&(MPI_Win_free));

  if (NOT_ACTIVATED(MPI_Win_free_MAJOR,MPI_Win_free_MINOR))
    return PMPI_Win_free(_pnmpi_arg_0);
  else
    return Internal_XMPI_Win_free(_pnmpi_arg_0);
}

int MPI_Win_free_keyval(int * _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Win_free_keyval at base level - Location = %px",&(MPI_Win_free_keyval));

  if (NOT_ACTIVATED(MPI_Win_free_keyval_MAJOR,MPI_Win_free_keyval_MINOR))
    return PMPI_Win_free_keyval(_pnmpi_arg_0);
  else
    return Internal_XMPI_Win_free_keyval(_pnmpi_arg_0);
}

int MPI_Win_get_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Win_get_attr at base level - Location = %px",&(MPI_Win_get_attr));

  if (NOT_ACTIVATED(MPI_Win_get_attr_MAJOR,MPI_Win_get_attr_MINOR))
    return PMPI_Win_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Win_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Win_get_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Win_get_errhandler at base level - Location = %px",&(MPI_Win_get_errhandler));

  if (NOT_ACTIVATED(MPI_Win_get_errhandler_MAJOR,MPI_Win_get_errhandler_MINOR))
    return PMPI_Win_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Win_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_get_group(MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Win_get_group at base level - Location = %px",&(MPI_Win_get_group));

  if (NOT_ACTIVATED(MPI_Win_get_group_MAJOR,MPI_Win_get_group_MINOR))
    return PMPI_Win_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Win_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_get_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Win_get_name at base level - Location = %px",&(MPI_Win_get_name));

  if (NOT_ACTIVATED(MPI_Win_get_name_MAJOR,MPI_Win_get_name_MINOR))
    return PMPI_Win_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Win_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_lock(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3)
{
  DBGPRINT3("Entering Old MPI_Win_lock at base level - Location = %px",&(MPI_Win_lock));

  if (NOT_ACTIVATED(MPI_Win_lock_MAJOR,MPI_Win_lock_MINOR))
    return PMPI_Win_lock(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  else
    return Internal_XMPI_Win_lock(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
}

int MPI_Win_post(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Win_post at base level - Location = %px",&(MPI_Win_post));

  if (NOT_ACTIVATED(MPI_Win_post_MAJOR,MPI_Win_post_MINOR))
    return PMPI_Win_post(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Win_post(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_set_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Win_set_attr at base level - Location = %px",&(MPI_Win_set_attr));

  if (NOT_ACTIVATED(MPI_Win_set_attr_MAJOR,MPI_Win_set_attr_MINOR))
    return PMPI_Win_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Win_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_set_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Win_set_errhandler at base level - Location = %px",&(MPI_Win_set_errhandler));

  if (NOT_ACTIVATED(MPI_Win_set_errhandler_MAJOR,MPI_Win_set_errhandler_MINOR))
    return PMPI_Win_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Win_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_set_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Win_set_name at base level - Location = %px",&(MPI_Win_set_name));

  if (NOT_ACTIVATED(MPI_Win_set_name_MAJOR,MPI_Win_set_name_MINOR))
    return PMPI_Win_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Win_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_start(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  DBGPRINT3("Entering Old MPI_Win_start at base level - Location = %px",&(MPI_Win_start));

  if (NOT_ACTIVATED(MPI_Win_start_MAJOR,MPI_Win_start_MINOR))
    return PMPI_Win_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  else
    return Internal_XMPI_Win_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
}

int MPI_Win_test(MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Win_test at base level - Location = %px",&(MPI_Win_test));

  if (NOT_ACTIVATED(MPI_Win_test_MAJOR,MPI_Win_test_MINOR))
    return PMPI_Win_test(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Win_test(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_unlock(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  DBGPRINT3("Entering Old MPI_Win_unlock at base level - Location = %px",&(MPI_Win_unlock));

  if (NOT_ACTIVATED(MPI_Win_unlock_MAJOR,MPI_Win_unlock_MINOR))
    return PMPI_Win_unlock(_pnmpi_arg_0, _pnmpi_arg_1);
  else
    return Internal_XMPI_Win_unlock(_pnmpi_arg_0, _pnmpi_arg_1);
}

int MPI_Win_wait(MPI_Win _pnmpi_arg_0)
{
  DBGPRINT3("Entering Old MPI_Win_wait at base level - Location = %px",&(MPI_Win_wait));

  if (NOT_ACTIVATED(MPI_Win_wait_MAJOR,MPI_Win_wait_MINOR))
    return PMPI_Win_wait(_pnmpi_arg_0);
  else
    return Internal_XMPI_Win_wait(_pnmpi_arg_0);
}

double MPI_Wtick(void)
{
  DBGPRINT3("Entering Old MPI_Wtick at base level - Location = %px",&(MPI_Wtick));

  if (NOT_ACTIVATED(MPI_Wtick_MAJOR,MPI_Wtick_MINOR))
    return PMPI_Wtick();
  else
    return Internal_XMPI_Wtick();
}

double MPI_Wtime(void)
{
  DBGPRINT3("Entering Old MPI_Wtime at base level - Location = %px",&(MPI_Wtime));

  if (NOT_ACTIVATED(MPI_Wtime_MAJOR,MPI_Wtime_MINOR))
    return PMPI_Wtime();
  else
    return Internal_XMPI_Wtime();
}




int XMPI_Abort(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Abort(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Accumulate(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Accumulate(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Add_error_class(int * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Add_error_class(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Add_error_code(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Add_error_code(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Add_error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Add_error_string(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Address(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Allgather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Allgather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Allgatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Allgatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Alloc_mem(MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Alloc_mem(_pnmpi_arg_0, info, baseptr);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Allreduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Allreduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Alltoall(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Alltoall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Alltoallv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Alltoallv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Alltoallw(void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Alltoallw(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Attr_delete(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Attr_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Attr_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Attr_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Attr_put(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Attr_put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Barrier(MPI_Comm _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Barrier(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Bcast(void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Bcast(buffer, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Bsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Bsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Bsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Bsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Buffer_attach(void * buffer, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Buffer_attach(buffer, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Buffer_detach(void * buffer, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Buffer_detach(buffer, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Cancel(MPI_Request * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Cancel(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Cart_coords(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Cart_coords(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Cart_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Cart_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Cartdim_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Cartdim_get(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Cart_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Cart_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Cart_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Cart_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Cart_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Cart_rank(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Cart_shift(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Cart_shift(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Cart_sub(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Cart_sub(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Close_port(char * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Close_port(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_accept(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_accept(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_call_errhandler(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_compare(MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_connect(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_connect(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_create(MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_create_errhandler(MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_create_keyval(MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_delete_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_disconnect(MPI_Comm * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_disconnect(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_dup(MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_free(MPI_Comm * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_free(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_free_keyval(int * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_free_keyval(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_get_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_get_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_get_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_get_parent(MPI_Comm * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_get_parent(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_group(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_join(int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_join(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_rank(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_rank(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_remote_group(MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_remote_group(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_remote_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_remote_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_set_attr(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_set_errhandler(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_set_name(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_size(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_spawn(char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[])
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_spawn(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_spawn_multiple(int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[])
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_spawn_multiple(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_split(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_split(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Comm_test_inter(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Comm_test_inter(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Dims_create(int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Dims_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Dist_graph_create(MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Dist_graph_create(comm_old, n, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, info, reorder, comm_dist_graph);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Dist_graph_create_adjacent(MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Dist_graph_create_adjacent(comm_old, indegree, _pnmpi_arg_2, _pnmpi_arg_3, outdegree, _pnmpi_arg_5, _pnmpi_arg_6, info, reorder, comm_dist_graph);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Dist_graph_neighbors(MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[])
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Dist_graph_neighbors(comm, maxindegree, _pnmpi_arg_2, _pnmpi_arg_3, maxoutdegree, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Dist_graph_neighbors_count(MPI_Comm comm, int * indegree, int * outdegree, int * weighted)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Dist_graph_neighbors_count(comm, indegree, outdegree, weighted);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Errhandler_create(MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Errhandler_create(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Errhandler_free(MPI_Errhandler * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Errhandler_free(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Errhandler_get(MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Errhandler_get(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Errhandler_set(MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Errhandler_set(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Error_class(int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Error_class(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Error_string(int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Error_string(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Exscan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Exscan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_call_errhandler(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_close(MPI_File * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_close(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_create_errhandler(MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_delete(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_amode(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_amode(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_atomicity(MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_byte_offset(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_byte_offset(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_group(MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_info(MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_info(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_position(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_position(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_position_shared(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_position_shared(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_size(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_type_extent(MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_type_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_get_view(MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_get_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_iread(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_iread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_iread_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_iread_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_iread_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_iread_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_iwrite(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_iwrite(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_iwrite_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_iwrite_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_iwrite_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_iwrite_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_open(MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_open(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_preallocate(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_preallocate(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_read_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_read_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_seek(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_seek(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_seek_shared(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_seek_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_set_atomicity(MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_set_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_set_errhandler(MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_set_info(MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_set_info(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_set_size(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_set_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_set_view(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_set_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_sync(MPI_File _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_sync(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_all(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_all_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_at(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_at_all(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_at_all_begin(MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_at_all_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_ordered(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_ordered_begin(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_ordered_end(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_File_write_shared(MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_File_write_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Finalize(void)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Finalize();
  pnmpi_level--;
  return returnVal;
}

int XMPI_Finalized(int * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Finalized(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Free_mem(void * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Free_mem(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Gather(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Gather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Gatherv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Gatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Get(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Get_address(void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Get_address(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Get_count(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Get_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Get_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Get_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Get_processor_name(char * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Get_processor_name(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Get_version(int * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Get_version(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Graph_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Graph_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Graphdims_get(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Graphdims_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Graph_get(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Graph_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Graph_map(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Graph_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Graph_neighbors(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Graph_neighbors(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Graph_neighbors_count(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Graph_neighbors_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Grequest_complete(MPI_Request _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Grequest_complete(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Grequest_start(MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Grequest_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_compare(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_difference(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_difference(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_free(MPI_Group * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_free(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_intersection(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_intersection(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_range_excl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_range_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_range_incl(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_range_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_rank(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_rank(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_size(MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_translate_ranks(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_translate_ranks(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Group_union(MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Group_union(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Ibsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Ibsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Info_create(MPI_Info * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Info_create(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Info_delete(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Info_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Info_dup(MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Info_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Info_free(MPI_Info * info)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Info_free(info);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Info_get(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Info_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Info_get_nkeys(MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Info_get_nkeys(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Info_get_nthkey(MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Info_get_nthkey(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Info_get_valuelen(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Info_get_valuelen(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Info_set(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Info_set(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Init(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Init(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Initialized(int * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Initialized(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Init_thread(int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Init_thread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Intercomm_create(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Intercomm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Intercomm_merge(MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Intercomm_merge(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Iprobe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Iprobe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Irecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Irecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Irsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Irsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Isend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Isend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Issend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Issend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Is_thread_main(int * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Is_thread_main(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Keyval_create(MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Keyval_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Keyval_free(int * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Keyval_free(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Lookup_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Lookup_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Op_commutative(MPI_Op op, int * commute)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Op_commutative(op, commute);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Op_create(MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Op_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Open_port(MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Open_port(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Op_free(MPI_Op * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Op_free(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Pack(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Pack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Pack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Pack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Pack_external_size(char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Pack_external_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Pack_size(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Pack_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Probe(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Probe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Publish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Publish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Put(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Query_thread(int * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Query_thread(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Recv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Recv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Recv_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Recv_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Reduce(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Reduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Reduce_local(void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Reduce_local(inbuf, inoutbuf, count, datatype, op);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Reduce_scatter(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Reduce_scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Reduce_scatter_block(void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Reduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Register_datarep(char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Register_datarep(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Request_free(MPI_Request * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Request_free(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Request_get_status(MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Request_get_status(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Rsend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Rsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Rsend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Rsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Scan(void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Scan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Scatter(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Scatterv(void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Scatterv(_pnmpi_arg_0, _pnmpi_arg_1, displs, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Send(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Send(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Send_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Send_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Sendrecv(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Sendrecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9, _pnmpi_arg_10, _pnmpi_arg_11);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Sendrecv_replace(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Sendrecv_replace(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Ssend(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Ssend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Ssend_init(void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Ssend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Start(MPI_Request * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Start(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Startall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Startall(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Status_set_cancelled(MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Status_set_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Status_set_elements(MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Status_set_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Test(MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Test(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Testall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Testall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Testany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Testany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Test_cancelled(MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Test_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Testsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Testsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Topo_test(MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Topo_test(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_commit(MPI_Datatype * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_commit(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_contiguous(int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_contiguous(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_darray(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_darray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_f90_complex(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_f90_complex(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_f90_integer(int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_f90_integer(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_f90_real(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_f90_real(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_hindexed(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_indexed_block(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_indexed_block(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_keyval(MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_resized(MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_resized(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_struct(int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_create_subarray(int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_create_subarray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_delete_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_dup(MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_extent(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_free(MPI_Datatype * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_free(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_free_keyval(int * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_free_keyval(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_get_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_get_contents(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[])
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_get_contents(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_get_envelope(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_get_envelope(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_get_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_get_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_get_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_get_true_extent(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_get_true_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_hindexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_hvector(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_indexed(int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_indexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_lb(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_lb(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_match_size(int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_match_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_set_attr(MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_set_name(MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_size(MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_struct(int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_ub(MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_ub(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Type_vector(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Type_vector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Unpack(void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Unpack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Unpack_external(char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Unpack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Unpublish_name(char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Unpublish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Wait(MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Wait(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Waitall(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Waitall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Waitany(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Waitany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Waitsome(int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Waitsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_call_errhandler(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_complete(MPI_Win _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_complete(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_create(void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_create_errhandler(MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_create_keyval(MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_delete_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_fence(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_fence(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_free(MPI_Win * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_free(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_free_keyval(int * _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_free_keyval(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_get_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_get_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_get_group(MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_get_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_lock(int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_lock(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_post(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_post(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_set_attr(MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_set_errhandler(MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_set_name(MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_start(MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_test(MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_test(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_unlock(int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_unlock(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level--;
  return returnVal;
}

int XMPI_Win_wait(MPI_Win _pnmpi_arg_0)
{
  int returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Win_wait(_pnmpi_arg_0);
  pnmpi_level--;
  return returnVal;
}

double XMPI_Wtick(void)
{
  double returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Wtick();
  pnmpi_level--;
  return returnVal;
}

double XMPI_Wtime(void)
{
  double returnVal;
  pnmpi_level++;
  returnVal=Internal_XMPI_Wtime();
  pnmpi_level--;
  return returnVal;
}



int XMPI_Abort_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Abort(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Accumulate_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Op _pnmpi_arg_7, MPI_Win _pnmpi_arg_8)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Accumulate(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Add_error_class_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Add_error_class(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Add_error_code_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Add_error_code(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Add_error_string_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Add_error_string(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Address_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Address(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Allgather_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Allgather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Allgatherv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Allgatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Alloc_mem_NewStack(PNMPI_modHandle_t stack , MPI_Aint _pnmpi_arg_0, MPI_Info info, void * baseptr)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Alloc_mem(_pnmpi_arg_0, info, baseptr);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Allreduce_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Allreduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Alltoall_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Alltoall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Alltoallv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int * _pnmpi_arg_5, int * _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Alltoallv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Alltoallw_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], void * _pnmpi_arg_4, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Datatype _pnmpi_arg_7[], MPI_Comm _pnmpi_arg_8)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Alltoallw(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Attr_delete_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Attr_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Attr_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Attr_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Attr_put_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Attr_put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Barrier_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Barrier(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Bcast_NewStack(PNMPI_modHandle_t stack , void * buffer, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Bcast(buffer, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Bsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Bsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Bsend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Bsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Buffer_attach_NewStack(PNMPI_modHandle_t stack , void * buffer, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Buffer_attach(buffer, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Buffer_detach_NewStack(PNMPI_modHandle_t stack , void * buffer, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Buffer_detach(buffer, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Cancel_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Cancel(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Cart_coords_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Cart_coords(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Cart_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Cart_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Cartdim_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Cartdim_get(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Cart_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Cart_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Cart_map_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Cart_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Cart_rank_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Cart_rank(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Cart_shift_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Cart_shift(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Cart_sub_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Cart_sub(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Close_port_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Close_port(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_accept_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_accept(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_compare_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Comm _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_connect_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm _pnmpi_arg_3, MPI_Comm * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_connect(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Comm_copy_attr_function * _pnmpi_arg_0, MPI_Comm_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_disconnect_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_disconnect(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_dup_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_free_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_free(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_free_keyval(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_get_parent_NewStack(PNMPI_modHandle_t stack , MPI_Comm * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_get_parent(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_group_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_group(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_join_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Comm * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_join(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_rank_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_rank(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_remote_group_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_remote_group(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_remote_size_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_remote_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_size_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_spawn_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, char * _pnmpi_arg_1[], int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Comm * _pnmpi_arg_6, int _pnmpi_arg_7[])
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_spawn(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_spawn_multiple_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1[], char * * _pnmpi_arg_2[], int _pnmpi_arg_3[], MPI_Info _pnmpi_arg_4[], int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6, MPI_Comm * _pnmpi_arg_7, int _pnmpi_arg_8[])
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_spawn_multiple(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_split_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Comm * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_split(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Comm_test_inter_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Comm_test_inter(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Dims_create_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Dims_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Dist_graph_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm_old, int n, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Dist_graph_create(comm_old, n, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, info, reorder, comm_dist_graph);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Dist_graph_create_adjacent_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm_old, int indegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int outdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[], MPI_Info info, int reorder, MPI_Comm * comm_dist_graph)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Dist_graph_create_adjacent(comm_old, indegree, _pnmpi_arg_2, _pnmpi_arg_3, outdegree, _pnmpi_arg_5, _pnmpi_arg_6, info, reorder, comm_dist_graph);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Dist_graph_neighbors_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm, int maxindegree, int _pnmpi_arg_2[], int _pnmpi_arg_3[], int maxoutdegree, int _pnmpi_arg_5[], int _pnmpi_arg_6[])
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Dist_graph_neighbors(comm, maxindegree, _pnmpi_arg_2, _pnmpi_arg_3, maxoutdegree, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Dist_graph_neighbors_count_NewStack(PNMPI_modHandle_t stack , MPI_Comm comm, int * indegree, int * outdegree, int * weighted)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Dist_graph_neighbors_count(comm, indegree, outdegree, weighted);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Errhandler_create_NewStack(PNMPI_modHandle_t stack , MPI_Handler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Errhandler_create(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Errhandler_free_NewStack(PNMPI_modHandle_t stack , MPI_Errhandler * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Errhandler_free(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Errhandler_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Errhandler_get(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Errhandler_set_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Errhandler_set(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Error_class_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Error_class(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Error_string_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Error_string(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Exscan_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Exscan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_close_NewStack(PNMPI_modHandle_t stack , MPI_File * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_close(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_delete_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_amode_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_amode(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_atomicity_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_byte_offset_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Offset * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_byte_offset(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_group_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_info_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_info(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_position_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_position(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_position_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_position_shared(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_size_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_type_extent_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_type_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_get_view_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset * _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, char * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_get_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_iread_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_iread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_iread_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_iread_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_iread_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_iread_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_iwrite_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_iwrite(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_iwrite_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Request * _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_iwrite_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_iwrite_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_iwrite_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_open_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_File * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_open(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_preallocate_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_preallocate(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_at_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_at_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_at_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_ordered_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_ordered_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_ordered_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_read_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_read_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_seek_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_seek(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_seek_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_seek_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_set_atomicity_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_set_atomicity(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_set_info_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Info _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_set_info(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_set_size_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_set_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_set_view_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, char * _pnmpi_arg_4, MPI_Info _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_set_view(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_sync_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_sync(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_at_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_at(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_at_all_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4, MPI_Status * _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_at_all(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_at_all_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, MPI_Offset _pnmpi_arg_1, void * _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Datatype _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_at_all_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_at_all_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_at_all_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_ordered_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_ordered(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_ordered_begin_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_ordered_begin(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_ordered_end_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_ordered_end(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_File_write_shared_NewStack(PNMPI_modHandle_t stack , MPI_File _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_File_write_shared(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Finalize_NewStack(PNMPI_modHandle_t stack )
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Finalize();
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Finalized_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Finalized(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Free_mem_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Free_mem(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Gather_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Gather(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Gatherv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int * _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Gatherv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Get_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Get_address_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Get_address(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Get_count_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Get_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Get_elements_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Get_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Get_processor_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Get_processor_name(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Get_version_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Get_version(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Graph_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Graph_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Graphdims_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Graphdims_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Graph_get_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Graph_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Graph_map_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Graph_map(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Graph_neighbors_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Graph_neighbors(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Graph_neighbors_count_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Graph_neighbors_count(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Grequest_complete_NewStack(PNMPI_modHandle_t stack , MPI_Request _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Grequest_complete(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Grequest_start_NewStack(PNMPI_modHandle_t stack , MPI_Grequest_query_function * _pnmpi_arg_0, MPI_Grequest_free_function * _pnmpi_arg_1, MPI_Grequest_cancel_function * _pnmpi_arg_2, void * _pnmpi_arg_3, MPI_Request * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Grequest_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_compare_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_compare(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_difference_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_difference(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_excl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_free_NewStack(PNMPI_modHandle_t stack , MPI_Group * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_free(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_incl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_intersection_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_intersection(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_range_excl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_range_excl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_range_incl_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[][3], MPI_Group * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_range_incl(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_rank_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_rank(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_size_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_translate_ranks_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Group _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_translate_ranks(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Group_union_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, MPI_Group _pnmpi_arg_1, MPI_Group * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Group_union(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Ibsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Ibsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Info_create_NewStack(PNMPI_modHandle_t stack , MPI_Info * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Info_create(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Info_delete_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Info_delete(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Info_dup_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, MPI_Info * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Info_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Info_free_NewStack(PNMPI_modHandle_t stack , MPI_Info * info)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Info_free(info);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Info_get_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int _pnmpi_arg_2, char * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Info_get(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Info_get_nkeys_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Info_get_nkeys(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Info_get_nthkey_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, int _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Info_get_nthkey(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Info_get_valuelen_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Info_get_valuelen(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Info_set_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Info_set(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Init_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, char * * * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Init(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Initialized_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Initialized(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Init_thread_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0, char * * * _pnmpi_arg_1, int _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Init_thread(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Intercomm_create_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm * _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Intercomm_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Intercomm_merge_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Intercomm_merge(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Iprobe_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Iprobe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Irecv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Irecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Irsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Irsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Isend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Isend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Issend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Issend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Is_thread_main_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Is_thread_main(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Keyval_create_NewStack(PNMPI_modHandle_t stack , MPI_Copy_function * _pnmpi_arg_0, MPI_Delete_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Keyval_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Keyval_free_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Keyval_free(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Lookup_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Lookup_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Op_commutative_NewStack(PNMPI_modHandle_t stack , MPI_Op op, int * commute)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Op_commutative(op, commute);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Op_create_NewStack(PNMPI_modHandle_t stack , MPI_User_function * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Op * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Op_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Open_port_NewStack(PNMPI_modHandle_t stack , MPI_Info _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Open_port(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Op_free_NewStack(PNMPI_modHandle_t stack , MPI_Op * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Op_free(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Pack_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, int * _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Pack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Pack_external_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, MPI_Aint _pnmpi_arg_5, MPI_Aint * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Pack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Pack_external_size_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Pack_external_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Pack_size_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Pack_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Probe_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Comm _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Probe(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Publish_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Publish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Put_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, MPI_Aint _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, MPI_Win _pnmpi_arg_7)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Put(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Query_thread_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Query_thread(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Recv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Status * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Recv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Recv_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Recv_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Reduce_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Reduce(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Reduce_local_NewStack(PNMPI_modHandle_t stack , void * inbuf, void * inoutbuf, int count, MPI_Datatype datatype, MPI_Op op)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Reduce_local(inbuf, inoutbuf, count, datatype, op);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Reduce_scatter_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Reduce_scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Reduce_scatter_block_NewStack(PNMPI_modHandle_t stack , void * sendbuf, void * recvbuf, int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Reduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Register_datarep_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Datarep_conversion_function * _pnmpi_arg_1, MPI_Datarep_conversion_function * _pnmpi_arg_2, MPI_Datarep_extent_function * _pnmpi_arg_3, void * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Register_datarep(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Request_free_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Request_free(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Request_get_status_NewStack(PNMPI_modHandle_t stack , MPI_Request _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Request_get_status(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Rsend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Rsend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Rsend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Rsend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Scan_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, void * _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Op _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Scan(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Scatter_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Scatter(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Scatterv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int * _pnmpi_arg_1, int * displs, MPI_Datatype _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6, int _pnmpi_arg_7, MPI_Comm _pnmpi_arg_8)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Scatterv(_pnmpi_arg_0, _pnmpi_arg_1, displs, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Send_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Send(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Send_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Send_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Sendrecv_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, void * _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Datatype _pnmpi_arg_7, int _pnmpi_arg_8, int _pnmpi_arg_9, MPI_Comm _pnmpi_arg_10, MPI_Status * _pnmpi_arg_11)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Sendrecv(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9, _pnmpi_arg_10, _pnmpi_arg_11);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Sendrecv_replace_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, int _pnmpi_arg_5, int _pnmpi_arg_6, MPI_Comm _pnmpi_arg_7, MPI_Status * _pnmpi_arg_8)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Sendrecv_replace(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Ssend_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Ssend(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Ssend_init_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Comm _pnmpi_arg_5, MPI_Request * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Ssend_init(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Start_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Start(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Startall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Startall(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Status_set_cancelled_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Status_set_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Status_set_elements_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, int _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Status_set_elements(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Test_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Test(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Testall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Testall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Testany_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Testany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Test_cancelled_NewStack(PNMPI_modHandle_t stack , MPI_Status * _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Test_cancelled(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Testsome_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Testsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Topo_test_NewStack(PNMPI_modHandle_t stack , MPI_Comm _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Topo_test(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_commit_NewStack(PNMPI_modHandle_t stack , MPI_Datatype * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_commit(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_contiguous_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_contiguous(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_darray_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3[], int _pnmpi_arg_4[], int _pnmpi_arg_5[], int _pnmpi_arg_6[], int _pnmpi_arg_7, MPI_Datatype _pnmpi_arg_8, MPI_Datatype * _pnmpi_arg_9)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_darray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6, _pnmpi_arg_7, _pnmpi_arg_8, _pnmpi_arg_9);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_f90_complex_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_f90_complex(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_f90_integer_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_f90_integer(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_f90_real_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_f90_real(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_hindexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_hvector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_indexed_block_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_indexed_block(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Type_copy_attr_function * _pnmpi_arg_0, MPI_Type_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_resized_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_resized(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_struct_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], MPI_Aint _pnmpi_arg_2[], MPI_Datatype _pnmpi_arg_3[], MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_create_subarray_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1[], int _pnmpi_arg_2[], int _pnmpi_arg_3[], int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Datatype * _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_create_subarray(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_dup_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Datatype * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_dup(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_extent(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_free_NewStack(PNMPI_modHandle_t stack , MPI_Datatype * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_free(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_free_keyval(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_get_contents_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, int _pnmpi_arg_3, int _pnmpi_arg_4[], MPI_Aint _pnmpi_arg_5[], MPI_Datatype _pnmpi_arg_6[])
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_get_contents(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_get_envelope_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, int * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_get_envelope(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_get_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_get_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_get_true_extent_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_get_true_extent(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_hindexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_hindexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_hvector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_hvector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_indexed_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_indexed(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_lb_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_lb(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_match_size_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Datatype * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_match_size(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_size_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_size(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_struct_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int * _pnmpi_arg_1, MPI_Aint * _pnmpi_arg_2, MPI_Datatype * _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_struct(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_ub_NewStack(PNMPI_modHandle_t stack , MPI_Datatype _pnmpi_arg_0, MPI_Aint * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_ub(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Type_vector_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Datatype _pnmpi_arg_3, MPI_Datatype * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Type_vector(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Unpack_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, int _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3, int _pnmpi_arg_4, MPI_Datatype _pnmpi_arg_5, MPI_Comm _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Unpack(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Unpack_external_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, void * _pnmpi_arg_1, MPI_Aint _pnmpi_arg_2, MPI_Aint * _pnmpi_arg_3, void * _pnmpi_arg_4, int _pnmpi_arg_5, MPI_Datatype _pnmpi_arg_6)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Unpack_external(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5, _pnmpi_arg_6);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Unpublish_name_NewStack(PNMPI_modHandle_t stack , char * _pnmpi_arg_0, MPI_Info _pnmpi_arg_1, char * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Unpublish_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Wait_NewStack(PNMPI_modHandle_t stack , MPI_Request * _pnmpi_arg_0, MPI_Status * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Wait(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Waitall_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, MPI_Status * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Waitall(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Waitany_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, MPI_Status * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Waitany(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Waitsome_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Request * _pnmpi_arg_1, int * _pnmpi_arg_2, int * _pnmpi_arg_3, MPI_Status * _pnmpi_arg_4)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Waitsome(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_call_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_call_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_complete_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_complete(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_create_NewStack(PNMPI_modHandle_t stack , void * _pnmpi_arg_0, MPI_Aint _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Info _pnmpi_arg_3, MPI_Comm _pnmpi_arg_4, MPI_Win * _pnmpi_arg_5)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_create(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3, _pnmpi_arg_4, _pnmpi_arg_5);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_create_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win_errhandler_function * _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_create_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_create_keyval_NewStack(PNMPI_modHandle_t stack , MPI_Win_copy_attr_function * _pnmpi_arg_0, MPI_Win_delete_attr_function * _pnmpi_arg_1, int * _pnmpi_arg_2, void * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_create_keyval(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_delete_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_delete_attr(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_fence_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_fence(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_free_NewStack(PNMPI_modHandle_t stack , MPI_Win * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_free(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_free_keyval_NewStack(PNMPI_modHandle_t stack , int * _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_free_keyval(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_get_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2, int * _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_get_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_get_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Errhandler * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_get_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_get_group_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Group * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_get_group(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_get_name_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1, int * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_get_name(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_lock_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, int _pnmpi_arg_1, int _pnmpi_arg_2, MPI_Win _pnmpi_arg_3)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_lock(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2, _pnmpi_arg_3);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_post_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_post(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_set_attr_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int _pnmpi_arg_1, void * _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_set_attr(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_set_errhandler_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, MPI_Errhandler _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_set_errhandler(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_set_name_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, char * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_set_name(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_start_NewStack(PNMPI_modHandle_t stack , MPI_Group _pnmpi_arg_0, int _pnmpi_arg_1, MPI_Win _pnmpi_arg_2)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_start(_pnmpi_arg_0, _pnmpi_arg_1, _pnmpi_arg_2);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_test_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0, int * _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_test(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_unlock_NewStack(PNMPI_modHandle_t stack , int _pnmpi_arg_0, MPI_Win _pnmpi_arg_1)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_unlock(_pnmpi_arg_0, _pnmpi_arg_1);
  pnmpi_level=current;
  return returnVal;
}

int XMPI_Win_wait_NewStack(PNMPI_modHandle_t stack , MPI_Win _pnmpi_arg_0)
{
  int returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Win_wait(_pnmpi_arg_0);
  pnmpi_level=current;
  return returnVal;
}

double XMPI_Wtick_NewStack(PNMPI_modHandle_t stack )
{
  double returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Wtick();
  pnmpi_level=current;
  return returnVal;
}

double XMPI_Wtime_NewStack(PNMPI_modHandle_t stack )
{
  double returnVal;
  int current=pnmpi_level;
  if (stack>=0)
    pnmpi_level=stack;
  else
    pnmpi_level++;

  returnVal=Internal_XMPI_Wtime();
  pnmpi_level=current;
  return returnVal;
}


