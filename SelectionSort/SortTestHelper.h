//
// Created by Pengfei Ma on 2020/10/23.
//

#ifndef BOBO_SORTTESTHELPER_H
#define BOBO_SORTTESTHELPER_H
#include <iostream>
#include <ctime>
#include <cassert>
using namespace std;

namespace SortTestHelper{
    int* generateRandomArray(int n, int rangeL, int rangeR){
        assert(rangeL <= rangeR);
        int *arr = new int[n];
        srand(time((NULL)));
        for(int i = 0; i < n; i++)
            arr[i] = rand()%(rangeR - rangeL + 1)+rangeL;
        return  arr;
    }

    template<typename T>
    void printArray(T arr[], int n){

        for(int i = 0; i < n; i++)
            cout<<arr[i]<<" ";
        cout<< endl;

        return;
    }
}


#endif //BOBO_SORTTESTHELPER_H
