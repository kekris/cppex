GCC = g++
MOD = sum.o main.o
HEADER = funclib.h
EXE = a.out
%.o: %.c $(HEADER)
	$(GCC) -c -o $@ $<
all: $(MOD)
	$(GCC) $^ -o $(EXE)
clobber: 
	rm -rf *.o $(EXE)
