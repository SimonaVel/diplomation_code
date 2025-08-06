#include <iostream>
#include "algorithms.h"
using namespace std;

void printArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[6] = {1, 6, 4, 2, 3, 5};
    int arr2[6] = {3, 1, 4, 2, 6, 5};
    int arr3[6] = {2, 6, 4, 1, 3, 5};
    int arr4[6] = {1, 5, 3, 2, 4, 6};
    int arr5[6] = {6, 3, 1, 4, 5, 2};
    int arr6[6] = {4, 6, 3, 1, 5, 2}; 

    int size = sizeof(arr)/sizeof(arr[0]); 

    // ========== DUMB SORT ========== //

    cout << "Dumb sorted: ";
    printArr(arr, size);
    cout << " -> ";
    printArr(dumbSort(arr, size), size);
    cout << endl;

    // ========== SELECTION SORT ========== //
    cout << "Selection sorted: ";
    printArr(arr2, size);
    cout << " -> ";
    printArr(selectionSort(arr2, size), size);
    cout << endl;

    // ========== BUBBLE SORT ========== //

    cout << "Bubble sorted: ";
    printArr(arr3, size);
    cout << " -> ";
    printArr(bubbleSort(arr3, size), size);
    cout << endl;

    // ========== INSERTION SORT ========== //

    cout << "Insertion sorted: ";
    printArr(arr4, size);
    cout << " -> ";
    printArr(insertionSort(arr4, size), size);
    cout << endl;

    // ========== QUICK SORT ========== //

    cout << "Quick sorted: ";
    printArr(arr5, size);
    cout << " -> ";
    printArr(quickSort(arr5, 0, size - 1), size);
    cout << endl;

    // ========== MERGE SORT ========== //
    cout << "Merge sorted: ";
    printArr(arr6, size);
    cout << " -> ";
    printArr(mergeSort(arr6, 0, size - 1), size);
    cout << endl;

    return 0;
}