#include <string>
// #include "Flower.cpp"

#ifndef FLOWER_H
#define FLOWER_H

using namespace std;

class Flower {
public:
    Flower(string type);
    ~Flower();

    string getType() const;

    void setType(string type);

    virtual void display() const;

private:
    string type;
};

#endif