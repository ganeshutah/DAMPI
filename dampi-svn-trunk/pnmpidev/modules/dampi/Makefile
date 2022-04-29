include $(PNMPIBASE)/common/Makefile.common

MOD    = dampi_driver.so \
	 dampi_piggyback.so
HEADER = pb_mod.h 

CFLAGS += -I$(PNMPI_INC_PATH) -fPIC
CCFLAGS += -I$(PNMPI_INC_PATH) -fPIC

all: $(MOD) install

pb_dt.o: 

.SUFFIXES: .c .o .so

.o.so: 
	$(CXX) -o $@ $(SFLAGS) $< -ma

.c.o:
	$(MPICC) -c $(CFLAGS) $<

.cpp.o:
	$(MPIXX) -c $(CCFLAGS) $<

.cxx.o:
	$(MPIXX) -c $(CCFLAGS) $<

dampi_piggyback.o: dampi_piggyback.c
	$(MPICC) -c $(CFLAGS) -DPB_DATATYPE2 $<

install: $(MOD)
	for mymod in $(MOD); do ($(PNMPIBASE)/patch/patch $$mymod $(PNMPI_LIB_PATH)/$$mymod ); done
	for myheader in $(HEADER); do ( cp $$myheader $(PNMPI_INC_PATH)/$$myheader ); done

clean:
	rm -f $(MOD) *.o

clobber: clean
	rm -f *~
	for mymod in $(MOD); do ( rm $(PNMPI_LIB_PATH)/$$mymod ); done

