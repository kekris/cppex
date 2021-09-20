# ODIR = ../objects/  #this defines the directory for objects
# _OBJ = a.o b.o
# OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

GCC = g++ 
EXE = a.out
CCFLAG = -o
MOD = swap.o main.o
DEPS = swap.h
%.o: %.c $(DEPS)
	$(GCC) -c -o $@ $< # $@ means LHS of :, -o $@ put the output as %.o and $< means the first item in the dependency list, i.e., %c.; $^ means the right hand side of :. 
all: $(MOD)
	$(GCC)  $^ $(CCFLAG) $(EXE)
clobber: 
	rm -rf *.o $(EXE)
