#include "Node_Variable.h"

Node_Variable::Node_Variable(char name) {
    this->name = name;
    type = VARIABLE;
    this->parent = parent;

}



Node_Variable::~Node_Variable() {
    //std::cout << "Node_Variable destructor" << std::endl;
}


bool Node_Variable::addParent(Node *parent) {
    if (this->parent == nullptr) {
        this->parent = parent;
        return true;
    }
    return false;
}

double Node_Variable::evaluate(std::map<char, double>& variables) const {
    if (variables.find(name) != variables.end()) 
    {
            return variables[name];
    } 
    else 
    {
        // Manejo de variables no asignadas
        std::cout << "Variable " << name << " no asignada" << std::endl;
        return 0;
    }
}



void Node_Variable::print() const {
    std::cout << "╔════════════════ Node Variable ════════════════" << std::endl;
    std::cout << "║ »»This: " << this << std::endl;
    std::cout << "║ Name: " << name << std::endl;
    std::cout << "║ Type: " << type << std::endl;
    std::cout << "║ Parent: " << parent << std::endl;
    std::cout << "╚════════════════ End  Variable ════════════════" << std::endl;
}