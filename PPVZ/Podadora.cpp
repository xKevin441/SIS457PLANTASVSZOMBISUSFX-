#include "Podadora.h"
#include  <string>
#include <iostream>
Podadora::Podadora()
{
	coordenadaX = 0.0f;
	coordenadaY = 0.0f;
	tipo = "fuego";
	velocidad = 60;
	estado = "reposo";
}
void Podadora::sepmover(int velocidadX)
{
	cout << "posicion de partida Y ,direccion X\n";
	cout << "posicion de velocidad X\n";
	cout << "mover mediante teclado\n";
	mover -= velocidad;
}

void Podadora::sepencender(int estado)
{
	cout << "no se encuentren mas plantas en direccion de X";
	cout << "volver a su posicion inicial";
}

void Podadora::triturarZombie()
{
	cout << "animacion de triturar";
	cout << "unas vez terminado con todos los objetivos explotar en forma aletoria";
}

void Podadora::sonido(int estado)
{
	cout << "sonido de la animacion";
}