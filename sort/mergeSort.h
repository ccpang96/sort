#pragma once
#include<iostream>
#include<cmath>
#include"SortTestHelper.h"
namespace MergeSort {

	//mrege�Ĳ���
	void merge(int arr[], int left, int mid, int right) {
		
		int *temp = new int[right - left + 1]; //temp�����ݴ�ϲ�����������
		int i = left; //������ָ��
		int j = mid + 1; //������ָ��
		int t = 0; //��ʱ����ָ��

		while (i <= mid && j <= right) {
			if (arr[i] <= arr[j])
				temp[t++] = arr[i++];
			else
				temp[t++] = arr[j++];
		}

		//����������
		while (i <= mid)
			temp[t++] = arr[i++];
		while (j <= right)
			temp[t++] = arr[j++];

		//��temp�����е����ݿ�����ԭ������
		t = 0;
		while (left <= right)
			arr[left++] = temp[t++];
		delete[]temp;
	}

	//����
	void _mergeSort(int arr[], int left, int right) {

		if (left >= right)
			return;
		int mid = (left + right) / 2; //ȡ�м��ֵ
		_mergeSort(arr, left, mid);
		_mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}

	//�鲢����
	void mergeSort(int arr[], int length) {
		_mergeSort(arr, 0, length - 1);
	}
}
