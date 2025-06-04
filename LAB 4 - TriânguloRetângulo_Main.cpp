#include "TrianguloRetangulo.h"

using namespace std;

int main() {
    int x, y, z;
    cout << "Digite os três lados do triângulo: ";
    cin >> x >> y >> z;

    TrianguloRetangulo t(x, y, z);

    if (t.ehTriangulo()) {
        if (t.ehRetangulo()) {
            cout << "É um triângulo retângulo com lados: ";
            t.imprimirLados();
        } else {
            cout << "É um triângulo, mas não é retângulo.\n";
        }
    } else {
        cout << "Os lados não formam um triângulo.\n";
    }

    cout << "\nTodos os triângulos retângulos com lados menores que 200:\n";
    TrianguloRetangulo::imprimirTodosMenoresQue200();

    return 0;
}
