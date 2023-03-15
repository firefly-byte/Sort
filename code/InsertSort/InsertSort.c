/*************************************************************************
	> File Name: InsertSort.c
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月08日 星期三 14时18分03秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "InsertSort.h"

void InsertSort(int *arr,int n){
	for(int i = 1;i<n;i++){
		for(int j = i-1;j>=0;j--){
			if(arr[j+1]<arr[j]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}else{
				break;
			}
		}
	}
}

