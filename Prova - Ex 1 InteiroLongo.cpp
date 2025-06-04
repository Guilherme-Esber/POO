#include "InteiroLongo.h"
#include <algorithm>
#include <cctype>
#include <sstream>
using namespace std;


InteiroLongo::InteiroLongo() : numero("0") {}

InteiroLongo::InteiroLongo(const string& num) {
    numero = num;
    numero.erase(0, numero.find_first_not_of('0'));
    if (numero.empty()) numero = "0";
}

bool InteiroLongo::ehPalindromo() const {
    string copia = numero;
    string reverso = string(copia.rbegin(), copia.rend());
    return copia == reverso;
}

bool InteiroLongo::possuiTresDigitosIguais() const {
    for (size_t i = 0; i + 2 < numero.size(); ++i) {
        if (numero[i] == numero[i+1] && numero[i+1] == numero[i+2])
            return true;
    }
    return false;
}

InteiroLongo& InteiroLongo::operator--() {
    long long valor = stoll(numero);
    valor = max(0LL, valor - 1);
    numero = to_string(valor);
    return *this;
}

InteiroLongo InteiroLongo::operator--(int) {
    InteiroLongo temp = *this;
    --(*this);
    return temp;
}

InteiroLongo& InteiroLongo::operator-=(const InteiroLongo& outro) {
    long long val1 = stoll(this->numero);
    long long val2 = stoll(outro.numero);
    long long resultado = max(0LL, val1 - val2);
    this->numero = to_string(resultado);
    return *this;
}

ostream& operator<<(ostream& os, const InteiroLongo& obj) {
    os << obj.numero;
    return os;
}

istream& operator>>(istream& is, InteiroLongo& obj) {
    is >> obj.numero;
    obj.numero.erase(0, obj.numero.find_first_not_of('0'));
    if (obj.numero.empty()) obj.numero = "0";
    return is;
}
