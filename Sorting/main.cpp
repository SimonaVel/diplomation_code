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
    int size = sizeof(arr)/sizeof(arr[0]); 

    cout << "Before sorting: ";
    printArr(arr, size);
    cout << endl;

    // ========== DUMB SORT ========== //

    cout << "Dumb sorted: ";
    printArr(dumbSort(arr, size), size);
    cout << endl;

    // ========== SELECTION SORT ========== //
    // ? Resetting the array for selection sort --> figure out a better way to handle this in the future
    int arr2[6] = {1, 6, 4, 2, 3, 5};

    cout << "Selection sorted: ";
    printArr(selectionSort(arr2, size), size);
    cout << endl;

    return 0;
}