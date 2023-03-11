#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -r libali.a *.o
ranlib libali.a
