#include <iostream>
#include "Library.h"
#include "Business.h"

Library::Library(string address, int numOfBooks, double revenue) : 
                                                Building(address), 
                                                Business(revenue), 
                                                numOfBooks(numOfBooks) {}

Library::Library(string address, int numOfBooks) : Building(address), 
                                                numOfBooks(numOfBooks) {}

Library::~Library() {}

int Library::getNumOfBooks() const {
    return numOfBooks;
}

void Library::setNumOfBooks(int newNumOfBooks) {
    numOfBooks = newNumOfBooks;
}

void Library::display() const {
    Building::display();
    Business::display();
    std::cout <<  "NumOfBooks: " << numOfBooks << std::endl;
}
