#pragma once
#include <iostream>
using namespace std;
class TarjetasPlantas
{
private:
	string planta;
	int tiempoRecarga;
	bool estado; // "true" = disponible para plantar, "false" = cargando
	int progresoCarga;
	int costo;
	int ubicacion;
	string colorFondo;


public:
	//Metodos constructores


	//Metodos accesores
	void setPlanta(string _planta) { planta = _planta; }
	void setTiempoRecargar(int _tiempoRecarga) { tiempoRecarga = _tiempoRecarga; }
	void setCosto(int _costo) { costo = _costo; }
	void setEstado(bool _estado) { estado = _estado; }
	void setProgresoCarga(int _progresoCarga) { progresoCarga = _progresoCarga; }
	void setColorFondo(string _colorFondo) { colorFondo = _colorFondo; }

	string getPlanta() { return planta; }
	int getTiempoRecarga() { return tiempoRecarga; }
	int getCosto() { return costo; }
	bool getEstado() { return estado; }
	int getProgresoCarga() { return progresoCarga; }
	string getColorFondo() { return colorFondo; }

	//Metodos comunes
	void cargando();
	void usarPlanta(int numSoles);
	void dibujarTarjeta(int ubicacion);
};
