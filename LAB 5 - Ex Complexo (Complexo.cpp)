#include "Complexo.h"
#include <cmath>
#include <iostream>

using namespace std;

int Complexo::contador = 0;

Complexo::Complexo() : parteReal(0), parteImaginaria(0) {}

Complexo::Complexo(double real, double imag) : parteReal(real), parteImaginaria(imag) {}

Complexo::Complexo(const Complexo& outro) : parteReal(outro.parteReal), parteImaginaria(outro.parteImaginaria) {}

Complexo Complexo::operator+(const Complexo& outro) {
    return Complexo(parteReal + outro.parteReal, parteImaginaria + outro.parteImaginaria);
}

Complexo Complexo::operator-(const Complexo& outro) {
    return Complexo(parteReal - outro.parteReal, parteImaginaria - outro.parteImaginaria);
}

Complexo Complexo::operator*(const Complexo& outro) {
    double real = parteReal * outro.parteReal - parteImaginaria * outro.parteImaginaria;
    double imag = parteReal * outro.parteImaginaria + parteImaginaria * outro.parteReal;
    return Complexo(real, imag);
}

Complexo Complexo::operator/(const Complexo& outro) {
    double denom = outro.parteReal * outro.parteReal + outro.parteImaginaria * outro.parteImaginaria;
    double real = (parteReal * outro.parteReal + parteImaginaria * outro.parteImaginaria) / denom;
    double imag = (parteImaginaria * outro.parteReal - parteReal * outro.parteImaginaria) / denom;
    return Complexo(real, imag);
}

void Complexo::imprimir() const {
    cout << parteReal;
    if (parteImaginaria >= 0) {
        cout << " + " << parteImaginaria << "i" << endl;
    } else {
        cout << " - " << -parteImaginaria << "i" << endl;
    }
}

Complexo::~Complexo() {}
