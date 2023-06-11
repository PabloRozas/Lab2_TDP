#include "../Class/Node_Variable.h"

int main() {
    Node *node = new Node_Variable('x', nullptr);
    node->print();
    // delete node;
    return 0;
}