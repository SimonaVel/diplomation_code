#include <string>
// #include "Flower.cpp"

#ifndef FLOWER_H
#define FLOWER_H

using namespace std;

class Flower {
public:
    string getName() const { return name; }
    Flower(string type);
    ~Flower();

    string getType() const;

    void setType(string type);

    virtual void display() const;

    Flower& operator=(const Flower& );

private:
    string name;

    string type;
};

#endif