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

    // ========== TREE ========== //
    cout << "Tree:" << endl;
    tree bst;
    bst.root = new node(2);
    bst.root->left = new node(1);
    bst.root->right = new node(3);
    cout << "Root: " << bst.root->data << endl;
    cout << "Left Child: " << bst.root->left->data << endl;
    cout << "Right Child: " << bst.root->right->data << endl;

    // adding a new child 
    {
        node* newChild = new node(0);

        // finding leftmost position
        node* current = bst.root;
        while (current->left != nullptr) {
            current = current->left;
        }

        current->left = newChild;
        cout << "Left Child of Left Child: " << current->left->data << endl;

        // adding a parent to right child
        node* newParent = new node(5);
        newParent -> right = bst.root -> right;
        bst.root -> right = newParent;

        cout << "Parent of rightmost leaf: " << bst.root -> right -> data << endl;
        cout << "Rightmost leaf: " << bst.root -> right -> right -> data << endl;
    }

    // Traversing trees
    {
        // infix
        cout << "\nInfix loop: ";
        bst.infixPrint(bst.root);

        // postfix
        cout << "\nPostifx loop: ";
        bst.postfixPrint(bst.root);

        // prefix
        cout << "\nPrefix loop: ";
        bst.prefixPrint(bst.root);
    }
    
    // deleting a leaf
    {
        // 1) finding leftmost parent
        node* parent = bst.root;
        while (parent->left->left != nullptr) {
            parent = parent->left;
        }
        cout << endl << "Parent element: " << parent -> data;

        // 2) turning its left child into a NULL structure
        node* child = parent -> left;
        child -> left = NULL;
        child -> right = NULL;
        delete child;

        cout << endl << "Parent element's left child: " << parent -> left -> data;
        cout << endl << "Child element: " << child -> data << endl;
    }

    // ========== BInARY TREE ========== //
    cout << "Binary Search tree:" << endl;
    tree binaryTree;
    binaryTree.root = new node(3);
    binaryTree.addElementToBinaryTree(new node(5));
    binaryTree.addElementToBinaryTree(new node(4));
    binaryTree.addElementToBinaryTree(new node(2));

    binaryTree.infixPrint(binaryTree.root);
    
    return 0;
}
