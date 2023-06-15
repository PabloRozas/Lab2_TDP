#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <cstring>
#include <list>
#include <vector>

#include "Node.h"
#include "Node_Number.h"
#include "Node_Operation.h"
#include "Node_Variable.h"

using namespace std;

/*
    * Clase File
    * Esta clase se encarga de leer el archivo de entrada y crear el arbol de sintaxis abstracta
 */

class File
{
public:
    FILE *file;
    stack<Node *> operaciones;
    list<char> variables;
    Node *head;

    // Constructor
    File(string filename);

    // Destructor
    ~File();
};

#endif