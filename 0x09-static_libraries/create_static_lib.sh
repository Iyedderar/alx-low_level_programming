#!/bin/bash
gcc -Wall -c *.c
ar rcs liball.a *.o
ranlib liball.a
