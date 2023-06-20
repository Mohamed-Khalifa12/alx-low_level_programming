#!/bin/bash
gcc -g -O -c *.c
gcc -shared *.o -o liball.so 