#include "AST.h"

AST::AST(string filename) {
    File *file = new File(filename);
    head = file->head;
    operaciones = file->operaciones;
    variables = file->variables;
    variables.sort();
    variables.unique();
}

AST::~AST() {
    delete head;
}


void AST::value() {
    // Se piden el valor de las variables
    map<char, double> variables;
    for (char variable : this->variables) {
        cout << "Ingrese el valor de " << variable << ": ";
        double value;
        cin >> value;
        variables[variable] = value;
    }
    // Se imprime el resultado
    cout << "El resultado es: " << head->evaluate(variables) << endl;
    
}