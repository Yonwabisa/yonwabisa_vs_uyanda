#!/bin/bash
clear
echo "createing object files"
gcc -c -Wall -Werror -Wextra ./*.c
echo "Object files created"
echo "attempting to remove executable/s"
if [rm *.a *.out]; then
	ar rc libStr_len.a *.o
	echo "New library made"
	ranlib libStr_len.a
	gcc libStr_len.a
	ls -la -h -X
else 
	echo "Executable/s could  not be removed"
fi
