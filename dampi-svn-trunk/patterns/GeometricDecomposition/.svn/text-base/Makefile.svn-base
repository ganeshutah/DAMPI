CC = mpicc 

all:diffusion diffusion2d diffusion2_nd diffusion2_scaledown

diffusion:diffusion.c
	$(CC)$ -o diffusion diffusion.c

diffusion2d:diffusion2.c
	$(CC)$ -o diffusion2 diffusion2.c

diffusion2_nd:diffusion2_nd.c
	$(CC)$ -o diffusion2_nd diffusion2_nd.c

diffusion2_scaledown: diffusion2_scaledown.c
	$(CC)$ -o diffusion2_scaledown diffusion2_scaledown.c

clean:
	rm -rf diffusion diffusion2 diffusion2_nd diffusion2_scaledown *.out

