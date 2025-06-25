#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) : a(a), b(b) {}

Rectangle::~Rectangle() {}

double Rectangle::getA() const { return a; }

double Rectangle::getB() const { return b; }

void Rectangle::setA(double newA) { a = newA; }

void Rectangle::setB(double newB) { b = newB; }

void Rectangle::display() const {
    std::cout << "Length: " << a << ", Width: " << b << std::endl;
}

double Rectangle::area() const {
    return a * b;
}

double Rectangle::circumference() const {
    return 2 * (a + b);
}