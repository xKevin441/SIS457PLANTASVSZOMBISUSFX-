#include "Barra_de_progreso.h"
#include <string>
#include <iostream>
Barra_de_progreso::Barra_de_progreso()
{

	color = "red";
	barra_tono = "color";
	plantas = "tipos de plantas";
	tiempo = 0.0;
}

void Barra_de_progreso::sepbarra(int porcentaje)
{
	plantas += barra;

}

void Barra_de_progreso::sepbarra_tono(string color)
{
	color += barra;
}

void Barra_de_progreso::sepnivel(int oleada)
{
	tiempo += nivel;
	cout << "subes de nivel";
}