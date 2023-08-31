#pragma once
#include "Planta.h"
class PlantaExplosiva : public planta
{
private:
	int dañoExplosion;
	int tiempoExplosion;

public:
	PlantaExplosiva();

	//Metodos accesores
	void setDañoExplosion(int _dañoExplosion) { dañoExplosion = _dañoExplosion; };
	int getDañoExplosion() { return dañoExplosion; }

	void setTiempoExplosion(int _tiempoExplosion) { tiempoExplosion = _tiempoExplosion; };
	int getTiempoExplosion() { return tiempoExplosion; }

	//Metodos directos
	virtual void explotar(float posX, float posY);

};

