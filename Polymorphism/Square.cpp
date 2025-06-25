#include <iostream>
#include "Square.h"

Square::Square(double a) : a(a) {}

Square::~Square() {}

double Square::getA() const { return a; }

void Square::setA(double newA) { a = newA; }

void Square::display() const {
    std::cout << "Side length: " << a << std::endl;
}

double Square::area() const {
    return a * a;
}

double Square::circumference() const {
    return 4 * a;
}