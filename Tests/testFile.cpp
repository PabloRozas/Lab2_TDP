#include "../Class/File.h"

int main() {
    // Se le entrga como entrada el txt que se encuentra en la carpeta Resources con nombre ejemplo1.txt
    File *file = new File("Resources/ejemplo1.txt");    
    file->head->print();
    return 0;
}