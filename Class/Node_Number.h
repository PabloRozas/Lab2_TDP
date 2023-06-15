#ifndef NODE_NUMBER_H
#define NODE_NUMBER_H
#include "Node.h"

class Node_Number : public Node {
    public:
        double value;

        Node_Number(double value);
        ~Node_Number();
        bool addParent(Node *parent);
        double evaluate(std::map<char, double>& variables) const;
        void print() const;
};

#endif