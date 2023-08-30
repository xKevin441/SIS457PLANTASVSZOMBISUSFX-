#pragma once
#include "Zombie.h"
class ZombieBuzo : public Zombie
{
	int nivelnadado = 15;
public:

	ZombieBuzo() {};
	ZombieBuzo(string _nombre) : Zombie(_nombre) {};


	int getNivelNadado() { return nivelnadado; }
	void setNivelNadado(int _nivelnadado) { nivelnadado = _nivelnadado; }

	void nadar();
};
