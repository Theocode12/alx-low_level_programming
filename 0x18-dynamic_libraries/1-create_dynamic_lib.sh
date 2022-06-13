#!/bin/bash
gcc -Wall -pedantic -Wextra -Werror -c *.c 
gcc -shared -fpic *.o -o liball.so