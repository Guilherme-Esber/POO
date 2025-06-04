#include "CRetangulo.h"
#include <iostream>
using namespace std;

int main() {
    CRetangulo* retangulos[5];

    for (int i = 0; i < 5; i++) {
        cout << "Digite as dimensões do retângulo " << i + 1 << ":\n";
        int c, l;
        cout << "Comprimento (1 a 20): ";
        cin >> c;
        cout << "Largura (1 a 20): ";
        cin >> l;
        retangulos[i] = new CRetangulo(c, l);
    }

    for (int i = 0; i < 5; i++) {
        cout << "\nRetângulo " << i + 1 << ":\n";
        retangulos[i]->imprimirRetangulo();
        cout << "Área: " << retangulos[i]->calcularArea() << "\n";
        cout << "Perímetro: " << retangulos[i]->calcularPerimetro() << "\n";
        cout << (retangulos[i]->eQuadrado() ? "É um quadrado." : "Não é um quadrado.") << "\n";
    }

    for (int i = 0; i < 5; i++) {
        delete retangulos[i];
    }

    return 0;
}
