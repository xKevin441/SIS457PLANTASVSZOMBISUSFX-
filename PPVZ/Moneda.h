#pragma once
#include<iostream> 
using namespace std;

class moneda
{
private:
	int posicionY;
	int posicionX;
	int tiempoVida;
	string  color;
	string material;

public:

	moneda();
	moneda(string _color, string _material, int _posicionY, int _posicionX, int _tiempoVida);

	void setmoverX(int _posicionX) { posicionX = _posicionX; }
	int getmoverX() { return posicionX; }

	void setmoverY(int _posicionY) { posicionY = _posicionY; }
	int getmoverY() { return posicionY; }

	void setdesaperacer(int _tiempoVida) { tiempoVida = _tiempoVida; }
	int getdesaparecer() { return tiempoVida; }

	void setexplotar(int _tiempoVida) { tiempoVida = _tiempoVida; }
	int getexplotar() { return tiempoVida; }

	void setmonedaC(string _color) { color = _color; }
	string getmonedaC() { return color; }

	void setmonedaM(string _material) { material = _material; }
	string getmonedaM() { return material; }

};
