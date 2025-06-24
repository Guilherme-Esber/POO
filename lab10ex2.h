// pilha.h
#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <stdexcept>

template <typename T>
class CPilha {
private:
    T* m_dados;               // Ponteiro para os dados da pilha
    int m_ponteirodaPilha;    // Apontador para o topo da pilha
    int m_tamanho;            // Tamanho máximo da pilha

public:
    CPilha(int memoria);
    CPilha();
    ~CPilha();

    T pop(T* pop_to);
    T push(T push_this);

    template <typename U>
    friend std::istream& operator>>(std::istream& in, CPilha<U>& pilha);

    template <typename U>
    friend std::ostream& operator<<(std::ostream& out, const CPilha<U>& pilha);
};

#include "pilha.tpp"

#endif
