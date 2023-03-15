/*************************************************************************
	> File Name: main.c
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月09日 星期四 10时01分17秒
 ************************************************************************/
#include "quickSort.h"
#include "../../../include/SortTestHelper.h"
int main(int argc,char*argv[]){
	int n = 10000;
	if(argc>1){
		sscanf(argv[1],"%d",&n);
	}
	printf("the n is %d\n",n);
	int *arr = generateRandomArray(n,0,100);
	
	void (*sort)(int *,int);
	sort = quickSort;
	timeSort("快速排序",sort,arr,n);
	return 0;
}
