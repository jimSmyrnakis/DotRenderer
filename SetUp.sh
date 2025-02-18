#!/bin/bash

if [ $1 != "-No--Installs"]; then 
    sudo apt update #update the system in general
    sudo apt install g++-multilib gcc-multilib #download all multyple libraries for 32 , 64 object/library files so 32 executables can generate

    sudo apt install make #install make for Makefiles
    sudo apt install gdb  #install gnu Debbuger
    sudo apt install gcc  #install gnu compilers collection
    sudo apt install g++  #install gnu c++ compiler
    sudo apt install test #Command for scripts
fi 
#generate all Independencies
echo "Generate all Independencies"
echo "Generating Glad ..."
cd ./Independences/Glad
./build.sh
if [ $? != "0" ]; then
    echo "Glad generation has failed!!!";
    exit 1;
fi 
cd ../..
echo "Glad generated Succesfully" 


