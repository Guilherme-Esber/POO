// main.cpp
#include <iostream>
#include "pilha.h"

int main() {
    CPilha<int> pilha(3);
    int valor;

    try {
        std::cout << "Adicionando elementos à pilha:\n";
        pilha.push(10);
        pilha.push(20);
        pilha.push(30);
        pilha.push(40);  // Deve gerar exceção
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << pilha << std::endl;

    try {
        std::cout << "Removendo elementos da pilha:\n";
        pilha.pop(&valor);
        std::cout << "Elemento removido: " << valor << std::endl;

        pilha.pop(&valor);
        std::cout << "Elemento removido: " << valor << std::endl;

        pilha.pop(&valor);
        std::cout << "Elemento removido: " << valor << std::endl;

        pilha.pop(&valor);  // Deve gerar exceção
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    // Testando com outro tipo
    CPilha<std::string> pilhaStr(2);
    std::cin >> pilhaStr;
    std::cin >> pilhaStr;
    std::cout << pilhaStr << std::endl;

    return 0;
}
