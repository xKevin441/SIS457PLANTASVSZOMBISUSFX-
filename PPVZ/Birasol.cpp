#include "Birasol.h"
#include "Sol.h"

Birasol::Birasol()
{
	posicionX = 8;
	posicionY = 12;

	nombre = "Birasol";
	vida = 50;
	costoSol = 150;
	estado = true;
	cantSolesPorCiclo = 2;
	valorSol = 25;
	frecuenciaGeneracion = 25;
	diaNoche = "dia";

	colorPetalos = "amarillo";
	colorHojas = "verde";
	colorRostros = "naranja";
	numCabezas = 2;
}

Birasol::Birasol(float _posicionX, float _posicionY)
{
	posicionX = _posicionX;
	posicionY = _posicionY;

	nombre = "Birasol";
	vida = 50;
	costoSol = 150;
	estado = true;
	cantSolesPorCiclo = 2;
	valorSol = 25;
	frecuenciaGeneracion = 25;
	diaNoche = "dia";

	colorPetalos = "amarillo";
	colorHojas = "verde";
	colorRostros = "naranja";
	numCabezas = 2;
}

void Birasol::aparecer()
{
	cout << "Un Birasol aparecio en la posicion (" << posicionX << "," << posicionY << ")" << endl;
	cout << "Datos del Birasol: ";
	cout << "vida = " << vida << endl;
	cout << "costo = " << costoSol << " soles" << endl;
	cout << "posicion = (" << posicionX << "," << posicionY << ")" << endl;
	cout << "frecuencia generacion = " << frecuenciaGeneracion << endl;
	cout << "cantidad de soles por ciclo = " << cantSolesPorCiclo << endl;
	cout << "valor del sol que genera = " << valorSol << endl;
	cout << "dia o noche = " << diaNoche << endl;
	cout << "numero de cabezas = " << numCabezas << endl;
}

void Birasol::aparecer(float _posX, float _posY)
{
	posicionX = _posX;
	posicionY = _posY;

	cout << "Un Girasol aparecio en la posicion (" << posicionX << "," << posicionY << ")" << endl;
	cout << "Datos del Girasol: ";
	cout << "vida = " << vida << endl;
	cout << "costo = " << costoSol << " soles" << endl;
	cout << "posicion = (" << posicionX << "," << posicionY << ")" << endl;
	cout << "frecuencia generacion = " << frecuenciaGeneracion;
	cout << "cantidad de soles por ciclo = " << cantSolesPorCiclo << endl;
	cout << "valor del sol que genera = " << valorSol << endl;
	cout << "dia o noche = " << diaNoche << endl;
	cout << "numero de cabezas = " << numCabezas << endl;
}

void Birasol::generarSoles()
{
	cout << "El Birasol de la posicion (" << posicionX << "," << posicionY << ") esta generando " << cantSolesPorCiclo << " soles" << endl;
	Sol solGenerado1(posicionX, posicionY);
	Sol solGenerado2(posicionX +1, posicionY);

	solGenerado1.aparecer();
	solGenerado2.aparecer();

	int tiempoEspera = solGenerado1.getTiempoEspera();
	while (tiempoEspera > 0)
	{
		tiempoEspera--;
	}

	solGenerado1.desaparecer();
	solGenerado2.desaparecer();
}
