#include "Sol.h"

Sol::Sol()
{
	posX = 20;
	posY = 30;
	color = "amarillo";
	cantEnergia = 10;
	tiempoEspera = 20;
}

Sol::Sol(int _posX, int _posY, int _cantEnergia, int _tiempoEspera, string _color)
{
	posX = _posX;
	posY = _posY;
	color = _color;
	cantEnergia = _cantEnergia;
	tiempoEspera = _tiempoEspera;
}
