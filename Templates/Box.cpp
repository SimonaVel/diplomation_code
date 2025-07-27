#include <iostream>
#include "Box.h"
using namespace std;

template <typename T>
void Box<T>::setValue(T v) {
    value = v;
}

template <typename T>
T Box<T>::getValue() {
    return value;
}