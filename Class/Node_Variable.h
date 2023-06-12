#include "Node.h"

class Node_Variable : public Node {
    public:
        char name;

        Node_Variable(char name);
        ~Node_Variable();
        bool addParent(Node *parent);
        void print();
};