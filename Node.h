//
// Created by gringo on 4/23/19.
//

#ifndef TAREACORTA2_NODE_H
#define TAREACORTA2_NODE_H

#include "Proceso.h"


class Node {
public:
    Node(Node* _nxtPtr, Proceso _data);
    void set_data(Proceso _data);
    void set_nxtNd(Node* node);
    Proceso get_data(); //Luego cambiar a "int"
    Node* get_nxtPtr(); //Luego cambiar a "int"
private:
    Proceso data;
    Node* nxtPtr;
};


#endif //TAREACORTA2_NODE_H
