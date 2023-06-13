#include "File.h"

File::File(string filename) {
    ifstream file(filename);
    string line;
    vector<Node *> vectorExpression;


    if (file.is_open())
    {
        // Se lee la linea del archivo
        getline(file, line);
        // Se eliminan los espaciosy se reemplazan por ""
        for (int i = 0; i < (int) line.size(); i++) {
            if (line[i] == ' ') {
                line.replace(i, 1, "");
            }
        }

        // cout << "String: " << line << endl;

        // Se itera en el string
        for (int i = 0; i < ((int) line.size()); i++) {
            // Se verifica si es un numero
            if (isdigit(line[i])) {
                // Se crea un nodo numero
                Node_Number *node = new Node_Number(line[i] - '0');
                // Se agrega el nodo al vector
                vectorExpression.push_back(node);

            }
            // Se verifica si es una variable
            else if (isalpha(line[i])) {
                // Se crea un nodo variable
                Node_Variable *node = new Node_Variable(line[i]);
                // Se agrega el nodo al vector
                vectorExpression.push_back(node);
            }
            // Se verifica si es un operador
            else if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/') {
                // Se crea un nodo operacion
                Node_Operation *node = new Node_Operation(line[i]);
                // Se agrega el nodo al vector
                vectorExpression.push_back(node);
                operaciones.push(node);
            }
               
        }
        // Se imprime el vector
        // for (auto node : vectorExpression) {
        //     node->print();
        // }

        // cout << " Iteracion del Vector " << endl;
        // Se itera en el vector
        for (int i = (int) vectorExpression.size() - 1; i >= 0 ; i--) {

            Node_Operation* operationNode = dynamic_cast<Node_Operation*>(vectorExpression[i]);
            
            if (operationNode != nullptr)
            {
                // vectorExpression.shrink_to_fit();
                // cout << "i + 1" << endl;
                // vectorExpression[i + 1]->print();
                // cout << "i + 2" << endl;
                // vectorExpression[i + 2]->print();

                // Se le agrega como operaciones los dos ultimos nodos del vector
                operationNode->addLeft(vectorExpression[i+1]);
                operationNode->addRight(vectorExpression[i+2]);
                // Se mueven al final los nodos i + 1 y i + 2
                vectorExpression.push_back(vectorExpression[i+1]);
                vectorExpression.push_back(vectorExpression[i+2]);
                // Se elimina los nodos i + 1 y i + 2
                vectorExpression.erase(vectorExpression.begin() + i + 1);
                vectorExpression.erase(vectorExpression.begin() + i + 1);


                
                // operationNode->print();
                // i++;
            }

        }

        // cout << " arbol " << endl;
        // Se imprime el vector
        // vectorExpression[0]->print();
        
        head = vectorExpression[0];


        // Se imprime el stack
        // while (!operaciones.empty()) {
        //     operaciones.top()->print();
        //     operaciones.pop();
        // }

        file.close();


    }
    else cout << "Unable to open file";
}
/* 
    // Se itera en el string
    for (int i = 0; i < str.length(); i++) {
        
        
        // Se verifica si es un numero
        if (isdigit(str[i])) {
            // Se crea un nodo numero
            Node_Number *node = new Node_Number(str[i] - '0');
            if (i ==0){
                head = node;
            }
        }
        // Se verifica si es un operador
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
            // Se crea un nodo operacion
            Node_Operation *node = new Node_Operation(str[i]);
            // Se agrega el nodo a la pila
            operaciones.push(*node);
            if (i == 0){
                head = node;
            }
        }
        // Se verifica si es una variable
        else if (isalpha(str[i])) {
            // Se crea un nodo variable
            Node_Variable *node = new Node_Variable(str[i]);
            if (i == 0){
                head = node;
            }

        }
    }
 */
    

    
