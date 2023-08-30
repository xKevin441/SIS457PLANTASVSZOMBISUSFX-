#pragma once
#include <iostream>
#include "contadorSoles.h"
using namespace std;

class Sol
{
private:

	int posX;
	int posY;
	string color;
	int cantEnergia;
	int tiempoEspera;

public:

	Sol();
	Sol(float _posX, float _posY);
	Sol(float _posX, float _posY, int _cantEnergia);
	Sol(int _posX, int _posY, int _cantEnergia, int _tiempoEspera, string _color);

	void setPosX(int _posX) { posX = _posX; }
	int getPosX() { return posX; }

	void setPosY(int _posY) { posY = _posY; }
	int getPosY() { return posY; }

	void setTiempoEspera(int _tiempoEspera) { tiempoEspera = _tiempoEspera; }
	int getTiempoEspera() { return tiempoEspera; }

	void setCantEnergia(int _cantEnergia) { cantEnergia = _cantEnergia; }
	int getCantEnergia() { return cantEnergia; }

	void setColor(string _color) { color = _color; }
	string getColor() { return color; }

	void aparecer();
	void aparecer(float _posX, float _posY);
	void desaparecer();
	void capturarSol();
};
