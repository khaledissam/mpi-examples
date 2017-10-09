INC = /scratch/bin/mpich/include
LIB = /scratch/bin/mpich/lib -lmpi

exs = ex1 ex2


all : 
	@( \
	for ex in $(exs); \
	do \
		echo mpic++ $$ex.cpp -I$(INC) -L$(LIB) -o $$ex; \
		mpic++ $$ex.cpp -I$(INC) -L$(LIB) -o $$ex; \
	done );

clean:
	rm -fr *.o;
	rm -fr *~;
	@( \
	for ex in $(exs); \
	do \
		echo rm -f $$ex; \
		rm -f $$ex; \
	done );




