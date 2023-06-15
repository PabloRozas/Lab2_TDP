#include "AST.h"

/*
    * Método constructor de la clase AST
    * Descripción: Se encarga de crear un objeto de tipo AST
    * Parametros:
    *  - filename: nombre del archivo que contiene la expresion
    * Retorno:
    *  - AST: objeto de tipo AST
 */

AST::AST(string filename)
{
    File *file = new File(filename);
    head = file->head;
    operaciones = file->operaciones;
    variables = file->variables;
    variables.sort();
    variables.unique();
}

/*
    * Método destructor de la clase AST
    * Descripción: Se encarga de eliminar un objeto de tipo AST
    * Parametros:
    *  - No posee
    * Retorno:
    *  - No posee
 */

AST::~AST()
{
    delete head;
}

/*
    * Método value de la clase AST
    * Descripción: Se encarga de evaluar el arbol sintactico e imprimir el resultado
    * Parametros:
    *  - No posee
    * Retorno:
    *  - No posee
 */

void AST::value()
{
    // Se piden el valor de las variables
    map<char, double> variables;
    for (char variable : this->variables)
    {
        cout << "Ingrese el valor de " << variable << ": ";
        double value;
        cin >> value;
        variables[variable] = value;
    }
    // Se imprime el resultado
    cout << "El resultado es: " << head->evaluate(variables) << endl;
}