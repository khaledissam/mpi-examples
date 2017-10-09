INC = /scratch/bin/mpich/include
LIB = /scratch/bin/mpich/lib -lmpi


all : ex1

ex1 : ex1.cpp
	mpic++ ex1.cpp -I$(INC) -L$(LIB) -o ex1
