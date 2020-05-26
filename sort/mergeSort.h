#pragma once
#include<iostream>
#include<cmath>
#include"SortTestHelper.h"
namespace MergeSort {

	//mrege的操作
	void merge(int arr[], int left, int mid, int right) {
		
		int *temp = new int[right - left + 1]; //temp数组暂存合并的有序序列
		int i = left; //左序列指针
		int j = mid + 1; //右序列指针
		int t = 0; //临时数组指针

		while (i <= mid && j <= right) {
			if (arr[i] <= arr[j])
				temp[t++] = arr[i++];
			else
				temp[t++] = arr[j++];
		}

		//左边数组完毕
		while (i <= mid)
			temp[t++] = arr[i++];
		while (j <= right)
			temp[t++] = arr[j++];

		//将temp数组中的内容拷贝到原数组中
		t = 0;
		while (left <= right)
			arr[left++] = temp[t++];
		delete[]temp;
	}

	//分治
	void _mergeSort(int arr[], int left, int right) {

		if (left >= right)
			return;
		int mid = (left + right) / 2; //取中间的值
		_mergeSort(arr, left, mid);
		_mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}

	//归并排序
	void mergeSort(int arr[], int length) {
		_mergeSort(arr, 0, length - 1);
	}
}
