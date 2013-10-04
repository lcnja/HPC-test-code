#include "mpi.h"
#include <unistd.h>
#include <iostream>
#include <string>

using namespace std;

// initialize mpi
void mpi_init(int argc, char* argv[], int *mpi_rank, int *mpi_size){
  char buf[64];
  gethostname(buf, sizeof(buf));
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, mpi_rank);
  MPI_Comm_size(MPI_COMM_WORLD, mpi_size);
  cout << *mpi_rank << " " << string(buf) << endl;
}

// shutdown mpi
void mpi_shutdown(){
  MPI_Finalize();
}

int main(int argc, char *argv[])
{
  int mpi_rank, mpi_size;

  mpi_init(argc, argv, &mpi_rank, &mpi_size);

  mpi_shutdown();
  return 0;
}
