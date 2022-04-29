/* automatically generated wrapper code */

{{forallfn fn_name MPI_Init MPI_Pcontrol MPI_Finalize}}
{{retType}} {{fn_name}}{{argTypeList}}
{
  if (_is_on)
     return P{{fn_name}}_NewStack(_stack_on {{argListOpen}});
  else
     return P{{fn_name}}_NewStack(_stack_off {{argListOpen}});
}
{{endforallfn}}

