/*************************************************************************
	> File Name: SelectionSort.c
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月08日 星期三 11时14分35秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "SelectionSort.h"

void SelectionSort(int *arr, int n){
    for(int i = 0;i<n;i++){
        // 在[i,n] 中寻找最小值的索引
        /*
            arr[minindex] 最小值 
            minindex 最小值的索引 
        */
        int minindex = i;
        for(int j = i+1;j<n;j++){
            if(arr[minindex]>arr[j])
                minindex = j;
        } 

    int tmp = arr[i];
    arr[i] = arr[minindex];
    arr[minindex] = tmp;
    }    
} 


