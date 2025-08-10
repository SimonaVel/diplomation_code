#include "element.cpp"
#include <iostream>
#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

using namespace std;
//* Queue structure - we add elements at the end and remove from the front
//* FIFO - First In First Out
struct arrayQueue {
    int* data;
    int front;
    int rear;
    int capacity;

    arrayQueue(int size) {
        data = new int[size];
        front = 0;
        rear = 0;
        capacity = size;
    }

    ~arrayQueue() {
        delete[] data;
    }

    // Add element to the rear of the queue
    void enqueue(int value) {
        if (rear < capacity) {
            data[rear++] = value;
        }
    }

    // Remove element from the front of the queue
    void dequeue() {
        if (front < rear) {
            front++;
        }
    }

    // Print the elements in the queue
    void print() {
        for (int i = front; i < rear; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

#endif