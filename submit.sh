#!/bin/bash
SGE_TASK_ID=1
echo $SGE_TASK_ID

cd /global/homes/l/lwen1990/pwg/embedding/Ks0
#for (( i=0 ; $i - 70; i++ )) 
#do
#   echo $i
#   qsub "./run2.csh $i" > /dev/null 2> /dev/null &
#   sleep 1
#done
#./run2.csh $[$SGE_TASK_ID-1] > /dev/null 2> /dev/null &
./run2.csh $[$SGE_TASK_ID-1] 
