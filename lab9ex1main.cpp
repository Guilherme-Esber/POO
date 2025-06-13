#include <iostream>
#include "polinomio.h"

int main() {
    int grau1, grau2;

    std::cout << "Digite o grau do primeiro polinomio: ";
    std::cin >> grau1;
    Polinomio p1(grau1);
    std::cin >> p1;

    std::cout << "\nDigite o grau do segundo polinomio: ";
    std::cin >> grau2;
    Polinomio p2(grau2);
    std::cin >> p2;

    std::cout << "\nPolinomio 1: " << p1 << std::endl;
    std::cout << "Polinomio 2: " << p2 << std::endl;

    Polinomio soma = p1 + p2;
    std::cout << "\nSoma: " << soma << std::endl;

    Polinomio subtracao = p1 - p2;
    std::cout << "Subtracao: " << subtracao << std::endl;

    // Testando a exceção de índice fora da faixa
    try {
        std::cout << "Coeficiente do termo de grau 3 do polinômio 1: " << p1[3] << std::endl; // Exemplo de índice fora da faixa
    } catch (const std::out_of_range& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
