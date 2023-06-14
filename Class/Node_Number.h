#include "Node.h"

class Node_Number : public Node {
    public:
        double value;
    
        Node_Number(double value);
        ~Node_Number();
        bool addParent(Node *parent);
        double evaluate() const;
        void print() const;
};
