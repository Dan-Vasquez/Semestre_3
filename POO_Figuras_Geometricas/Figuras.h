//
// Created by sebas on 3/18/2022.
//

#ifndef FIGURAS_GEOMETRICAS_H
#define FIGURAS_GEOMETRICAS_H

#include <iostream>
#include <vector>

using namespace std;

class Figura{
protected:
    float area;
    float perimetro;
private:
    virtual float setArea();
    virtual float setPerimetro();
    virtual float getArea();
    virtual float getPerimetro();
    virtual void mostraArea();
    virtual void mostraPerimetro();
    virtual void mostraFigura();
    virtual void sumarArea();
};

#endif //FIGURAS_GEOMETRICAS_H
