# file: Makfile
# author: Alex Hare
# date: 4/2/15
# description:
#    compiles and links all source files
#    and header files into one executable
#    has a clean target to remove old files


# Makefile variables to make code modular
PROG = Airsim
OBJP = Airsim.o
OBJPS = Airsim.cpp

# compiler variables to compile into object and to compile and link
COMP = g++ -c
CLNK = g++ -o

# object file variable to group object files together
OBJS = Airplane.o BoolSource.o StatKeeper.o Runway.o Airsim.o

# first target set of variables to modularize code
OBJ1 = Airplane.o
OBJ1H = Airplane.h
OBJ1S = Airplane.cpp

# second target set of variables to modularize code
OBJ2 = BoolSource.o
OBJ2H = BoolSource.h
OBJ2S = BoolSource.cpp

# third target set of variables to modularize code
OBJ3 = StatKeeper.o
OBJ3H = StatKeeper.h
OBJ3S = StatKeeper.cpp

# fourth target set of variables to modularize code
OBJ4 = Runway.o
OBJ4H = Runway.h
OBJ4S = Runway.cpp


# target to compile and link all object files together
$(PROG) : $(OBJS)
	$(CLNK) $(PROG) $(OBJS)

# target to compile Airsim.cpp
$(OBJP) : $(OBJPS)
	$(COMP) $(OBJPS)

# target to compile Aiplane.o source file
$(OBJ1) : $(OBJ1H)
	$(COMP) $(OBJ1S)

# target to compile BoolSource.o object file
$(OBJ2) : $(OBJ2H)
	$(COMP) $(OBJ2S)

# target to compile StatKeeper.o object file
$(OBJ3) : $(OBJ3H)
	$(COMP) $(OBJ3S)

# target to compile Runway.o object file
$(OBJ4) : $(OBJ4H)
	$(COMP) $(OBJ4S)

# target to clean up old files
clean :
	rm -f core $(PROG) $(OBJS)
