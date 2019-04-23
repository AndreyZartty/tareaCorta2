//
// Created by andreyzartty on 22/04/19.
//

#include "LineaDeProceso.h"

void LineaDeProceso::setOrdenProcesos(Proceso P1, Proceso P2, Proceso P3, Proceso P4, Proceso P5, Proceso P6) {
    p1 = P1;
    setTiempoProcesos(p1);
    p2 = P2;
    setTiempoProcesos(p2);
    p3 = P3;
    setTiempoProcesos(p3);
    p4 = P4;
    setTiempoProcesos(p4);
    p5 = P5;
    setTiempoProcesos(p5);
    p6 = P6;
    setTiempoProcesos(p6);

}

Proceso LineaDeProceso::getProceso1() {
    return p1;
}

Proceso LineaDeProceso::getProceso2() {
    return p2;
}

Proceso LineaDeProceso::getProceso3() {
    return p3;
}

Proceso LineaDeProceso::getProceso4() {
    return p4;
}

Proceso LineaDeProceso::getProceso5() {
    return p5;
}

Proceso LineaDeProceso::getProceso6() {
    return p6;
}

void LineaDeProceso::setTipoDeVehiculo(int tipoDeVehiculo) {
    TipoDeVehiculo = tipoDeVehiculo;
}

void LineaDeProceso::setTiempoProceso(Proceso p) {
    if(TipoDeVehiculo == 1){
        if(p.getTipo().compare("A") == 0){
            p.setTiempo(2);
        }
        else if(p.getTipo().compare("B") == 0){
            p.setTiempo(2);
        }
        else if(p.getTipo().compare("C") == 0){
            p.setTiempo(4);
        }
        else if(p.getTipo().compare("D") == 0){
            p.setTiempo(1);
        }
        else if(p.getTipo().compare("E") == 0){
            p.setTiempo(3);
        }
        else if(p.getTipo().compare("F") == 0){
            p.setTiempo(1);
        }
    }
    else if(TipoDeVehiculo == 2){
        if(p.getTipo().compare("A") == 0){
            p.setTiempo(1);
        }
        else if(p.getTipo().compare("B") == 0){
            p.setTiempo(1);
        }
        else if(p.getTipo().compare("C") == 0){
            p.setTiempo(2);
        }
        else if(p.getTipo().compare("D") == 0){
            p.setTiempo(3);
        }
        else if(p.getTipo().compare("E") == 0){
            p.setTiempo(2);
        }
        else if(p.getTipo().compare("F") == 0){
            p.setTiempo(1);
        }
    }
    else if(TipoDeVehiculo == 3){
        if(p.getTipo().compare("A") == 0){
            p.setTiempo(3);
        }
        else if(p.getTipo().compare("B") == 0){
            p.setTiempo(1);
        }
        else if(p.getTipo().compare("C") == 0){
            p.setTiempo(2);
        }
        else if(p.getTipo().compare("D") == 0){
            p.setTiempo(1);
        }
        else if(p.getTipo().compare("E") == 0){
            p.setTiempo(4);
        }
        else if(p.getTipo().compare("F") == 0){
            p.setTiempo(1);
        }
    }
    else if(TipoDeVehiculo == 4){
        if(p.getTipo().compare("A") == 0){
            p.setTiempo(3);
        }
        else if(p.getTipo().compare("B") == 0){
            p.setTiempo(2);
        }
        else if(p.getTipo().compare("C") == 0){
            p.setTiempo(1);
        }
        else if(p.getTipo().compare("D") == 0){
            p.setTiempo(4);
        }
        else if(p.getTipo().compare("E") == 0){
            p.setTiempo(1);
        }
        else if(p.getTipo().compare("F") == 0){
            p.setTiempo(2);
        }
    }
    else if(TipoDeVehiculo == 5){
        if(p.getTipo().compare("A") == 0){
            p.setTiempo(1);
        }
        else if(p.getTipo().compare("B") == 0){
            p.setTiempo(2);
        }
        else if(p.getTipo().compare("C") == 0){
            p.setTiempo(4);
        }
        else if(p.getTipo().compare("D") == 0){
            p.setTiempo(3);
        }
        else if(p.getTipo().compare("E") == 0){
            p.setTiempo(4);
        }
        else if(p.getTipo().compare("F") == 0){
            p.setTiempo(1);
        }
    }
    else if(TipoDeVehiculo == 6){
        if(p.getTipo().compare("A") == 0){
            p.setTiempo(4);
        }
        else if(p.getTipo().compare("B") == 0){
            p.setTiempo(4);
        }
        else if(p.getTipo().compare("C") == 0){
            p.setTiempo(2);
        }
        else if(p.getTipo().compare("D") == 0){
            p.setTiempo(1);
        }
        else if(p.getTipo().compare("E") == 0){
            p.setTiempo(3);
        }
        else if(p.getTipo().compare("F") == 0){
            p.setTiempo(1);
        }
    }

}
