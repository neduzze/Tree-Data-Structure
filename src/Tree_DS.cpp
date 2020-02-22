//
// Created by neduzze on 2/23/20.
//

#include <iostream>
#include "Tree_DS.h"

using namespace std;

Tree_DS::Tree_DS() {
    rootPtr = nullptr;
}

Tree_DS::BstNode *Tree_DS::getNewNode(int data) {
    auto *newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void Tree_DS::insertNode(Tree_DS::BstNode **rootPtr, int data) {
    if (*rootPtr == nullptr) {
        *rootPtr = getNewNode(data);
    } else if (data <= (**rootPtr).data) {
        insertNode(&(*rootPtr)->left, data);
    } else {
        insertNode(&(*rootPtr)->right, data);
    }
}

bool Tree_DS::searchNode(Tree_DS::BstNode *rootPtr, int data) {
    if (rootPtr == nullptr)
        return false;
    else if (rootPtr->data == data)
        return true;
    else if (data <= rootPtr->data)
        return searchNode(rootPtr->left, data);
    else
        return searchNode(rootPtr->right, data);
}

void Tree_DS::searchOutput(int data) {
    if (searchNode(rootPtr, data))
        cout << "found\n";
    else
        cout << "not found!\n";
}

void Tree_DS::demo() {
    insertNode(&rootPtr, 15);
    insertNode(&rootPtr, 10);
    insertNode(&rootPtr, 20);
    insertNode(&rootPtr, 25);
    insertNode(&rootPtr, 28);
    insertNode(&rootPtr, 12);
    searchOutput(15);
    searchOutput(16);
    searchOutput(20);
}



