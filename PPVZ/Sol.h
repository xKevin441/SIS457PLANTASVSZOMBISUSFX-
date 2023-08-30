#pragma once
#include <iostream>
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
	Sol(int _posX, int _posY, int _cantEnergia, int _tiempoEspera, string _color);

	void setcaidaX(int _posX) { posX = _posX; }
	int getcaidaX() { return posX; }

	void setcaidaY(int _posY) { posY = _posY; }
	int getcaidaY() { return posY; }

	void setdesaparecer(int _tiempoEspera) { tiempoEspera = _tiempoEspera; }
	int getdesaparecer() { return tiempoEspera; }

	void setenergiaS(int _cantEnergia) { cantEnergia = _cantEnergia; }
	int getenergiaS() { return cantEnergia; }

	void setcolorS(string _color) { color = _color; }
	string getcolorS() { return color; }
};
