#include "../Class/AST.h"

int main() {
    // Se le entrga como entrada el txt que se encuentra en la carpeta Resources con nombre ejemplo1.txt
    AST *ast = new AST("Resources/ejemplo1.txt");    

    //Menu de opciones
    int opcion = 0;
    while (opcion != 3) {
        cout << "Menu de opciones" << endl;
        cout << "1. Imprimir arbol" << endl;
        cout << "2. Evaluar arbol" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                ast->head->print();
                break;
            case 2:
                ast->value();
                break;
            case 3:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    }


    return 0;
}