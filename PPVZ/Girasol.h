#pragma once
#include "PlantaGeneradoraSoles.h"

class Girasol :
    public PlantaGeneradoraSoles
{
private:
    string colorPetalos;
    string colorHojas;
    string colorRostro;

public:
    //Metodos constructores
    Girasol();
    Girasol(float _posX, float _posY);  

    //Metodos
    void aparecer();
    void aparecer(float _posX, float _posY);

};

