LAUNCHER = ../launcher
#CC = $(LAUNCHER) ispcc
CC = mpicc
ISP = $(LAUNCHER) isp
CFLAGS = -c -g -O2
LDFLAGS = -g -L$(PNMPI_LIB_PATH) -lpnmpi
SOURCES := $(wildcard *.c)
OBJS = $(SOURCES:.c=.o)
EXECUTABLES = $(SOURCES:.c=.exe)

all: $(EXECUTABLES)

%.exe: %.o
	$(CC) $< $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(EXECUTABLES) $(OBJS)

tests-commit: $(EXECUTABLES)
	@PORT=8000 ; \
	for file in $(EXECUTABLES) ; do \
	    echo "Running $$file... \c" ; \
	    rm -f "$$file.log" ; \
	    $(ISP) -n 3 -p $$PORT -l "$$file.log" ./$$file 1>/dev/null 2>/dev/null ; \
	    if [ $$? -eq 14 ]; then \
	        PORT=`expr $$PORT + 1` ; \
	        rm -f "$$file.log" ; \
	        $(ISP) -n 3 -p $$PORT -l "$$file.log" ./$$file 1>/dev/null 2>/dev/null ; \
	    fi ; \
	    if [ $$? -gt 1 ]; then echo "Failed."; rm -f $$file.log; else echo ""; fi ; \
	    PORT=`expr $$PORT + 1` ; \
	done

tests: $(EXECUTABLES)
	@PORT=8000 ; \
	for file in $(EXECUTABLES) ; do \
	    echo "Testing $$file... \c" ; \
	    rm -f "$$file.log2" ; \
	    $(ISP) -n 3 -p $$PORT -l "$$file.log2" ./$$file 1>/dev/null 2>/dev/null ; \
	    if [ $$? -eq 14 ]; then \
	        PORT=`expr $$PORT + 1` ; \
	        rm -f "$$file.log2" ; \
	        $(ISP) -n 3 -p $$PORT -l "$$file.log2" ./$$file 1>/dev/null 2>/dev/null ; \
	    fi ; \
	    diff -I "[0-9]\+\s\+[0-9]\+\s\+Leak\s\+" $$file.log $$file.log2 >/dev/null ; \
	    if [ $$? -eq 0 ]; then echo "Ok."; else echo "FAILED."; fi ; \
	    PORT=`expr $$PORT + 1` ; \
	done
