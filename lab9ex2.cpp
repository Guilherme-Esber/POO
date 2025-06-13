#include "memoria.h"
#include <iostream>
#include <vector>
#include <new>  // Para std::bad_alloc

// Função para alocar continuamente vetores de double até que ocorra uma exceção
void alocarMemoria() {
    size_t memoriaTotal = 0;  // Variável para armazenar a memória total alocada (em bytes)

    while (true) {
        try {
            // Tenta alocar um vetor com 10 milhões de elementos
            std::vector<double> vetor(10000000, 0.0);

            // Calcula a memória alocada nesta iteração
            size_t memoriaAtual = vetor.size() * sizeof(double);  // Tamanho do vetor em bytes
            memoriaTotal += memoriaAtual;  // Atualiza a memória total alocada

            // Exibe a quantidade de memória alocada nesta iteração e o total acumulado
            std::cout << "Alocado um vetor de " << vetor.size() << " elementos (" 
                      << memoriaAtual / (1024 * 1024) << " MB)." << std::endl;
            std::cout << "Memória total alocada até agora: " 
                      << memoriaTotal / (1024 * 1024) << " MB" << std::endl;

        }
        catch (const std::bad_alloc& e) {
            std::cerr << "Erro de alocação de memória: " << e.what() << std::endl;
            break;  // Encerra o loop quando ocorre a exceção
        }
    }
}
