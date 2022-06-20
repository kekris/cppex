GCC = g++
EXE = a.out
HEAD = geometry.h
MOD = geometry.o main.o
%o: %c $(HEAD)
	$(GCC) -c -o $@ $<
all: $(MOD)
	$(GCC) $^ -o $(EXE)
clobber:
	rm -rf *.o *.c $(EXE) 
