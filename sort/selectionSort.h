#pragma once
#include<algorithm>
#include"SortTestHelper.h"
using namespace SortTestHelper;
namespace SelectionSort {
	void selectionSort(int arr[], int length) {
		if (arr == nullptr || length <= 0)
			return;
		for (int i = 0; i < length; ++i) {
			int minIndex = i;
			for (int j = i + 1; j < length; ++j) {
				if (arr[j] < arr[minIndex])
					minIndex = j;
			}
			std::swap(arr[i], arr[minIndex]);
			printArray(arr, 10);
		}		
	}
}
