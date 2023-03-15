/*************************************************************************
	> File Name: quickSort.c
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月09日 星期四 10时01分10秒
 ************************************************************************/

#include "quickSort.h"


// 对arr[l...r]部分进行partition操作
// 返回值p 使得arr[l...p-1]<arr[p] 和 arr[p+1...r]>arr[p]
int __partition(int *arr,int l,int r){
	
	int v = arr[l];  // 取当前的第一个位置(相对位置)
	
	
	// |V|          <V |          >V |...........|  
	//  l             j               i		
	
	// arr[l+1...j]<v 和 arr[j+1...i)>v
	int j = l;
	for(int i = l+1;i<=r;i++){
		if(arr[i]<v){
			int tmp = arr[i];
			arr[i] = arr[j+1];
			arr[j+1] = tmp;
			j++;
		}
	}
	int tmp = arr[l];
	arr[l] = arr[j];
	arr[j] = tmp;
	
	return j;
}


// 对arr[l...r]部分进行快速排序
void __quickSort(int *arr,int l,int r){
	if(l>=r)
		return ;
	
	int p = __partition(arr,l,r);
	__quickSort(arr,l,p-1);
	__quickSort(arr,p+1,r);
		
}


void quickSort(int *arr,int n){
	__quickSort(arr,0,n-1);
}