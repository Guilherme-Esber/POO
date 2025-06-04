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

CFracao CFracao::operator+(const CFracao& f) {
    CFracao temp(m_numerador * f.m_denominador + m_denominador * f.m_numerador,
                 m_denominador * f.m_denominador);
    return temp.Reduzida();
}

CFracao CFracao::operator-(const CFracao& f) {
    CFracao temp(m_numerador * f.m_denominador - m_denominador * f.m_numerador,
                 m_denominador * f.m_denominador);
    return temp.Reduzida();
}

CFracao CFracao::operator*(const CFracao& f) {
    CFracao temp(m_numerador * f.m_numerador, m_denominador * f.m_denominador);
    return temp.Reduzida();
}

CFracao CFracao::operator/(const CFracao& f) {
    CFracao temp(m_numerador * f.m_denominador, m_denominador * f.m_numerador);
    return temp.Reduzida();
}

bool CFracao::operator<(const CFracao& f) {
    return (m_numerador * f.m_denominador < m_denominador * f.m_numerador);
}

bool CFracao::operator>(const CFracao& f) {
    return (m_numerador * f.m_denominador > m_denominador * f.m_numerador);
}

bool CFracao::operator<=(const CFracao& f) {
    return (m_numerador * f.m_denominador <= m_denominador * f.m_numerador);
}

bool CFracao::operator>=(const CFracao& f) {
    return (m_numerador * f.m_denominador >= m_denominador * f.m_numerador);
}

bool CFracao::operator==(const CFracao& f) {
    return (m_numerador * f.m_denominador == m_denominador * f.m_numerador);
}

bool CFracao::operator!=(const CFracao& f) {
    return (m_numerador * f.m_denominador != m_denominador * f.m_numerador);
}

float CFracao::ComoFloat(void) {
    return ((float)m_numerador / (float)m_denominador);
}

void CFracao::Print(void) {
    cout << m_numerador << "/" << m_denominador;
}
