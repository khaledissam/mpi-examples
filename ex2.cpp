// required MPI include file  
#include <mpi.h>
#include <iostream>

int main(int argc, char *argv[]) {
    
    // master processor
    int master = 0;

    // initialize MPI  
    MPI_Init(&argc,&argv);

    // get number of tasks
    int nump = 0;
    MPI_Comm_size(MPI_COMM_WORLD, &nump);

    // get my rank
    int rank = -1;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // this one is obvious
    int len = 0;
    char hostname[MPI_MAX_PROCESSOR_NAME];
    MPI_Get_processor_name(hostname, &len);
    std::cout << "Processor "<<rank<< " is running on "<<hostname<<"\n";

    // master processor
    if (rank == master) {
	std::cout<<"There are total "<<nump<<" processors\n";
    }

    // done with MPI  
    MPI_Finalize();
}
