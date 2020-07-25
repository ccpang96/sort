#pragma once
#include<exception>
#include<algorithm>
namespace QuickSort {
	int partition(int arr[], int length, int start, int end) {
		if (arr == nullptr || length == 0 || start < 0 || end >= length)
			throw new std::exception("Invaild Parmeters");
		//选择末尾元素作为基准值

		int small = start - 1;
		for (int index = start; index < end; ++index) {
			if (arr[index] < arr[end]) {
				++small;
				std::swap(arr[small], arr[index]); //小值在左边 大值在右边
			}
		}
		++small;
		std::swap(arr[end], arr[small]); //再交换基准值和small
		return small;
	}


	void quickSort(int arr[], int length, int start, int end) {
		if (start == end)
			return;
		int index = partition(arr, length, start, end);
		if (index > start)
			quickSort(arr, length, start, index - 1);
		if (index < end)
			quickSort(arr, length, index + 1, end);
	}
}
