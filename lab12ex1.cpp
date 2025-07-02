#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> heap;
    int opcao, valor;

    do {
        cout << "---------------------------\n";
        cout << "Programa de Heap STL\n";
        cout << "---------------------------\n";
        cout << "1. Insira um elemento na heap\n";
        cout << "2. Remova um elemento da heap\n";
        cout << "3. Tamanho da heap\n";
        cout << "4. Primeiro elemento da heap\n";
        cout << "5. Sair\n";
        cout << "Escolha (1-5): ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Entre com o valor a ser inserido: ";
                cin >> valor;
                heap.push(valor);
                break;

            case 2:
                if (!heap.empty()) {
                    cout << "Elemento " << heap.top() << " removido do topo da heap\n";
                    heap.pop();
                } else {
                    cout << "Heap vazia! Nada para remover.\n";
                }
                break;

            case 3:
                cout << "Tamanho da heap: " << heap.size() << endl;
                break;

            case 4:
                if (!heap.empty()) {
                    cout << "Primeiro elemento da heap (topo): " << heap.top() << endl;
                } else {
                    cout << "Heap vazia!\n";
                }
                break;

            case 5:
                cout << "Programa finalizado!\n";
                break;

            default:
                cout << "Opção inválida. Tente novamente.\n";
                break;
        }

    } while (opcao != 5);

    return 0;
}
