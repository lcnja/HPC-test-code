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

Simple MPI: Each mpi process outputs its mpi rank and its hostname. 

H0001 Simple MPI, pan, GNU default
    25.09.13 OK
    
H0002 Simple MPI, pan, Intel compiler with module load
    25.09.13 only works if restricted to rack d
    27.09.13 OK
    
H0003 Simple MPI, pan, GNU compiler with module load
    25.09.13 hits wall time with no output

H0004 Simple MPI, kerr, IBM compiler
    30.09.13 OK

H0005 Simple MPI, beatrice, IBM compiler
    01.10.13 OK

H0006 Simple MPI, foster, IBM compiler
    01.10.13 core dump

H0007 Simple MPI, foster, GNU compiler

H0008 Simple MPI, fitzroy, IBM compiler
    01.10.13 OK

**************************************************************************
**************************************************************************
