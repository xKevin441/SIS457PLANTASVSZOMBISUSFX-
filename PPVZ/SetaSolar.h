#pragma once
#include "PlantaGeneradoraSoles.h"
class SetaSolar :
    public PlantaGeneradoraSoles
{
private:
    string tama�o; //grande o peque�o
    string color;
    int tiempoVida;


public:
    //Metodos constructores
    SetaSolar();
    SetaSolar(float _posicionX, float _posicionY);
    SetaSolar(string _tama�o);
    SetaSolar(float _posicionX, float _posicionY, string _tama�o);

    //Metodos accesores
    void setTama�o(string _tama�o) { tama�o = _tama�o; }
    string getTama�o() { return tama�o; }
    void setTiempoVida(int _tiempoVida) { tiempoVida = _tiempoVida; }
    int getTiempoVida() { return tiempoVida; }
    void setColor(string _color) { color = _color; }
    string getColor() { return color; }

    //Metodos comunes
    void aparecer();
    void aparecer(float _posicionX, float _posicionY);
    void cambiarTama�o();
};

