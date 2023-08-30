#include "Girasol.h"

Girasol::Girasol()
{
	posicionX = 5;
	posicionY = 12;

	nombre = "Girasol";
	vida = 50;
	costoSol = 50;
	estado = true;
	cantSolesPorCiclo = 1;
	valorSol = 25;
	frecuenciaGeneracion = 20;
	diaNoche = "dia";

	colorPetalos = "amarillo";
	colorHojas = "verde";
	colorRostro = "naranja";
}

Girasol::Girasol(float _posX, float _posY)
{
	
	posicionX = _posY;
	posicionY = _posX;

	nombre = "Girasol";
	vida = 50;
	costoSol = 50;
	estado = true;
	cantSolesPorCiclo = 1;
	valorSol = 25;
	frecuenciaGeneracion = 20;
	diaNoche = "dia";

	colorPetalos = "amarillo";
	colorHojas = "verde";
	colorRostro = "naranja";
}

void Girasol::aparecer()
{
	cout << "Un Girasol aparecio en la posicion (" << posicionX << "," << posicionY << ")" << endl;
	cout << "Datos del Girasol: ";
	cout << "Vida = " << vida << endl;
	cout << "costo = " << costoSol << " soles"<<endl;
	cout << "posicion = (" << posicionX << "," << posicionY << ")" << endl;
	cout << "frecuencia generacion = " << frecuenciaGeneracion<<endl;
	cout << "cantidad de soles por ciclo = " << cantSolesPorCiclo << endl;
	cout << "valor del sol que genera = " << valorSol << endl;
	cout << "dia o noche = " << diaNoche<<endl;
}

void Girasol::aparecer(float _posX, float _posY)
{
	posicionX = _posX;
	posicionY = _posY;

	cout << "Un Girasol aparecio en la posicion (" << posicionX << "," << posicionY << ")" << endl;
	cout << "Datos del Girasol: ";
	cout << "Vida = " << vida << endl;
	cout << "costo = " << costoSol << " soles" << endl;
	cout << "posicion = (" << posicionX << "," << posicionY << ")" << endl;
	cout << "frecuencia generacion = " << frecuenciaGeneracion;
	cout << "cantidad de soles por ciclo = " << cantSolesPorCiclo << endl;
	cout << "valor del sol que genera = " << valorSol << endl;
	cout << "dia o noche = " << diaNoche << endl;
}






