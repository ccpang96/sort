#pragma once
#include<cmath>
#include"SortTestHelper.h"
using namespace SortTestHelper;

namespace ShellSort {
	void shellSort(int arr[], int length) {
		for (int gap = floor(length / 2); gap > 0; gap = floor(gap / 2)) {
			for (int i = gap; i < length; i++) {
				int j = i;
				int current = arr[i]; //开辟O（1）空间保存该值
				while (j - gap >= 0 && current < arr[j - gap]) {
					arr[j] = arr[j - gap];
					j = j - gap;
				}
				arr[j] = current;
			}
			printArray(arr, 10);
		}
	}
}
