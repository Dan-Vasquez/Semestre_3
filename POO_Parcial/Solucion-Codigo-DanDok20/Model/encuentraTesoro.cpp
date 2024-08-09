//
// Created by dhasc on 5/04/2022.
//

#include "encuentraTesoro.h"

float encuentraTesoro::jugar(float gonzosApostar) {
    int opcion;
    int posicion1, posicion2, posicion3;
    float gonzosResultado;
    float lowestResult = 0;
    int numMaxRandom = 9;
    int numMinRandom = 1;


    srand(time(nullptr));
    cout << "Que desea hacer?" << endl;
    cout << "1. Rendirse." << endl;
    cout << "2. Jugar." << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        return lowestResult;
    }
    cout << "Elige la primera posicion: ";
    cin >> posicion1;
    numeroJugador = posicion1;
    cout << "Elige la segunda posicion: ";
    cin >> posicion2;
    numeroJugador2 = posicion2;
    while(numeroJugador == numeroJugador2){
        cout << "Elige una posicion no repetida: ";
        cin >> posicion2;
        numeroJugador2 = posicion2;
    }
    cout << "Elige la tercera posicion: ";
    cin >> posicion3;
    numeroJugador3 = posicion3;
    while(numeroJugador2 == numeroJugador3 || numeroJugador == numeroJugador3){
        cout << "Elige una posicion no repetida: ";
        cin >> posicion3;
        numeroJugador3 = posicion3;
    }

    // El jugador decidio jugar entonces calcula su numero
    numeroCasino = numMinRandom + rand() % numMaxRandom; // num del 1 al 9
    numeroCasino2 = numMinRandom + rand() % numMaxRandom; // num del 1 al 9
    while(numeroCasino == numeroCasino2){
        numeroCasino2 = numMinRandom + rand() % numMaxRandom;
    }
    numeroCasino3 = numMinRandom + rand() % numMaxRandom; // num del 1 al 9
    while(numeroCasino2 == numeroCasino3 || numeroCasino3 == numeroCasino){
        numeroCasino3 = numMinRandom + rand() % numMaxRandom;
    }

    if(numeroJugador == numeroCasino || numeroJugador == numeroCasino2 || numeroJugador == numeroCasino3 ){
        cantidadAciertos += 1;
    }
    if(numeroJugador2 == numeroCasino || numeroJugador2 == numeroCasino2 || numeroJugador2 == numeroCasino3 ){
        cantidadAciertos += 1;
    }
    if(numeroJugador3 == numeroCasino || numeroJugador3 == numeroCasino2 || numeroJugador3 == numeroCasino3 ){
        cantidadAciertos += 1;
    }

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float encuentraTesoro::calcularResultado(float gonzosApostar) {
    float maxResult = 3;
    float resultadoMedioAlto = 2;
    float resultadoMedioBajo = 1;
    float lowestResult = 0;

    if (cantidadAciertos == maxResult) {
        return maxResult * gonzosApostar;
    }
    else if(cantidadAciertos == resultadoMedioAlto){
        return resultadoMedioAlto * gonzosApostar;
    }
    else if(cantidadAciertos == resultadoMedioBajo){
        return resultadoMedioBajo * gonzosApostar;
    }
    else {
        return -gonzosApostar;
    }
}

void encuentraTesoro::mostrarReglas(){
    cout << "   BIENVENIDO :D\n";
    cout << "===================\n";
    cout << "Reglas de juego:\n\n";
    cout << "El sistema genera 3 numero aleatorio para el usuario entre 1 y 9.\nAhi el usuario debe tener 2 opciones para continuar, la primera: darse por perdido antes de indicar sus numeros (en este caso perdera todo lo apostado).\nLa segunda: jugar, es decir, que el usuario proporcione 3 numeros diferentes entre el 1 y 9 para encontrar los tesoros.\n\n";
    cout << "En caso de que el usuario no concida con ningun numero del casino, perdera todo lo apostado.\nEn otro caso, el usuario ganara la cantidad multiplicada por el numero de aciertos que tenga (es decir, apostado x 3, x 2 y x 1).\n\n";
}
