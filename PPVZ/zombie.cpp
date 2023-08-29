#include "Zombie.h"
#include <iostream>
using namespace std;

Zombie::Zombie()
{
	posicionX = 50.0f;
	posicionY = 10.0f;
	color = "verde";
	vida = 500;
	tamaño = 15.0f;
	velocidad_movimiento = 5;
	velocidad_ataque = 8;
	daño = 25;
	daño_planta = 20;
}

Zombie::Zombie(float _posicionX, float _posicionY, string _color, int _vida, float _tamaño, int _velocidad_movimiento, int _velocidad_ataque, int _daño, int _daño_planta)
{
	posicionX = _posicionX;
	posicionY = _posicionY;
	color = _color;
	vida = _vida;
	tamaño = _tamaño;
	velocidad_movimiento = _velocidad_movimiento;
	velocidad_ataque = _velocidad_ataque;
	daño = _daño;
	daño_planta = _daño_planta;
}

void Zombie::Caminar(float posicionX, float posicionY, int velocidad_movimiento)
{
	float caminar = posicionX + velocidad_movimiento;
}

void Zombie::Atacar(int velocidad_ataque, int daño)
{
	int atacar = velocidad_ataque + daño;
}

void Zombie::Morir(int vida)
{
	vida = 0;
	cout << "El zombie murió" << endl;
}

void Zombie::recibirDaño(int vida, int daño_planta)
{
	vida = vida - daño_planta;
}

void Zombie::explotarCabeza(int vida)
{
	vida = 0;
	cout << "El zombie murió" << endl;
}
