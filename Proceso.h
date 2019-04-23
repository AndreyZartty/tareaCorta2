//
// Created by andreyzartty on 22/04/19.
//

#ifndef TAREACORTA_PROCESO_H
#define TAREACORTA_PROCESO_H

#include <string>

using namespace std;

class Proceso {
private:
    string Tipo;
    int tiempo;
public:
    string getTipo();
    void setTipo(string tipo);
    int getTiempo();
    void setTiempo(int tiempo);

};


#endif //TAREACORTA_PROCESO_H
