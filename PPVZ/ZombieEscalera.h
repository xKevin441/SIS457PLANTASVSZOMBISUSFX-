#pragma once
#include "ZombieCubierto.h"
class ZombieEscalera : public ZombieCubierto
{
private:
	string escaleraTamano;

public:
	ZombieEscalera() { escaleraTamano = 90; };

	//Metodos accesores
	void setEscaleraTamano(string _escaleraTamano) { escaleraTamano = _escaleraTamano; };
	string getEscaleraTamano() { return escaleraTamano; }

	//Metodos directos
	void subirEscalera();
	void duracionProteccion(int danioPlanta) override;
};

