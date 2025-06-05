#include <iomanip>
#include <cctype>
#include "PhoneNumber.h"
using namespace std;

string removeNaoNumericos(const string& s) {
    string resultado;
    for(char c : s) {
        if(isdigit(c))
            resultado += c;
    }
    return resultado;
}

ostream& operator<<(ostream& output, const PhoneNumber& number) {
    output << "(" << number.ddd << ") " << number.prefixo << "-" << number.sufixo;
    return output;
}

istream& operator>>(istream& input, PhoneNumber& number) {
    string linha;
    getline(input, linha);

    string numeros = removeNaoNumericos(linha);

    if(numeros.length() != 11) {
        cerr << "Erro: número deve conter 11 dígitos (2 para DDD + 9 para número)." << endl;
        number.ddd = "";
        number.prefixo = "";
        number.sufixo = "";
        return input;
    }

    number.ddd = numeros.substr(0, 2);
    number.prefixo = numeros.substr(2, 5);
    number.sufixo = numeros.substr(7, 4);

    return input;
}
