#pragma once
class contadorSoles
{
private:
	float posicionX;
	float posicionY;
	int contador;
public:
	contadorSoles();
	//Metodos accesores
	void setposicionX(int _posicionX) { posicionX = _posicionX; }
	float getposicionX() { return posicionX; }
	void setposicionY(int _posicionY) { posicionY = _posicionY; }
	float getposicionY() { return posicionY; }
	void setcontador(int _contador) { contador = _contador; }
	int getcontador() { return contador; }


	//Metodos directos
	void acumularSol(int solCapturado);
	void disminuirSol(int costoPlanta);
};

