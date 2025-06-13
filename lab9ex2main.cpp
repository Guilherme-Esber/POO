#include <iostream>
#include "memoria.h"

int main() {
    std::cout << "Iniciando o teste de alocação contínua..." << std::endl;
    
    // Chama a função que tenta alocar memória indefinidamente
    alocarMemoria();
    
    std::cout << "Testes de alocação de memória finalizados." << std::endl;
    
    return 0;
}
