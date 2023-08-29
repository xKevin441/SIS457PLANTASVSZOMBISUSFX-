#include "Temporizador_carga_plantas.h"
#include <iostream>

Temporizador_carga_plantas::Temporizador_carga_plantas()
{
	tiempo_soles = 0.0f;
	posiscionX = 10;
	posicionY = 10;
	valor_soles = 0;
}

void Temporizador_carga_plantas::spawn_soles(float tiempo_soles)
{
	cout << "Aparece un sol\n";
}

void Temporizador_carga_plantas::caida_soles(int posicionX, int posicionY)
{
	cout << "El sol cae\n";
}

void Temporizador_carga_plantas::cantidad—sol(int valor_soles)
{
	cout << "El sol tiene un valor de 25\n";
}
