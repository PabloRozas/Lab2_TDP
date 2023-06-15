#ifndef AST_H
#define AST_H

#include <iostream>
#include <string>
#include <stack>
#include <list>
#include <map>

#include "File.h"

using namespace std;

/* 
    * Clase AST
    * Esta clase se encarga de crear el arbol de sintaxis abstracta
    * y de realizar las operaciones de evaluar, simplificar, derivar e integrar
*/

class AST
{
    public:
        Node *head;
        stack<Node*> operaciones;
        list<char> variables;

        // Constructor
        AST(string filename);

        // Destructor
        ~AST();
 
        // Other methods
        void value();
        bool simplify();
        bool integrate();
        bool derive();

        void print();
};

#endif