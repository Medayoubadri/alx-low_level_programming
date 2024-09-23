#!/bin/bash
# A little script that builds a dynamic library from all .c files
# Automating is cooler than doing it by hand!

gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
