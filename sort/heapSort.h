#pragma once
#include<cmath>
#include<algorithm>
namespace HeapSort {

	//调整大顶堆
	void adjustHeap(int arr[], int i, int length) {
		int temp = arr[i];
		for (int k = i * 2 + 1; k < length; k = k * 2 + 1) { //从i结点的左子结点开始，也就是2i+1处开始
			if (k + 1 < length && arr[k] < arr[k + 1]) { //如果左子结点小于右子结点，就让k指向右子结点
				k++;
			}
			//如果当前节点的左右子节点的最大值大于当前节点
			if (arr[k] > temp) { //如果子节点大于父节点，将子节点的值赋予给父节点(不用进行交换)
				arr[i] = arr[k];
				i = k;
			}
			else {
				break;
			}
		}
		arr[i] = temp; //将temp的值放到最终的位置
	}
	//构建大顶堆
	void buildHeap(int arr[], int length) {
		for (int i = floor(length / 2 - 1); i >= 0; i--) {   //floor(x)返回的是不大于x的最大整数
															 //从第一个非叶子节点从下到上，从右至左调整结构
			adjustHeap(arr, i, length);
		}
	}
	//堆排序
	void heapSort(int arr[], int length) {
		//1.构建大顶堆
		buildHeap(arr, length);
		//2.调整堆结构+交换堆顶元素和末尾元素
		for (int j = length - 1; j > 0; j--) {
			std::swap(arr[0], arr[j]);
			adjustHeap(arr, 0, j);
		}
		
	}
}
