#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>
#include <map>

using namespace std;


/* 
    * Clase Node
    * Esta clase se encarga de representar un nodo del arbol de sintaxis abstracta
    * Contiene un atributo type que representa el tipo de nodo
    * Contiene un atributo parent que representa el padre del nodo
*/


class Node {

#define INVALID 0
#define OPERATION 1
#define VARIABLE 2
#define NUMBER 3

public:
    int type;
    Node *parent;

    // Constructor
    Node();
    // Destructor
    virtual ~Node();
    
    // Getters
    int getType();

    // Setters
    virtual bool addParent(Node *parent) = 0;

    // Other methods
    bool isOperation();
    bool isVariable();
    bool isNumber();
    bool isHead();
    virtual void print() const = 0;
    virtual double evaluate(std::map<char, double>& variables) const = 0;
    
};

#endif