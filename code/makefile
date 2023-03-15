Libsorthelper:=${shell pwd}/../include
Pwd:=${shell pwd}
compare: compareSort.o InsertSort.o SelectionSort.o mergeSort.o quickSort.o
	gcc  compareSort.o InsertSort.o SelectionSort.o  mergeSort.o  quickSort.o -L$(Libsorthelper) -lsorthelp -o compare 
	mkdir OBJ
	mv *.o OBJ
	
	
compareSort.o: compareSort.c
	gcc -c compareSort.c -o compareSort.o
	
SelectionSort.o: $(Pwd)/SelectionSort/SelectionSort.c
	gcc -c $(Pwd)/SelectionSort/SelectionSort.c -o SelectionSort.o
	
InsertSort.o: $(Pwd)/InsertSort/InsertSort.c
	gcc -c $(Pwd)/InsertSort/InsertSort.c -o InsertSort.o
	
mergeSort.o: $(Pwd)/MergeSort/mergeSort.c
	gcc -c $(Pwd)/MergeSort/mergeSort.c -o mergeSort.o
	
quickSort.o:$(Pwd)/QuickSort/normal/quickSort.c
	gcc -c $(Pwd)/QuickSort/normal/quickSort.c -o quickSort.o
	
clean:
	rm OBJ compare *.o -rf
	
