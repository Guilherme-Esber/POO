#include <iostream>
using namespace std;

int somaRecursiva(int n) {
    if (n == 0) {
        return 0;
    }
    return n + somaRecursiva(n - 1);
}

int main() {
    int n;
    cout << "Digite um número inteiro positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Por favor, insira um número inteiro positivo." << endl;
    } else {
        cout << "A soma dos " << n << " primeiros números inteiros é: " << somaRecursiva(n) << endl;
    }

    return 0;
}
