#include "Moneda.h"
#include <iostream>
moneda::moneda()
{
	posicionY = _posicionY;
	posicionX = _posicionX;
	tiempoVida = _tiempoVida;
	color = _color;
	material = _material;
}

void moneda::aparecer(int posSiguienteX, int posSiguienteY)
{
	posicionX = posSiguienteX;
	posicionY = posSiguienteY;
}

void moneda::desaparecer()
{
	cout << "moneda no capturada\n";
}
