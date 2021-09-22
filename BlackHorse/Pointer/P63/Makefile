GCC = g++
EXE = a.out
MOD = sort.o P63.o 
DEP = func.h
%.o: %.c $(DEP)
	$(GCC) -c -o $@ $< 
all: $(MOD)
	$(GCC) $^ -o $(EXE) 
	rm -rf *.o
clobber: 
	rm -rf *.o $(EXE)
