/*************************************************************************
	> File Name: SortTestHelper.c
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月08日 星期三 10时26分30秒
 ************************************************************************/

#include "SortTestHelper.h"
#include <time.h>


// 正序输出数组
void print(int *arr,int n){
	for(int i = 0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

// 获取随机排序
int *generateRandomArray(int n,int l,int r){
	if(n<1  || l>r)
		return NULL;
	int *arr = (int *)malloc(sizeof(int)*n);
	srand(time(NULL));
	for(int i =0;i<n;i++){
		arr[i] = rand() % (r-l+1);
	}
	return arr;

}

// 释放内存
void deleteArray(int *arr){
	free(arr);
}

//测试排序时间
void timeSort(char*name,void(*sort)(int *,int),int*arr,int n){
	clock_t startTime = clock();
	sort(arr,n);
	clock_t endTime = clock();
	double tmp = (double)(endTime-startTime)/CLOCKS_PER_SEC;
	printf("%s : ",name);
	printf("%f s\n",tmp);
}

// 测试排序时间并且打印数组
void timeSortAndPrint(char*name,void(*sort)(int *,int),int*arr,int n){
	clock_t startTime = clock();
	sort(arr,n);
	clock_t endTime = clock();
	assert(isSorted(arr,n));
	double tmp = (double)(endTime-startTime)/CLOCKS_PER_SEC;
	printf("%s : ",name);
	printf("%f s\n",tmp);
	print(arr,n);
}

// 测试数组是否已经排序完成  从小到大
bool isSorted(int *arr,int n){
	for(int i = 0;i<n-1;i++){
		if(arr[i]>arr[i+1])
			return false;
	}
	//printf("排序完成\n");
	return true;
}


//拷贝数组
int *copyArray(int *arr,int n){
	int num = sizeof(int)*n;
	int *arr_t = (int *)malloc(num);
	memset(arr_t,0,num);
	memcpy(arr_t,arr,num);
	return arr_t;
}