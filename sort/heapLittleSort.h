#pragma once


#include<algorithm>
namespace HeapLittleSort {
	void adjustHeap(int i, int arr[], int length) {
		int temp = arr[i];
		for (int k = 2 * i + 1; k < length; k = 2 * k + 1) {
			//��i�����Һ�����ѡ���С��
			if (k + 1 < length && arr[k + 1] < arr[k])
				k++;

			//ѡ������
			if (arr[k] < temp) {
				arr[i] = arr[k];
				i = k;
			}
			else
				break;
		}
		arr[i] = temp;	//���ϵ�����
	}

	//���ѵ�ʱ�佥�����Ӷ���O(n)
	void buildHeap(int arr[], int length) {
		//�ӷ�Ҷ�ӽڵ㿪ʼ����
		for (int i = length / 2 - 1; i >= 0; i--) {
			adjustHeap(i, arr, length);
		}
	}

	void heapLittleSort(int arr[], int length) {
		//1.����
		buildHeap(arr, length);
		//2.�����öѶ�Ԫ����jֵ����
		for (int j = length - 1; j > 0; j--) {
			std::swap(arr[0], arr[j]);
			adjustHeap(0, arr, j);
		}

	} 

}
