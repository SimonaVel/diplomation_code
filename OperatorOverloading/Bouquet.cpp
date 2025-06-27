#include <iostream>
#include "Bouquet.h"

using namespace std;    

Bouquet::Bouquet() {}

Bouquet::~Bouquet() {}

int Bouquet::addFlowerToBouquet(Flower flower) {
    this -> flowers.push_back(flower);
    return 0;
}

int Bouquet::removeFlowerTypeFromBouquet(string type){
    int i = 0;
    while(i < flowers.size()) {
        if(flowers[i].getType() == type) {
            flowers.erase(flowers.begin() + i);
            i--; 
        }
        i++;
    }
    return 0;
}

void Bouquet::display() const {
    cout << "Bouquet: " << endl;
    for (auto &flower : flowers) {
        flower.display();
    }
} 

inline Bouquet operator+(const Flower& left, const Flower& right) {
    Bouquet tmp;
    tmp.addFlowerToBouquet(left);
    tmp.addFlowerToBouquet(right);
    return tmp;
}

