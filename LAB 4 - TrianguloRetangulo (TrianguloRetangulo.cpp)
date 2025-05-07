#include "TrianguloRetangulo.h"
#include <cmath>

TrianguloRetangulo::TrianguloRetangulo() : a(0), b(0), c(0) {}

TrianguloRetangulo::TrianguloRetangulo(int a, int b, int c) : a(a), b(b), c(c) {}

bool TrianguloRetangulo::ehTriangulo() const {
    return a + b > c && a + c > b && b + c > a;
}

bool TrianguloRetangulo::ehRetangulo() const {
    if (!ehTriangulo())
        return false;
    int a2 = a * a, b2 = b * b, c2 = c * c;
    return (a2 + b2 == c2) || (a2 + c2 == b2) || (b2 + c2 == a2);
}

void TrianguloRetangulo::imprimirLados() const {
    cout << a << ", " << b << ", " << c << endl;
}

void TrianguloRetangulo::imprimirTodosMenoresQue200() {
    for (int i = 1; i < 200; ++i) {
        for (int j = i; j < 200; ++j) {
            for (int k = j; k < 200; ++k) {
                TrianguloRetangulo t(i, j, k);
                if (t.ehRetangulo()) {
                    t.imprimirLados();
                }
            }
        }
    }
}
