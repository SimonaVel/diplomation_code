#include <string>
#include "Object.cpp"

#ifndef SQUARE_H
#define SQUARE_H

using namespace std;

class Square : public Object {
public:
    Square(double a);
    ~Square();
    double getA() const;
    void setA(double newA);
    virtual double area() const;
    virtual double circumference() const;
    virtual void display() const;

private:
    double a;
};

#endif