#pragma once
#include "ZombieCubierto.h"
class ZombiePortero :
    public ZombieCubierto
{
private:
    string puertaColor;
    string puertaTamano;

public:
    ZombiePortero();

    //Metodos accesores
    void setPuertaColor(string _puertaColor) { puertaColor = _puertaColor; };
    string getPuertaColor() { return puertaColor; }

    void setPuertaTamano(string _puertaTamano) { puertaTamano = _puertaTamano; };
    string getPuertaTamano() { return puertaTamano; }

    //Metodos directos
    void puertaRota();
    void duracionProteccion(int danioPlanta) override;

};
