#!/bin/bash

# Compile all .c files in current directory and create object files
gcc -c *.c

# Create static library using all object files
ar rcs liball.a *.o

