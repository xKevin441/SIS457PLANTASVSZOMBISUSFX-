#pragma once
#include <string>
#include "Zombie.h"
using namespace std;

class ZombieCubierto : public Zombie
{
protected:
	string tipoProteccion;
	int resistenciaProteccion;
	int estadoProteccion;

public:
	ZombieCubierto();

	//Metodos accesores
	void setTipoProteccion(string _tipoProteccion) { tipoProteccion = _tipoProteccion; };
	string getTipoProteccion() { return tipoProteccion; }

	void setResistenciaProteccion(int _resistenciaProteccion) { resistenciaProteccion = _resistenciaProteccion; };
	int getResistenciaProteccion() { return resistenciaProteccion; }

	void setEstadoProteccion(int _estadoProteccion) { estadoProteccion = _estadoProteccion; };
	int getEstadoProteccion() { return estadoProteccion; }

	//Metodos directos
	virtual void duracionProteccion(int danioPlanta);


};

