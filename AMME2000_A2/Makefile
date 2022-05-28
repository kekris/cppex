GCC = g++
MOD = main.o functions.o
CCFLAG = -o
DEPS = header.h
EXE = a.out
%o: %c $(DEPS)
	$(GCC) -c -o $@ $< 
all: $(MOD)
	$(GCC) $^ $(CCFLAG) $(EXE) 
clobber:
	rm -rf *.o a.out 
