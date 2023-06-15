#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <cstring>
#include <list>
#include <vector>

#include "Node.h"
#include "Node_Number.h"
#include "Node_Operation.h"
#include "Node_Variable.h"

using namespace std;

class File {
    public:
        FILE *file;
        stack<Node*> operaciones;
        list<char> variables;
        Node *head;
        File(string filename);
        ~File();
};