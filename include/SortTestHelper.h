/*************************************************************************
	> File Name: SortTestHelper.h
	> Author: luzn
	> mail: firefly6zhaon@foxmail.com
	> Created Time: 2023年03月08日 星期三 10时23分49秒
 ************************************************************************/


#ifndef __SORTTESTHELPER_H__
#define __SORTTESTHELPER_H__

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

/**
	print：打印数组
	arr : 数组
	n ：数组长度
*/
void print(int *arr,int n);

/**
	generateRandomArray：从[l,r] 范围内生成 具有n的元素的随机数组
	n ：数组长度
	l ：数组最小值
	r ：数组最大值
*/
int *generateRandomArray(int n,int l,int r);

/**
	deleteArray：删除数组
	sort : 排序函数的 函数指针
	arr : 数组
	n ：数组长度
*/
void deleteArray(int *arr);

/**
	timeSort：测试数组排序所运行的时间
	sort : 排序函数的 函数指针
	arr : 数组
	n ：数组长度
*/
void timeSort(char*name,void(*sort)(int *,int),int*arr,int n);

/**
	timeSortAndPrint：测试数组排序所运行的时间，并且打印
	sort : 排序函数的 函数指针
	arr : 原数组
	n ：数组长度
*/
void timeSortAndPrint(char*name,void(*sort)(int *,int),int*arr,int n);

/**
	isSorted：测试数组是否从小到大排序
	arr : 原数组
	n ：数组长度
*/
bool isSorted(int *arr,int n);

/**
	copyArray：拷贝数组
	arr : 原数组
	n ：数组长度
*/
int *copyArray(int *arr,int n);
#endif
