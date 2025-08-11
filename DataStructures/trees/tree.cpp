#include "node.cpp"
#ifndef TREE_H
#define TREE_H

struct tree {
    node* root;

    tree() {
        root = nullptr;
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

};

#endif