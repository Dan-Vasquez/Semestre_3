//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    float lowestResult = 0.5;
    int numMaxRandom = 13;
    int numMinRandom = 1;

    srand(time(nullptr));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Que desea hacer?" << endl;
    cout << "1. Rendirse." << endl;
    cout << "2. Jugar." << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        return lowestResult * gonzosApostar;
    }

    // El jugador decidio jugar entonces calcula su numero
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Numero casino: " << numeroCasino << endl;

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float Mayor13::calcularResultado(float gonzosApostar) {

    float maxResult = 2;
    float lowestResult = 0;
    if (numeroJugador > numeroCasino) {
        return maxResult * gonzosApostar;
    } else {
        return lowestResult;
    }
}

void Mayor13::mostrarReglas(){
    cout << "   BIENVENIDO :D\n";
    cout << "===================\n";
    cout << "Reglas de juego:\n\n";
    cout << "El sistema genera un numero aleatorio para el usuario entre 1 y 13.\nAhi el usuario debe tener 2 opciones para continuar, la primera: darse por perdido antes de que se genere el numero que le corresponde a casino (en este caso perdera la mitad del dinero apostado).\nLa segunda: jugar, es decir, que se genere el numero aleatorio del casino.\n\n";
    cout << "En caso de que el usuario saque un numero menor o igual que el casino, perdera todo lo apostado.\nEn otro caso, el usuario ganara el doble de lo apostado (es decir, apostado x 2).\n\n";
}


