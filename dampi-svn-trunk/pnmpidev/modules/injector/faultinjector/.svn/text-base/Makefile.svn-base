include ../libconfig.common

CC = mpicc

OBJS = datacorruption.o performance.o communication.o loadconfig.o randapi.o getfaultyprocess.o getrandomnumber.o

CFLAGS = -Wall -O2 -fPIC -g -c -I./include

##################################
# Compile fault injection modules
##################################

all: $(OBJS)

datacorruption.o: datacorruption.c
	$(CC) $(CFLAGS) $?

performance.o: performance.c
	$(CC) $(CFLAGS) $?

communication.o: communication.c
	$(CC) $(CFLAGS) $?

loadconfig.o: loadconfig.c
	$(CC) $(CFLAGS) -I$(LIBCONFIG_H) $?

randapi.o: randapi.c
	$(CC) $(CFLAGS) $?

getfaultyprocess.o: getfaultyprocess.c
	$(CC) -Wall -O2 -g -o getfaultyprocess -I$(LIBCONFIG_H) $? $(LIBCONFIG_FILES)

getrandomnumber.o: getrandomnumber.c
	$(CC) -Wall -O2 -g -I./include -o getrandomnumber getrandomnumber.c randapi.o

clean:
	rm -f *.o getfaultyprocess getrandomnumber
