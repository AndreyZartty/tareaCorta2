#include <iostream>
#include "Node.h"
#include "List.h"


int main() {
    Node *xd3 = new Node(nullptr,2);
    Node *xd2 = new Node(xd3,2);
    Node *xd = new Node(xd2,2);
    List *lista = new List();
    lista->setPointerHead(xd);
    Node *current = lista->getPointerHead();
    int c=0;
    while(current != nullptr){
        current = current->get_nxtPtr();
        c++;
    }
    std::cout << c << std::endl;
    //return 0;
}