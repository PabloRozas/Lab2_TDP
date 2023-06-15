#include "../Class/Node_Operation.h"
#include "../Class/Node_Number.h"
#include "../Class/Node_Variable.h"

int main() {

    std::cout << "Test Node_Operation con Number" << std::endl;
    Node *node = new Node_Operation('+', new Node_Number(1), new Node_Number(2));
    node->print();

    std::cout << "Test Node_Operation con Node_Variable" << std::endl;
    Node *node2 = new Node_Operation('+', new Node_Variable('x'), new Node_Variable('y'));
    node2->print();
    // delete node;
    return 0;
}