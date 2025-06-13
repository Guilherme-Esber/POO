#include <iostream>
#include <stdexcept>  // Para exceções
#include "polinomio.h"

int main() {
    try {
        int grau1, grau2;

        // Solicitar o grau do primeiro polinômio
        std::cout << "Digite o grau do primeiro polinômio: ";
        std::cin >> grau1;
        if (grau1 < 0) {
            throw std::invalid_argument("Erro: O grau do polinômio não pode ser negativo.");
        }
        Polinomio p1(grau1);  // Criar o primeiro polinômio
        std::cout << "Digite os coeficientes do polinômio 1: ";
        std::cin >> p1;  // Ler os coeficientes do polinômio 1

        // Solicitar o grau do segundo polinômio
        std::cout << "Digite o grau do segundo polinômio: ";
        std::cin >> grau2;
        if (grau2 < 0) {
            throw std::invalid_argument("Erro: O grau do polinômio não pode ser negativo.");
        }
        Polinomio p2(grau2);  // Criar o segundo polinômio
        std::cout << "Digite os coeficientes do polinômio 2: ";
        std::cin >> p2;  // Ler os coeficientes do polinômio 2

        // Exibir os polinômios
        std::cout << "\nPolinômio 1: " << p1 << std::endl;
        std::cout << "Polinômio 2: " << p2 << std::endl;

        // Realizar a soma e subtração
        Polinomio soma = p1 + p2;
        std::cout << "\nSoma: " << soma << std::endl;

        Polinomio subtracao = p1 - p2;
        std::cout << "Subtração: " << subtracao << std::endl;

        // Acesso ao coeficiente do polinômio 1
        int grauEscolhido;
        std::cout << "Escolha o grau do coeficiente a ser acessado (de 0 até " << grau1 << " para o polinômio 1): ";
        std::cin >> grauEscolhido;
        
        // Verificar se o grau escolhido é válido para o polinômio 1
        if (grauEscolhido > grau1 || grauEscolhido < 0) {
            throw std::out_of_range("Erro: Grau fora do alcance do polinômio 1.");
        }
        
        // Exibir o coeficiente do grau escolhido para o polinômio 1
        std::cout << "Coeficiente do termo de grau " << grauEscolhido << " do polinômio 1: " << p1[grauEscolhido] << std::endl;

        // Acesso ao coeficiente do polinômio 2
        std::cout << "Escolha o grau do coeficiente a ser acessado (de 0 até " << grau2 << " para o polinômio 2): ";
        std::cin >> grauEscolhido;
        
        // Verificar se o grau escolhido é válido para o polinômio 2
        if (grauEscolhido > grau2 || grauEscolhido < 0) {
            throw std::out_of_range("Erro: Grau fora do alcance do polinômio 2.");
        }
        
        // Exibir o coeficiente do grau escolhido para o polinômio 2
        std::cout << "Coeficiente do termo de grau " << grauEscolhido << " do polinômio 2: " << p2[grauEscolhido] << std::endl;

    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;  // Exibir mensagem de erro se o grau for inválido
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;  // Exibir mensagem de erro se o grau escolhido for inválido
    }

    return 0;
}
