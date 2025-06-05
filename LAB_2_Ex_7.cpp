#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool ehPalindromo(int numero) {
    vector<int> digitos;

    while (numero > 0) {
        digitos.push_back(numero % 10);
        numero /= 10;
    }

    size_t tamanho = digitos.size();
    for (size_t i = 0; i < tamanho / 2; i++) {
        if (digitos[i] != digitos[tamanho - 1 - i]) {
            return false;
        }
    }
    
    return true;
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
