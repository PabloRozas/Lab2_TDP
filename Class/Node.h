#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>

class Node {

#define INVALID 0
#define OPERATION 1
#define VARIABLE 2
#define NUMBER 3

public:
    int type;
    Node *parent;
    Node *left;
    Node *right;

    Node();
    virtual ~Node();
    
    int getType();
    bool isOperation();
    bool isVariable();
    bool isNumber();
    bool isHead();
    bool isLeaf();
    virtual void print() = 0;
};

#endif