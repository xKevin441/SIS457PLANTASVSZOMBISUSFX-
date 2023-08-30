#pragma once
#include "PlantaGeneradoraSoles.h"
class SetaSolar :
    public PlantaGeneradoraSoles
{
private:
    string tamaño; //grande o pequeño
    string color;
    int tiempoVida;


public:
    //Metodos constructores
    SetaSolar();
    SetaSolar(float _posicionX, float _posicionY);
    SetaSolar(string _tamaño);
    SetaSolar(float _posicionX, float _posicionY, string _tamaño);

    //Metodos accesores
    void setTamaño(string _tamaño) { tamaño = _tamaño; }
    string getTamaño() { return tamaño; }
    void setTiempoVida(int _tiempoVida) { tiempoVida = _tiempoVida; }
    int getTiempoVida() { return tiempoVida; }
    void setColor(string _color) { color = _color; }
    string getColor() { return color; }

    //Metodos comunes
    void aparecer();
    void aparecer(float _posicionX, float _posicionY);
    void cambiarTamaño();
};

