#include <stdlib.h>
#include <stdio.h>
#include "mpi.h"
#define SQUARE(x) ((x)*(x))
#define nprocsx 2   /* number of processes, x direction           */
#define nprocsy 4   /* number of processes, y direction           */
#define nxl     5   /* extent of x coordinates for local piece    */
#define nyl    10   /* extent of y coordinates for local piece    */
#define nxlg    7   /* nxl + 2 (ghost cells)                      */
#define nylg   12   /* nyl + 2 (ghost cells)                      */
#define nsteps 50   /* number of time steps                       */
#define D       0.1 /* Diffusion constant                         */
#define dt      1.0 /* time step                                  */
#define dx      1.0 /* distance between two lattice points        */
#define r       3.0 /* radius of initial circle in center         */

int np, rank, xcoord, ycoord, up, down, left, right;
double u[nxlg][nylg];

void initdata() { 
  int i, j; 
  double d;

  MPI_Comm_size(MPI_COMM_WORLD, &np);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  xcoord = rank % nprocsx; ycoord = rank / nprocsx;
  up = xcoord + nprocsx*((ycoord + 1)%nprocsy);
  down = xcoord + nprocsx*((ycoord + nprocsy - 1)%nprocsy);
  left = (xcoord + nprocsx - 1)%nprocsx + nprocsx*ycoord;
  right = (xcoord + 1)%nprocsx + nprocsx*ycoord;
  for (i = 1; i <= nxl; i++) 
    for (j = 1; j <= nyl; j++) { 
      d = SQUARE(1.0*nxl*xcoord+i-1 - (1.0*nprocsx*nxl - 1)/2)
        + SQUARE(1.0*nyl*ycoord+j-1 - (1.0*nprocsy*nyl - 1)/2);
      u[i][j] = (d < (1.0)*r*r ? 100 : 0);
    } 
} 

void print_frame(int time) {
  int i, j, k, m, n, from;
  double rbufx[nxl], sbufx[nxl];

  if (rank != 0) {
    for (j = nyl; j >= 1; j--) {
      for (i = 1; i <= nxl; i++) sbufx[i-1] = u[i][j];
      MPI_Send(sbufx, nxl, MPI_DOUBLE, 0, 0, MPI_COMM_WORLD);
    }
  } else {
    fprintf(stdout, "\n\ntime=%d:\n\n    ", time);
    for (k = 0; k < nprocsx*nxl; k++) fprintf(stdout, "%8d", k);
    fprintf(stdout, "\n   +");
    for (k = 0; k < nprocsx*nxl; k++) fprintf(stdout, "--------");
    fprintf(stdout, "+\n");
    for (n = nprocsy - 1; n >= 0; n--)
      for (j = nyl; j >= 1; j--) {
        fprintf(stdout, "%3d|", n*nyl+j-1);
        for (m = 0; m < nprocsx; m++) {
          from = n*nprocsx + m;
          if (from != 0) MPI_Recv(rbufx, nxl, MPI_DOUBLE, from, 0,
                                  MPI_COMM_WORLD, MPI_STATUS_IGNORE);
          else for (i = 1; i <= nxl; i++) rbufx[i-1] = u[i][j];
          for (i = 1; i <= nxl; i++) fprintf(stdout, "%8.2f", rbufx[i-1]);
        }
        fprintf(stdout, "|%3d\n", n*nyl+j-1);
      }
    fprintf(stdout, "   +");
    for (k = 0; k < nprocsx*nxl; k++) fprintf(stdout, "--------");
    fprintf(stdout, "+\n    ");
    for (k = 0; k < nprocsx*nxl; k++) fprintf(stdout, "%8d", k);
    fprintf(stdout, "\n");
  }
}

void exchange_ghost_cells() {
  int i, j;
  double sbufx[nxl], rbufx[nxl], sbufy[nyl], rbufy[nyl];

  for (i = 1; i <= nxl; ++i) sbufx[i-1] = u[i][1];
  MPI_Sendrecv(sbufx, nxl, MPI_DOUBLE, down, 0, rbufx, nxl,
               MPI_DOUBLE, up, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
  for (i = 1; i <= nxl; ++i) u[i][nyl+1] = rbufx[i-1];
  for (i = 1; i <= nxl; ++i) sbufx[i-1] = u[i][nyl];
  MPI_Sendrecv(sbufx, nxl, MPI_DOUBLE, up, 0, rbufx, nxl,
               MPI_DOUBLE, down, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
  for (i = 1; i <= nxl; ++i) u[i][0] = rbufx[i-1];
  for (j = 1; j <= nyl; ++j) sbufy[j-1] = u[1][j];  
  MPI_Sendrecv(sbufy, nyl, MPI_DOUBLE, left, 0, rbufy, nyl,
               MPI_DOUBLE, right, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
  for (j = 1; j <= nyl; ++j) u[nxl+1][j] = rbufy[j-1];
  for (j = 1; j <= nyl; ++j) sbufy[j-1] = u[nxl][j];
  MPI_Sendrecv(sbufy, nyl, MPI_DOUBLE, right, 0, rbufy, nyl,
               MPI_DOUBLE, left, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
  for (j = 1; j <= nyl; ++j) u[0][j] = rbufy[j-1];
}

void update() {
  int i, j;
  double k = D*dt/(dx*dx);
  double u_new[nxlg][nylg];

  for (i = 1; i <= nxl; i++)
    for (j = 1; j <= nyl; j++)
      u_new[i][j] = u[i][j]
        + k*(u[i+1][j]+u[i-1][j]+u[i][j+1]+u[i][j-1]-4*u[i][j]);
  for (i = 1; i <= nxl; i++)
    for (j = 1; j <= nyl; j++) 
      u[i][j] = u_new[i][j];
}

int main(int argc,char *argv[]) {
  int iter;

  MPI_Init(&argc, &argv);
  initdata();
  print_frame(0);
  for (iter = 1; iter <= nsteps; iter++) {
    exchange_ghost_cells();
    update();
    print_frame(iter);
  }
  MPI_Finalize();
}
