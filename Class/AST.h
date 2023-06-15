#include <iostream>
#include <string>
#include <stack>
#include <list>
#include <map>
#include "File.h"

using namespace std;

class AST
{
    public:
        Node *head;
        stack<Node*> operaciones;
        list<char> variables;

        AST(string filename);
        ~AST();
 
        void value();
        bool simplify();
        bool integrate();
        bool derive();

        void print();
};