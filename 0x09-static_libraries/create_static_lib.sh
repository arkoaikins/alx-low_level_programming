#!/bin/bash

/**
  *create_static_lib - This is a shell script that
  * creates a static library called liball.a from all the
  * .c files that are in the current directory.
  */
gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
