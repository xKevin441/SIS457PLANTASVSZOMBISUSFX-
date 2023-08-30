#pragma once
#include "PlantaGeneradoraSoles.h"
class Birasol :
    public PlantaGeneradoraSoles
{
private:
    string colorPetalos;
    string colorHojas;
    string colorRostros;
    int numCabezas;

public:
    //Metodos contructores
    Birasol();
    Birasol(float _posicionX, float _posicionY);

    //Metodos comunes
    void aparecer();
    void aparecer(float _posX, float _posY);
    void generarSoles();
};

