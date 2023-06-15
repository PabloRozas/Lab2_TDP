#include "Node_Operation.h"

/*
    * Método constructor de la clase Node_Operation
    * Descripción: Se encarga de crear un objeto de tipo Node_Operation
    * Parametros:
    * - operation: operacion del nodo
    * - left: nodo izquierdo
    * - right: nodo derecho
    * Retorno:
    * - Node_Operation: objeto de tipo Node_Operation
 */

Node_Operation::Node_Operation(char operation, Node *left, Node *right)
{
    this->operation = operation;
    this->left = left;
    this->right = right;
    this->left->addParent(this);
    this->right->addParent(this);
    type = OPERATION;
}

/*
    * Método constructor de la clase Node_Operation
    * Descripción: Se encarga de crear un objeto de tipo Node_Operation
    * Parametros:
    * - operation: operacion del nodo
    * Retorno:
    * - Node_Operation: objeto de tipo Node_Operation
 */

Node_Operation::Node_Operation(char operation)
{
    this->operation = operation;
    type = OPERATION;
    left = nullptr;
    right = nullptr;
}

/*
    * Método destructor de la clase Node_Operation
    * Descripción: Se encarga de eliminar un objeto de tipo Node_Operation
    * Parametros:
    * - No posee
    * Retorno:
    * - No posee
 */

Node_Operation::~Node_Operation()
{
    // std::cout << "Node_Operation destructor" << std::endl;
}

/*
    * Método addParent de la clase Node_Operation
    * Descripción: Se encarga de agregar un padre al nodo
    * Parametros:
    * - parent: nodo padre
    * Retorno:
    * - bool: true si se agrego el padre, false si no
 */

bool Node_Operation::addParent(Node *parent)
{
    if (this->parent == nullptr)
    {
        this->parent = parent;
        return true;
    }
    return false;
}

/*
    * Método addLeft de la clase Node_Operation
    * Descripción: Se encarga de agregar un nodo izquierdo al nodo
    * Parametros:
    * - left: nodo izquierdo
    * Retorno:
    * - bool: true si se agrego el nodo izquierdo, false si no
 */

bool Node_Operation::addLeft(Node *left)
{
    if (this->left == nullptr)
    {
        left->addParent(this);
        this->left = left;
        return true;
    }
    return false;
}

/*
    * Método addRight de la clase Node_Operation
    * Descripción: Se encarga de agregar un nodo derecho al nodo
    * Parametros:
    * - right: nodo derecho
    * Retorno:
    * - bool: true si se agrego el nodo derecho, false si no
 */

bool Node_Operation::addRight(Node *right)
{
    if (this->right == nullptr)
    {
        right->addParent(this);
        this->right = right;
        return true;
    }
    return false;
}

/*
    * Método evaluate de la clase Node_Operation
    * Descripción: Se encarga de evaluar el nodo
    * Parametros:
    * - variables: mapa de variables
    * Retorno:
    * - double: resultado de la evaluacion
 */

double Node_Operation::evaluate(std::map<char, double> &variables) const
{
    double leftValue = left->evaluate(variables);
    double rightValue = right->evaluate(variables);

    switch (operation)
    {
    case '+':
        return leftValue + rightValue;
    case '-':
        return leftValue - rightValue;
    case '*':
        return leftValue * rightValue;
    case '^':
        return pow(leftValue, rightValue);
    default:
        return 0;
    }
}

std::unique_ptr<Node> Node_Operation::clone() const 
{
    return std::make_unique<Node_Operation>(operation, left->clone(), right->clone());
}

std::unique_ptr<Node> Node_Operation::derive(const std::string& variable)  const {
        // Aplicamos la regla de la cadena para derivar la operación
        std::unique_ptr<Node> leftDerivative = left->derive(variable);
        std::unique_ptr<Node> rightDerivative = right->derive(variable);

        switch (operation) {
            case '+':
                return std::make_unique<Node_Operation>('+', std::move(leftDerivative), std::move(rightDerivative));
            case '*':
                return std::make_unique<Node_Operation>(
                    '+',
                    std::make_unique<Node_Operation>('*', std::move(left->derive(variable)), std::move(right->clone())),
                    std::make_unique<Node_Operation>('*', std::move(left->clone()), std::move(right->derive(variable)))
                );
            default:
                std::cerr << "Operación no soportada: " << operation << std::endl;
                return std::make_unique<Node_Number>(0.0);
        }
}





/*
    * Método print de la clase Node_Operation
    * Descripción: Se encarga de imprimir el nodo
    * Parametros:
    * - No posee
    * Retorno:
    * - No posee
 */

void Node_Operation::print() const
{
    std::cout << "╔════════════════ Node Operation ════════════════" << std::endl;
    std::cout << "║ »»This: " << this << std::endl;
    std::cout << "║ Operation: " << operation << std::endl;
    std::cout << "║ Type: " << type << std::endl;
    std::cout << "║ Parent: " << parent << std::endl;
    std::cout << "║ Left: " << left << std::endl;
    std::cout << "║ Right: " << right << std::endl;
    std::cout << "╚════════════════ End  Operation ════════════════" << std::endl;
    if (left != nullptr && right != nullptr)
    {
        left->print();
        right->print();
    }
}