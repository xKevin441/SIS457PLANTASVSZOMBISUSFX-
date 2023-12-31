#pragma once
#include <iostream>
#include <string>
using namespace std;

class planta
{
public:
    string nombre;
    float posicionX;
    float posicionY;
    int vida;
    int costoSol;
    float velocidadAtaque;
    int rangoAtaque;
    bool estado;
    int da�o;
    int velocidadMovimientoEs;

public:
    planta();
    planta(string _nombre);
    planta(string _nombre, float _posicionX, float _posicionY, int _vida, int _costoSol, float _velocidadAtaque, int _rangoAtaque, bool _estado, int _da�o, int _velocidadMovimientoEs);
    //Metodos accesores
    void setNombre(string _nombre) { nombre = _nombre; };
    string getNombre() { return nombre; }

    void setPosicionX(float _posicionX) { posicionX = _posicionX; };
    float getPosicionX() { return posicionX; }

    void setPosicionY(float _posicionY) { posicionY = _posicionY; };
    float getPosicionY() { return posicionY; }

    void setVida(int _vida) { vida = _vida; };
    int getVida() { return vida; }

    void setCostoSol(int _costoSol) { costoSol = _costoSol; };
    int getCostoSol() { return costoSol; }

    void setVelocidadAtaque(float _velocidadAtaque) { velocidadAtaque = _velocidadAtaque; };
    float getVelocidadAtaque() { return velocidadAtaque; }

    void setRangoAtaque(int _rangoAtaque) { rangoAtaque = _rangoAtaque; };
    int getRangoAtaque() { return rangoAtaque; }

    void setEstado(bool _estado) { estado = _estado; };
    bool getEstado() { return estado; }

    void setDa�o(int _da�o) { da�o = _da�o; };
    int getDa�o() { return da�o; }

    void setVelocidadMovimientoEs(int _velocidadMovimientoEs) { velocidadMovimientoEs = _velocidadMovimientoEs; };
    int getVelocidadMovimientoEs() { return velocidadMovimientoEs; }

    //Metodos directos
    void movimientoEstatico();
    void recirbirDanio(int danioRecibido);
    void atacar();
    void morir();

};
   