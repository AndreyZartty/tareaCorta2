//
// Created by andreyzartty on 22/04/19.
//

#ifndef TAREACORTA_LINEADEPROCESO_H
#define TAREACORTA_LINEADEPROCESO_H

#include "Proceso.h"
#include <iostream>

using namespace std;


class LineaDeProceso {
private:
    int TipoDeVehiculo;
private:
    Proceso p1;
    Proceso p2;
    Proceso p3;
    Proceso p4;
    Proceso p5;
    Proceso p6;
public:
    void setTipoDeVehiculo(int tipoDeVehiculo);
    void setOrdenProcesos(Proceso P1,Proceso P2,Proceso P3,Proceso P4,Proceso P5,Proceso P6);
    void setTiempoProceso(Proceso p);
    Proceso getProceso1();
    Proceso getProceso2();
    Proceso getProceso3();
    Proceso getProceso4();
    Proceso getProceso5();
    Proceso getProceso6();
};


#endif //TAREACORTA_LINEADEPROCESO_H
