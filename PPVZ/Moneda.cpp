#include "Moneda.h"

moneda::moneda()
{
	posicionY = posicionY;
	posicionX = posicionX;
	tiempoVida = tiempoVida;
	color = "plomo";
	material = "Plata";
}

moneda::moneda(string _color, string _material, int _posicionY, int _posicionX, int _tiempoVida)
{
	posicionY = _posicionY;
	posicionX = _posicionX;
	tiempoVida = _tiempoVida;
	color = _color;
	material = _material;
}
