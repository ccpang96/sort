#include<iostream>
#include"SortTestHelper.h"
#include"bubbleSort.h"
#include"quickSort.h"
#include"insertionSort.h"
#include"shellSort.h"
#include"selectionSort.h"
#include"heapSort.h"
#include"mergeSort.h"
#include"countingSort.h"
#include"bucketSort.h"
using namespace std;
using namespace SortTestHelper;
using namespace BubbleSort;
using namespace QuickSort;
using namespace InsertionSort;
using namespace ShellSort;
using namespace SelectionSort;
using namespace HeapSort;
using namespace MergeSort;
using namespace CountingSort;
using namespace BucketSort;

int main() {
	int arr[10] = { 10, 9, 8, 6, 5, 3, 1, 2, 4, 7 };
	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "���鳤����: " << length << endl;

	//1.����ð������
	cout << "*****************����ð������********************" << endl;

	printArray(arr, 10);
//	bubbleSort(arr,10);
	printArray(arr, 10);
	cout << endl << endl;

	//2.���Կ�������
	cout << "*****************���Կ�������********************" << endl;
	printArray(arr, 10);
//	quickSort(arr, length,0,length-1);
	printArray(arr, 10);
	cout << endl << endl;

	//3.���Բ�������
	cout << "*****************���Բ�������********************" << endl;
	printArray(arr, 10);
	//insertSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;
	
	//4.����ϣ������ (��С������������)
	cout << "*****************���Բ�������********************" << endl;
	printArray(arr, 10);
//	shellSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;
	
	//5.����ѡ������
	cout << "*****************���Բ�������********************" << endl;
	printArray(arr, 10);
	//selectionSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;
	
	//6.���Զ�����
	cout << "*****************���Զ�����********************" << endl;
	printArray(arr, 10);
	//heapSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;

	//7.�鲢����
	cout << "*****************���Թ鲢����********************" << endl;
	printArray(arr, 10);
	//       mergeSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;

	//7.��������
	cout << "*****************���Լ�������********************" << endl;
	printArray(arr, 10);
//	countingSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;

	//8.Ͱ������
	cout << "*****************����Ͱ����********************" << endl;
	printArray(arr, 10);
	bucketSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;



	system("pause");
	return 0;
}