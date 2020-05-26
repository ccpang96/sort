//
// Created by liuyubobobo on 7/22/16.
//

#ifndef INC_05_QUICK_SORT_ANOTHER_PARTITION_SORTTESTHELPER_H
#define INC_05_QUICK_SORT_ANOTHER_PARTITION_SORTTESTHELPER_H

#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <cassert>

using namespace std;


namespace SortTestHelper {

	//函数一： 生成一个含有n个在[range_l,range_r]之间元素的数组
    int *generateRandomArray(int n, int range_l, int range_r) {
		assert(range_l <= range_r);
        int *arr = new int[n];

        srand(time(NULL));
        for (int i = 0; i < n; i++)
            arr[i] = rand() % (range_r - range_l + 1) + range_l;
        return arr;
    }
	//函数二： 生成一个大小为n近乎有序的数组，swapTimes是交换次数
    int *generateNearlyOrderedArray(int n, int swapTimes){

        int *arr = new int[n];
        for(int i = 0 ; i < n ; i ++ )
            arr[i] = i;

        srand(time(NULL));
        for( int i = 0 ; i < swapTimes ; i ++ ){
            int posx = rand()%n;
            int posy = rand()%n;
            swap( arr[posx] , arr[posy] );
        }

        return arr;
    }

    int *copyIntArray(int a[], int n){

        int *arr = new int[n];
        std::copy(a, a+n, arr);
        return arr;
    }
	
	//函数四： 打印类型为T的数组
    template<typename T>
    void printArray(T arr[], int n) {

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

        return;
    }
	
	//函数五：测试数组是否是有序的
	template<typename T>
    bool isSorted(T arr[], int n) {

        for (int i = 0; i < n - 1; i++)
            if (arr[i] > arr[i + 1])
                return false;

        return true;
    }


	//函数六： 测试排序算法的运行时间: 函数名、指向函数的指针、测试用例、测试用例大小
    template<typename T>
    void testSort(const string &sortName, void (*sort)(T[], int), T arr[], int n) {

        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        cout << sortName << " : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s"<<endl;
        assert(isSorted(arr, n));
        return;
    }

};

#endif //INC_05_QUICK_SORT_ANOTHER_PARTITION_SORTTESTHELPER_H
