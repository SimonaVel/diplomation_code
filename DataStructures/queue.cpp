#include "element.cpp"
#include <iostream>

using namespace std;
//* Queue structure - we add elements at the end and remove from the front
//* FIFO - First In First Out

#ifndef QUEUE_H
#define QUEUE_H

struct queue {
    element* front;
    element* rear;
    int size;
    queue(int s) {
        front = nullptr;
        rear = nullptr;
        size = 0;
    }

    // Add element to the rear of the queue
    void enqueue(int value) {
        element* newElement = new element(value);
        if (rear != nullptr) {
            rear->next = newElement;
        }
        rear = newElement;
        if (front == nullptr) {
            front = newElement;
        }
        size++;
    }

    // Remove element from the front of the queue
    void dequeue() {
        if (front != nullptr) {
            element* temp = front;
            front = front->next;
            delete temp;
            size--;
            if (front == nullptr) {
                rear = nullptr;
            }
        }
    }

    // Print the elements in the queue
    void print() {
        element* current = front;
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
};

#endif