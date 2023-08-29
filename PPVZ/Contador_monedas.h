#pragma once
class Contador_monedas
{
	int contador;
	int sol;
	float posicionX;
	float posicionY;
public:
	//constructor
	Contador_monedas();
	Contador_monedas(int _contador, int _sol, float _posicionX, float _posicionY);

	//metodos directos
	void acumular(int sol, int contador);
	void actualizar(int contador);

	//metodos accesores
	void setContador(int _contador) { contador = _contador; }
	int getContador() { return contador; }

	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	float getPosicionX() { return posicionX; }

	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	float getPosicionY() { return posicionY; }
};
