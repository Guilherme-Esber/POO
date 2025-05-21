#include <iostream>
using namespace std;

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
    cout << "Os 20 primeiros números primos são: ";
    calcularPrimos();
    return 0;
}
