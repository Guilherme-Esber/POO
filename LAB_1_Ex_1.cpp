#include <iostream>
using namespace std;

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    cout << "Digite um número para calcular o fatorial: ";
    cin >> n;
    cout << "O fatorial de " << n << " é " << fatorial(n) << endl;
    return 0;
}
