#pragma once
#include "PlantaExplosiva.h"
class Jalapenio : public PlantaExplosiva
{
private:
	int filaAfectada;

public:
	Jalapenio() { filaAfectada = 0; }

	//Metodos accesores
	void setFilaAfectada(int _filaAfectada) { filaAfectada = _filaAfectada; };
	int getFilaAfectada() { return filaAfectada; }

	void explotar(float posX, float posY) override;
};

