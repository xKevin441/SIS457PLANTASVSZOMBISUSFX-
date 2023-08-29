#pragma once
#include <string>
using namespace std;

class Barra_de_progreso
{
private:
	//datos privados 
	float porcentaje;
	int mover;
	string color;
	int oleada;
	int barra;
	string barra_tono;
	int oleada;
	string plantas;
	int nivel;
	int tiempo;

public:
	//metodos de acceso publico
	void sepbarra(int _porcentaje) { porcentaje = porcentaje; }
	float getbarra() { return barra; }
	void sepbarra_tono(string color) { color = color; }
	float getbarra_tono() { return barra; }
	void sepnivel(int _oleada) { oleada = oleada; }
	float getnivel() { return oleada; }
	void sepnivel(int _nivel) { nivel = nivel; }
	float getnivel() { return nivel; }
	void septiempo(int _tiempo) { tiempo = tiempo; }
	float gettiempo() { return tiempo; }
};