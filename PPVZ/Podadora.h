#pragma once
#include <string>
using namespace std;
class Podadora
{
private:
	int coordenadaX;
	int coordenadaY;
	string tipo;
	int velocidad;
	string estado;
	int cambiarPosicion;
	int mover;
	int posicionY;
	int triturarZombie;

public:
	void sepcordenadaX(int _coordenadaX) { coordenadaX = coordenadaX; }
	float getposX() { return coordenadaX; }

	void sepmover(int _velocidadX) { velocidad = velocidad; }
	float getmoverX() { return velocidad; }

	void sepencender(int _estado) { estado = estado; }
	string getencender() { return estado; }

	void septriturarZombie(int _triturarZombie) { triturarZombie = triturarZombie; }
	float getTriturarZombie() { return triturarZombie; }

	void sepSonido(int _estado) { estado = estado; }
	string getSonido() { return estado; }

	void sepcambiarPosicion(int _posicionY) { posicionY = posicionY; }
	float getcambiarPosicion() { return posicionY; }

	//metodos directos
	void triturarZombie();

	void sonido(int estado);

};

