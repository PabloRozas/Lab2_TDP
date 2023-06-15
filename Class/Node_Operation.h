#ifndef NODE_OPERATION_H
#define NODE_OPERATION_H

#include <math.h>

#include "Node.h"
#include "Node_Number.h"
#include "Node_Variable.h"

/* 
    * Clase Node_Operation
    * Esta clase se encarga de representar un nodo de tipo operacion
    * Hereda de la clase Node
    * Contiene un atributo operation que representa el tipo de operacion
    * Contiene un atributo left que representa el hijo izquierdo
    * Contiene un atributo right que representa el hijo derecho
*/


class Node_Operation : public Node {
public:
    Node *left;
    Node *right;
    char operation;

    // Constructores
    Node_Operation(char operation, Node *left, Node *right);
    Node_Operation(char operation); // caso de no conocer hijos

    // Destructor
    ~Node_Operation();

    // Setters
    bool addParent(Node *parent);
    bool addLeft(Node *left);
    bool addRight(Node *right);

    // Other methods
    double evaluate() const;
    double evaluate(std::map<char, double>& variables) const;
    void print() const;
};

#endif