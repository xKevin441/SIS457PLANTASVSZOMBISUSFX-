#include "ZombieCubierto.h"

ZombieCubierto::ZombieCubierto()
{
	tipoProteccion = "";
	resistenciaProteccion = 0;
	estadoProteccion = 0;
}

void ZombieCubierto::duracionProteccion(int danioPlanta)
{
	resistenciaProteccion -= danioPlanta;
}
