#!/bin/sh

sudo apt-get -y install cmake uuid-dev python3 python3-numpy python3-matplotlib
WD=${PWD}

echo core >/proc/sys/kernel/core_pattern

cd /sys/devices/system/cpu
echo performance | tee cpu*/cpufreq/scaling_governor

cd $WD/tree_mutation
cmake .
make 

make -C $WD/tree_mutation/parser
