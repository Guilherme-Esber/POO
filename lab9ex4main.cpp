#include <iostream>
#include "pilha.h"

int main() {
    CPilha pilha(3);  // Criar uma pilha com capacidade para 3 elementos
    int valor;

    // Testando o método push
    try {
        std::cout << "Adicionando elementos à pilha:" << std::endl;
        pilha.push(10);  // Adiciona 10 à pilha
        pilha.push(20);  // Adiciona 20 à pilha
        pilha.push(30);  // Adiciona 30 à pilha
        pilha.push(40);  // Tentativa de adicionar um valor à pilha cheia (erro)
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;  // Exibe a mensagem de erro se houver
    }

    // Imprimindo a pilha após inserções
    std::cout << pilha << std::endl;

    // Testando o método pop
    try {
        std::cout << "Removendo elementos da pilha:" << std::endl;
        pilha.pop(&valor);  // Remove um valor da pilha
        std::cout << "Elemento removido: " << valor << std::endl;

        pilha.pop(&valor);  // Remove outro valor
        std::cout << "Elemento removido: " << valor << std::endl;

        pilha.pop(&valor);  // Remove o último valor
        std::cout << "Elemento removido: " << valor << std::endl;

        pilha.pop(&valor);  // Tentativa de remover de uma pilha vazia (erro)
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;  // Exibe a mensagem de erro se houver
    }

    return 0;
}
