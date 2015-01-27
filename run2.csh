#!/bin/sh
cd /global/homes/l/lwen1990/pwg/embedding/Ks0
start=$((10*$1))
end=$((10*($1+1)))
for (( i=$start ; $i - $end ; i++ )) 
do
echo $i
./run.csh $i
sleep 1
done
