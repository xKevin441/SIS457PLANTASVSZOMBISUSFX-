#include "PlantaExplosiva.h"

PlantaExplosiva::PlantaExplosiva()
{
	dañoExplosion = 0;
	tiempoExplosion = 3;
}

void PlantaExplosiva::explotar(float posX, float posY)
{
	//Ubicacion de la planta
	posicionX = posX;
	posicionY = posY;

	daño = 100;
	vida = 0;

	cout << "La planta explotó" << endl;
}
