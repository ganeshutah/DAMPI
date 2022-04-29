LBITS := $(shell getconf LONG_BIT)
LOGFILE = ptest.log
ifeq ($(LBITS), 64)
	LOGFILE = ptest.log.64bit
endif

default:
	(cd METISLib ; make ) 
	(cd ParMETISLib ; make ) 
	(cd Programs ; make ) 

clean:
	(cd METISLib ; make realclean )
	(cd ParMETISLib ; make realclean )
	(cd Programs ; make realclean )

tests-commit:
	@cd Graphs ; \
	echo "Running ParMetis (Unix sockets enabled)... \c" ; \
	rm -f $(LOGFILE) ; \
	../../launcher isp -n 2 -x -l $(LOGFILE) ./ptest 1>/dev/null 2>/dev/null ; \
	if [ $$? -gt 1 ]; then echo "Failed."; rm -f ptest.log; else echo ""; fi

tests:
	@cd Graphs ; \
	echo "Testing ParMetis (Unix sockets enabled)... \c" ; \
	rm -f "ptest.log2" ; \
	../../launcher isp -n 2 -x -l "ptest.log2" ./ptest 1>/dev/null 2>/dev/null ; \
	diff -I "[0-9]\+\s\+[0-9]\+\s\+Leak\s\+" $(LOGFILE) ptest.log2 >/dev/null ; \
	if [ $$? -eq 0 ]; then echo "Ok."; else echo "FAILED."; fi
