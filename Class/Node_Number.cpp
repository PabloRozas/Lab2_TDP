#include "Node_Number.h"

Node_Number::Node_Number(double value){
    this->value = value;
    type = NUMBER;
    this->parent = nullptr;
}

Node_Number::~Node_Number() {
    // delete this;
}

bool Node_Number::addParent(Node *parent) {
    if (this->parent == nullptr) {
        this->parent = parent;
        return true;
    }
    return false;
}

double Node_Number::evaluate(std::map<char, double>& variables) const {
    return value;
}

void Node_Number::print() const{
    std::cout << "╔════════════════ Node Number ════════════════" << std::endl;
    std::cout << "║ »»This: " << this << std::endl;
    std::cout << "║ Value: " << value << std::endl;
    std::cout << "║ Type: " << type << std::endl;
    std::cout << "║ Parent: " << parent << std::endl;
    std::cout << "╚════════════════ End  Number ════════════════" << std::endl;
}