#include "../Class/AST.h"

int main() {
    // Se le entrga como entrada el txt que se encuentra en la carpeta Resources con nombre ejemplo1.txt
    AST *ast = new AST("Resources/ejemplo1.txt");    
    ast->head->print();
    ast->value();
    return 0;
}