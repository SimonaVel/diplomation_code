#include "element.cpp"
#include "queue.cpp"
#include <iostream>

using namespace std;
//* Priority queue structure - we add elements at the end and remove from the front, but we also consider their priority
struct priorityQueue : queue {

    priorityQueue(int size) : queue(size) {}

    // Add element to the queue with priority, where the priority == value
    void enqueue(int value) {
        element* newElement = new element(value);
        element* position = front;
    
        // Find the position to insert the new element based on priority
        while (position != nullptr && position->value < newElement->value) {
            position = position->next;
        }
        // Insert the new element into the queue
        if (position == front) {
            newElement->next = front;
            front = newElement;
        } else {
            element* temp = front;
            while (temp->next != position) {
                temp = temp->next;
            }
            temp->next = newElement;
            newElement->next = position;
        }
        size++;
    }
};