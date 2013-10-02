#include "mpi.h"
#include <cstdio>
#include <string>
#include <random>

// execute system command and return response
std::string sys_command(const char command[]){
  char result[80];
  FILE *in;
  in = popen(command, "r");
  fgets(result, sizeof(result), in);
  pclose(in);
  return std::string(result);
}

// initialize mpi
void mpi_init(int argc, char* argv[], int *mpi_rank, int *mpi_size){
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, mpi_rank);
  MPI_Comm_size(MPI_COMM_WORLD, mpi_size);
  printf("%d %s", mpi_rank, sys_command("hostname").c_str());
}

// shutdown mpi
void mpi_shutdown(){
  MPI_Finalize();
}

int main(int argc, char *argv[])
{
  int mpi_rank, mpi_size;
  double data[1000];

  mpi_init(argc, argv, &mpi_rank, &mpi_size);

  std::mt19937 generator(1729);
  std::uniform_real_distribution<double> distribution(0.0,1.0);
  for(size_t i = 0; i < sizeof(data); i++){
    data[i] = distribution(generator);
  }

  mpi_shutdown();
  return 0;
}

