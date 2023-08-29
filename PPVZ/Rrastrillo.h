#pragma once
#include <iostream>
using namespace std;
class Rastrillo
{
private:
	string material;
	string color;
	int tamaño;
	float posicionX;
	float posicionY;
	int costo;
	int dañoImpacto;
	string estado;//disponible, en uso o usado

public:
	//Metodos constructores

	//Metodos accesores
	void setMaterial(string _material) { material = _material; }
	void setColor(string _color) { color = _color; }
	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	void setCosto(int _costo) { costo = _costo; }
	void setDañoImpacto(int _dañoImpacto) { dañoImpacto = _dañoImpacto; }

	string getMaterial() { return material; }
	string getColor() { return color; }
	float getPosicionX() { return posicionX; }
	float getPosicionY() { return posicionY; }
	int getCosto() { return costo; }
	int getDañoImpacto() { return dañoImpacto; }

	//Metodos comunes
	void spawnear(float posicionX, float posicionY, int tamaño);
	void contacto(int _dañoImpacto);
	void destruirse();
};
