#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void menu() {
    cout << "===============================\n";
    cout << "Implementacao de Lista no STL\n";
    cout << "===============================\n";
    cout << "1. Inserir elemento na frente\n";
    cout << "2. Inserir elemento no final\n";
    cout << "3. Excluir elemento na frente\n";
    cout << "4. Excluir elemento no final\n";
    cout << "5. Exibir primeiro elemento da lista\n";
    cout << "6. Exibir ultimo elemento da lista\n";
    cout << "7. Tamanho da lista\n";
    cout << "8. Redimensionar lista\n";
    cout << "9. Remover elementos com valores especificos\n";
    cout << "10. Remover valores duplicados\n";
    cout << "11. Reverter a ordem dos elementos\n";
    cout << "12. Ordenar a lista\n";
    cout << "13. Sair\n";
    cout << "Escolha uma opcao: ";
}

int main() {
    list<int> lista;
    int opcao;

    do {
        menu();
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int valor;
                cout << "Valor a inserir na frente: ";
                cin >> valor;
                lista.push_front(valor);
                break;
            }
            case 2: {
                int valor;
                cout << "Valor a inserir no final: ";
                cin >> valor;
                lista.push_back(valor);
                break;
            }
            case 3:
                if (!lista.empty()) {
                    cout << "Elemento " << lista.front() << " removido da frente.\n";
                    lista.pop_front();
                } else {
                    cout << "A lista esta vazia!\n";
                }
                break;
            case 4:
                if (!lista.empty()) {
                    cout << "Elemento " << lista.back() << " removido do final.\n";
                    lista.pop_back();
                } else {
                    cout << "A lista esta vazia!\n";
                }
                break;
            case 5:
                if (!lista.empty())
                    cout << "Primeiro elemento: " << lista.front() << '\n';
                else
                    cout << "A lista esta vazia!\n";
                break;
            case 6:
                if (!lista.empty())
                    cout << "Ultimo elemento: " << lista.back() << '\n';
                else
                    cout << "A lista esta vazia!\n";
                break;
            case 7:
                cout << "Tamanho da lista: " << lista.size() << '\n';
                break;
            case 8: {
                size_t novo_tam;
                cout << "Novo tamanho da lista: ";
                cin >> novo_tam;
                lista.resize(novo_tam);
                cout << "Lista redimensionada.\n";
                break;
            }
            case 9: {
                int valor;
                cout << "Valor a ser removido: ";
                cin >> valor;
                lista.remove(valor);
                cout << "Elementos removidos, se existiam.\n";
                break;
            }
            case 10:
                lista.unique();
                cout << "Valores duplicados removidos (apenas consecutivos).\n";
                break;
            case 11:
                lista.reverse();
                cout << "Lista invertida.\n";
                break;
            case 12:
                lista.sort();
                cout << "Lista ordenada.\n";
                break;
            case 13:
                cout << "Programa finalizado!\n";
                break;
            default:
                cout << "Opcao invalida! Tente novamente.\n";
        }
        if (opcao != 13) {
            cout << "Lista: ";
            for (const int& val : lista)
                cout << val << " ";
            cout << '\n';
        }
    } while (opcao != 13);

    return 0;
}
