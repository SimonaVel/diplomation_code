#include <iostream>
#include "Building.h"

Building::Building(string address) : address(address) {}

Building::~Building() {}

string Building::getAddress() const { return address; }

void Building::setAddress(const string& newAddress) { address = newAddress; }

void Building::display() const {
    std::cout << "Address: " << address << std::endl;
}