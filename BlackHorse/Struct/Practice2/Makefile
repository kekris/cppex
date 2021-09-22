GCC = g++
MOD = sort.o main.o
DEP = head.h
EXE = a.out
%.o: %.c $(DEP)
	$(GCC) -c -o $@ $<
all: $(MOD)
	$(GCC) $^ -o $(EXE)
clobber: 
	rm -rf *.o *.c $(EXE)
