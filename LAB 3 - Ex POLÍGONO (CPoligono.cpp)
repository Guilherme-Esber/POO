#include "CPoligono.h"
#include <cmath>
#include <iostream>
using namespace std;

CPoligono::CPoligono(int n, int b) {
    if (n < 3 || n > 10) {
        throw invalid_argument("Número de lados deve ser entre 3 e 10.");
    }
    if (b < 1) {
        throw invalid_argument("O comprimento do lado deve ser maior que 0.");
    }
    lados = n;
    comprimentoLado = b;
}

double CPoligono::calcularArea() const {
    double anguloInterno = M_PI / lados;
    double area = (lados * pow(comprimentoLado, 2)) / (4 * tan(anguloInterno));
    return area;
}

double CPoligono::calcularPerimetro() const {
    return lados * comprimentoLado;
}

void CPoligono::imprimirNome() const {
    string nome;
    switch(lados) {
        case 3: nome = "Triângulo"; break;
        case 4: nome = "Quadrado"; break;
        case 5: nome = "Pentágono"; break;
        case 6: nome = "Hexágono"; break;
        case 7: nome = "Heptágono"; break;
        case 8: nome = "Octágono"; break;
        case 9: nome = "Enéágono"; break;
        case 10: nome = "Decágono"; break;
        default: nome = "Polígono desconhecido"; break;
    }
    cout << "Este é um " << nome << "." << endl;
}
