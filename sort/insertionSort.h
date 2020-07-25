#pragma once
//插入排序往后挪动
namespace InsertionSort {
	void insertSort(int arr[],int length) {
		if (arr == nullptr || length < 0)
			return;

		for (int i = 1; i < length; i++) {
			int preIndex = i - 1;
			int current = arr[i]; //开辟了O(1)空间保存了当前值
			while (preIndex >= 0 && arr[preIndex] > current) { //比arr[i]大的前面的值依次往后挪动
				arr[preIndex+1] = arr[preIndex];
				preIndex--; //接着往前走
			}
			arr[preIndex + 1] = current; //将当前值插入到该位置
		}
	}
}