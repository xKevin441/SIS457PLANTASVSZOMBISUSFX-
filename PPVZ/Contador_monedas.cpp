#include "Contador_monedas.h"
#include <iostream>
using namespace std;

Contador_monedas::Contador_monedas()
{
	contador = 0;
	sol = 10;
	posicionX = 500.0f;
	posicionY = 250.0f;
}

Contador_monedas::Contador_monedas(int _contador, int _sol, float _posicionX, float _posicionY)
{
	contador = _contador;
	sol = _sol;
	posicionX = _posicionX;
	posicionY = _posicionY;
}

void Contador_monedas::acumular(int sol, int contador)
{
	contador = contador + sol;
}

void Contador_monedas::actualizar(int contador)
{
	cout << "los soles acumulados son: " << contador << endl;
}
