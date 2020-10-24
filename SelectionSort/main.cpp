#include <iostream>
#include<algorithm>
#include "SortTestHelper.h"
#include "Student.h"
using namespace  std;
template<typename T>
int selectionSort(T arr[], int n){

    for(int i = 0; i < n; i++){

        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }

    //return arr[];
}

int main() {

    int n =10;
    int *arr = SortTestHelper::generateRandomArray(n, 1, 1000);
    selectionSort(arr, n);
    SortTestHelper::printArray(arr, n);

    delete[] arr;

    Student d[4] = { {"D",90},{"C",100},{"B",95},{"A",95}};
    selectionSort(d, 4);
    for(int i=0; i <4; i++)
        cout<<d[i];
    cout<<endl;
    return 0;
}
