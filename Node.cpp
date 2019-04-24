//
// Created by gringo on 4/23/19.
//

#include "Node.h"
#include <iostream>
#include "Proceso.h"


Node :: Node(Node* _nxtPtr, Proceso _data) {
    nxtPtr = _nxtPtr;
    data = _data;
}
void Node::set_data(Proceso _data) {
    data = _data;
}
void Node::set_nxtNd(Node* _nxtNd) {
    nxtPtr = _nxtNd;
    //std::cout<<&_nxtNd<<std::endl;
}
Proceso Node::get_data() {
    //std::cout<<data<<std::endl;
    return data;
}
Node* Node::get_nxtPtr() {
    //std::cout<<nxtPtr<<std::endl;
    return nxtPtr;
}