include $(PNMPIBASE)/common/Makefile.common

TARGET = patch

all: $(TARGET)

ifeq ($(findstring AIX,$(OS)),AIX)
CFLAGS += -I/usr/global/tools/gnu/binutils/aix_5_ll/binutils-2.15-64bit/include/ 
CFLAGS += -D$(OS)
#LFLAGS += -L/usr/global/tools/gnu/binutils/aix_5_ll/binutils-2.15-64bit/lib/
else
CFLAGS += -D$(OS)
endif

CFLAGS += -I/usr/local/binutils-2.20/include
DYNLFLAGS += $(LFLAGS)
ifeq ($(findstring Linux,$(OS)),Linux)
CFLAGS += -DBFD_COPY
DYNLFLAGS += -lbfd -liberty -lz
else
CFLAGS += -DDIRECT_COPY
endif

patch.o: patch.c
	$(CC) -c $(CFLAGS) $< 

patch: patch.o
	$(LD) -o $@ $< $(DYNLFLAGS)

clean:
	rm -f $(TARGET) *.o

clobber: clean
	rm -f *~
