gcc -S -Og temp.c
gcc -c temp.s -o temp.o
gcc temp.o -o temp
