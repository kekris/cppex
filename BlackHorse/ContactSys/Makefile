GCC = g++
MOD = func.o main.o
HEAD = lib.h func.h
EXE = a.out
%.o: %.c $(HEAD)
	$(GCC) -c  -o $@ $< 
all: $(MOD)
	$(GCC) $^ -o $(EXE) 
clobber: 
	rm -rf *.o *.c $(EXE)
