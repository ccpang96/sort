#pragma once
#include<exception>
#include<algorithm>
namespace QuickSort {
	int partition(int arr[], int length, int start, int end) {
		if (arr == nullptr || length == 0 || start < 0 || end >= length)
			throw new std::exception("Invaild Parmeters");
		//ѡ��ĩβԪ����Ϊ��׼ֵ

		int small = start - 1;
		for (int index = start; index < end; ++index) {
			if (arr[index] < arr[end]) {
				++small;
				std::swap(arr[small], arr[index]); //Сֵ����� ��ֵ���ұ�
			}
		}
		++small;
		std::swap(arr[end], arr[small]); //�ٽ�����׼ֵ��small
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
