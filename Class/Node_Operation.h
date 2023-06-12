#include "Node.h"

class Node_Operation : public Node {
public:
    Node *left;
    Node *right;
    char operation;


    Node_Operation(char operation, Node *left, Node *right);
    Node_Operation(char operation); // caso de no conocer hijos
    ~Node_Operation();
    bool addParent(Node *parent);
    void print();
};