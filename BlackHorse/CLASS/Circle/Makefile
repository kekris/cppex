GCC = g++
MOD = point.o circle.o main.o
CFLAG = -o 
HEAD = header.h point.h circle.h
EXE = a.out
%o: %c $(HEAD)
	$(GCC) -c -o $@ $<
all: $(MOD) 
	$(GCC) $^ $(CFLAG) $(EXE)
clobber: 
	rm -rf $(EXE) *.o *.c
