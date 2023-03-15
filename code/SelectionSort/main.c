/*************************************************************************
	> File Name: main.c
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月08日 星期三 11时14分35秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "SelectionSort.h"
#include "../../include/SortTestHelper.h"

int main(){
	
	int n = 50;
	int *arr = generateRandomArray(n,0,10);
	print(arr,n);
	void (*sort)(int*,int);
	sort = SelectionSort;
	timeSortAndPrint("排序算法",sort,arr,n);
	bool f = isSorted(arr,n);
	if(f){
		printf("Ok\n");
	}else{
		printf("No\n");	
	}
	return 0;
}
