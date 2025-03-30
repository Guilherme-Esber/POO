#include <iostream>
#include <string>

using namespace std;

bool ehPalindromo(int numero) {
    string strNumero = to_string(numero);
    string reverso = string(strNumero.rbegin(), strNumero.rend());
    return strNumero == reverso;
}

int main() {
    int numero;

    while (true) {
        cout << "Digite um número inteiro de sete dígitos: ";
        cin >> numero;

        if (numero < 1000000 || numero > 9999999) {
            cout << "Erro: O número deve ter exatamente sete dígitos. Tente novamente." << endl;
        } else {
            break;
        }
    }

    if (ehPalindromo(numero)) {
        cout << "O número " << numero << " é um palíndromo." << endl;
    } else {
        cout << "O número " << numero << " não é um palíndromo." << endl;
    }

    return 0;
}
