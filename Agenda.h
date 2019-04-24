//
// Created by andreyzartty on 22/04/19.
//

#ifndef TAREACORTA_AGENDA_H
#define TAREACORTA_AGENDA_H


#include "Proceso.h"
#include "List.h"

class Agenda {
private:
    List procesos;
public:
    void agregar(Proceso proceso,List cola);
};


#endif //TAREACORTA_AGENDA_H
