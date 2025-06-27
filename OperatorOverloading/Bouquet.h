#include <vector>
#include "Flower.h"

#ifndef BOUQUET_H
#define BOUQUET_H

using namespace std;

class Bouquet {
public:
    Bouquet();
    ~Bouquet();

    int addFlowerToBouquet(Flower flower);
    int removeFlowerTypeFromBouquet(string type);

    virtual void display() const;

private:
    vector<Flower> flowers;
};

#endif