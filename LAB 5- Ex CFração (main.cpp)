#include <iostream>
#include "CFracao.h"
using namespace std;

int main() {
    int num1, den1, num2, den2;

    cout << "Digite o numerador da primeira fração: ";
    cin >> num1;
    cout << "Digite o denominador da primeira fração: ";
    cin >> den1;

    while (den1 == 0) {
        cout << "Denominador não pode ser zero. Digite novamente: ";
        cin >> den1;
    }

    cout << "Digite o numerador da segunda fração: ";
    cin >> num2;
    cout << "Digite o denominador da segunda fração: ";
    cin >> den2;

    while (den2 == 0) {
        cout << "Denominador não pode ser zero. Digite novamente: ";
        cin >> den2;
    }

    CFracao f1(num1, den1);
    CFracao f2(num2, den2);

    cout << "\nFração 1: ";
    f1.Print();
    cout << "\nFração 2: ";
    f2.Print();

    CFracao soma = f1 + f2;
    cout << "\n\nSoma: ";
    soma.Print();

    CFracao subtracao = f1 - f2;
    cout << "\nSubtração: ";
    subtracao.Print();

    CFracao multiplicacao = f1 * f2;
    cout << "\nMultiplicação: ";
    multiplicacao.Print();

    CFracao divisao = f1 / f2;
    cout << "\nDivisão: ";
    divisao.Print();

    cout << "\n\nComparações:";
    cout << "\nFração 1 < Fração 2? " << (f1 < f2 ? "Sim" : "Não");
    cout << "\nFração 1 > Fração 2? " << (f1 > f2 ? "Sim" : "Não");
    cout << "\nFração 1 == Fração 2? " << (f1 == f2 ? "Sim" : "Não");

    cout << "\n\nFração 1 como float: " << f1.ComoFloat();
    cout << "\nFração 2 como float: " << f2.ComoFloat();

    cout << "\n";

    return 0;
}
