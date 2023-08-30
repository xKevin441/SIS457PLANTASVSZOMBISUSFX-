#include "Sol.h"

Sol::Sol()
{
	posX = 20;
	posY = 30;
	color = "amarillo";
	cantEnergia = 25;
	tiempoEspera = 20;
}

Sol::Sol(float _posX, float _posY)
{
	posX = _posX;
	posY = _posY;
	color = "amarillo";
	cantEnergia = 25;
	tiempoEspera = 20;
}

Sol::Sol(float _posX, float _posY, int _cantEnergia)
{
	posX = _posX;
	posY = _posY;
	cantEnergia = _cantEnergia;
	color = "Amarillo";
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

void Sol::aparecer()
{
	cout << "Un Sol " << color << " aparecio en la posicion (" << posX << "," << posY << ") " << endl;
	cout << "energia del sol = " << cantEnergia << endl;
	cout << "tiempo de espera del sol = " << tiempoEspera << endl;
}

void Sol::desaparecer()
{
	cout<<"El sol de la posicion (" << posX << ", " << posY << ") desapareció" << endl;
}

void Sol::aparecer(float _posX, float _posY)
{
	posX = _posX;
	posY = _posY;
	cout << "Un Sol " << color << " aparecio en la posicion (" << posX << "," << posY << ") " << endl;
	cout << "energia del sol = " << cantEnergia << endl;
	cout << "tiempo de espera del sol = " << tiempoEspera << endl;
}

void Sol::capturarSol()
{
	cout<<"Se capturo el sol de la posicion (" << posX << ", " << posY << ")" << endl;
}



