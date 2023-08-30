#pragma once
#include"Planta.h"
class NuezCascaraRabias : public planta
{
	int Dureza = 144;
public:

	NuezCascaraRabias() {};
	NuezCascaraRabias(string _nombre) : planta(_nombre) {};

	int getNivelDefenza() { return Dureza; }
	void setNivelDefenza(int _Dureza) { Dureza = _Dureza; }

	void Defenza();
};