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

    Node();
    virtual ~Node();
    
    int getType();
    bool isOperation();
    bool isVariable();
    bool isNumber();
    bool isHead();
    bool isLeaf();
    virtual void print() const = 0;
    virtual double evaluate() const = 0;
    virtual bool addParent(Node *parent) = 0;
};

#endif