#include <iostream>
#include <cmath>
using namespace std;

class CFracao {
private:
    int m_numerador;
    int m_denominador;

    void reduzir() {
        int a = abs(m_numerador);
        int b = abs(m_denominador);
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        if (a != 0) {
            m_numerador /= a;
            m_denominador /= a;
        }
    }

public:
    CFracao(int num = 1, int den = 1) {
        if (den == 0) {
            cout << "Denominador não pode ser zero. Usando 1 como padrão.\n";
            den = 1;
        }
        m_numerador = num;
        m_denominador = den;
        reduzir();
    }

    CFracao operator+(const CFracao& f) {
        return CFracao(m_numerador * f.m_denominador + m_denominador * f.m_numerador,
                       m_denominador * f.m_denominador);
    }

    CFracao operator-(const CFracao& f) {
        return CFracao(m_numerador * f.m_denominador - m_denominador * f.m_numerador,
                       m_denominador * f.m_denominador);
    }

    CFracao operator*(const CFracao& f) {
        return CFracao(m_numerador * f.m_numerador, m_denominador * f.m_denominador);
    }

    CFracao operator/(const CFracao& f) {
        return CFracao(m_numerador * f.m_denominador, m_denominador * f.m_numerador);
    }

    bool operator<(const CFracao& f) {
        return m_numerador * f.m_denominador < m_denominador * f.m_numerador;
    }

    bool operator>(const CFracao& f) {
        return m_numerador * f.m_denominador > m_denominador * f.m_numerador;
    }

    bool operator==(const CFracao& f) {
        return m_numerador * f.m_denominador == m_denominador * f.m_numerador;
    }

    bool operator!=(const CFracao& f) {
        return !(*this == f);
    }

    bool operator<=(const CFracao& f) {
        return *this < f || *this == f;
    }

    bool operator>=(const CFracao& f) {
        return *this > f || *this == f;
    }

    operator float() const {
        return static_cast<float>(m_numerador) / m_denominador;
    }

    void print() const {
        cout << m_numerador << "/" << m_denominador;
    }
};

int main() {
    int num1, den1, num2, den2;

    cout << "Digite o numerador da primeira fração: ";
    cin >> num1;
    cout << "Digite o denominador da primeira fração: ";
    cin >> den1;

    cout << "Digite o numerador da segunda fração: ";
    cin >> num2;
    cout << "Digite o denominador da segunda fração: ";
    cin >> den2;

    CFracao f1(num1, den1);
    CFracao f2(num2, den2);

    cout << "\nFração 1: ";
    f1.print();
    cout << "\nFração 2: ";
    f2.print();

    CFracao soma = f1 + f2;
    cout << "\n\nSoma: ";
    soma.print();

    CFracao sub = f1 - f2;
    cout << "\nSubtração: ";
    sub.print();

    CFracao mult = f1 * f2;
    cout << "\nMultiplicação: ";
    mult.print();

    CFracao div = f1 / f2;
    cout << "\nDivisão: ";
    div.print();

    cout << "\n\nComparações:";
    cout << "\nFração 1 < Fração 2? " << (f1 < f2 ? "Sim" : "Não");
    cout << "\nFração 1 > Fração 2? " << (f1 > f2 ? "Sim" : "Não");
    cout << "\nFração 1 == Fração 2? " << (f1 == f2 ? "Sim" : "Não");

    float f1_float = f1;
    float f2_float = f2;
    cout << "\n\nFração 1 como float: " << f1_float;
    cout << "\nFração 2 como float: " << f2_float;

    cout << "\n";
    return 0;
}
