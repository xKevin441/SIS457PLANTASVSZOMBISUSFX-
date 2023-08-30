#pragma once
#include "Zombie.h"
class ZombiPlayero : public Zombie
{
	int nivelavance = 11;
public:

	ZombiPlayero() {};
	ZombiePlayero(string _nombre) : Zombie(_nombre) {};


	int getNivelAvance() { return nivelavance; }
	void setNivelAvance(int _nivelavance) { nivelavance = _nivelavance; }

	void avance();
};
