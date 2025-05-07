#include <iostream>
#include "Complexo.h"

using namespace std;

int main() {
    Complexo c1(3.0, 4.0);
    Complexo c2(1.0, 2.0);

    cout << "Número complexo c1: ";
    c1.imprimir();
    cout << endl;

    cout << "Número complexo c2: ";
    c2.imprimir();
    cout << endl;

    Complexo soma = c1.somar(c2);
    cout << "Soma c1 + c2: ";
    soma.imprimir();
    cout << endl;

    Complexo subtracao = c1.subtrair(c2);
    cout << "Subtração c1 - c2: ";
    subtracao.imprimir();
    cout << endl;

    Complexo multiplicacao = c1.multiplicar(c2);
    cout << "Multiplicação c1 * c2: ";
    multiplicacao.imprimir();
    cout << endl;

    Complexo divisao = c1.dividir(c2);
    cout << "Divisão c1 / c2: ";
    divisao.imprimir();
    cout << endl;

    cout << "Módulo de c1: " << c1.modulo() << endl;
    cout << endl;

    cout << "Número de objetos Complexo instanciados: " << Complexo::getContador() << endl;
    cout << endl;

    return 0;
}
