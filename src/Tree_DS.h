//
// Created by neduzze on 2/23/20.
//

#pragma once

#include <iostream>

class Tree_DS {
private: //variables

    struct BstNode {
        int data;
        BstNode *left;
        BstNode *right;
    };

    //this is not the root, just a pointer to it
    BstNode *rootPtr; //address of root node

private: //methods
    BstNode *getNewNode(int data);

public: //methods
    Tree_DS();

    void insertNode(BstNode **rootPtr, int data);

    bool searchNode(BstNode *rootPtr, int data);

    void searchOutput(int data);

    void demo();
    //TODO: implement a print method for Binary Tree
    //TODO: implement a deletion method for Binary Tree

};


