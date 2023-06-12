#include "Node_Operation.h"

Node_Operation::Node_Operation(char operation, Node *left, Node *right) {
    this->operation = operation;
    this->left = left;
    this->right = right;
    type = OPERATION;
}

Node_Operation::Node_Operation(char operation) {
    this->operation = operation;
    type = OPERATION;
}

Node_Operation::~Node_Operation() {
    //std::cout << "Node_Operation destructor" << std::endl;
}

void Node_Operation::print() {
    std::cout << "╔════════════════ Node Operation ════════════════" << std::endl;
    std::cout << "║ Operation: " << operation << std::endl;
    std::cout << "║ Type: " << type << std::endl;
    std::cout << "║ Parent: " << parent << std::endl;
    std::cout << "║ Left: " << left << std::endl;
    std::cout << "║ Right: " << right << std::endl;
    std::cout << "╚════════════════ End Operation ════════════════" << std::endl;
}