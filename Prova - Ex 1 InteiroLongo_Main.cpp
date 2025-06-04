#include "InteiroLongo.h"
#include <iostream>
using namespace std;

int main() {
    InteiroLongo vet[4];

    for (int i = 0; i < 4; ++i) {
        cout << "Digite o  número inteiro longo: ";
        cin >> vet[i];
    }

    for (int i = 0; i < 4; ++i) {
        cout << "Número: " << vet[i] << endl;
        if (vet[i].ehPalindromo())
            cout << "É palíndromo." << endl;
        else
            cout << "Não é palíndromo." << endl;

        if (vet[i].possuiTresDigitosIguais())
            cout << "Possui três dígitos consecutivos iguais." << endl;
        else
            cout << "Não possui três dígitos consecutivos iguais." << endl;

        cout << "Teste operador -- prefixado: " << --vet[i] << endl;
        cout << "Teste operador -- posfixado: " << vet[i]-- << endl;
        cout << "Após posfixado: " << vet[i] << endl;

        InteiroLongo subtrator("2");
        vet[i] -= subtrator;
        cout << "Após -= 2: " << vet[i] << endl;

        cout << "------------------------" << endl;
    }

    return 0;
}
