#include <climits>

int* dumbSort(int* arr, int n) {
    int i = 0, min = 0, minPos = 0;
    int* sortedArr = new int[n];
    while (i < n) {
        min = INT_MAX;
        for(int j = 0; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                minPos = j;
            }
        }
        arr[minPos] = INT_MAX;
        sortedArr[i] = min;
        i++;
    }
    return sortedArr;
}