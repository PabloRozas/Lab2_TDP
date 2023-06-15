#include "Node.h"

Node::Node() {
    type = INVALID;
    parent = nullptr;
    
}

Node::~Node() {
}

int Node::getType() {
    return type;
}

bool Node::isOperation() {
    return type == OPERATION;
}

bool Node::isVariable() {
    return type == VARIABLE;
}

bool Node::isNumber() {
    return type == NUMBER;
}

bool Node::isHead() {
    return parent == nullptr;
}


void Node::print() const {
    std::cout << "Invalid Node" << std::endl;
}
