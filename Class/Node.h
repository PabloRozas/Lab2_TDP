#ifndef NODE_H
#define NODE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

class Node
{
#define NUMBER 0
#define OPERATOR 1
#define VARIABLE 2
#define INVALID 3

public:
    Node();
    ~Node();
    int type;
    int get_type();
    virtual void print() = 0;
};

#endif // NODE_H