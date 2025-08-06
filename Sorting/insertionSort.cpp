int* insertionSort(int* arr, int n) {
    int i, buf, j;
    // първият елемент е нареден винаги => почваме от втория
    for (i = 1; i < n; i++){
        buf = arr[i];
        j = i - 1;
        /* преместване на елементите, по-големи от буферната ни променлива 1 място нагоре */
        while (j >= 0 && arr[j] > buf){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = buf;
    }
    return arr;
}