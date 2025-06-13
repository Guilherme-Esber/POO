#include "pilha.h"
#include <stdexcept>

// Construtor com parâmetro para alocar memória para a pilha
CPilha::CPilha(int memoria) : m_tamanho(memoria), m_ponteirodaPilha(0) {
    m_dados = new int[m_tamanho];  // Aloca a memória para a pilha
}

// Construtor sem parâmetro
CPilha::CPilha(void) : m_tamanho(10), m_ponteirodaPilha(0) {
    m_dados = new int[m_tamanho];  // Aloca memória para a pilha com tamanho padrão
}

// Destrutor para liberar a memória alocada
CPilha::~CPilha(void) {
    delete[] m_dados;  // Libera a memória alocada
}

// Método para remover um elemento da pilha
int CPilha::pop(int *pop_to) {
    if (m_ponteirodaPilha == 0) {  // Verifica se a pilha está vazia
        throw std::underflow_error("Erro: Pilha vazia! Não há elementos para retirar.");
    }
    *pop_to = m_dados[--m_ponteirodaPilha];  // Decrementa o ponteiro e retorna o valor
    return *pop_to;
}

// Método para adicionar um elemento à pilha
int CPilha::push(int push_this) {
    if (m_ponteirodaPilha >= m_tamanho) {  // Verifica se a pilha está cheia
        throw std::overflow_error("Erro: Pilha cheia! Não é possível adicionar mais elementos.");
    }
    m_dados[m_ponteirodaPilha++] = push_this;  // Adiciona o valor no topo da pilha
    return push_this;
}

// Sobrecarga do operador de leitura (>>)
std::istream& operator>>(std::istream& in, CPilha& pilha) {
    int valor;
    std::cout << "Digite um valor para adicionar à pilha: ";
    in >> valor;
    try {
        pilha.push(valor);  // Tenta adicionar o valor à pilha
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;  // Exibe a mensagem de erro se houver
    }
    return in;
}

// Sobrecarga do operador de impressão (<<)
std::ostream& operator<<(std::ostream& out, const CPilha& pilha) {
    out << "Pilha: ";
    for (int i = pilha.m_ponteirodaPilha - 1; i >= 0; --i) {
        out << pilha.m_dados[i] << " ";  // Imprime os valores da pilha do topo para a base
    }
    return out;
}
