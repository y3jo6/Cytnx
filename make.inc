
## set default compiler:
GCC=g++-6

## compile using intel icpc compiler
ICPC_Enable=0
ICPC=icpc

# set compile modes:

## compile with CUDA support:
GPU_Enable=1
CUDA_PATH=/usr/local/cuda

## compile with Openmp support:
OMP_Enable=1

## compile with MKL library:
MKL_Enable=0




#### DO NOT USE BELOW WHEN CUSTOM INSTALL !!
#-------------------------------------------
## un-commend when distribute by docker  
#DOCKER_MKL=-L/miniconda/lib

## compile with debug mode, which add check for internal error! including more information and check at runtime
## WARNING, this will slowdown the performance. DO NOT USE when on production run!
DEBUG_Enable=0