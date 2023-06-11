#include "Node_Variable.h"

Node_Variable::Node_Variable(char name, Node *parent) {
    this->name = name;
    type = VARIABLE;
    this->parent = parent;
    left = nullptr;
    right = nullptr;
}

Node_Variable::Node_Variable(char name, Node *parent, Node *left, Node *right) {
    this->name = name;
    type = VARIABLE;
    this->parent = parent;
    this->left = left;
    this->right = right;
}

Node_Variable::~Node_Variable() {
    if (left !=nullptr) {
        delete left;
    }
    
    if (right != nullptr) { 
        delete right;
    }
}

void Node_Variable::print() {
    std::cout << "╔════════════════ Node Variable ════════════════" << std::endl;
    std::cout << "║ Name: " << name << std::endl;
    std::cout << "║ Type: " << type << std::endl;
    std::cout << "║ Parent: " << parent << std::endl;
    std::cout << "║ Left: " << left << std::endl;
    std::cout << "║ Right: " << right << std::endl;
    std::cout << "╚════════════════ End  Variable ════════════════" << std::endl;
}