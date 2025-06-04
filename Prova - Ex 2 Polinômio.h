#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>
#include <vector>
using namespace std;

class Polinomio {
private:
    int grau;
    vector<double> coeficientes;

public:
    Polinomio(int grau = 0);

    friend istream& operator>>(istream& in, Polinomio& p);
    friend ostream& operator<<(ostream& out, const Polinomio& p);

    Polinomio operator+(const Polinomio& outro) const;
    Polinomio operator-(const Polinomio& outro) const;

    bool operator>(const Polinomio& outro) const;
    bool operator<(const Polinomio& outro) const;
    bool operator>=(const Polinomio& outro) const;
    bool operator<=(const Polinomio& outro) const;

    bool operator==(const Polinomio& outro) const;
    bool operator!=(const Polinomio& outro) const;

    operator float() const;
};

#endif
