#include "memoria.h"
#include <iostream>
#include <vector>
#include <new>  // Para std::bad_alloc

// Função para alocar continuamente vetores de double até que ocorra uma exceção
void alocarMemoria() {
    std::vector<double> *vetor = nullptr;

    while (true) {
        try {
            // Tenta alocar um vetor com 10 milhões de elementos
            vetor = new std::vector<double>(10000000, 0.0);
            std::cout << "Alocado um vetor de tamanho " << vetor->size() << std::endl;
        }
        catch (const std::bad_alloc& e) {
            std::cerr << "Erro de alocação de memória: " << e.what() << std::endl;
            break;  // Encerra o loop quando ocorre a exceção
        }
    }
}
