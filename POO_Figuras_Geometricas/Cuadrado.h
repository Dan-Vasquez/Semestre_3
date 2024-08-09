//
// Created by sebas on 3/18/2022.
//

#ifndef FIGURAS_GEOMETRICAS_CUADRADO_H
#define FIGURAS_GEOMETRICAS_CUADRADO_H

#include "Figuras.h"

class Cuadrado : class Figura{
public:
    float lado;
private:
    void setLado();
    float setArea(float lado);
    float setPerimetro(float lado);
    float getArea();
    float getPerimetro();
    void mostraArea();
    void mostraPerimetro();
    void mostraFigura();
    void sumarArea();
};

#endif //FIGURAS_GEOMETRICAS_CUADRADO_H
