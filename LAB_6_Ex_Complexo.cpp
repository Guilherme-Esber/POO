#include <iostream>
#include <cmath>
using namespace std;

class Complexo {
private:
    double real;
    double imag;

public:
    Complexo(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }

    Complexo operator+(const Complexo& c) const {
        return Complexo(real + c.real, imag + c.imag);
    }

    Complexo operator-(const Complexo& c) const {
        return Complexo(real - c.real, imag - c.imag);
    }

    Complexo operator*(const Complexo& c) const {
        return Complexo(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }

    Complexo operator/(const Complexo& c) const {
        double denom = c.real * c.real + c.imag * c.imag;
        double r = (real * c.real + imag * c.imag) / denom;
        double i = (imag * c.real - real * c.imag) / denom;
        return Complexo(r, i);
    }

    operator double() const {
        return sqrt(real * real + imag * imag);
    }

    void imprimir() const {
        cout << real;
        if (imag >= 0) cout << " + ";
        else cout << " - ";
        cout << fabs(imag) << "i";
    }
};

int main() {
    Complexo c1(3.0, 4.0);
    Complexo c2(1.0, 2.0);

    cout << "Número complexo c1: ";
    c1.imprimir();
    cout << endl;

    cout << "Número complexo c2: ";
    c2.imprimir();
    cout << endl;

    Complexo soma = c1 + c2;
    cout << "Soma c1 + c2: ";
    soma.imprimir();
    cout << endl;

    Complexo subtracao = c1 - c2;
    cout << "Subtração c1 - c2: ";
    subtracao.imprimir();
    cout << endl;

    Complexo multiplicacao = c1 * c2;
    cout << "Multiplicação c1 * c2: ";
    multiplicacao.imprimir();
    cout << endl;

    Complexo divisao = c1 / c2;
    cout << "Divisão c1 / c2: ";
    divisao.imprimir();
    cout << endl;

    double modulo_c1 = c1;
    double modulo_c2 = c2;
    cout << "Módulo de c1 (como double): " << modulo_c1 << endl;
    cout << "Módulo de c2 (como double): " << modulo_c2 << endl;

    return 0;
}
