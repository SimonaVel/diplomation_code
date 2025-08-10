#include <iostream>
using namespace std;

struct arrayStack {
    int* data;
    int top;
    int capacity;

    arrayStack(int cap) {
        capacity = cap;
        data = new int[capacity];
        top = -1;
    }

    ~arrayStack() {
        delete[] data;
    }

    void push(int value) {
        if (top == capacity - 1) {
            // Stack is full
            return;
        }
        data[++top] = value;
    }

    int pop() {
        if (isEmpty()) {
            // Stack is empty
            return -1;
        }
        return data[top--];
    }

    int peek() const {
        if (isEmpty()) {
            // Stack is empty
            return -1;
        }
        return data[top];
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == capacity - 1;
    }

    void print() const {
        for (int i = top; i >= 0; i--) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};