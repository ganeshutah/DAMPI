include $(PNMPIBASE)/common/Makefile.common
include libconfig.common

PREFIX = commsub

SUBMOD = injectorv2
HEADER = 

################################################### 
# Fault Injector files
###################################################
FI_FILES = loadconfig.o randapi.o datacorruption.o performance.o communication.o 
FI_OBJECTS = $(addprefix ./faultinjector/, $(FI_FILES))
###################################################

OFILES = $(addsuffix .o, $(addprefix $(PREFIX)-,$(SUBMOD)))
CFILES = $(addsuffix .cxx, $(addprefix $(PREFIX)-,$(SUBMOD)))
MOD    = $(addsuffix .so,$(addprefix $(PREFIX)-,$(SUBMOD)))


CFLAGS += -I$(PNMPI_INC_PATH) -fPIC
CCFLAGS += -I$(PNMPI_INC_PATH) -fPIC -I$(LOCAL)/include -I$(OPENSS_BASE)/include -I./faultinjector/include
SFLAGS += -L$(LOCAL)/lib

all: faultinjector_code $(MOD) install

$(OFILES): $(CFILES) comm.o

.SUFFIXES: .c .o .so

.o.so: comm.o $(FI_OBJECTS) 
	$(CXX) -o $@ $(LIBCONFIG_FILES) $(FI_OBJECTS) $< comm.o $(SFLAGS)

.c.o:
	$(MPICC) -c $(CFLAGS) -DSUBMODNAME=\"$(basename $(subst $(PREFIX)-,,$@))\" $<

.cxx.o:
	$(MPIXX) -c $(CCFLAGS) -DSUBMODNAME=\"$(basename $(subst $(PREFIX)-,,$@))\" $<

comm.o: comm.cxx
	$(MPIXX) -c $(CCFLAGS) $<

faultinjector_code:
	cd faultinjector; $(MAKE)

install: $(MOD)
	for mymod in $(MOD); do ($(PNMPIBASE)/patch/patch $$mymod $(PNMPI_LIB_PATH)/$$mymod ); done
#	for myheader in $(HEADER); do ( cp $$myheader $(PNMPI_INC_PATH)/$$myheader ); done

clean:
	rm -f $(MOD) *.o; cd faultinjector; $(MAKE) clean;

clobber: clean
	rm -f *~
	for mymod in $(MOD); do ( rm $(PNMPI_LIB_PATH)/$$mymod ); done

