#ifndef NODE_H
#define NODE_H

struct node {
    int data;
    node* left;
    node* right;

    node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
#endif