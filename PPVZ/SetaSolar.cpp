#include "SetaSolar.h"

SetaSolar::SetaSolar()
{
	posicionX = 12;
	posicionY = 18;

	diaNoche = "noche";
	valorSol = 25;
	costoSol = 25;
	frecuenciaGeneracion = 100;
	cantSolesPorCiclo = 1;
	color = "amarillo";
	tiempoVida = 0;

	tama�o = "peque�o";
}

SetaSolar::SetaSolar(float _posicionX, float _posicionY)
{
	posicionX = _posicionX;
	posicionY = _posicionY;

	diaNoche = "noche";
	valorSol = 15;
	costoSol = 25;
	frecuenciaGeneracion = 20;
	cantSolesPorCiclo = 1;
	color = "amarillo";
	tiempoVida = 0;

	tama�o = "peque�o";
}

SetaSolar::SetaSolar(string _tama�o)
{
	posicionX = 23;
	posicionY = 5;

	diaNoche = "noche";
	valorSol = 15;
	costoSol = 25;
	frecuenciaGeneracion = 20;
	cantSolesPorCiclo = 1;
	color = "amarillo";
	tiempoVida = 0;

	if (_tama�o == "grande" || _tama�o == "g" || _tama�o == "gigante")
		tama�o = "grande";
	else
		tama�o = "peque�o";
}

SetaSolar::SetaSolar(float _posicionX, float _posicionY, string _tama�o)
{
	posicionX = _posicionX;
	posicionY = _posicionY;

	diaNoche = "noche";
	valorSol = 15;
	costoSol = 25;
	frecuenciaGeneracion = 20;
	cantSolesPorCiclo = 1;
	color = "amarillo";
	tiempoVida = 0;

	if (_tama�o == "grande" || _tama�o == "g" || _tama�o == "gigante")
		tama�o = "grande";
	else
		tama�o = "peque�o";
}

void SetaSolar::aparecer()
{
	posicionX = 5;
	posicionY = 9;

	cout << "Una Seta Solar aparecio en la posicion (" << posicionX << "," << posicionY << ")" << endl;
	cout << "Datos de la Seta Solar: ";
	cout << "Vida = " << vida << endl;
	cout << "costo = " << costoSol << " soles" << endl;
	cout << "posicion = (" << posicionX << "," << posicionY << ")" << endl;
	cout << "frecuencia generacion = " << frecuenciaGeneracion;
	cout << "cantidad de soles por ciclo = " << cantSolesPorCiclo << endl;
	cout << "valor del sol que genera = " << valorSol << endl;
	cout << "dia o noche = " << diaNoche << endl;
	cout << "tama�o = " << tama�o << endl;
}

void SetaSolar::aparecer(float _posicionX, float _posicionY)
{
	posicionX = _posicionX;
	posicionY = _posicionY;

	cout << "Una Seta Solar aparecio en la posicion (" << posicionX << "," << posicionY << ")" << endl;
	cout << "Datos de la Seta Solar: ";
	cout << "Vida = " << vida << endl;
	cout << "costo = " << costoSol << " soles" << endl;
	cout << "posicion = (" << posicionX << "," << posicionY << ")" << endl;
	cout << "frecuencia generacion = " << frecuenciaGeneracion;
	cout << "cantidad de soles por ciclo = " << cantSolesPorCiclo << endl;
	cout << "valor del sol que genera = " << valorSol << endl;
	cout << "dia o noche = " << diaNoche << endl;
	cout << "tama�o = " << tama�o << endl;
}

void SetaSolar::cambiarTama�o()
{
	if (tiempoVida > 1000)
	{
		tama�o = "grande";
		cantSolesPorCiclo = 50;
	}
	else
	{
		cout << "La Seta Solar de la posicion (" << posicionX << "," << posicionY << ") sigue siendo peque�a porque aun es joven" << endl;
	}
	tiempoVida++;

}
