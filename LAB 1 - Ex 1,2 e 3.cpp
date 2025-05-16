#include <iostream>
using namespace std;

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

bool isPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void calcularPrimos() {
    int count = 0;
    int num = 2;
    while (count < 20) {
        if (isPrimo(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}

int main() {
    int opcao; {
        cout << "Menu de Opções:\n";
        cout << "1. Calcular fatorial\n";
        cout << "2. Calcular números primos\n";
        cout << "3. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int n;
                cout << "Digite um número para calcular o fatorial: ";
                cin >> n;
                cout << "O fatorial de " << n << " é " << fatorial(n) << endl;
                break;
            }
            case 2:
                cout << "Os 20 primeiros números primos são: ";
                calcularPrimos();
                break;
            case 3:
                cout << "Saindo\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    }
}
