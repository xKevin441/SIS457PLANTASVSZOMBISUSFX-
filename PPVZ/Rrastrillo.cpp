#include "Rrastrillo.h"

void Rastrillo::spawnear(float posicionX, float posicionY, int tamaño)
{
	//Dibujar el rastrillo en la coordenada (x,y)
}

void Rastrillo::contacto(int _dañoImpacto)
{
	//detectar si hay un zombie en la coordenada (x,y)
	//Si hay un zombie en su coordenada reducir la salud del zombie en dañoImpacto y destruir rastrillo
}

void Rastrillo::destruirse()
{
	estado = "usado";
	//destruir dibujo de rastrillo en pantalla
}
