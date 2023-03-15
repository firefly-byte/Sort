/*************************************************************************
	> File Name: main.c
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月08日 星期三 11时14分35秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "InsertSort.h"
#include "../../include/SortTestHelper.h"


void (*sort)(int*,int);
int main(){
	
	int n = 20;
	int *arr = generateRandomArray(n,0,10);
	print(arr,n);
	
	sort = InsertSort;
	timeSortAndPrint("插入排序算法",sort,arr,n);
	bool f = isSorted(arr,n);
	if(f){
		printf("Ok\n");
	}else{
		printf("No\n");	
	}
	return 0;
}
