#include <iostream>
#include <string>
using namespace std;
class Zombie
{
public:
	float posicionX;
	float posicionY;
public:
	string color;
	int vida;
	float tamaño;
	int velocidad_movimiento;
	int velocidad_ataque;
	int daño;
	int daño_planta;

public:
	Zombie();
	Zombie(float _posicionX, float _posicionY, string _color, int _vida, float _tamaño, int _velocidad_movimiento, int _velocidad_ataque, int _daño, int _daño_planta);
	//metodos directos
	void Caminar(float posicionX, float posicionY, int velocidad_movimiento);
	void Atacar(int velocidad_ataque, int daño);
	void Morir(int vida);
	void recibirDaño(int vida, int daño_planta);
	void explotarCabeza(int vida);

	//metodos accesores
	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	float getPosicionX() { return posicionX; }

	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	float getPosicionY() { return posicionY; }

	void setColor(string _color) { color = _color; }
	string getColor() { return color; }

	void setVida(int _vida) { vida = _vida; }
	int getVida() { return vida; }


	void setTamaño(float _tamaño) { tamaño = _tamaño; }
	float getTamaño() { return tamaño; }

	void setVelocidad_movimiento(int _velocidad_movimiento) { velocidad_movimiento = _velocidad_movimiento; }
	int getVelocidad_movimiento() { return velocidad_movimiento; }

	void setVelocidad_ataque(int _velocidad_ataque) { velocidad_ataque = _velocidad_ataque; }
	int getVelocidad_ataque() { return velocidad_ataque; }

	void setDaño(int _daño) { daño = _daño; }
	int getDaño() { return daño; }

	void setDaño_planta(int _daño_planta) { daño_planta = _daño_planta; }
	int getDaño_planta() { return daño_planta; }
};


