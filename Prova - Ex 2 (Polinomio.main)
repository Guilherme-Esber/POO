#include <iostream>
#include "Polinomio.h"
using namespace std;

int main() {
    int grau1, grau2;

    cout << "Digite o grau do primeiro polinomio: ";
    cin >> grau1;
    Polinomio p1(grau1);
    cin >> p1;

    cout << "\nDigite o grau do segundo polinomio: ";
    cin >> grau2;
    Polinomio p2(grau2);
    cin >> p2;

    cout << "\nPolinomio 1: " << p1 << endl;
    cout << "Polinomio 2: " << p2 << endl;

    Polinomio soma = p1 + p2;
    cout << "\nSoma: " << soma << endl;

    Polinomio subtracao = p1 - p2;
    cout << "Subtracao: " << subtracao << endl;

    cout << "\nComparações com base no grau:" << endl;
    cout << "p1 > p2: " << (p1 > p2 ? "Sim" : "Não") << endl;
    cout << "p1 < p2: " << (p1 < p2 ? "Sim" : "Não") << endl;
    cout << "p1 >= p2: " << (p1 >= p2 ? "Sim" : "Não") << endl;
    cout << "p1 <= p2: " << (p1 <= p2 ? "Sim" : "Não") << endl;

    cout << "\nComparações completas:" << endl;
    cout << "p1 == p2: " << (p1 == p2 ? "Sim" : "Não") << endl;
    cout << "p1 != p2: " << (p1 != p2 ? "Sim" : "Não") << endl;
    
    cout << "\nValor de p1 em x=0: " << float(p1) << endl;
    cout << "Valor de p2 em x=0: " << float(p2) << endl;

    return 0;
}
