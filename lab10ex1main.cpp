// main.cpp
#include <iostream>
#include "Vetor.h"
#include <string>

int main() {
    try {
        int qtd;

        // Vetor de inteiros
        std::cout << "Quantos inteiros deseja inserir? ";
        std::cin >> qtd;

        Vetor<int> vetorInt;
        vetorInt.EntradaDeDados(qtd);

        std::cout << "Antes da ordenação: ";
        vetorInt.Exibe();

        vetorInt.Ordena();

        std::cout << "Depois da ordenação: ";
        vetorInt.Exibe();

        // Vetor de strings
        std::cout << "\nQuantas strings deseja inserir? ";
        std::cin >> qtd;

        Vetor<std::string> vetorStr;
        vetorStr.EntradaDeDados(qtd);

        std::cout << "Antes da ordenação: ";
        vetorStr.Exibe();

        vetorStr.Ordena();

        std::cout << "Depois da ordenação: ";
        vetorStr.Exibe();

    } catch (const std::exception& e) {
        std::cerr << "Exceção: " << e.what() << std::endl;
    }

    return 0;
}
