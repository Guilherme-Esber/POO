#include "Formas.h"
#include <vector>

int main() {
    vector<Ponto*> formas;
    int opcao;

    do {
        cout << "\nMenu:\n";
        cout << "1 - Criar Ponto\n";
        cout << "2 - Criar Circulo\n";
        cout << "3 - Criar Cilindro\n";
        cout << "0 - Sair e imprimir todos\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1: {
                Ponto* p = new Ponto();
                cin >> *p;
                formas.push_back(p);
                break;
            }
            case 2: {
                Circulo* c = new Circulo();
                cin >> *c;
                formas.push_back(c);
                break;
            }
            case 3: {
                Cilindro* ci = new Cilindro();
                cin >> *ci;
                formas.push_back(ci);
                break;
            }
            case 0:
                cout << "\nImprimindo todas as formas:\n";
                for (Ponto* f : formas) {
                    cout << "------------------------\n";
                    cout << *f << endl;
                    cout << "Área: " << f->area() << ", Volume: " << f->volume() << endl;
                }
                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (opcao != 0);

    for (Ponto* f : formas) {
        delete f;
    }

    return 0;
}
