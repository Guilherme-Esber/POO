// ex01.cpp - Demonstração de Pilha (stack) usando STL

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pilha;
    int opcao;

    cout << "---------------------------\n";
    cout << "Programa de Pilha STL\n";
    cout << "---------------------------\n";

    do {
        cout << "1. Insira um elemento na pilha\n";
        cout << "2. Remova um elemento da pilha\n";
        cout << "3. Tamanho da pilha\n";
        cout << "4. Primeiro elemento da pilha\n";
        cout << "5. Sair\n";
        cout << "Escolha (1-5): ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int valor;
                cout << "Entre com o valor a ser inserido: ";
                cin >> valor;
                pilha.push(valor);
                break;
            }
            case 2:
                if (!pilha.empty()) {
                    cout << "Elemento " << pilha.top() << " removido\n";
                    pilha.pop();
                } else {
                    cout << "A pilha esta vazia!\n";
                }
                break;
            case 3:
                cout << "Tamanho da pilha: " << pilha.size() << '\n';
                break;
            case 4:
                if (!pilha.empty()) {
                    cout << "Primeiro elemento da pilha: " << pilha.top() << '\n';
                } else {
                    cout << "A pilha esta vazia!\n";
                }
                break;
            case 5:
                cout << "Programa finalizado!\n";
                break;
            default:
                cout << "Opcao invalida! Tente novamente.\n";
        }
    } while (opcao != 5);

    return 0;
}
