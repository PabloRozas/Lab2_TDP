#include "Node_Operation.h"

Node_Operation::Node_Operation(char operation, Node *left, Node *right) {
    this->operation = operation;
    this->left = left;
    this->right = right;
    this->left->addParent(this);
    this->right->addParent(this);
    type = OPERATION;
}

Node_Operation::Node_Operation(char operation) {
    this->operation = operation;
    type = OPERATION;
    left = nullptr;
    right = nullptr;
}

Node_Operation::~Node_Operation() {
    //std::cout << "Node_Operation destructor" << std::endl;
}

bool Node_Operation::addParent(Node *parent) {
    if (this->parent == nullptr) {
        this->parent = parent;
        return true;
    }
    return false;
}

bool Node_Operation::addLeft(Node *left) {
    if (this->left == nullptr) {
        left->addParent(this);
        this->left = left;
        return true;
    }
    return false;
}

bool Node_Operation::addRight(Node *right) {
    if (this->right == nullptr) {
        right->addParent(this);
        this->right = right;
        return true;
    }
    return false;
}

double Node_Operation::evaluate() const {
    if (left != nullptr && right != nullptr && left->type == NUMBER && right->type == NUMBER)
    {
        switch (operation)
        {
        case '+':
            return left->evaluate() + right->evaluate();
        case '-':
            return left->evaluate() - right->evaluate();
        case '*':
            return left->evaluate() * right->evaluate();
        case '/':
            return left->evaluate() / right->evaluate();
        case '^':
            return pow(left->evaluate(), right->evaluate());
        default:
            return false;
        }
    }
    else
    {
        return false;
    }
}


void Node_Operation::print() const {
    std::cout << "╔════════════════ Node Operation ════════════════" << std::endl;
    std::cout << "║ »»This: " << this << std::endl;
    std::cout << "║ Operation: " << operation << std::endl;
    std::cout << "║ Type: " << type << std::endl;
    std::cout << "║ Parent: " << parent << std::endl;
    std::cout << "║ Left: " << left << std::endl;
    std::cout << "║ Right: " << right << std::endl;
    std::cout << "╚════════════════ End  Operation ════════════════" << std::endl;
    if (left != nullptr && right != nullptr)
    {
        left->print();
        right->print();
    }
}