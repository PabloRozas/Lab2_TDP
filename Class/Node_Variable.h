#ifndef NODE_VARIABLE_H
#define NODE_VARIABLE_H

#include "Node.h"



/* 
    * Clase Node_Variable
    * Esta clase se encarga de representar un nodo de tipo variable
    * Hereda de la clase Node
    * Contiene un atributo name que representa el nombre de la variable
*/


class Node_Variable : public Node {
    public:

        char name;

        // Constructor
        Node_Variable(char name);

        // Destructor
        ~Node_Variable();

        // Setters
        bool addParent(Node *parent);

        // Other methods
        double evaluate(std::map<char, double>& variables) const;
        void print() const;
};

#endif