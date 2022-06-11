GCC = g++
MOD = func.o main.o
CFLAG = -o 
HEAD = environ.h
EXE = a.out
%o: %c $(HEAD)
	$(GCC) -c -o $@ $<
all: $(MOD) 
	$(GCC) $^ $(CFLAG) $(EXE)
clobber: 
	rm -rf $(EXE) *.o *.c
