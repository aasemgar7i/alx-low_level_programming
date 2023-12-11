#!/bin/bash
c_files=$(ls *.c 2>/div/null)
if [-z "#c_files" ]; then
	echo "Nothing"
	exit 1
fi

gcc -shared -fPIC -o liball.so $c_files

if [$? -eq 0]; then
	echo "File is Ready"
else
	echo "Err8"
fi
