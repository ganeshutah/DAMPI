include $(PNMPIBASE)/common/Makefile.common

MOD    = onoff.so

MPISPEC = mpi_pnmpi
#MPISPEC = mpi_def
WRAPDIR = $(PNMPIBASE)/wrapper

PROTOFILE = $(WRAPDIR)/$(MPISPEC)_proto
FCTFILE   = $(WRAPDIR)/$(MPISPEC)_fct

WRAPPERC = wrapper_c.w
WRAPPERH = wrapper_h.w

WR = $(PNMPIBASE)/wrappergen/wrappergen

CFLAGS += -I$(PNMPI_INC_PATH) -fPIC -I$(PNMPI_INC_PATH)

all: $(MOD) install


onoff.so: onoff.o
	$(MPICC) -o $@ $(SFLAGS) $<

onoff.o: onoff.c onoff.h
	$(MPICC) -c $(CFLAGS) $<

onoff.h: onoff.w
	$(WR) -p $(PROTOFILE) -f $(FCTFILE) -w $< -o $@

install: $(MOD)
	for mymod in $(MOD); do ($(PNMPIBASE)/patch/patch $$mymod $(PNMPI_LIB_PATH)/$$mymod ); done

clean:
	rm -f $(MOD) *.o onoff.h

clobber: clean
	rm -f *~
