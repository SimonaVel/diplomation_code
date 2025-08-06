#include <iostream>

int* selectionSort(int* arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Find the index of the minimum element
        int minIndex = i;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the current element
        // std::swap(arr[i], arr[minIndex]);
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    return arr;
}