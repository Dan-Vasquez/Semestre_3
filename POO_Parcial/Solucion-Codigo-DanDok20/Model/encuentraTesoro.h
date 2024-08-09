//
// Created by dhasc on 5/04/2022.
//

#ifndef CASINO_POLIMORFISMO_ENCUENTRATESORO_H
#define CASINO_POLIMORFISMO_ENCUENTRATESORO_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>

class encuentraTesoro: public Juego {

protected:
    int numeroCasino2;
    int numeroCasino3;
    int numeroJugador2;
    int numeroJugador3;
    float cantidadAciertos = 0;
    float calcularResultado(float gonzosApostar) override;

public:
    ~encuentraTesoro() override = default;
    float jugar(float gonzosApostar) override;
    void mostrarReglas() override;

};


#endif //CASINO_POLIMORFISMO_ENCUENTRATESORO_H
