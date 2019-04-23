//
// Created by andreyzartty on 22/04/19.
//

#include "Proceso.h"

void Proceso::setTipo(string tipo) {
    Tipo = tipo;
}

string Proceso::getTipo(){
    return Tipo;
}

int Proceso::getTiempo() {
    return tiempo;
}

void Proceso::setTiempo(int tiempo) {
    tiempo = tiempo;
}
