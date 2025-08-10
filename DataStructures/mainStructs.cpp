#include <iostream>
#include "dataStructs.h"

using namespace std;

int main() {
    // ========== STACK ========== //
    cout << "Stack as list struct:" << endl;
    // stack with 5 elements
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.print();
    cout << "Removing element at top:" << endl;
    s.pop();
    s.print();

    // ========== ARRAY STACK ========== //
    cout << "Stack as array struct:" << endl;
    arrayStack arrStack(5);
    arrStack.push(1);
    arrStack.push(2);
    arrStack.push(3);
    arrStack.print();
    cout << "Removing element at top:" << endl;
    arrStack.pop();
    arrStack.print();

    // ========== QUEUE ========== //
    cout << "Queue as list struct:" << endl;
    queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.print();
    cout << "Removing element from front:" << endl;
    q.dequeue();
    q.print();

    // ========== ARRAY QUEUE ========== //
    cout << "Queue as array struct:" << endl;
    arrayQueue arrQueue(5);
    arrQueue.enqueue(1);
    arrQueue.enqueue(2);
    arrQueue.enqueue(3);
    arrQueue.print();
    cout << "Removing element from front:" << endl;
    arrQueue.dequeue();
    arrQueue.print();

    // ========== PRIORITY QUEUE ========== //
    cout << "Priority queue as list struct:" << endl;
    priorityQueue pQueue(5);
    pQueue.enqueue(2);
    pQueue.enqueue(1);
    pQueue.enqueue(3);
    pQueue.print();
    cout << "Removing element from front:" << endl;
    pQueue.dequeue();
    pQueue.print();

    // ========== ARRAY PRIORITY QUEUE ========== //
    cout << "Priority queue as array struct:" << endl;
    arrayPriorityQueue arrPQueue(5);
    arrPQueue.enqueue(2);
    arrPQueue.enqueue(1);
    arrPQueue.enqueue(3);
    arrPQueue.print();
    cout << "Removing element from front:" << endl;
    arrPQueue.dequeue();
    arrPQueue.print();

    return 0;
}
