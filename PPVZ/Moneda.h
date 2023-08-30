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
	int valor;

public:
	//Metodos constructores
	moneda();
	moneda(float _posicionX, float _posicionY);
	moneda(float _posicionX, float _posicionY, int _valor);
	moneda(int _valor, string _color, string _material, int _posicionY, int _posicionX, int _tiempoVida);

	//Metodos accesores
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }
	int getPosicionX() { return posicionX; }

	void setPosicionY(int _posicionY) { posicionY = _posicionY; }
	int getPosicionY() { return posicionY; }

	void setTiempoVida(int _tiempoVida) { tiempoVida = _tiempoVida; }
	int getTiempoVida() { return tiempoVida; }

	void setColor(string _color) { color = _color; }
	string getColor() { return color; }

	//Metodos comunes
	void aparecer();
	void aparecer(float _posicionX, float _posicionY);
	void desaparecer();

};
