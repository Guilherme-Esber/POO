#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int binario, decimal = 0, posicao = 0;

    cout << "Digite um numero binario (composto apenas por 0s e 1s): ";
    cin >> binario;

    while (binario > 0) {
        int digito = binario % 10;
        decimal += digito * pow(2, posicao);
        binario /= 10;
        posicao++;
    }

    cout << "O equivalente decimal é: " << decimal << endl;

    return 0;
}
