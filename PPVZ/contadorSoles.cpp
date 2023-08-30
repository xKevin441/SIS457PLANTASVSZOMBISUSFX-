#include "contadorSoles.h"
#include <iostream>
using namespace std;

contadorSoles::contadorSoles()
{
	posicionX = 1.0f;
	posicionY = 2.0f;
	contador = 0;
}

void contadorSoles::acumularSol(int solCapturado)
{
	contador += solCapturado;
	std::cout << "Se añadieron " << solCapturado << " soles al CONTADOR.  Total de soles = " << contador << endl;
}

void contadorSoles::disminuirSol(int costoPlanta)
{
	contador -= costoPlanta;
	std::cout << "Se retiraron " << costoPlanta << " soles al CONTADOR.  Total de soles = " << contador << endl;
}
