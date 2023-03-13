#!/bin/bash
gcc -Wall -pedatic -Werror -c *.c
ar -rc liball.a *.o
ranlib liball.a
