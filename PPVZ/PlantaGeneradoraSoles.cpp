#include "PlantaGeneradoraSoles.h"
#include "Sol.h"

void PlantaGeneradoraSoles::generarSol()
{
	Sol solGenerado(posicionX, posicionY, valorSol);
	if (nombre != "Birasol")
	{
		cout << "La Planta " << nombre << " genero un Sol de cantEnergia = " << valorSol << " en la posicicion (" << posicionX << "," << posicionY << ")" << endl;
		solGenerado.aparecer();

		int tiempoEspera = solGenerado.getTiempoEspera();
		while (tiempoEspera > 0)
		{
			tiempoEspera--;
		}
	}
	

	else if (nombre == "Birasol")
	{
		cout << "El Birasol de la posicion (" << posicionX << "," << posicionY << ") esta generando " << cantSolesPorCiclo << " soles" << endl;
		Sol solGenerado1(posicionX, posicionY);
		Sol solGenerado2(posicionX + 1, posicionY);

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

}

void PlantaGeneradoraSoles::recogerSol()
{
	cout << "Se recogio " << cantSolesPorCiclo << " soles" << endl;
}
