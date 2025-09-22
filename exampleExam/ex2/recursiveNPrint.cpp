#include <iostream>
using namespace std;

// Рекурсивна функция за отпечатване на интервали
void printSpaces(int count) {
    if (count <= 0) return;
    cout << " ";
    printSpaces(count - 1);
}

// Рекурсивна функция за отпечатване на нарастваща последователност
void printIncreasing(int current, int limit) {
    if (current > limit) return;
    cout << current;
    printIncreasing(current + 1, limit);
}

// Рекурсивна функция за отпечатване на намаляваща последователност
void printDecreasing(int current) {
    if (current == 0) return;
    cout << current;
    printDecreasing(current - 1);
}

// Рекурсивна функция за печат на пирамидата ред по ред
void printPyramid(int n, int currentRow = 1) {
    if (currentRow > n) return;

    // 1) Отпечатваме интервали
    printSpaces(n - currentRow);

    // 2) Отпечатваме нарастваща последователност
    printIncreasing(1, currentRow);

    // 3) Отпечатваме намаляваща последователност
    printDecreasing(currentRow - 1);

    cout << endl;

    // Рекурсивно извикване за следващия ред
    printPyramid(n, currentRow + 1);
}

int main() {
    unsigned inputN;
    cout << "Enter N: ";
    cin >> inputN;
    cout << "\n";
    printPyramid(inputN);

    return 0;
}
