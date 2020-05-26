#pragma once
#include<cmath>
#include<vector>
#include"insertionSort.h"
using namespace InsertionSort;

//未完成桶排序
using std::vector;

namespace BucketSort {

	//获得arr数组中的最大值
	int getArrMaxValue(int arr[], int length) {
		int maxValue = arr[0];
		for (int i = 0; i < length; i++) {
			if (arr[i] > maxValue)
				maxValue = arr[i];
		}
		return maxValue;
	}

	//获得arr数组中的最小值、
	int getArrMinValue(int arr[], int length) {
		int minValue = arr[0];
		for (int i = 0; i < length; i++) {
			if (arr[i] < minValue)
				minValue = arr[i];
		}
		return minValue;
	}




	//bucketSize:桶的数量
	void _bucketSort(int arr[], int length,int minValue,int maxValue,int bucketSize) {
		if (length <= 0)
			return;
		//int DEFAULT_BUCKET_SIZE = 5; //默认桶子的数量
		//建立大小为bucketCount大小的桶数组
		int bucketCount = floor((maxValue - minValue) / bucketSize) + 1;
		
		int **buckets = new int *[bucketSize];
		for (int i = 0; i < bucketSize; i++)
			buckets[i] = new int[bucketCount];
		//全部初始化为0
		for (int i = 0; i < bucketSize; i++)
			for (int j = 0; j < bucketCount; j++)
				buckets[i][j] = 0;

	//	vector<vector<int>>buckets;

		//将arr数组中的数映射到bucket中
		for (int i = 0; i < length; i++) {
			int bucket_number = (arr[i] - minValue) % bucketSize;
			int bucket_size = sizeof(buckets[bucket_number]) / sizeof(buckets[bucket_number][0]);
			buckets[bucket_number][bucket_size] = arr[i];
		}
		
		int sortIndex = 0;
		//对每个桶进行排序
		for (int i = 0; i < bucketSize; i++) {
			int bucket_length = sizeof(buckets[i]) / sizeof(buckets[i][0]);
			insertSort(buckets[i], bucket_length);
			for (int j = 0; j < bucket_length; j++)
				arr[sortIndex++] = buckets[i][j];
		}
		for(int j =0;j< bucketSize;j++)
		delete[] buckets[j];
	}

	void bucketSort(int arr[], int length) {
		int minValue = getArrMinValue(arr, length);
		cout << minValue << endl;
		int maxValue = getArrMaxValue(arr, length);
		cout << maxValue << endl;
		_bucketSort(arr, length, minValue, maxValue, 5);
	}
}
