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
void List::insertFirst(Node newNode) {
    Node* pointeraux = new Node(getPointerHead(), 0);
    std::cout<<pointeraux<<std::endl;
    newNode.set_nxtNd(pointeraux->get_nxtPtr());
    setPointerHead(&newNode);
    std::cout<<getPointerHead()<<std::endl;
    delete(&pointeraux);
}
