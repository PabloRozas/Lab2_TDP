#ifndef NODE_VARIABLE_H
#define NODE_VARIABLE_H

#include "Node.h"


class Node_Variable : public Node {
    public:

        char name;

        Node_Variable(char name);
        ~Node_Variable();
        bool addParent(Node *parent);
        double evaluate(std::map<char, double>& variables) const;
        void print() const;
};

#endif