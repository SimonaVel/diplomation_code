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

void quickSortUni(int *A, int left, int right) { 
    // образуване на дяловете (2) - преди претърсването им 
    int i = left, j = right, helper = 0; 
    int pivot = A[(left+right)/2]; 
    // i се увеличава, а j се намалява докато не станат равни/разминат се 
    do { 
        while (A[i] < pivot) { 
            i++; 
        } 
        while (A[j] > pivot) { 
            j--; 
        } 
        // размяна на двете стойности 
        if (i <= j) { 
            helper = A[i]; 
            A[i] = A[j]; 
            A[j] = helper; 
            i++; 
            j--; 
        } 
    } while (i <= j); 
    if (left < right) { 
        // ляв дял 
        // j < i 
        /* рекурсия */ 
        quickSort(A, left, j); 
 
        // десен дял 
        // i > j 
        /* рекурсия */ 
        quickSort(A, i, right); 
    } 
} 