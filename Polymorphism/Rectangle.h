#include <string>
#include "Object.cpp"

#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle : public Object {
public:
    Rectangle(double a, double b);
    ~Rectangle();
    double getA() const;
    double getB() const;
    void setA(double newA);
    void setB(double newB);
    virtual void display() const;
    virtual double area() const;
    virtual double circumference() const;

private:
    double a;
    double b;
};

#endif