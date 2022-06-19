GCC = g++
MOD = point.o circle.o main.o
HEAD = link.h class.h
EXE = a.out
OFLAG = -o
CFLAG = -c
%.o: %.c $(HEAD)
	$(GCC) $(CFLAG) $(OFLAG) $@ $<
all: $(MOD) 
	$(GCC) $^ $(OFLAG) $(EXE) 
clobber:
	rm -rf $(EXE) $(MOD) *.o *.c
