#include "ZombiCajita.h"

void ZombieCajita::ExplocionC()
{
	posicionX = 1;
	for (int i = 0; i < 15; i++) {
		posicionX += posicionX * velocidad_ataque;
	}
	posicionX = -1;
	posicionY = -1;
	for (int i = 0; i < 15; i++) {
		posicionX += posicionX * velocidad_ataque;
		posicionY += posicionY * velocidad_ataque;
	}
	posicionX = 1;
	posicionY = 0;
	for (int i = 0; i < 15; i++) {
		posicionX += posicionX * velocidad_ataque;
	}
	for (int i = 0; i = estado; i++)
	{
		vida += vida * ExplocionCajita;
		vida -= vida * 0;
	}
	for (int i = 0; i <= vida; i--)
	{
		vida -= vida - estado;
	}
}
