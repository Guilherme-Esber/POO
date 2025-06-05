#include <iostream>
using namespace std;

int mdc(int x, int y) {
    if (y == 0) {
        return x;
    }
    return mdc(y, x % y);
}

int main() {
    int num1, num2;

    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    int resultado = mdc(num1, num2);
    cout << "O máximo divisor comum (MDC) de " << num1 << " e " << num2 << " é: " << resultado << endl;

    return 0;
}
