#ifndef ELEMENT_H
#define ELEMENT_H

struct element {
    int value;
    element* next;

    element(int val) : value(val), next(nullptr) {}
    element(int val, element* nxt) : value(val), next(nxt) {}

    ~element() {}
};

#endif