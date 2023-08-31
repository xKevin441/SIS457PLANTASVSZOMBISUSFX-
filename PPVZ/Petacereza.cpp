#include "Petacereza.h"

void Petacereza::explotar(float posX, float posY)
{
	areaExplosion = 9;

	posicionX = posX;
	posicionY = posY;

	daño = 100;
	vida = 0;

	cout << "La planta explotó en un area de 9 tiles" << endl;

}
