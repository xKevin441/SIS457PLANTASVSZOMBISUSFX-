#pragma once
#include"Planta.h"
class Cactus : public planta
{
	int da�oCactus = 22;
	
public:

	Cactus() {};
	Cactus(string _nombre) : planta(_nombre) {};

	int getNivelFuerza() { return da�oCactus; }
	void setNivelDefenza(int _da�oCactus) { da�oCactus = _da�oCactus; }

	void da�oCactus();
};