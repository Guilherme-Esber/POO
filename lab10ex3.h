#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <stdexcept>

template <typename T>
class CPilha {
private:
    T* m_dados;
    int m_ponteiroTopo;
    int m_tamanho;

public:
    CPilha(int tamanho = 10);
    CPilha(const CPilha<T>& outra);
    CPilha<T>& operator=(const CPilha<T>& outra);
    ~CPilha();

    T push(const T& valor);
    T pop(T* destino);

    template <typename U>
    friend std::ostream& operator<<(std::ostream& out, const CPilha<U>& pilha);

    template <typename U>
    friend std::istream& operator>>(std::istream& in, CPilha<U>& pilha);
};

#include "pilha.tpp"

#endif
