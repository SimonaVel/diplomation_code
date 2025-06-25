#include <iostream>
#include <string>
#include "Library.cpp"
#include "Building.cpp"
#include "Business.cpp"

using namespace std;
int main() {
    // Create a Library object
    Library myLibrary("123 Main St", 5000, 150000.0);
    // Display the library information
    myLibrary.display();

    // cout << "Get address: " << myLibrary.getAddress() << endl;

    return 0;
}