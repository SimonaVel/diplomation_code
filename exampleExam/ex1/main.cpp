#include <iostream>
// #include "CString.h"
#include "CString.cpp"


using namespace std;
int main() {
    char a[] = {'a', 'b', 'c', 'a', 'b'};
    CString cstring(a, 100);

    char substring[] = {'a', 'b'};
    int count = 0;
    unsigned* occurances = cstring.findOccurances(cstring.getNiz(), substring, count);

    for (int i = 0; i < count; i++) {
        cout << occurances[i] << " ";
    }
    delete[] occurances;

    return 0;
}