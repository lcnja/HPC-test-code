HPC-test-code
=============

Assorted C++ test codes including NeSI job submission files.
John Rugis

Each folder contains source file(s), a makefile and job file(s).

**************************************************************************

pan (UoA), RHEL (Intel), GNU & Intel compilers
    Note: Before compiling on a UoA pan build node, grab and execute any 
          "module load" statements found in the job file.

kerr (UC), AIX (P755, Power7), IBM compiler
beatrice (UC), SUSE (P755, Power7), IBM compiler
    Note: same computer

foster (UC), AIX (BlueGene/P, PowerPC450), GNU & IBM compilers

fitzroy(NIWA), AIX (P575, Power6), IBM compiler


**************************************************************************
**************************************************************************

H000X
Simple MPI
    Each mpi process outputs its mpi rank and its hostname. 
    

H0001 pan, GNU default
    04.10.13 OK
    
H0002 pan, Intel compiler with module load
    04.10.13 OK
    
H0003 pan, GNU compiler with module load
    04.10.13 hits wall time with no output

H0004 kerr, IBM compiler
    04.10.13 OK

H0005 beatrice, IBM compiler
    04.10.13 OK

H0006 foster, IBM compiler
    04.10.13 OK

H0007 foster, GNU compiler
    not attempted yet

H0008 fitzroy, IBM compiler
    04.10.13 OK

**************************************************************************
**************************************************************************
