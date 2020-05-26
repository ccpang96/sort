#pragma once
#include<cmath>
#include<algorithm>
namespace HeapSort {

	//�����󶥶�
	void adjustHeap(int arr[], int i, int length) {
		int temp = arr[i];
		for (int k = i * 2 + 1; k < length; k = k * 2 + 1) { //��i�������ӽ�㿪ʼ��Ҳ����2i+1����ʼ
			if (k + 1 < length && arr[k] < arr[k + 1]) { //������ӽ��С�����ӽ�㣬����kָ�����ӽ��
				k++;
			}
			//�����ǰ�ڵ�������ӽڵ�����ֵ���ڵ�ǰ�ڵ�
			if (arr[k] > temp) { //����ӽڵ���ڸ��ڵ㣬���ӽڵ��ֵ��������ڵ�(���ý��н���)
				arr[i] = arr[k];
				i = k;
			}
			else {
				break;
			}
		}
		arr[i] = temp; //��temp��ֵ�ŵ����յ�λ��
	}
	//�����󶥶�
	void buildHeap(int arr[], int length) {
		for (int i = floor(length / 2 - 1); i >= 0; i--) {   //floor(x)���ص��ǲ�����x���������
															 //�ӵ�һ����Ҷ�ӽڵ���µ��ϣ�������������ṹ
			adjustHeap(arr, i, length);
		}
	}
	//������
	void heapSort(int arr[], int length) {
		//1.�����󶥶�
		buildHeap(arr, length);
		//2.�����ѽṹ+�����Ѷ�Ԫ�غ�ĩβԪ��
		for (int j = length - 1; j > 0; j--) {
			std::swap(arr[0], arr[j]);
			adjustHeap(arr, 0, j);
		}
		
	}
}
