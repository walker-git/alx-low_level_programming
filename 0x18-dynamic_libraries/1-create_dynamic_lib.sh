#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -C -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
