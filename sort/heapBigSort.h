#pragma once

/************************************************************************/
/*@File Name         : heapSort.h
/*@Created Date      : 2020/5/26 10:50
/*@Author            : ccpang(ccpang96@163.com)
/*@blog              : www.cnblogs.com/ccpang
/*@Description       : 实现堆排序(大顶堆)
/************************************************************************/

/* Includes *************************************************************/
#include<cmath>
#include<algorithm>
namespace HeapBigSort {

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


	/************************************************************************/
	/*@FullName:  buildHeap
	/*@Brief:     构建堆
	/*@Parameter: int arr[]是数组，length是数组长度
	/*@Returns:   无返回值
	/*@time:      2020/5/26 10:53
	/*@author:    ccpang
	/************************************************************************/
	void buildHeap(int arr[], int length) {
		//从非叶节点开始建堆，时间复杂度为O(n)
		for (int i = floor(length / 2 - 1); i >= 0; i--) {   //floor(x)返回的是不大于x的最大整数
															 //从第一个非叶子节点从下到上，从右至左调整结构
			adjustHeap(arr, i, length);
		}
	}
	

	/************************************************************************/
	/*@FullName:  heapSort
	/*@Brief:      先构建大顶堆，然后再交换堆顶元素和末尾元素
	/*@Parameter: int arr[]是待排序数组，length是数组长度
	/*@Returns:   无返回值
	/*@time:      2020/5/26 10:50
	/*@author:    ccpang
	/************************************************************************/
	void heapBigSort(int arr[], int length) {
		//1.构建大顶堆
		buildHeap(arr, length);
		//2.调整堆结构+交换堆顶元素和末尾元素
		for (int j = length - 1; j > 0; j--) {
			std::swap(arr[0], arr[j]);
			adjustHeap(arr, 0, j);
		}
		
	}
}
