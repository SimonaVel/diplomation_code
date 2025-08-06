#include <algorithm>
using namespace std;

// QuickSort function that sorts the array in place
// It uses the last element as the pivot
// The function is recursive and sorts the left and right partitions
int* quickSort(int* arr, int left, int right) {
    if (left < right) {
        int pivot = arr[right];
        int i = left - 1;
        for (int j = left; j < right; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[right]);
        quickSort(arr, left, i);
        quickSort(arr, i + 2, right);
    }
    return arr;
}