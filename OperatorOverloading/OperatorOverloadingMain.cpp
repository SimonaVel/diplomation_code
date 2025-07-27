#include <iostream>
#include <string>
#include "Bouquet.cpp"
#include "Flower.cpp"
#include "../Util/steaming.cpp"
#include "../Templates/Box.cpp"

using namespace std;
int main() {
    // ========================================================== //
    cout << "Operator Overloading Example with flowers" << endl;
    Flower peony("Peony");
    Flower rose("Rose");

    // Bouquet bouquet1;
    // bouquet1.addFlowerToBouquet(peony1);
    // bouquet1.addFlowerToBouquet(Rose1);

    Bouquet bouquet = peony + rose;
    
    bouquet.display();

    // Demonstrating the assignment operator
    peony = rose;
    cout << "After assignment, peony type: " << peony.getType() << endl;

    // ========================================================== //
    cout << "\nDemonstrating the print function with different data types:" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    string arr3[] = {"one", "two", "three", "four", "five"};
    print(cout, arr, 5);
    cout << endl;
    print(cout, arr2, 5);
    cout << endl;
    print(cout, arr3, 5);
    cout << endl;

    // ========================================================== //
    cout << "\nDemonstrating the Box template class:" << endl;
    Box<Flower> flowerBox(rose);
    cout << "Flower Box Value: " << flowerBox.getValue().getType() << endl;
    // ========================================================== //
    cout << "\nEnd of program." << endl;
    return 0;
}