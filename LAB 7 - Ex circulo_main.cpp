#include <iostream>
#include "circulo.h"
using namespace std;

int main() {
    Ponto p;
    cout << "\nDigite as coordenadas x e y do ponto: ";
    cin >> p;
    cout << "Você digitou -> " << p << endl;

    Circulo c;
    cout << "\nDigite x, y e o raio do círculo: ";
    cin >> c;
    cout << "Você digitou -> " << c << endl;
    cout << "Área do círculo: " << c.area() << endl;

    Cilindro cil;
    cout << "\nDigite x, y, raio e altura do cilindro: ";
    cin >> cil;
    cout << "Você digitou -> " << cil << endl;
    cout << "Área da superfície do cilindro: " << cil.area() << endl;
    cout << "Volume do cilindro: " << cil.volume() << endl;

    return 0;
}
