/*
 * Copyright 1997, Regents of the University of Minnesota
 *
 * setup.c
 *
 * This file contains functions that setup the various communication
 * data structures for parallel KWAY
 *
 * Started 2/21/96
 * George
 *
 * $Id: setup.c,v 1.3 2003/07/31 16:23:30 karypis Exp $
 *
 */


#include <parmetislib.h>

#define DEBUG_SETUPINFO_


/*************************************************************************
* This function tests the repeated shmem_put
**************************************************************************/
void SetUp(CtrlType *ctrl, GraphType *graph, WorkSpaceType *wspace)
{
    static int any_src_counter = 0;
  int i, j, k, islocal, penum, gnvtxs, nvtxs, nlocal, firstvtx, lastvtx, nsend, nrecv, nnbrs, nadj;
  int npes=ctrl->npes, mype=ctrl->mype;
  idxtype *vtxdist, *xadj, *adjncy;
  idxtype *peind, *recvptr, *recvind, *sendptr, *sendind;
  idxtype *receive, *pemap, *imap, *lperm;
  idxtype *pexadj, *peadjncy, *peadjloc, *startsind;
  KeyValueType *recvrequests, *sendrequests, *adjpairs;

  IFSET(ctrl->dbglvl, DBG_TIME, MPI_Barrier(ctrl->comm));
  IFSET(ctrl->dbglvl, DBG_TIME, starttimer(ctrl->SetupTmr));

  gnvtxs  = graph->gnvtxs;
  nvtxs   = graph->nvtxs;
  vtxdist = graph->vtxdist;
  xadj    = graph->xadj;
  adjncy  = graph->adjncy;

  firstvtx = vtxdist[mype];
  lastvtx = vtxdist[mype+1];

  pemap = wspace->pv1;
  idxset(npes, -1, pemap);

  lperm = graph->lperm = idxmalloc(nvtxs, "SetUp: graph->lperm");
  for (i=0; i<nvtxs; i++)
    lperm[i] = i;

  /************************************************************* 
   * Determine what you need to receive 
   *************************************************************/
  receive  = wspace->indices;  		/* Use the large global received array for now */
  adjpairs = wspace->pairs;

  for (nlocal = nadj = i = 0; i<nvtxs; i++) {
    islocal = 1;
    for (j=xadj[i]; j<xadj[i+1]; j++) {
      k = adjncy[j];
      if (k >= firstvtx && k < lastvtx) {
        adjncy[j] = k-firstvtx;
        continue;  /* local vertex */
      }
      adjpairs[nadj].key = k;
      adjpairs[nadj++].val = j;
      islocal = 0;
    }
    if (islocal) {
      lperm[i] = lperm[nlocal];
      lperm[nlocal++] = i;
    }
  }

  /* Take care the received part now */
  ikeysort(nadj, adjpairs);
  adjpairs[nadj].key = gnvtxs+1;  /* Boundary condition */
  for (nrecv=i=0; i<nadj; i++) {
    adjncy[adjpairs[i].val] = nvtxs+nrecv;
    if (adjpairs[i].key != adjpairs[i+1].key)
      receive[nrecv++] = adjpairs[i].key;
  }


  /* Allocate space for the setup info attached to this level of the graph */
  peind = graph->peind = idxmalloc(npes, "SetUp: peind");
  recvptr = graph->recvptr = idxmalloc(npes+1, "SetUp: recvptr");
  recvind = graph->recvind = idxmalloc(nrecv, "SetUp: recvind");

  /* Take care of the received portion */
  idxcopy(nrecv, receive, recvind);  /* Copy the vertices to be received into recvind */

  i = nnbrs = recvptr[0] = 0;
  for (penum=0; penum<npes; penum++) {
    for (j=i; j<nrecv; j++) {
      if (recvind[j] >= vtxdist[penum+1])
        break;
    }
    if (j > i) {
      peind[nnbrs] = penum;
      recvptr[++nnbrs] = j;
      i = j;
    }
  }


  /************************************************************* 
   * Determine what you need to send 
   *************************************************************/
  /* Tell the other processors what they need to send you */
  recvrequests = wspace->pepairs1;
  sendrequests = wspace->pepairs2;
  for (i=0; i<npes; i++)
    recvrequests[i].key = 0;
  for (i=0; i<nnbrs; i++) {
    recvrequests[peind[i]].key = recvptr[i+1]-recvptr[i];
    recvrequests[peind[i]].val = nvtxs+recvptr[i];
  }
  MPI_Alltoall((void *)recvrequests, 2, IDX_DATATYPE, (void *)sendrequests, 2, IDX_DATATYPE, ctrl->comm);

  sendptr = graph->sendptr = idxmalloc(npes+1, "SetUp: sendptr");
  startsind = wspace->pv2;
  int maxSendPtr = 0;
  for (j=i=0; i<npes; i++) {
    if (sendrequests[i].key > 0) {
      sendptr[j] = sendrequests[i].key;
      if (sendptr[j] > maxSendPtr)
          maxSendPtr = sendptr[j];
      startsind[j] = sendrequests[i].val;
      j++;
    }
  }
  ASSERT(ctrl, nnbrs == j);
  MAKECSR(i, j, sendptr);

  nsend = sendptr[nnbrs];
  sendind = graph->sendind = idxmalloc(nsend, "SetUp: sendind");



  int *tempSendindArray;
  tempSendindArray = malloc(nnbrs * sizeof(idxtype*));
  for (i=0; i < nnbrs; i++)
      tempSendindArray[i] = idxmalloc(maxSendPtr, "Setup:tempSendindArray");



  int threshold = 1;
  /* Issue the receives for sendind */

  if (any_src_counter < threshold) {
      for (i=0; i<nnbrs; i++) {
          if (mype == 0) {
              MPI_Irecv((void *)(tempSendindArray[i]), maxSendPtr, IDX_DATATYPE, 
                        MPI_ANY_SOURCE, 1, ctrl->comm, ctrl->rreq+i);
          }
          else if (mype == 2)
              MPI_Irecv ((void *)(sendind+sendptr[i]), sendptr[i+1]-sendptr[i], IDX_DATATYPE,
                         peind[i], 1, ctrl->comm, ctrl->rreq+i);
          else if (mype == 1) {
              MPI_Isend ((void *)(recvind+recvptr[i]), recvptr[i+1]-recvptr[i], IDX_DATATYPE, 
                         peind[i],1,ctrl->comm, ctrl->sreq+i);
              MPI_Wait(ctrl->sreq+i, ctrl->statuses+i);
          }                 
      }
      
      /* issue the MPI_Waitall for Irecvs for P2 */
      if (mype == 2)
          MPI_Waitall(nnbrs, ctrl->rreq, ctrl->statuses);
      
      for (i=0; i<nnbrs; i++) {
          if (mype == 1) {
              MPI_Irecv((void *)(sendind+sendptr[i]), sendptr[i+1]-sendptr[i], IDX_DATATYPE,
                        peind[i], 1, ctrl->comm, ctrl->rreq+i);
          }
          else if (mype == 0 || mype == 2)
              MPI_Isend((void *)(recvind+recvptr[i]), recvptr[i+1]-recvptr[i], IDX_DATATYPE,
                        peind[i], 1, ctrl->comm, ctrl->sreq+i);
      }
      
      
      
      MPI_Status status;
      MPI_Request request;
      int data;
      
      /* Un-comment the next region to produce a bug */
      
      /*
        if (mype == 5 && npes >=4) 
        MPI_Isend(&data, 1, MPI_INT, 0, 1, ctrl->comm, &request);
        else if (mype == 0 && npes >= 4)
        MPI_Irecv(&data, 1, MPI_INT, 5, 1, ctrl->comm, &request);
      */
      
      if (mype == 0 && any_src_counter < threshold) {
          for (i = 0; i < nnbrs; i++) {
              MPI_Wait(ctrl->rreq+i, &status);
              /* which process did we receive from? */
              
              int source = status.MPI_SOURCE;
              int count;
              MPI_Get_count(&status, IDX_DATATYPE, &count);
              int z = 0;
              for (z = 0; z < nnbrs; z++) 
                  if (peind[z] == source) {
                      idxcopy(count, tempSendindArray[i], sendind+sendptr[z]);
                      break;
                  }
          }
          MPI_Waitall(nnbrs, ctrl->sreq, ctrl->statuses);
      }
      else if (mype == 1) 
          MPI_Waitall(nnbrs, ctrl->rreq, ctrl->statuses);
      else if (mype == 2)
          MPI_Waitall(nnbrs, ctrl->sreq, ctrl->statuses);
      
  } else {
      for (i=0; i<nnbrs; i++) {
          MPI_Irecv((void *)(sendind+sendptr[i]), sendptr[i+1]-sendptr[i], IDX_DATATYPE, 
                    peind[i], 1, ctrl->comm, ctrl->rreq+i);
      }
      
      /* Issue the sends. My recvind[penum] becomes penum's sendind[mype] */
      for (i=0; i<nnbrs; i++) {
          MPI_Isend((void *)(recvind+recvptr[i]), recvptr[i+1]-recvptr[i], IDX_DATATYPE,
                    peind[i], 1, ctrl->comm, ctrl->sreq+i);
      }
      
      MPI_Waitall(nnbrs, ctrl->rreq, ctrl->statuses);
      MPI_Waitall(nnbrs, ctrl->sreq, ctrl->statuses);
      
  }
  /*
  if (mype==5 && npes >=4 )
      MPI_Wait(&request, &status);  
     else if (mype == 0 && npes >=4 )
      MPI_Wait(&request, &status);
  */
  /* Create the peadjncy data structure for sparse boundary exchanges */
  pexadj = graph->pexadj = idxsmalloc(nvtxs+1, 0, "SetUp: pexadj");
  peadjncy = graph->peadjncy = idxmalloc(nsend, "SetUp: peadjncy");
  peadjloc = graph->peadjloc = idxmalloc(nsend, "SetUp: peadjloc");

  for (i=0; i<nsend; i++) {
    ASSERTP(ctrl, sendind[i] >= firstvtx && sendind[i] < lastvtx, (ctrl, "%d %d %d\n", sendind[i], firstvtx, lastvtx));
    pexadj[sendind[i]-firstvtx]++;
  }
  MAKECSR(i, nvtxs, pexadj);

  for (i=0; i<nnbrs; i++) {
    for (j=sendptr[i]; j<sendptr[i+1]; j++) {
      k = pexadj[sendind[j]-firstvtx]++;
      peadjncy[k] = i;  /* peind[i] is the actual PE number */
      peadjloc[k] = startsind[i]++;
    }
  }
  ASSERT(ctrl, pexadj[nvtxs] == nsend);

  for (i=nvtxs; i>0; i--)
    pexadj[i] = pexadj[i-1];
  pexadj[0] = 0;


  graph->nnbrs = nnbrs;
  graph->nrecv = nrecv;
  graph->nsend = nsend;
  graph->nlocal = nlocal;


  /* Create the inverse map from ladjncy to adjncy */
  imap = graph->imap = idxmalloc(nvtxs+nrecv, "SetUp: imap");
  for (i=0; i<nvtxs; i++)
    imap[i] = firstvtx+i;
  for (i=0; i<nrecv; i++)
    imap[nvtxs+i] = recvind[i];


  /* Check if wspace->nlarge is large enough for nrecv and nsend */
  if (wspace->nlarge < nrecv+nsend) {
    free(wspace->indices);
    free(wspace->pairs);
    wspace->nlarge = nrecv+nsend;
    wspace->indices = idxmalloc(wspace->nlarge, "SetUp: wspace->indices");
    wspace->pairs = (KeyValueType *)GKmalloc(sizeof(KeyValueType)*wspace->nlarge, "SetUp: wspace->pairs");
  }

  IFSET(ctrl->dbglvl, DBG_TIME, stoptimer(ctrl->SetupTmr));

#ifdef DEBUG_SETUPINFO
  rprintf(ctrl, "[%5d %5d] \tl:[%5d %5d] \ts:[%5d, %5d] \tr:[%5d, %5d]\n", 
            GlobalSEMin(ctrl, nvtxs), GlobalSEMax(ctrl, nvtxs),
            GlobalSEMin(ctrl, nlocal), GlobalSEMax(ctrl, nlocal),
            GlobalSEMin(ctrl, nsend), GlobalSEMax(ctrl, nsend),
            GlobalSEMin(ctrl, nrecv), GlobalSEMax(ctrl, nrecv));

  PrintSetUpInfo(ctrl, graph);
#endif
  any_src_counter++;
}


