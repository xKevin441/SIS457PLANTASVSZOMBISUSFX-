#include "ZombiePeriodico.h"

void ZombiePeriodico::enojarse()
{
	estadoProteccion = 0;
	resistenciaProteccion = 0;
	velocidad_ataque++;
	cout << "Zombie Periodico se enojo" << endl;

}

void ZombiePeriodico::duracionProteccion(int danioPlanta)
{
	resistenciaProteccion = 20;
	resistenciaProteccion -= danioPlanta;

}
