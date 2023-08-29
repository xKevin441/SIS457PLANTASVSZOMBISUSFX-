#include <iostream>
#include <string>
#include "Sol.h"

Sol::Sol()
{
	posX = 0.0f;
	posY = 0.0f;
	color = "Yellow";
	cantEnergia = 25;
	tiempoEspera = 15;
}

void Sol::aparecer(float posSiguienteX, float posSiguienteY)
{
	posX = posSiguienteX;
	posY = posSiguienteY;
}

void Sol::caida()
{
	posY -= 1.0f;
}

void Sol::desaparecer()
{
	cout << "Sol no capturado\n";
}
