make_dir:=$(shell pwd)/../../include

main:main.o InsertSort.o
	gcc  main.o InsertSort.o -L$(make_dir) -lsorthelp -o main

main.o:main.c
	gcc -c -Wall main.c -o main.o

InsertSort.o:InsertSort.c
	gcc -c -Wall InsertSort.c -o InsertSort.o

clean:
	rm *.o main

cmd:
	@echo $(make_dir)
