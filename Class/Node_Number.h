#include "Node.h"

class Node_Number : public Node {
    public:
        int value;
    
        Node_Number(int value);
        ~Node_Number();
        bool addParent(Node *parent);
        void print();
};
