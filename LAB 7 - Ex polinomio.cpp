#include "polinomio.h"
#include <cmath>
#include <iomanip>

Polinomio::Polinomio(int grau) : grau(grau), coeficientes(grau + 1, 0.0) {}

istream& operator>>(istream& in, Polinomio& p) {
    cout << "Digite os coeficientes do polinômio de grau " << p.grau << ":\n";
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
        double a = (i <= grau) ? coeficientes[i] : 0.0;
        double b = (i <= outro.grau) ? outro.coeficientes[i] : 0.0;
        resultado.coeficientes[i] = a + b;
    }
    return resultado;
}

Polinomio Polinomio::operator-(const Polinomio& outro) const {
    int maxGrau = max(grau, outro.grau);
    Polinomio resultado(maxGrau);
    for (int i = 0; i <= maxGrau; ++i) {
        double a = (i <= grau) ? coeficientes[i] : 0.0;
        double b = (i <= outro.grau) ? outro.coeficientes[i] : 0.0;
        resultado.coeficientes[i] = a - b;
    }
    return resultado;
}

double Polinomio::avalia(double x) const {
    double resultado = 0;
    for (int i = grau; i >= 0; --i) {
        resultado = resultado * x + coeficientes[i];
    }
    return resultado;
}

Polinomio Polinomio::derivada() const {
    if (grau == 0) return Polinomio(0);

    Polinomio deriv(grau - 1);
    for (int i = 1; i <= grau; ++i) {
        deriv.coeficientes[i - 1] = coeficientes[i] * i;
    }
    return deriv;
}

double Polinomio::newton(double x0, double epsilon, int max_iter) const {
    Polinomio deriv = this->derivada();
    double x = x0;

    for (int i = 0; i < max_iter; ++i) {
        double fx = this->avalia(x);
        double dfx = deriv.avalia(x);

        if (fabs(dfx) < 1e-10) {
            cout << "Derivada próxima de zero. Método de Newton falhou." << endl;
            return x;
        }

        double x1 = x - fx / dfx;
        if (fabs(x1 - x) < epsilon) {
            return x1;
        }

        x = x1;
    }

    cout << "Método não convergiu após " << max_iter << " iterações." << endl;
    return x;
}
