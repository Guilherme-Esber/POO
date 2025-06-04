#ifndef INTEIRO_LONGO_H
#define INTEIRO_LONGO_H

#include <iostream>
#include <string>
using namespace std;

class InteiroLongo {
private:
    string numero;

public:
    InteiroLongo();
    InteiroLongo(const string& num);

    bool ehPalindromo() const;
    bool possuiTresDigitosIguais() const;

    InteiroLongo& operator--();
    InteiroLongo operator--(int);
    InteiroLongo& operator-=(const InteiroLongo& outro);

    friend ostream& operator<<(ostream& os, const InteiroLongo& obj);
    friend istream& operator>>(istream& is, InteiroLongo& obj);
};

#endif
