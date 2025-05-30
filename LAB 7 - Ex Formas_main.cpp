#include <iostream>
#include "Formas.h"

int main() {
    Ponto p;
    cout << "Informe os dados do ponto:\n";
    cin >> p;
    cout << p << endl;
    cout << "Area: " << p.area() << ", Volume: " << p.volume() << "\n\n";

    Circulo c;
    cout << "Informe os dados do circulo:\n";
    cin >> c;
    cout << c << endl;
    cout << "Area: " << c.area() << ", Volume: " << c.volume() << "\n\n";

    Cilindro ci;
    cout << "Informe os dados do cilindro:\n";
    cin >> ci;
    cout << ci << endl;
    cout << "Area: " << ci.area() << ", Volume: " << ci.volume() << "\n";

    return 0;
}
