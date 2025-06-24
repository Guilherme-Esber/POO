#include <iostream>
#include "pilha.h"

int main() {
    try {
        // Pilha de inteiros
        CPilha<int> pilhaInt(3);
        pilhaInt.push(1);
        pilhaInt.push(2);
        pilhaInt.push(3);
        std::cout << "Pilha<int>: " << pilhaInt << std::endl;

        // Pilha de floats
        CPilha<float> pilhaFloat(3);
        pilhaFloat.push(1.1f);
        pilhaFloat.push(2.2f);
        pilhaFloat.push(3.3f);
        std::cout << "Pilha<float>: " << pilhaFloat << std::endl;

        // Pilha de chars
        CPilha<char> pilhaChar(3);
        pilhaChar.push('A');
        pilhaChar.push('B');
        pilhaChar.push('C');
        std::cout << "Pilha<char>: " << pilhaChar << std::endl;

        // Pilha de CPilha<int>
        CPilha<CPilha<int>> pilhaDePilhas(2);

        CPilha<int> subPilha1(2);
        subPilha1.push(10);
        subPilha1.push(20);

        CPilha<int> subPilha2(2);
        subPilha2.push(30);
        subPilha2.push(40);

        pilhaDePilhas.push(subPilha1);
        pilhaDePilhas.push(subPilha2);

        std::cout << "\nConteúdo da Pilha<CPilha<int>> (do topo para base):" << std::endl;
        CPilha<int> temp;
        while (true) {
            try {
                pilhaDePilhas.pop(&temp);
                std::cout << temp << std::endl;
            } catch (const std::exception&) {
                break;
            }
        }

    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
