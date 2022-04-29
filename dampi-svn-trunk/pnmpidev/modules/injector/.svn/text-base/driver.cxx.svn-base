#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#define SEGMENTSIZE 1024

/*========================================================*/
/* emulate the datatype module */

#define MPI_DOUBLE 13

#define PNMPIMOD_Datatype_getItem(ref,b,t,l,s,done) \
{ *t=COMPRESSION_TYPE; *s=sizeof(compression_type); *b=(*ref)->buf; \
  *l=(*ref)->len; *ref=(*ref)->next; *done=(*ref)==NULL; }

typedef struct PNMPIMOD_Datatype_Parameters_d *PNMPIMOD_Datatype_Parameters_p;

typedef struct PNMPIMOD_Datatype_Parameters_d
{
  PNMPIMOD_Datatype_Parameters_p next;
  char *buf;
  int len;
} PNMPIMOD_Datatype_Parameters_t;


/*========================================================*/
/* include the compression routines */

#include "compression.cpp"


/*========================================================*/
/* main */

int main(int argc, char **argv)
{
  int num,fh,len,total,i,j,res;
  compression_fct_t *fct_table;
  name_t *name_table;
  char *filename;
  PNMPIMOD_Datatype_Parameters_t *iterator, *newptr, *last;

  /* check arguments */

  if (argc!=2)
    {
      printf("Usage: driver <message-file>\n");
      exit(0);
    }

  filename=argv[1];


  /* get all compression functions */

  num=create_compression_table(&fct_table,&name_table);

  
  /* read message */

  fh=open(filename,0);
  iterator=NULL;
  last=NULL;
  total=0;

  if (fh<0)
    {
      fprintf(stderr,"Can't open file %s.\n",filename);
      exit(1);
    }

  do
    {
      newptr=(PNMPIMOD_Datatype_Parameters_t*)
	malloc(sizeof(PNMPIMOD_Datatype_Parameters_t));
      if (newptr==NULL)
	{
	  fprintf(stderr,"Can't allocate iterator\n");
	  exit(1);
	}

      newptr->buf=(char*)malloc(sizeof(compression_type)*SEGMENTSIZE);
      if (newptr->buf==NULL)
	{
	  fprintf(stderr,"Can't allocate message buffer\n");
	  exit(1);
	}
      
      len=read(fh,newptr->buf,SEGMENTSIZE*sizeof(compression_type));
      if (len<0)
	{
	  fprintf(stderr,"Can't read message segment\n");
	  exit(1);
	}
      
      if (len>0)
	{
	  /* valid segment */
	  newptr->len=len/sizeof(compression_type);
	  newptr->next=NULL;
	  if (iterator==NULL) 
	    iterator=newptr;
	  else
	    last->next=newptr;
	  last=newptr;
	}
      else
	{
	  /* delete segments */
	  free(newptr->buf);
	  free(newptr);
	}
      total+=len/sizeof(compression_type);
    }
  while(len!=0);

  if (iterator==NULL)
    {
      fprintf(stderr,"Can't read message\n");
      exit(1);
    }

  close(fh);


  /* do loops */

  for (i=0; i<num; i++)
    {
      for (j=128; j<=1024; j=j*2)
	{
	  /* now call a compression routine */

	  (*(fct_table[i]))(j*8,total,&res,iterator);
	  printf("Compressor %s, packet %i, size %i, compressed %i\n",
		 name_table[i],j,total*8,res);
	}
    }

  return 0;
}
      
