#include <iostream>
using namespace std;
#ifndef BOX_H
#define BOX_H
template <typename T>
class Box {
private:
    T value;
public:
    Box(T v) : value(v) {}

    void setValue(T v);

    T getValue();
};

#endif