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

bool Node::isLeaf() {
    return  isVariable() || isNumber();
}

void Node::print() {
    std::cout << "Invalid Node" << std::endl;
}
