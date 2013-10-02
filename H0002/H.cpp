#include "mpi.h"
#include <cstdio>
#include <string>

using namespace std;

// execute system command and return response
string sys_command(const char command[]){
  char result[80];
  FILE *in;
  in = popen(command, "r");
  fgets(result, sizeof(result), in);
  pclose(in);
  return string(result);
}

// initialize mpi
void mpi_init(int argc, char* argv[], int *mpi_rank, int *mpi_size){
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, mpi_rank);
  MPI_Comm_size(MPI_COMM_WORLD, mpi_size);
}

// shutdown mpi
void mpi_shutdown(){
  MPI_Finalize();
}

int main(int argc, char *argv[])
{
  string host_name;
  int mpi_rank, mpi_size;

  host_name = sys_command("hostname");
  mpi_init(argc, argv, &mpi_rank, &mpi_size);

  printf("%d %s", mpi_rank, host_name.c_str());

  mpi_shutdown();
  return 0;
}

