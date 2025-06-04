#include "Complexo.h"
#include <cmath>
#include <iostream>

using namespace std;

int Complexo::contador = 0;

Complexo::Complexo() : parteReal(0), parteImaginaria(0) {
    contador++;
    cout << "Construtor chamado: Novo número complexo instanciado (0 + 0i)" << endl;
    cout << endl;
}

Complexo::Complexo(double real, double imag) : parteReal(real), parteImaginaria(imag) {
    contador++;
    cout << "Construtor chamado: Novo número complexo instanciado (" 
         << parteReal << " + " << parteImaginaria << "i)" << endl;
    cout << endl;
}

Complexo Complexo::somar(const Complexo& outro) {
    return Complexo(parteReal + outro.parteReal, parteImaginaria + outro.parteImaginaria);
}

Complexo Complexo::subtrair(const Complexo& outro) {
    return Complexo(parteReal - outro.parteReal, parteImaginaria - outro.parteImaginaria);
}

Complexo Complexo::multiplicar(const Complexo& outro) {
    double real = parteReal * outro.parteReal - parteImaginaria * outro.parteImaginaria;
    double imag = parteReal * outro.parteImaginaria + parteImaginaria * outro.parteReal;
    return Complexo(real, imag);
}

Complexo Complexo::dividir(const Complexo& outro) {
    double denom = outro.parteReal * outro.parteReal + outro.parteImaginaria * outro.parteImaginaria;
    double real = (parteReal * outro.parteReal + parteImaginaria * outro.parteImaginaria) / denom;
    double imag = (parteImaginaria * outro.parteReal - parteReal * outro.parteImaginaria) / denom;
    return Complexo(real, imag);
}

double Complexo::modulo() {
    return sqrt(parteReal * parteReal + parteImaginaria * parteImaginaria);
}

void Complexo::imprimir() const {
    cout << parteReal;
    if (parteImaginaria >= 0) {
        cout << " + " << parteImaginaria << "i" << endl;
    } else {
        cout << " - " << -parteImaginaria << "i" << endl;
    }
}

int Complexo::getContador() {
    return contador;
}

Complexo::~Complexo() {
    contador--;
    cout << "Destruidor chamado: Número complexo destruído (" 
         << parteReal << " + " << parteImaginaria << "i)" << endl;
    cout << endl;  // Espaço após destruir o objeto
}
