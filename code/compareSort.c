/*************************************************************************
	> File Name: compareSort.c
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月08日 星期三 14时35分30秒
 ************************************************************************/

#include <stdio.h>
#include "../include/SortTestHelper.h"
#include "./InsertSort/InsertSort.h"
#include "./SelectionSort/SelectionSort.h"

#include "./MergeSort/mergeSort.h"
#include "./QuickSort/normal/quickSort.h"



void compareSelectionSortAndInsertSort(int n){
	int *arr1 = generateRandomArray(n,0,5000);
	int *arr2 = copyArray(arr1,n);
	
	timeSort("插入排序",InsertSort,arr1,n);
	timeSort("选择排序",SelectionSort,arr2,n);
	
}

void compareQuickSortAndMergeSort(int n){
	int *arr1 = generateRandomArray(n,0,5000);
	int *arr2 = copyArray(arr1,n);
	
	timeSort("快速排序",quickSort,arr1,n);
	timeSort("归并排序",mergeSort,arr2,n);
	
}

int main(int argc,int *argv[]){
	int n = 100000;
	if(argc > 1){
		sscanf(argv[1],"%d",&n);
	}
	printf("数组个数为 < %d > 的进行排序比较\n",n);
	compareQuickSortAndMergeSort(n);
	return 0;
}
