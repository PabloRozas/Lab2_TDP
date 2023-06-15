#ifndef NODE_NUMBER_H
#define NODE_NUMBER_H

#include "Node.h"

/*
    * Clase Node_Number
    * Esta clase se encarga de representar un nodo de tipo numero
    * Hereda de la clase Node
    * Contiene un atributo value que representa el valor del numero
 */

class Node_Number : public Node
{
public:
    double value;

    // Constructor
    Node_Number(double value);

    // Destructor
    ~Node_Number();

    // Setters
    bool addParent(Node *parent);

    // Other methods
    double evaluate(std::map<char, double> &variables) const;
    unique_ptr<Node> derive(const std::string& variable) const;
    unique_ptr<Node> clone() const;
    void print() const;
};

#endif