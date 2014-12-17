#!/bin/sh
cd /star/u/lwen1990/ucla/v0_15GeV/embedding/Ks0
for (( i=0 ; $i - 12; i++ )) 
do
   echo $i
   condor_run "./run2.csh $i" > /dev/null 2> /dev/null &
   sleep 1
done
