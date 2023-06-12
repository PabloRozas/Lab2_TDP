#include "Node_Variable.h"

Node_Variable::Node_Variable(char name, Node *parent) {
    this->name = name;
    type = VARIABLE;
    this->parent = parent;

}



Node_Variable::~Node_Variable() {
    //std::cout << "Node_Variable destructor" << std::endl;
}

void Node_Variable::print() {
    std::cout << "╔════════════════ Node Variable ════════════════" << std::endl;
    std::cout << "║ Name: " << name << std::endl;
    std::cout << "║ Type: " << type << std::endl;
    std::cout << "║ Parent: " << parent << std::endl;
    std::cout << "╚════════════════ End  Variable ════════════════" << std::endl;
}