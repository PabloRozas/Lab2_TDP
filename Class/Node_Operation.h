#ifndef NODE_OPERATION_H
#define NODE_OPERATION_H

#include "Node.h"
#include "Node_Number.h"
#include "Node_Variable.h"
#include <math.h>

class Node_Operation : public Node {
public:
    Node *left;
    Node *right;
    char operation;


    Node_Operation(char operation, Node *left, Node *right);
    Node_Operation(char operation); // caso de no conocer hijos
    ~Node_Operation();
    bool addParent(Node *parent);
    bool addLeft(Node *left);
    bool addRight(Node *right);
    double evaluate() const;
    double evaluate(std::map<char, double>& variables) const;
    void print() const;
};

#endif