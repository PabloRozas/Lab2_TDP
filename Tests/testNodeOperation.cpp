#include "../Class/Node_Operation.h"
#include "../Class/Node_Number.h"

int main() {
    Node *node = new Node_Operation('+', new Node_Number(1), new Node_Number(2));
    node->print();
    // delete node;
    return 0;
}