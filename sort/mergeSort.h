#pragma once
#include<iostream>
#include<cmath>
#include"SortTestHelper.h"
//应该在执行归并的过程中始终使用一个temp数组，这样减少数组的创建和开销操纵
namespace MergeSort {
	void merge(int *arr, int start, int mid, int end, int *temp) {
		int i = start;
		int j = mid + 1;
		int t = 0;
		while (i <= mid && j <= end) {
			if (arr[i] <= arr[j])  //保证了归并操作的稳定性
				temp[t++] = arr[i++];
			else
				temp[t++] = arr[j++];
		}
		while (i <= mid)
			temp[t++] = arr[i++];

		while (j <= end)
			temp[t++] = arr[j++];

		t = 0;
		while (start <= end)
			arr[start++] = temp[t++];
	}

	void _mergesort(int *arr, int start, int end, int *temp) {
		if (start >= end)
			return;
		int mid = start + (end - start) / 2;

		//递归分治
		_mergesort(arr, start, mid, temp); //此处是mid
		_mergesort(arr, mid + 1, end, temp);

		//优化，如果有序就不需要再归并了
		if (arr[mid] < arr[mid + 1])
			return;

		merge(arr, start, mid, end, temp);
	}

	void mergeSort(int *arr, int length) {
		//O(n)的空间

		int *temp = new int[length];

		_mergesort(arr, 0, length - 1, temp);

		temp = nullptr;  //防止野指针
		delete[]temp;	//防止内存泄露

	}



}
