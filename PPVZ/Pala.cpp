#include "Pala.h"

Pala::Pala()
{
	posicionX = 0;
	posicionY = 0;
	color = "gris";
	estadoUso = false;
	tamaño = 10;
}

Pala::Pala(float _posicionX, float _posicionY, string _color, int _tamaño)
{
	estadoUso = false;
	posicionX = _posicionX;
	posicionY = _posicionY;
	color = _color;
	tamaño = _tamaño;
}

void Pala::cambiarEstado()
{
	estadoUso = true;
	posicionX = 0;
	posicionY = 0;
}

void Pala::desplazar(float desplazamientoX, float desplazamientoY)
{
	posicionX += desplazamientoX;
	posicionY += desplazamientoY;

}

void Pala::quitarPlanta(float _posicionX, float _posicionY)
{
	cout << "La pala elimino la planta de la coordenada (" << _posicionX << " , " << _posicionY << ")" << endl;
}
