#include "element.cpp"
#include <iostream>

using namespace std;

//* Stack structure - we add and we remove elements from the top (beginning);
//* LIFO (Last In, First Out) principle
struct stack {
    element* top;
    int size;
    int capacity;

    stack(int cap) {
        capacity = cap;
        top = nullptr;
        size = 0;
    }

    ~stack() {
        while (!isEmpty()) {
            pop();
        }
    }
    //* add value at top
    void push(int value) {
        if (size == capacity) {
            // Stack is full
            return;
        }
        element* newElement = new element(value, top);
        top = newElement;
        size++;
    }
    //* remove top value
    int pop() {
        if (isEmpty()) {
            // Stack is empty
            return -1;
        }
        element* temp = top;
        int poppedValue = top->value;
        top = top->next;
        delete temp;
        size--;
        return poppedValue;
    }

    //* Peek at the top value 
    int peek() const {
        if (isEmpty()) {
            // Stack is empty
            return -1;
        }
        return top->value;
    }

    bool isEmpty() const {
        return top == nullptr;
    }

    bool isFull() const {
        return size == capacity;
    }

    void print() const {
        element* current = top;
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
};