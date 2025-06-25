#include <string>
#ifndef OBJECT_H
#define OBJECT_H

class Object {
    public:
    virtual double area() const = 0;
    virtual double circumference() const = 0;
};

#endif