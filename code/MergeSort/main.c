/*************************************************************************
	> File Name: main.c
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月08日 星期三 15时51分22秒
 ************************************************************************/

#include <stdio.h>

#include "mergeSort.h"
#include "../../include/SortTestHelper.h"

int main(int argc,int *argv[]){
	
	int n = 10000;
	if(argc>1){
		sscanf(argv[1],"%d",&n);
	}
	int *arr = generateRandomArray(n,0,100);
			   
//	print(arr,n);
	void (*sort)(int *,int);
	sort = mergeSort;
	
	timeSort("归并排序",sort,arr,n);
	
	return 0;
}
