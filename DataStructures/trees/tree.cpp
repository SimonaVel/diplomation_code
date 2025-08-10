#include "node.cpp"
#ifndef TREE_H
#define TREE_H

struct tree {
    node* root;

    tree() {
        root = nullptr;
    }
};

#endif