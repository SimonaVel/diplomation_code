#include <iostream>
#include <string>
#include "Bouquet.cpp"
#include "Flower.cpp"

using namespace std;
int main() {
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


    return 0;
}