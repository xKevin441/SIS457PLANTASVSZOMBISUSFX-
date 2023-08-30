#include "ZombiPlayero.h"

void ZombiPlayero::avance()
{
	posicionX = 1;
	for (int i = 0; i < 11; i++) {
		posicionX += posicionX * velocidad_ataque;
	}
	posicionX = -1;
	posicionY = -1;
	for (int i = 0; i < 11; i++) {
		posicionX += posicionX * velocidad_ataque;
		posicionY += posicionY * velocidad_ataque;
	}
	posicionX = 1;
	posicionY = 0;
	for (int i = 0; i < 11; i++) {
		posicionX += posicionX * velocidad_ataque;
	}
}