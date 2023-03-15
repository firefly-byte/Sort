libSorthelper:=$(shell pwd)/../../include

main:main.o mergeSort.o
	gcc main.o mergeSort.o -L$(libSorthelper) -lsorthelp -o main

main.o:main.c
	gcc -c -Wall main.c -o main.o

mergeSort.o:mergeSort.c
	gcc -c -Wall mergeSort.c -o mergeSort.o

clean:
	rm *.o main

