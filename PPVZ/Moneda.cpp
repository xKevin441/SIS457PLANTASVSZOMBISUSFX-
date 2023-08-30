#include "Moneda.h"

moneda::moneda()
{
	posicionY = posicionY;
	posicionX = posicionX;
	tiempoVida = 20;
	color = "plomo";
	material = "Plata";
	valor = 10;
}

moneda::moneda(float _posicionX, float _posicionY)
{
	tiempoVida = 20;
	color = "plomo";
	material = "Plata";

	posicionX = _posicionX;
	posicionY = _posicionY;
	valor = 10;
}

moneda::moneda(float _posicionX, float _posicionY, int _valor)
{
	tiempoVida = 20;
	color = "plomo";
	material = "Plata";

	posicionX = _posicionX;
	posicionY = _posicionY;
	valor = _valor;
}

moneda::moneda(int _valor, string _color, string _material, int _posicionY, int _posicionX, int _tiempoVida)
{
	valor = _valor;
	posicionY = _posicionY;
	posicionX = _posicionX;
	tiempoVida = _tiempoVida;
	color = _color;
	material = _material;
}

void moneda::aparecer()
{
	cout << "Una moneda aparecio en la posicion (" << posicionX << "," << ") con un valor de " << valor << endl;
}

void moneda::aparecer(float _posicionX, float _posicionY)
{
	posicionX = _posicionX;
	posicionY = _posicionY;
	aparecer();
}

void moneda::desaparecer()
{
	cout<<"La moneda de la posicion ("<< posicionX << "," << ") desaparecio" << endl;
}

