#include <iostream>
using namespace std;

template <typename T>
void troca(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    char a = 'A', b = 'B';
    double m = 3.14, n = 2.71;

    cout << "Antes da troca (inteiros): x = " << x << ", y = " << y << endl;
    troca(x, y);
    cout << "Depois da troca (inteiros): x = " << x << ", y = " << y << endl;

    cout << "Antes da troca (caracteres): a = " << a << ", b = " << b << endl;
    troca(a, b);
    cout << "Depois da troca (caracteres): a = " << a << ", b = " << b << endl;

    cout << "Antes da troca (doubles): m = " << m << ", n = " << n << endl;
    troca(m, n);
    cout << "Depois da troca (doubles): m = " << m << ", n = " << n << endl;

    return 0;
}
