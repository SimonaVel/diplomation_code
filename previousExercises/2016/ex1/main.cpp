#include <iostream>
// #include "CString.h"
#include "CString.cpp"

void printNiz(const CString& str) {
    for (int i = 0; i < strlen(str.getNiz()); i++) {
        std::cout << str.getNiz()[i] << " ";
    }
    std::cout << std::endl;
}


using namespace std;
int main() {
    char a[] = "ababaabababa";
    char substring[] = "aba";
    CString cstring(a, 100);

    cout << "Niz: ";
    printNiz(cstring);

    cout << "Occurrences\n";
    vector<unsigned> occurrences = cstring.findOccurrences(cstring.getNiz(), substring);
    cout << "Count: " << occurrences.size() << endl;
    for (unsigned pos : occurrences) {
        std::cout << pos << " ";
    }

    cout << "\nString output using overloaded << operator: ";
    cout << cstring << endl;

    // Input using overloaded >> operator - TODO
    cout << "Enter a new string: ";
    cin >> cstring;
    cout << "You entered: " << cstring << endl;

    return 0;
}