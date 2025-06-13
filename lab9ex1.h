#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>
#include <vector>

class Polinomio {
private:
    int grau;
    std::vector<double> coeficientes;

public:
    Polinomio(int grau = 0);

    friend std::istream& operator>>(std::istream& in, Polinomio& p);
    friend std::ostream& operator<<(std::ostream& out, const Polinomio& p);

    Polinomio operator+(const Polinomio& outro) const;
    Polinomio operator-(const Polinomio& outro) const;

    double operator[](int index) const;  // Sobrecarga do operador []
    double& operator[](int index);       // Sobrecarga do operador []
};

#endif
