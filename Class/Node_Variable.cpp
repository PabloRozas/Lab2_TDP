#include "Node_Variable.h"

/*
    * Método constructor de la clase Node_Variable
    * Descripción: Se encarga de crear un objeto de tipo Node_Variable
    * Parametros:
    * - name: nombre de la variable
    * Retorno:
    * - Node_Variable: objeto de tipo Node_Variable
 */

Node_Variable::Node_Variable(char name)
{
    this->name = name;
    type = VARIABLE;
    this->parent = parent;
}

/*
    * Método destructor de la clase Node_Variable
    * Descripción: Se encarga de eliminar un objeto de tipo Node_Variable
    * Parametros:
    * - No posee
    * Retorno:
    * - No posee
 */

Node_Variable::~Node_Variable()
{
    // std::cout << "Node_Variable destructor" << std::endl;
}

/*
    * Método addParent de la clase Node_Variable
    * Descripción: Se encarga de agregar un padre al nodo
    * Parametros:
    * - parent: nodo padre
    * Retorno:
    * - bool: true si se agrego el padre, false si no
 */

bool Node_Variable::addParent(Node *parent)
{
    if (this->parent == nullptr)
    {
        this->parent = parent;
        return true;
    }
    return false;
}

/*
    * Método evaluate de la clase Node_Variable
    * Descripción: Se encarga de evaluar el nodo
    * Parametros:
    * - variables: mapa de variables
    * Retorno:
    * - double: resultado de la evaluacion
 */

double Node_Variable::evaluate(std::map<char, double> &variables) const
{
    if (variables.find(name) != variables.end())
    {
        return variables[name];
    }
    else
    {
        // Manejo de variables no asignadas
        std::cout << "Variable " << name << " no asignada" << std::endl;
        return 0;
    }
}

/*
    * Método print de la clase Node_Variable
    * Descripción: Se encarga de imprimir el nodo
    * Parametros:
    * - No posee
    * Retorno:
    * - No posee
 */

void Node_Variable::print() const
{
    std::cout << "╔════════════════ Node Variable ════════════════" << std::endl;
    std::cout << "║ »»This: " << this << std::endl;
    std::cout << "║ Name: " << name << std::endl;
    std::cout << "║ Type: " << type << std::endl;
    std::cout << "║ Parent: " << parent << std::endl;
    std::cout << "╚════════════════ End  Variable ════════════════" << std::endl;
}