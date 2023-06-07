#include "Node.h"

Node::Node()
{
    type = INVALID;
}

Node::~Node()
{
}

int Node::get_type()
{
    return type;
}

void Node::print()
{
    std::cout << "Invalid node" << std::endl;
}