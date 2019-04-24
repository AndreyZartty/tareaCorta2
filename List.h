//
// Created by gringo on 4/23/19.
//

#ifndef TAREACORTA2_LIST_H
#define TAREACORTA2_LIST_H

#include <iostream>
#include "Node.h"


class List{

public:

    Node* getPointerHead();
    void setPointerHead(Node* head);
    void insertFirst(Proceso proceso);
    int getSize();
    Node* getLast();
    void insertLast(Proceso proceso);
private:

    Node* pointerHead;

};


#endif //TAREACORTA2_LIST_H
