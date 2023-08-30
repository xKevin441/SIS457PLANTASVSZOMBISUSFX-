#pragma once
#include"Planta.h"
class Cactus : public planta
{
	int dañoCactus = 22;
	
public:

	Cactus() {};
	Cactus(string _nombre) : planta(_nombre) {};

	int getNivelFuerza() { return dañoCactus; }
	void setNivelDefenza(int _dañoCactus) { dañoCactus = _dañoCactus; }

	void dañoCactus();
};