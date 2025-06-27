#include <iostream>
#include <string>
#include "Bouquet.cpp"
#include "Flower.cpp"

using namespace std;
int main() {
    Flower peony("Peony");
    Flower Rose("Rose");

    // Bouquet bouquet1;
    // bouquet1.addFlowerToBouquet(peony1);
    // bouquet1.addFlowerToBouquet(Rose1);

    Bouquet bouquet = peony + Rose;
    
    bouquet.display();

    return 0;
}