#pragma once
#include <string>
using namespace std;

class Sol
{
private:
	float posX;
	float posY;
	string color;
	int cantEnergia;
	int tiempoEspera;

public:
	Sol();
	//Metodos accesores
	void setposX(int _posX) { posX = _posX; }
	float getposX() { return posX; }

	void setposY(int _posY) { posY = _posY; }
	float getposY() { return posY; }

	void setcolor(string _color) { color = _color; }
	string getcolor() { return color; }

	void setcantEnergia(int _cantEnergia) { cantEnergia = _cantEnergia; }
	int getcantEnergia() { return cantEnergia; }

	void settiempoEspera(int _tiempoEspera) { tiempoEspera = _tiempoEspera; }
	int gettiempoEspera() { return tiempoEspera; }

	//Metodos directos
	void aparecer(float posSiguienteX, float posSiguienteY);
	void caida();
	void desaparecer();

};

