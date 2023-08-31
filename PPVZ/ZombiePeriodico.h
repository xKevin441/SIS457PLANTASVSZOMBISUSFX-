#pragma once
#include "ZombieCubierto.h"
class ZombiePeriodico : public ZombieCubierto
{
private:
	string vestimenta;

public:
	ZombiePeriodico() {}

	//Metodos accesores
	void setVestimenta(string _vestimenta) { vestimenta = _vestimenta; };
	string getVestimenta() { return vestimenta; }

	//Metodos directos
	void enojarse();
	void duracionProteccion(int danioPlanta) override;

};


