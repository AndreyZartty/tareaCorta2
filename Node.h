//
// Created by gringo on 4/23/19.
//

#ifndef TAREACORTA2_NODE_H
#define TAREACORTA2_NODE_H

class Node {
public:
    Node(Node* _nxtPtr, int _data);
    void set_data(int _data);
    void set_nxtNd(Node* node);
    int get_data(); //Luego cambiar a "int"
    Node* get_nxtPtr(); //Luego cambiar a "int"
private:
    int data;
    Node* nxtPtr;
};


#endif //TAREACORTA2_NODE_H
