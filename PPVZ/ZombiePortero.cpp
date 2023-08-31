#include "ZombiePortero.h"

ZombiePortero::ZombiePortero()
{
	puertaColor = "Gray";
	puertaTamano = "85";
}

void ZombiePortero::duracionProteccion(int danioPlanta)
{
	resistenciaProteccion = 120;
	resistenciaProteccion -= danioPlanta;
	cout << "La perta esta sufriendo danios" << endl;
}
