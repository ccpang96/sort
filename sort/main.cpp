#include<iostream>
#include"SortTestHelper.h"
#include"bubbleSort.h"
#include"quickSort.h"
#include"insertionSort.h"
#include"shellSort.h"
#include"selectionSort.h"
#include"heapBigSort.h"
#include"mergeSort.h"
#include"countingSort.h"
#include"bucketSort.h"
#include"heapLittleSort.h"
using namespace std;
using namespace SortTestHelper;
using namespace BubbleSort;
using namespace QuickSort;
using namespace InsertionSort;
using namespace ShellSort;
using namespace SelectionSort;
using namespace HeapBigSort;
using namespace MergeSort;
using namespace CountingSort;
using namespace BucketSort;
using namespace HeapLittleSort;

int main() {
	int arr[10] = { 10, 9, 8, 6, 5, 3, 1, 2, 4, 7 };
	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "Êý×é³¤¶ÈÊÇ: " << length << endl;

	//1.²âÊÔÃ°ÅÝÅÅÐò
	cout << "*****************²âÊÔÃ°ÅÝÅÅÐò£º********************" << endl;

	printArray(arr, 10);
//	bubbleSort(arr,10);
	printArray(arr, 10);
	cout << endl << endl;

	//2.²âÊÔ¿ìËÙÅÅÐò
	cout << "*****************²âÊÔ¿ìËÙÅÅÐò£º********************" << endl;
	printArray(arr, 10);
//	quickSort(arr, length,0,length-1);
	printArray(arr, 10);
	cout << endl << endl;

	//3.²âÊÔ²åÈëÅÅÐò
	cout << "*****************²âÊÔ²åÈëÅÅÐò£º********************" << endl;
	printArray(arr, 10);
//insertSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;
	
	//4.²âÊÔÏ£¶ûÅÅÐò (ËõÐ¡ÔöÁ¿²åÈëÅÅÐò)
	cout << "*****************²âÊÔÏ£¶ûÅÅÐò£º********************" << endl;
	printArray(arr, 10);
//shellSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;
	
	//5.²âÊÔÑ¡ÔñÅÅÐò
	cout << "*****************²âÊÔÑ¡ÔñÅÅÐò£º********************" << endl;
	printArray(arr, 10);
//selectionSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;
	
	//6.²âÊÔ´ó¶¥¶Ñ¶ÑÅÅÐò
	cout << "*****************²âÊÔ¶ÑÅÅÐò£º********************" << endl;
	printArray(arr, 10);
//heapBigSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;
	
	//6.2²âÊÔÐ¡¶¥¶ÑÅÅÐò
	cout << "*****************²âÊÔ¶ÑÅÅÐò£º********************" << endl;
	printArray(arr, 10);
heapLittleSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;


	//7.¹é²¢ÅÅÐò
	cout << "*****************²âÊÔ¹é²¢ÅÅÐò£º********************" << endl;
	printArray(arr, 10);
//mergeSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;

	//7.¼ÆÊýÅÅÐò
	cout << "*****************²âÊÔ¼ÆÊýÅÅÐò£º********************" << endl;
	printArray(arr, 10);
//countingSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;

	//8.Í°×ÓÅÅÐò
	cout << "*****************²âÊÔÍ°ÅÅÐò£º********************" << endl;
	printArray(arr, 10);
//bucketSort(arr, length);
	printArray(arr, 10);
	cout << endl << endl;



	system("pause");
	return 0;
}