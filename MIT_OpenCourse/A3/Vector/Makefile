GCC = g++
MOD = main.o func.o
CFLAG = -o
EXE = a.out
DEP = header.h
%o: %c $(DEP)
	$(GCC) -c $(CFLAG) $@ $<
all: $(MOD) 
	$(GCC) $^ $(CFLAG) $(EXE)
clobber:
	rm -rf *.o a.out  

