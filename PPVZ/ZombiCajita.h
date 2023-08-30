#pragma once
#include "Zombie.h"
class ZombieCajita : public Zombie
{
	int ExplocionCajita = 150;
	int estado = 0;
public:

	ZombieCajita() {};
	ZombieCajita(string _nombre) : Zombie(_nombre) {};


	int getNivelDañoC() { return ExplocionCajita; }
	void setNivelDañoC(int _ExplocionCajita) { ExplocionCajita = _ExplocionCajita; }

	void ExplocionC();
};
