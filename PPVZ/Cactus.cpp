#include "Cactus.h"


void Cactus::dañoCactus()
{
	posicionX = 1;
	for (int i = 0; i < 10; i++) {
		posicionX += posicionX * velocidadAtaque;
	}
	posicionX = -1;
	posicionY = -1;
	for (int i = 0; i <= 144; i--)
	{
		posicionX -= posicionX - vida;
		posicionY -= posicionY - vida;
	}
}

