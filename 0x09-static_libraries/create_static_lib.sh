#!/bin/bash
gcc -Wall -Werror -Wpedantic -Wextra -std=gnu89 -c *.c;
ar -rcs liball.a *.o;
