//
// Created by andreyzartty on 22/04/19.
//

#include "Agenda.h"

void Agenda::agregar(Proceso nuevo, List cola) {
    if(procesos.getSize()<3){
        procesos.insertFirst(nuevo);
    }
    else{
        procesos.insertFirst(nuevo);
        cola.insertFirst(procesos.getLast()->get_data());
        Node* current = procesos.getPointerHead();
        int c=0;
        while(c<3){
            current = current->get_nxtPtr();
        }
        current->set_nxtNd(nullptr);
    }
}

