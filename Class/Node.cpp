#include "Node.h"

/*
    * Método constructor de la clase Node
    * Descripción: Se encarga de crear un objeto de tipo Node
    * Parametros:
    * - No posee
    * Retorno:
    * - Node: objeto de tipo Node
 */

Node::Node()
{
    type = INVALID;
    parent = nullptr;
}

/*
    * Método destructor de la clase Node
    * Descripción: Se encarga de eliminar un objeto de tipo Node
    * Parametros:
    * - No posee
    * Retorno:
    * - No posee
 */

Node::~Node()
{
}

/*
    * Método getType de la clase Node
    * Descripción: Se encarga de obtener el tipo del nodo
    * Parametros:
    * - No posee
    * Retorno:
    * - int: tipo del nodo
 */

int Node::getType()
{
    return type;
}

/*
    * Método isOperation de la clase Node
    * Descripción: Se encarga de verificar si el nodo es de tipo operacion
    * Parametros:
    * - No posee
    * Retorno:
    * - bool: true si es de tipo operacion, false si no
 */

bool Node::isOperation()
{
    return type == OPERATION;
}

/*
    * Método isVariable de la clase Node
    * Descripción: Se encarga de verificar si el nodo es de tipo variable
    * Parametros:
    * - No posee
    * Retorno:
    * - bool: true si es de tipo variable, false si no
 */

bool Node::isVariable()
{
    return type == VARIABLE;
}

/*
    * Método isNumber de la clase Node
    * Descripción: Se encarga de verificar si el nodo es de tipo numero
    * Parametros:
    * - No posee
    * Retorno:
    * - bool: true si es de tipo numero, false si no
 */

bool Node::isNumber()
{
    return type == NUMBER;
}

/*
    * Método isHead de la clase Node
    * Descripción: Se encarga de verificar si el nodo es cabeza del arbol
    * Parametros:
    * - No posee
    * Retorno:
    * - bool: true si es de tipo head, false si no
 */

bool Node::isHead()
{
    return parent == nullptr;
}

/*
    * Método print de la clase Node
    * Descripción: Se encarga de imprimir el nodo
    * Parametros:
    * - No posee
    * Retorno:
    * - No posee
 */

void Node::print() const
{
    std::cout << "Invalid Node" << std::endl;
}
