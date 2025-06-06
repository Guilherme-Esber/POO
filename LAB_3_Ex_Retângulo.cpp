#include "CRetangulo.h"
#include <iostream>
#include <stdexcept>
using namespace std;

CRetangulo::CRetangulo() : comprimento(1), largura(1) {
}

CRetangulo::CRetangulo(int c, int l) {
    if (c < 1 || c > 20 || l < 1 || l > 20) {
        throw invalid_argument("Comprimento e largura devem estar entre 1 e 20.");
    }
    comprimento = c;
    largura = l;
    cout << "O retângulo está sendo criado com dimensões (" << comprimento << "x" << largura << ")." << endl;
    cout << endl;
}

int CRetangulo::getComprimento() const {
    return comprimento;
}

int CRetangulo::getLargura() const {
    return largura;
}

void CRetangulo::setComprimento(int c) {
    if (c < 1 || c > 20) {
        throw invalid_argument("Erro: O comprimento deve estar entre 1 e 20 unidades. Valor fornecido: " + to_string(c));
    }
    comprimento = c;
}

void CRetangulo::setLargura(int l) {
    if (l < 1 || l > 20) {
        throw invalid_argument("Erro: A largura deve estar entre 1 e 20 unidades. Valor fornecido: " + to_string(l));
    }
    largura = l;
}

int CRetangulo::calcularArea() const {
    return comprimento * largura;
}

int CRetangulo::calcularPerimetro() const {
    return 2 * (comprimento + largura);
}

bool CRetangulo::eQuadrado() const {
    return comprimento == largura;
}

void CRetangulo::imprimirRetangulo() const {
    for (int i = 0; i < largura; i++) {
        for (int j = 0; j < comprimento; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

CRetangulo::~CRetangulo() {
    cout << "O retângulo foi destruído!" << endl;
}
