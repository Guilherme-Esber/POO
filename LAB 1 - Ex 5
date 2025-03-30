#include <iostream>
using namespace std;

int main() {
    int largura, altura;
    char charFrente, charPreenchimento;
    bool estaPreenchido;

    cout << "Digite a largura do retângulo: ";
    cin >> largura;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;

    cout << "Digite o caractere para a borda: ";
    cin >> charFrente;
    cout << "Digite o caractere para o preenchimento: ";
    cin >> charPreenchimento;

    cout << "O retângulo deve ser preenchido? (1 para Sim, 0 para Não): ";
    cin >> estaPreenchido;

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1) {
                cout << charFrente;
            } else if (estaPreenchido) {
                cout << charPreenchimento;
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
