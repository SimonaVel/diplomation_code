#include "node.cpp"
#include <iostream>

#ifndef TREE_H
#define TREE_H

using namespace std;

struct tree {
    node* root;

    tree() {
        root = nullptr;
    }

    ~tree() {
        deleteTree(this -> root);
    }

    void deleteTree(node* root) { 
        if (root == NULL) return; 
        deleteTree(root->left); 
        deleteTree(root->right); 
        delete root; 
    }

    void prefixPrint(node* root) { 
        if (root == NULL) return;
        cout << root->data << " "; 
        prefixPrint(root->left); 
        prefixPrint(root->right); 
    } 

    void infixPrint(node* root) { 
        if (root == NULL) 
        return; 
        infixPrint(root->left); 
        cout << root->data << " "; 
        infixPrint(root->right); 
    } 

    void postfixPrint(node* root) { 
        if (root == NULL) 
        return;
        postfixPrint(root->left); 
        postfixPrint(root->right); 
        cout << root->data << " "; 
    } 

    node* addElementToBinaryTree(node* newNode) {
        // adding the root to the tree
        if (root == nullptr) {
            root = newNode;
            return root;
        }

        node* current = root;
        node* insert = root;

        while (current != nullptr && current->data != newNode -> data) {
            insert = current;
            if (newNode ->data < current->data) {
                current = current->left;
            } else {
                current = current->right;
            }
        }
        if (current == nullptr) {
            if (newNode -> data < insert -> data) {
                insert -> left = newNode;
            } else {
                insert -> right = newNode;
            }
            return newNode;
        }
        // element already in tree
        return current;
    }
};

#endif