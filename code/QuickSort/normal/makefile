libsorthelper:=$(shell pwd)/../../../include

main:main.o quickSort.o
	gcc main.o quickSort.o -L$(libsorthelper) -lsorthelp -o main
	mkdir Obj
	mv *.o Obj
	
quickSort.o:quickSort.c
	gcc -c quickSort.c -o quickSort.o
	
clean:
	rm *.o Obj main -rf 
	