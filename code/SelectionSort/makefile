make_dir:=$(shell pwd)/../../include

main:main.o SelectionSort.o
	gcc  main.o SelectionSort.o -L$(make_dir) -lsorthelp -o main

main.o:main.c
	gcc -c -Wall main.c -o main.o

SelectionSort.o:SelectionSort.c
	gcc -c -Wall SelectionSort.c -o SelectionSort.o

clean:
	rm *.o main

cmd:
	@echo $(make_dir)
