#pragma once
#include"Planta.h"
class ExplotaNuez : public planta
{
	int Explocion = 200;
public:

	ExplotaNuez() {};
	ExplotaNuez(string _nombre) : planta(_nombre) {};

	int getNivelDaņo() { return Explocion; }
	void setNivelDaņo(int _Explocion) { Explocion = _Explocion; }

	void Explicion();
};
