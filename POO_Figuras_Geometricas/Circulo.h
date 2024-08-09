//
// Created by sebas on 3/18/2022.
//

#ifndef FIGURAS_GEOMETRICAS_CIRCULO_H
#define FIGURAS_GEOMETRICAS_CIRCULO_H

#include "Figuras.h"

class Circulo : class Figura{
public:
    float radio;
private:
    void setRadio();
    float setArea(float radio);
    float setPerimetro(float radio);
    float getArea();
    float getPerimetro();
    void mostraArea();
    void mostraPerimetro();
    void mostraFigura();
    void sumarArea();
};


#endif //FIGURAS_GEOMETRICAS_CIRCULO_H
