#include <iostream>
#include <iomanip>
#include "polinomio.h"
using namespace std;

int main() {
    int grau;
    cout << "Digite o grau do polinômio: ";
    cin >> grau;

    Polinomio p(grau);
    cin >> p;

    cout << "\nPolinômio: " << p << endl;

    Polinomio dp = p.derivada();
    cout << "Derivada: " << dp << endl;

    double x0, epsilon;
    int max_iter;

    cout << "\nDigite a aproximação inicial (x0): ";
    cin >> x0;
    cout << "Digite a precisão desejada (epsilon): ";
    cin >> epsilon;
    cout << "Digite o número máximo de iterações: ";
    cin >> max_iter;

    double raiz = p.newton(x0, epsilon, max_iter);
    cout << fixed << setprecision(6);
    cout << "\nRaiz aproximada encontrada: " << raiz << endl;

    return 0;
}
