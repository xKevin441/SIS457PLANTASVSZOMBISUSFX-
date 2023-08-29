#pragma once
#include <string>
using namespace std;

class Temporizador_carga_plantas
{
private:
	float tiempo_soles;
	int posiscionX;
	int posicionY;
	int valor_soles;

public:
	Temporizador_carga_plantas();
	//Metodos accesores
	void setposiscionX(int _posiscionX) { posiscionX = _posiscionX; }
	float getposiscionX() { return posiscionX; }
	void setposicionY(int _posicionY) { posicionY = _posicionY; }
	float getposicionY() { return posicionY; }
	void setvalor_soles(int _valor_soles) { valor_soles = _valor_soles; }
	int getvalor_soles() { return valor_soles; }
	void set_tiempo_soles(float _tiempo_soles) { tiempo_soles = _tiempo_soles; }
	float get_tiempo_soles() { return tiempo_soles; }

	//Metodos directos
	void spawn_soles(float tiempo_soles);
	void caida_soles(int posicionX, int posicionY);
	void cantidad—sol(int valor_soles);


};

