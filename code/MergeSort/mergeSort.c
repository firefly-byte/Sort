/*************************************************************************
	> File Name: mergeSort.c            自顶向下 递归
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月08日 星期三 15时51分11秒
 ************************************************************************/

#include <stdio.h>
#include "mergeSort.h"
#include "../../include/SortTestHelper.h"

// 将arr[l...mid] 和 arr[mid+1...r]两部分进行归并
void merge(int *arr,int l,int mid,int r){
	//int aux[r-l+1]; // 需要一个临时空间    栈空间不足  本地机器 5222222 个元素是 出现段错误
	int *aux = (int *)malloc(sizeof(int)*(r-l+1));
	for(int i=l;i<=r;i++){
		aux[i-l] = arr[i];  // 临时空间从0开始
	}
	int i = l,j = mid+1;
	for(int k = l;k<=r;k++){
		
		if(i>mid){ 
			// 前段已经排序完成 剩下的后段照抄
			arr[k] = aux[j-l];
			j++;
		}else if(j>r){
			// 后段已经排序完成 剩下的前段照抄
			arr[k] = aux[i-l];
			i++;
		}else if(aux[i-l]<aux[j-l]){
			arr[k] = aux[i-l];
			i++;
		}else{ 
			arr[k] = aux[j-l];
			j++;
		}
	}
	free(aux);
}

// 递归使用归并排序 对arr[l,r]
void __mergeSort(int *arr,int l,int r){
	if(l>=r)
		return;
	int mid = l+(r-l)/2;
	// 递归
	__mergeSort(arr,l,mid);
	__mergeSort(arr,mid+1,r);
	
	if(arr[mid]>arr[mid+1])
		merge(arr,l,mid,r);  // 开始归并
}

void mergeSort(int *arr,int n){
	__mergeSort(arr,0,n-1);
}