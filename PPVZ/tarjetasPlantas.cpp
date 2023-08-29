#include "tarjetasPlantas.h"

void TarjetasPlantas::cargando()
{
	if (progresoCarga < tiempoRecarga)
		progresoCarga++;
	//dibujar el progreso de carga en la tarjeta
}

void TarjetasPlantas::usarPlanta(int numSoles)
{
	if (estado == true && numSoles >= costo)
	{
		estado = false;
		//animar desplazamiento de planta y llamar a funciones plantar o spawnear de la clase Planta
	}
}

void TarjetasPlantas::dibujarTarjeta(int ubicacion)
{
	//dibujar la tarjeta con la skin de la planta, su coste de soles y su fondo sacado de la variable colorFondo
}

