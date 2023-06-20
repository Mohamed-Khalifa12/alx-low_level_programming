#!/bin/bash

# Get all .c files in the current directory
c_files=$(ls *.c)

# Generate the compilation command
compile_cmd="gcc -shared -o liball.so $c_files"

# Execute the compilation command
eval $compile_cmd
