#pragma once
#include "PlantaExplosiva.h"
class Petacereza : public PlantaExplosiva
{
private:
	int areaExplosion; // Area de explosion en Tiles

public:
	Petacereza() { areaExplosion = 26; }
	//Metodos accesores
	void setAreaExplosion(int _areaExplosion) { areaExplosion = _areaExplosion; };
	int getAreaExplosion() { return areaExplosion; }

	//Metodos directos
	void explotar(float posX, float posY) override;

};

