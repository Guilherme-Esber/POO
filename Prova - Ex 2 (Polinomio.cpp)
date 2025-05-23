#include "Polinomio.h"
#include <cmath>

Polinomio::Polinomio(int grau) : grau(grau), coeficientes(grau + 1, 0.0) {}

istream& operator>>(istream& in, Polinomio& p) {
    cout << "Digite os coeficientes do polinomio de grau " << p.grau << ":\n";
    for (int i = 0; i <= p.grau; ++i) {
        cout << "a" << i << ": ";
        in >> p.coeficientes[i];
    }
    return in;
}

ostream& operator<<(ostream& out, const Polinomio& p) {
    bool primeiro = true;
    for (int i = p.grau; i >= 0; --i) {
        if (p.coeficientes[i] != 0) {
            if (!primeiro) out << (p.coeficientes[i] > 0 ? " + " : " - ");
            else if (p.coeficientes[i] < 0) out << "-";
            if (abs(p.coeficientes[i]) != 1 || i == 0)
                out << abs(p.coeficientes[i]);
            if (i > 0)
                out << "x" << (i > 1 ? "^" + to_string(i) : "");
            primeiro = false;
        }
    }
    if (primeiro) out << "0";
    return out;
}

Polinomio Polinomio::operator+(const Polinomio& outro) const {
    int maxGrau = max(grau, outro.grau);
    Polinomio resultado(maxGrau);
    for (int i = 0; i <= maxGrau; ++i) {
        double coefA = (i <= grau) ? coeficientes[i] : 0.0;
        double coefB = (i <= outro.grau) ? outro.coeficientes[i] : 0.0;
        resultado.coeficientes[i] = coefA + coefB;
    }
    return resultado;
}

Polinomio Polinomio::operator-(const Polinomio& outro) const {
    int maxGrau = max(grau, outro.grau);
    Polinomio resultado(maxGrau);
    for (int i = 0; i <= maxGrau; ++i) {
        double coefA = (i <= grau) ? coeficientes[i] : 0.0;
        double coefB = (i <= outro.grau) ? outro.coeficientes[i] : 0.0;
        resultado.coeficientes[i] = coefA - coefB;
    }
    return resultado;
}

bool Polinomio::operator>(const Polinomio& outro) const { return grau > outro.grau; }
bool Polinomio::operator<(const Polinomio& outro) const { return grau < outro.grau; }
bool Polinomio::operator>=(const Polinomio& outro) const { return grau >= outro.grau; }
bool Polinomio::operator<=(const Polinomio& outro) const { return grau <= outro.grau; }

bool Polinomio::operator==(const Polinomio& outro) const {
    return grau == outro.grau && coeficientes == outro.coeficientes;
}
bool Polinomio::operator!=(const Polinomio& outro) const {
    return !(*this == outro);
}

Polinomio::operator float() const {
    return static_cast<float>(coeficientes[0]);
}
