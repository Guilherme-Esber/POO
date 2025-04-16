#include <iostream>
#include "CPoligono.h"
using namespace std;

int main() {
    try {
        int n, b;
        
        cout << "Digite o número de lados do polígono (entre 3 e 10): ";
        cin >> n;
        cout << "Digite o comprimento de cada lado: ";
        cin >> b;

        CPoligono poligono(n, b);

        poligono.imprimirNome();

        cout << "Área: " << poligono.calcularArea() << " unidades" << endl;

        cout << "Perímetro: " << poligono.calcularPerimetro() << " unidades" << endl;

    } catch (const exception& e) {
        cerr << "Erro: " << e.what() << endl;
    }

    return 0;
}
