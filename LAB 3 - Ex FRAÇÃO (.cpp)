#include "CFracao.h"
#include <iostream>
using namespace std;

CFracao CFracao::Reduzida(void) {
    int gcd = 1;
    int minimo = (m_numerador < m_denominador) ? m_numerador : m_denominador;
    for (int i = 1; i <= minimo; i++) {
        if ((m_numerador % i == 0) && (m_denominador % i == 0))
            gcd = i;
    }
    m_numerador /= gcd;
    m_denominador /= gcd;
    return (*this);
}

CFracao CFracao::Somar(CFracao _Fracao) {
    CFracao temp(m_numerador * _Fracao.m_denominador +
                 m_denominador * _Fracao.m_numerador,
                 m_denominador * _Fracao.m_denominador);
    return temp.Reduzida();
}

CFracao CFracao::Subtrair(CFracao _Fracao) {
    CFracao temp(m_numerador * _Fracao.m_denominador -
                 m_denominador * _Fracao.m_numerador,
                 m_denominador * _Fracao.m_denominador);
    return temp.Reduzida();
}

CFracao CFracao::Multiplicar(CFracao _Fracao) {
    CFracao temp(m_numerador * _Fracao.m_numerador,
                 m_denominador * _Fracao.m_denominador);
    return temp.Reduzida();
}

CFracao CFracao::Dividir(CFracao _Fracao) {
    CFracao temp(m_numerador * _Fracao.m_denominador,
                 m_denominador * _Fracao.m_numerador);
    return temp.Reduzida();
}

int CFracao::MenorQue(CFracao _Fracao) {
    return (m_numerador * _Fracao.m_denominador <
            m_denominador * _Fracao.m_numerador);
}

int CFracao::MaiorQue(CFracao _Fracao) {
    return (m_numerador * _Fracao.m_denominador >
            m_denominador * _Fracao.m_numerador);
}

int CFracao::Igual(CFracao _Fracao) {
    return (m_numerador * _Fracao.m_denominador ==
            m_denominador * _Fracao.m_numerador);
}

float CFracao::ComoFloat(void) {
    return ((float)m_numerador / (float)m_denominador);
}

void CFracao::Print(void) {
    cout << m_numerador << "/" << m_denominador;
}
