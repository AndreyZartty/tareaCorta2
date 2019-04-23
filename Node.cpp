//
// Created by gringo on 4/23/19.
//

#include "Node.h"
#include <iostream>


Node :: Node(Node* _nxtPtr, int _data) {
    nxtPtr = _nxtPtr;
    data = _data;
}
void Node::set_data(int _data) {
    data = _data;
}
void Node::set_nxtNd(Node* _nxtNd) {
    nxtPtr = _nxtNd;
    std::cout<<&_nxtNd<<std::endl;
}
int Node::get_data() {
    std::cout<<data<<std::endl;
    return data;
}
Node* Node::get_nxtPtr() {
    std::cout<<nxtPtr<<std::endl;
    return nxtPtr;
}