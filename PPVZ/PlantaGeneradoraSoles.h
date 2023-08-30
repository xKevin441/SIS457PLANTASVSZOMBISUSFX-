#pragma once
#include "Planta.h"
class PlantaGeneradoraSoles :
    public planta
{
protected:
    int valorSol;
    int frecuenciaGeneracion;
    int cantSolesPorCiclo;
    string diaNoche;

public:
    //Metodos constructores
    PlantaGeneradoraSoles() {};

    //Metodos accesores
    void setValorSol(int _valorSol) { valorSol = _valorSol; }
    void setFrecuenciaGeneracion(int _frecuenciaGeneracion) { frecuenciaGeneracion = _frecuenciaGeneracion; }
    void setCantSolesPorCiclo(int _cantSolesPorCiclo) { cantSolesPorCiclo = _cantSolesPorCiclo; }

    int getValorSol() { return valorSol; }
    int getFrecuenciaGeneracion() { return frecuenciaGeneracion; }
    int getCantSolesPorCiclo() { return cantSolesPorCiclo; }

    //Metodos comunes
    void generarSol();
    void recogerSol();

};

