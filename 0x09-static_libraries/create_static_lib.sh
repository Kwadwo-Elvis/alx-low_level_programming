#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcs -s liball.a *.o
ranlib liball.a
