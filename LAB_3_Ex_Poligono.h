#ifndef CPOLIGONO_H
#define CPOLIGONO_H

#include <iostream>
#include <cmath>

class CPoligono {
private:
    int lados;
    int comprimentoLado;

public:
    CPoligono(int n, int c); 

    double calcularArea() const;
    double calcularPerimetro() const;
    void imprimirNome() const;
};

#endif
