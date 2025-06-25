#include <string>
#include "Building.h"
#include "Business.h"

#ifndef LIBRARY_H
#define LIBRARY_H

using namespace std;

class Library : public Building, public Business {
public:
    Library(string address, int numOfBooks, double revenue);
    Library(string address, int numOfBooks);
    ~Library();
    int getNumOfBooks() const;
    void setNumOfBooks(int newNumOfBooks);
    // Display method
    virtual void display() const;

private:
    int numOfBooks;
};
#endif