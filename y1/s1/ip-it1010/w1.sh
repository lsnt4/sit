#!/bin/bash

cd ~/
mkdir SLIIT
cd SLIIT
mkdir Y1 Y2 Y3 Y4
cd Y1
mkdir IP
cd IP
vi file1.txt
cd ..
cd ..
cp Y1/IP/file1.txt Y3/file1.txt
cp Y1/IP/file1.txt Y3/file2.txt
tree
rmdir Y4
tree
cd ..
rm -r SLIIT

# By default, tree command is not available in Ubuntu
# To install it, run: sudo apt install tree