#pragma once

//时间复杂度和空间复杂度都是O(n+k)
namespace CountingSort {
	int  findArrMaxValue(int arr[],int length) {
		int maxValue = arr[0];
		for (int i = 0; i < length; i++) {
			if (arr[i] > maxValue)
				maxValue = arr[i];
		}
		return maxValue;
	}
	

	void _countingSort(int arr[], int maxValue,int length) {
		int *bucket = new int[maxValue + 1];
		for (int i = 0; i < maxValue + 1; ++i)
			bucket[i] = 0;

		int bucketLen = maxValue + 1;
		int sortIndex = 0;
		
		for (int i = 0; i < length; ++i) {
			bucket[arr[i]]++;
		}


		for (int j = 0; j < bucketLen; j++) {
			while (bucket[j] > 0) {
				arr[sortIndex] = j;
				arr[sortIndex] = j;
				sortIndex++;
				bucket[j]--;
			}
		}
		delete []bucket;
	}

	void countingSort(int arr[], int length) {
		int maxValue = findArrMaxValue(arr, length);
		_countingSort(arr, maxValue, length);
	}
}
