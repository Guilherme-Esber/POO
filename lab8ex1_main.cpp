#include "Politicos.h"
#include <vector>

int main() {
    vector<Politico*> politicos;
    int opcao;

    do {
        cout << "\nMenu:\n";
        cout << "1 - Criar Presidente\n";
        cout << "2 - Criar Governador\n";
        cout << "3 - Criar Prefeito\n";
        cout << "0 - Sair e imprimir todos\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore(); // Limpa o \n restante

        string nome;
        switch (opcao) {
            case 1: {
                int mandato;
                cout << "Digite o nome do presidente: ";
                getline(cin, nome);
                cout << "Digite a duração do mandato (em anos): ";
                cin >> mandato;
                cin.ignore();
                politicos.push_back(new Presidente(nome, mandato));
                break;
            }
            case 2: {
                string estado;
                cout << "Digite o nome do governador: ";
                getline(cin, nome);
                cout << "Digite o estado: ";
                getline(cin, estado);
                politicos.push_back(new Governador(nome, estado));
                break;
            }
            case 3: {
                string cidade;
                cout << "Digite o nome do prefeito: ";
                getline(cin, nome);
                cout << "Digite a cidade: ";
                getline(cin, cidade);
                politicos.push_back(new Prefeito(nome, cidade));
                break;
            }
            case 0:
                cout << "\nImprimindo todos os políticos criados:\n";
                for (const auto& p : politicos) {
                    cout << "------------------------\n";
                    p->Imprime();
                }
                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (opcao != 0);

    // Liberar memória
    for (auto p : politicos) {
        delete p;
    }

    return 0;
}
