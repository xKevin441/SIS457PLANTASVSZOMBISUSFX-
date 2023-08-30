#include <iostream>
#include "Zombie.h"
#include "Planta.h"
#include "contadorSoles.h"
#include "Sol.h"
#include "Moneda.h"
#include "tarjetasPlantas.h"
#include "Contador_monedas.h"
#include "Pala.h"
#include "Podadora.h"
#include "Rrastrillo.h"
#include "Temporizador_carga_plantas.h"
#include "PlantaGeneradoraSoles.h"
#include "Girasol.h"
#include "Birasol.h"
#include "SetaSolar.h"


using namespace std;

int main() 
{
	planta PlantaGenerica;

	PlantaGenerica.recirbirDanio(25);
	PlantaGenerica.atacar();
	cout << "Nombre planta: " << PlantaGenerica.getNombre() << endl;
	cout << "Posicion X planta: " << PlantaGenerica.getPosicionX() << endl;
	cout << "Posicion Y planta: " << PlantaGenerica.getPosicionY() << endl;
	cout << "Vida planta: " << PlantaGenerica.getVida() << endl;
	cout << "Costo en soles planta: " << PlantaGenerica.getCostoSol() << endl;
	cout << "Velocidad de ataque planta: " << PlantaGenerica.getVelocidadAtaque() << endl;
	cout << "Rango de ataque planta: " << PlantaGenerica.getRangoAtaque() << endl;
	cout << "Estado planta: " << PlantaGenerica.getEstado() << endl;
	cout << "Daño planta: " << PlantaGenerica.getDaño() << endl;
	cout << "Velocidad de movimiento planta: " << PlantaGenerica.getVelocidadMovimientoEs() << endl;


	contadorSoles contadorDeSoles;

	contadorDeSoles.acumularSol(25);
	contadorDeSoles.disminuirSol(20);
	cout << "\nCantidad de soles: " << contadorDeSoles.getcontador() << endl;


	Sol sol;
	sol.aparecer(20.0f, 50.0f);
	sol.desaparecer();
	


	moneda moneda;
	moneda.aparecer(50, 100);
	moneda.desaparecer();


	TarjetasPlantas tarjetasDePlantas;

	tarjetasDePlantas.cargando();
	tarjetasDePlantas.usarPlanta(25);
	tarjetasDePlantas.dibujarTarjeta(50);
	cout << "\nNombre planta: " << tarjetasDePlantas.getPlanta() << endl;
	cout << "Costo planta: " << tarjetasDePlantas.getCosto() << endl;
	cout << "Tiempo de recarga planta: " << tarjetasDePlantas.getTiempoRecarga() << endl;
	cout << "Progreso de carga planta: " << tarjetasDePlantas.getProgresoCarga() << endl;
	cout << "Estado planta: " << tarjetasDePlantas.getEstado() << endl;
	cout << "Color de fondo planta: " << tarjetasDePlantas.getColorFondo() << endl; 


	Contador_monedas Contador_de_monedas;
	Contador_de_monedas.actualizar(50);
	Contador_de_monedas.acumular(100, 50);
	cout << "\nCantidad de monedas: " << Contador_de_monedas.getContador() << endl;
	cout << "Moneda Posicion en X: " << Contador_de_monedas.getPosicionX() << endl;
	cout << "Moneda Posicion en Y: " << Contador_de_monedas.getPosicionY() << endl;


	Pala Pala;
	Pala.desplazar(25.5, 50.2);
	Pala.cambiarEstado();
	Pala.quitarPlanta(5.0, 10.0);
	cout << "\nPosicion en X: " << Pala.getPosicionX() << endl;
	cout << "Posicion en Y: " << Pala.getPosicionY() << endl;
	cout << "Color pala:"  << Pala.getColor() << endl;


	Podadora Podadora;
	Podadora.sepencender(1);
	Podadora.septriturarZombie(1);
	Podadora.sonido(1);
	cout << "\nEstado podadora: " << Podadora.getencender() << endl;
	cout << "Podadora Posicion en X: " << Podadora.getmoverX() << endl;


	Rastrillo rastrillo;
	rastrillo.contacto(1);
	rastrillo.destruirse();
	cout << "\nEstado rastrillo: " << rastrillo.getDañoImpacto() << endl;
	cout << "Rastrillo Posicion en X: " << rastrillo.getPosicionX() << endl;
	cout << "Rastrillo Posicion en Y: " << rastrillo.getPosicionY() << endl;
	cout << "Daño impacto: " << rastrillo.getDañoImpacto() << endl;


	Temporizador_carga_plantas temporizador_carga_plantas;
	temporizador_carga_plantas.spawn_soles(20);
	temporizador_carga_plantas.cantidad—sol(25);
	temporizador_carga_plantas.caida_soles(25.0, 30.0);
	cout << "Tiempo soles: " << temporizador_carga_plantas.get_tiempo_soles() << endl;


	Zombie ZombieGenerico;
	ZombieGenerico.Atacar(25, 50);
	ZombieGenerico.Caminar(10, 10, 20);
	ZombieGenerico.Morir(1);
	ZombieGenerico.explotarCabeza(0);


	Girasol girasol(20, 20);
	girasol.aparecer();
	girasol.movimientoEstatico();
	girasol.generarSol();
	girasol.recogerSol();
	contadorDeSoles.acumularSol(girasol.getValorSol());
	
	

	Birasol birasol(23, 20);
	birasol.aparecer();
	birasol.movimientoEstatico();
	birasol.generarSoles();


	SetaSolar setaSolar(26, 20);
	setaSolar.aparecer();
	setaSolar.movimientoEstatico();
	setaSolar.generarSol();
	setaSolar.recogerSol();
	contadorDeSoles.acumularSol(setaSolar.getValorSol());
	setaSolar.cambiarTamaño();
	setaSolar.generarSol();
	setaSolar.recogerSol();
	contadorDeSoles.acumularSol(setaSolar.getValorSol());
	


	return 0;
}