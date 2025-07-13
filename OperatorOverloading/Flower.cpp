#include <iostream>
#include "Flower.h"

using namespace std;    

Flower::Flower(string type = "Flower") : type(type){ }

Flower::~Flower() {}

void Flower::setType(string type) { this->type = type; }

string Flower::getType() const { return type; }

void Flower::display() const {
    cout << getType() << endl;
}

Flower& Flower::operator=(const Flower& r){
    if(type != r.type) {		
        this->type = r.type;
    }	
    return *this;
}


