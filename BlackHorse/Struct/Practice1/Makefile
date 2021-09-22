GCC = g++
MOD = sub1.o C70.o
EXE = a.out
DEP = func.h
%.o: %.c $(DEP)
	$(GCC) -c -o $@ $<
all: $(MOD)
	$(GCC) $^ -o $(EXE)
clobber: 
	rm -rf *.o $(EXE)	
