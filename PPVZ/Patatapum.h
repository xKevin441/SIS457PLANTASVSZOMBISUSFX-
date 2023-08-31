#pragma once
#include "PlantaExplosiva.h"
class Patatapum : public PlantaExplosiva
{
private:
	float estadoRecarga;

public:
	Patatapum() { estadoRecarga = 20.0; }
	void activar();
	void explotar(float posX, float posY) override;

};

