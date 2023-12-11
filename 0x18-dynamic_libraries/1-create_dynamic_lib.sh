#!/bin/bash
c_files=$(ls *.c 2>/div/null)
gcc -shared -fPIC -o liball.so $c_files
