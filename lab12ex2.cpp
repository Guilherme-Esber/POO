#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> arvore;
    int opcao, valor;

    do {
        cout << "======================================\n";
        cout << "Implementação de Árvore (set) no STL\n";
        cout << "======================================\n";
        cout << "1. Inserir elemento\n";
        cout << "2. Remover elementos com determinado valor\n";
        cout << "3. Exibir elementos em ordem\n";
        cout << "4. Exibir quantidade de elementos\n";
        cout << "5. Remover todos os elementos\n";
        cout << "6. Consultar quantidade de elementos com determinado valor\n";
        cout << "7. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Digite o valor a ser inserido: ";
                cin >> valor;
                arvore.insert(valor);
                break;

            case 2:
                cout << "Digite o valor a ser removido: ";
                cin >> valor;
                if (arvore.count(valor) > 0) {
                    arvore.erase(valor);
                    cout << "Todos os elementos com valor " << valor << " foram removidos.\n";
                } else {
                    cout << "Valor não encontrado.\n";
                }
                break;

            case 3:
                cout << "Elementos em ordem: ";
                for (int v : arvore) {
                    cout << v << " ";
                }
                cout << endl;
                break;

            case 4:
                cout << "Quantidade total de elementos: " << arvore.size() << endl;
                break;

            case 5:
                arvore.clear();
                cout << "Todos os elementos foram removidos.\n";
                break;

            case 6:
                cout << "Digite o valor a ser consultado: ";
                cin >> valor;
                cout << "Quantidade de elementos com valor " << valor << ": " << arvore.count(valor) << endl;
                break;

            case 7:
                cout << "Programa finalizado!\n";
                break;

            default:
                cout << "Opção inválida. Tente novamente.\n";
                break;
        }

    } while (opcao != 7);

    return 0;
}

