//
// Created by sebas on 3/18/2022.
//

#ifndef FIGURAS_GEOMETRICAS_RECTANGULO_H
#define FIGURAS_GEOMETRICAS_RECTANGULO_H

#include "Figuras.h"

class Rectangulo : class Figura{
public:
    float base;
    float altura;
private:
    void setAltura();
    void setBase();
    float getArea();
    float getPerimetro();
    void mostraArea();
    void mostraPerimetro();
    void mostraFigura();
    void sumarArea();
};

#endif //FIGURAS_GEOMETRICAS_RECTANGULO_H
