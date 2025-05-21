#include <iostream>
#include <vector>
using namespace std;

class Polinomio {
private:
    int grau;
    vector<double> coeficientes;

public:
    Polinomio(int grau = 0) : grau(grau), coeficientes(grau + 1, 0.0) {}

    friend istream& operator>>(istream& in, Polinomio& p) {
        cout << "Digite os coeficientes do polinomio de grau " << p.grau << " (do termo de grau 0 ao grau " << p.grau << "):\n";
        for (int i = 0; i <= p.grau; ++i) {
            cout << "a" << i << ": ";
            in >> p.coeficientes[i];
        }
        return in;
    }

    friend ostream& operator<<(ostream& out, const Polinomio& p) {
        bool primeiro = true;
        for (int i = p.grau; i >= 0; --i) {
            if (p.coeficientes[i] != 0) {
                if (!primeiro) out << (p.coeficientes[i] > 0 ? " + " : " - ");
                else if (p.coeficientes[i] < 0) out << "-";
                if (abs(p.coeficientes[i]) != 1 || i == 0)
                    out << abs(p.coeficientes[i]);
                else if (abs(p.coeficientes[i]) == 1 && i != 0)
                    out << "";

                if (i > 0)
                    out << "x" << (i > 1 ? "^" + to_string(i) : "");
                primeiro = false;
            }
        }
        if (primeiro) out << "0";
        return out;
    }

    Polinomio operator+(const Polinomio& outro) const {
        int maxGrau = max(grau, outro.grau);
        Polinomio resultado(maxGrau);
        for (int i = 0; i <= maxGrau; ++i) {
            double coefA = (i <= grau) ? coeficientes[i] : 0.0;
            double coefB = (i <= outro.grau) ? outro.coeficientes[i] : 0.0;
            resultado.coeficientes[i] = coefA + coefB;
        }
        return resultado;
    }

    Polinomio operator-(const Polinomio& outro) const {
        int maxGrau = max(grau, outro.grau);
        Polinomio resultado(maxGrau);
        for (int i = 0; i <= maxGrau; ++i) {
            double coefA = (i <= grau) ? coeficientes[i] : 0.0;
            double coefB = (i <= outro.grau) ? outro.coeficientes[i] : 0.0;
            resultado.coeficientes[i] = coefA - coefB;
        }
        return resultado;
    }
};

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

    return 0;
}
