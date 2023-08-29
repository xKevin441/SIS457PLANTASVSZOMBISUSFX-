#include "contadorSoles.h"


contadorSoles::contadorSoles()
{
	posicionX = 1.0f;
	posicionY = 2.0f;
	contador = 0;
}

void contadorSoles::acumularSol(int solCapturado)
{
	contador += solCapturado;
}

void contadorSoles::disminuirSol(int costoPlanta)
{
	contador -= costoPlanta;
}
