//
// Created by gringo on 4/23/19.
//

#include "List.h"
#include <iostream>

Node* List::getPointerHead() {
    return pointerHead;
}

void List::setPointerHead(Node* head) {
    pointerHead = head;
}
void List::insertFirst(Proceso proceso) {
    Node* pointeraux = new Node(pointerHead, proceso);
    setPointerHead(pointeraux);
}

int List::getSize() {
    Node *current = getPointerHead();
    int c=0;
    while(current != nullptr){
        current = current->get_nxtPtr();
        c++;
    }
    return c;
}

Node *List::getLast() {
    Node *current = getPointerHead();
    while(current->get_nxtPtr() != nullptr){
        current = current->get_nxtPtr();
    }
    return current;
}

void List::insertLast(Proceso proceso) {
    Node* aux = new Node(nullptr, proceso);
    Node *current = getPointerHead();
    while(current->get_nxtPtr() != nullptr){
        current = current->get_nxtPtr();
    }
    current->set_nxtNd(aux);
}
