#include "element.cpp"
#include "arrayQueue.cpp"
#include <iostream>

using namespace std;

struct arrayPriorityQueue : arrayQueue {
    arrayPriorityQueue(int size) : arrayQueue(size) {}

    // Add element to the queue with priority (ascending)
    void enqueue(int value) {
        if (rear < capacity) {
            int i;
            for (i = rear - 1; (i >= front && data[i] > value); i--) {
                data[i + 1] = data[i];
            }
            data[i + 1] = value;
            rear++;
        }
    }
};