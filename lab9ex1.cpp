#include "polinomio.h"
#include <cmath>
#include <stdexcept>

Polinomio::Polinomio(int grau) : grau(grau), coeficientes(grau + 1, 0.0) {}

std::istream& operator>>(std::istream& in, Polinomio& p) {
    std::cout << "Digite os coeficientes do polinomio de grau " << p.grau << " (do termo de grau 0 ao grau " << p.grau << "):\n";
    for (int i = 0; i <= p.grau; ++i) {
        std::cout << "a" << i << ": ";
        in >> p.coeficientes[i];
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, const Polinomio& p) {
    bool primeiro = true;
    for (int i = p.grau; i >= 0; --i) {
        if (p.coeficientes[i] != 0) {
            if (!primeiro) out << (p.coeficientes[i] > 0 ? " + " : " - ");
            else if (p.coeficientes[i] < 0) out << "-";
            if (std::abs(p.coeficientes[i]) != 1 || i == 0)
                out << std::abs(p.coeficientes[i]);
            else if (std::abs(p.coeficientes[i]) == 1 && i != 0)
                out << "";

            if (i > 0)
                out << "x" << (i > 1 ? "^" + std::to_string(i) : "");
            primeiro = false;
        }
    }
    if (primeiro) out << "0";
    return out;
}

Polinomio Polinomio::operator+(const Polinomio& outro) const {
    int maxGrau = std::max(grau, outro.grau);
    Polinomio resultado(maxGrau);
    for (int i = 0; i <= maxGrau; ++i) {
        double coefA = (i <= grau) ? coeficientes[i] : 0.0;
        double coefB = (i <= outro.grau) ? outro.coeficientes[i] : 0.0;
        resultado.coeficientes[i] = coefA + coefB;
    }
    return resultado;
}

Polinomio Polinomio::operator-(const Polinomio& outro) const {
    int maxGrau = std::max(grau, outro.grau);
    Polinomio resultado(maxGrau);
    for (int i = 0; i <= maxGrau; ++i) {
        double coefA = (i <= grau) ? coeficientes[i] : 0.0;
        double coefB = (i <= outro.grau) ? outro.coeficientes[i] : 0.0;
        resultado.coeficientes[i] = coefA - coefB;
    }
    return resultado;
}

// Sobrecarga do operador []
double Polinomio::operator[](int index) const {
    if (index < 0 || index > grau) {
        throw std::out_of_range("Índice fora da faixa do polinômio.");
    }
    return coeficientes[index];
}

// Sobrecarga do operador [] (para acesso não constante)
double& Polinomio::operator[](int index) {
    if (index < 0 || index > grau) {
        throw std::out_of_range("Índice fora da faixa do polinômio.");
    }
    return coeficientes[index];
}
