#include "Planta.h"

planta::planta()
{
	posicionX = 0.0f;
	posicionY = 0.0f;
	vida = 100;
	costoSol = 0;
	velocidadAtaque = 0;
	rangoAtaque = 0;
	estado = true;
	daño = 0;
	velocidadMovimientoEs = 0;
}

planta::planta(string _nombre)
{
	posicionX = 0.0f;
	posicionY = 0.0f;
	vida = 100;
	costoSol = 0;
	velocidadAtaque = 0;
	rangoAtaque = 0;
	estado = true;
	daño = 0;
	velocidadMovimientoEs = 0;
}

planta::planta(string _nombre, float _posicionX, float _posicionY, int _vida, int _costoSol, float _velocidadAtaque, int _rangoAtaque, bool _estado, int _daño, int _velocidadMovimientoEs)
{
	posicionX = _posicionX;
	posicionY = _posicionY;
	vida = _vida;
	costoSol = _costoSol;
	velocidadAtaque = _velocidadAtaque;
	rangoAtaque = _rangoAtaque;
	estado = _estado;
	daño = _daño;
	velocidadMovimientoEs = _velocidadMovimientoEs;
}
void planta::movimientoEstatico()
{
	velocidadMovimientoEs = 2.0;
}

void planta::recirbirDanio(int danioRecibido)
{
	vida -= danioRecibido;
}

void planta::atacar()
{
	velocidadAtaque = 10;
	rangoAtaque = 1;
	daño = 20;
}

void planta::morir()
{
	estado = false;
}
