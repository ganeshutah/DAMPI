CC = gcc
CXX = g++
CFLAGS = -g
CXXFLAGS =  -g
LDFLAGS =-g
HEADER = scheduler.hpp

all: scheduler.exe

scheduler.o: scheduler.cxx $(HEADER)
	$(CXX) -c $(CXXFLAGS) $<

scheduler.exe: scheduler.o
	$(CXX) -o $@ $< $(LDFLAGS)

clean:
	rm -rf scheduler.o scheduler.exe

install: scheduler.exe
	cp scheduler.exe /bin/scheduler.exe