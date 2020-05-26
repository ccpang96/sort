#pragma once


#include<algorithm>
namespace HeapLittleSort {
	void adjustHeap(int i, int arr[], int length) {
		int temp = arr[i];
		for (int k = 2 * i + 1; k < length; k = 2 * k + 1) {
			//从i的左右孩子中选择较小的
			if (k + 1 < length && arr[k + 1] < arr[k])
				k++;

			//选择排序
			if (arr[k] < temp) {
				arr[i] = arr[k];
				i = k;
			}
			else
				break;
		}
		arr[i] = temp;	//不断的往后
	}

	//建堆的时间渐进复杂度是O(n)
	void buildHeap(int arr[], int length) {
		//从非叶子节点开始调整
		for (int i = length / 2 - 1; i >= 0; i--) {
			adjustHeap(i, arr, length);
		}
	}

	void heapLittleSort(int arr[], int length) {
		//1.建堆
		buildHeap(arr, length);
		//2.不断让堆顶元素与j值交换
		for (int j = length - 1; j > 0; j--) {
			std::swap(arr[0], arr[j]);
			adjustHeap(0, arr, j);
		}

	} 

}
