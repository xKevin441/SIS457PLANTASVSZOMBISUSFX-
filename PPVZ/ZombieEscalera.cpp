#include "ZombieEscalera.h"

void ZombieEscalera::subirEscalera()
{
	cout << "El zombie esta subiendo la escalera" << endl;
}

void ZombieEscalera::duracionProteccion(int danioPlanta)
{
	resistenciaProteccion = 100;
	resistenciaProteccion -= danioPlanta;
}
