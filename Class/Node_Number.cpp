#include "Node_Number.h"

/*
    * Metodo constructor de la clase Node_Number
    * Descripcion: Construye un nodo de tipo numero
    * Parametros:
    *  - value: valor del numero
    * Retorno:
    * - Node_Number: objeto de tipo Node_Number
 */

Node_Number::Node_Number(double value)
{
    this->value = value;
    type = NUMBER;
    this->parent = nullptr;
}

/*
    * Metodo destructor de la clase Node_Number
    * Descripcion: Destruye un nodo de tipo numero
    * Parametros:
    *  - No posee
    * Retorno:
    * - No posee
 */

Node_Number::~Node_Number()
{
    // delete this;
}

/*
    * Metodo addParent de la clase Node_Number
    * Descripcion: Agrega un padre al nodo
    * Parametros:
    *  - parent: puntero al nodo padre
    * Retorno:
    * - bool: true si se agrego el padre, false en caso contrario
 */

bool Node_Number::addParent(Node *parent)
{
    if (this->parent == nullptr)
    {
        this->parent = parent;
        return true;
    }
    return false;
}

/*
    * Metodo evaluate de la clase Node_Number
    * Descripcion: Evalua el nodo
    * Parametros:
    *  - variables: mapa de variables
    * Retorno:
    * - double: resultado de la evaluacion
 */

double Node_Number::evaluate(std::map<char, double> &variables) const
{
    return value;
}


/*
    * Metodo derive de la clase Node_Number
    * Descripcion: Deriva el nodo
    * Parametros:
    *  - variable: variable respecto a la cual se deriva
    * Retorno:
    * - unique_ptr<Node>: puntero al nodo derivado
 */

std::unique_ptr<Node> Node_Number::derive(const std::string& variable) const 
{
    // La derivada de un número constante es siempre 0
    return std::make_unique<Node_Number>(0.0);
}


unique_ptr<Node> Node_Number::clone() const
{
    return std::make_unique<Node_Number>(value);
}




/*
    * Metodo print de la clase Node_Number
    * Descripcion: Imprime el nodo
    * Parametros:
    *  - No posee
    * Retorno:
    * - No posee
 */

void Node_Number::print() const
{
    std::cout << "╔════════════════ Node Number ════════════════" << std::endl;
    std::cout << "║ »»This: " << this << std::endl;
    std::cout << "║ Value: " << value << std::endl;
    std::cout << "║ Type: " << type << std::endl;
    std::cout << "║ Parent: " << parent << std::endl;
    std::cout << "╚════════════════ End  Number ════════════════" << std::endl;
}