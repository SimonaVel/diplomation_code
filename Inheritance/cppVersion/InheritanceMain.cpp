#include <iostream>
#include <string>
#include "Library.cpp"
// #include "Library.h"
#include "Building.cpp"
// #include "Building.h"
#include "Business.cpp"
// #include "Business.h"

using namespace std;
int main() {
    // Create a Library object
    Library myLibrary("123 Main St", 5000, 150000.0);
    // Display the library information
    myLibrary.display();

    // Set tax
    Business::setTaxRate(0.10);
    // Calculate and display tax on the library's revenue
    double tax = Business::calculateTax(myLibrary.getRevenue());

    cout << "Tax on library revenue: " << tax << endl;
    // cout << "Tax rate: " << Library::getTaxRate() << endl;
    return 0;
}