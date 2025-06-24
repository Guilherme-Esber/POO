// main.cpp
#include <iostream>
#include "Vetor.h"

int main() {
    try {
        Vetor<int> numeros;
        numeros.Adiciona(5);
        numeros.Adiciona(1);
        numeros.Adiciona(3);

        std::cout << "Antes da ordenação: ";
        numeros.Exibe();

        numeros.Ordena();

        std::cout << "Depois da ordenação: ";
        numeros.Exibe();
    }
    catch (const std::exception& e) {
        std::cerr << "Exceção capturada: " << e.what() << std::endl;
    }

    return 0;
}
