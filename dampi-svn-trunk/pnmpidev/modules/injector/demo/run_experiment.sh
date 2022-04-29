#!/usr/local/bin/bash

####################
# COMMON VARIABLES #
####################

# Fault Injector Directory
FI_DIR=/g/g0/dahn/debug/buginjector/pnmpidev/modules/injector/faultinjector

# Fault Injector Configuration File
FI_CONFIG_FILE=$FI_DIR/config/faultinjector.cfg

# Number of process
FI_NUM_PROC=4

########################
# PREPARATION COMMANDS #
########################
export FI_CONFIG_FILE=$FI_CONFIG_FILE
#export FI_OUT_DIR=$HOME/pnmpi-1.3/demo/output_dir

FI_FAULTY_PROCESS=`$FI_DIR/getfaultyprocess`

if [ $FI_FAULTY_PROCESS = "RANDOM" ]; then
	NUMBER=`$FI_DIR/getrandomnumber $FI_NUM_PROC`
	export FI_FAULTY_PROCESS_RANK=$NUMBER
else
	export FI_FAULTY_PROCESS_RANK=$FI_FAULTY_PROCESS 
fi

################
# EXEC COMMAND #
################

#srun -n$FI_NUM_PROC -ppdebug simple-pn 
srun -n$FI_NUM_PROC -ppdebug injector-tester-asynch
#srun -n$FI_NUM_PROC -ppdebug injector-tester-scatter
#srun -n$FI_NUM_PROC -ppdebug injector-tester-broadcast
#srun -n$FI_NUM_PROC -ppdebug injector-tester-complete
#srun -n$FI_NUM_PROC -N1 -ppdebug NPB3.3/NPB3.3-MPI/bin/bt.W.4

printf "START=`date +\%s`\n";
#srun -n$FI_NUM_PROC -N2 -ppdebug NPB3.3/NPB3.3-MPI/bin/is.C.16
#srun -n$FI_NUM_PROC -N2 -ppdebug NPB3.3/NPB3.3-MPI/bin/bt.A.9
printf "END=`date +\%s`\n";
