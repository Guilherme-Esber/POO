// pilha.tpp
#ifndef PILHA_TPP
#define PILHA_TPP

#include <iostream>

template <typename T>
CPilha<T>::CPilha(int memoria) : m_tamanho(memoria), m_ponteirodaPilha(0) {
    m_dados = new T[m_tamanho];
}

template <typename T>
CPilha<T>::CPilha() : m_tamanho(10), m_ponteirodaPilha(0) {
    m_dados = new T[m_tamanho];
}

template <typename T>
CPilha<T>::~CPilha() {
    delete[] m_dados;
}

template <typename T>
T CPilha<T>::push(T push_this) {
    if (m_ponteirodaPilha >= m_tamanho) {
        throw std::overflow_error("Erro: Pilha cheia!");
    }
    m_dados[m_ponteirodaPilha++] = push_this;
    return push_this;
}

template <typename T>
T CPilha<T>::pop(T* pop_to) {
    if (m_ponteirodaPilha == 0) {
        throw std::underflow_error("Erro: Pilha vazia!");
    }
    *pop_to = m_dados[--m_ponteirodaPilha];
    return *pop_to;
}

template <typename U>
std::istream& operator>>(std::istream& in, CPilha<U>& pilha) {
    U valor;
    std::cout << "Digite um valor para adicionar à pilha: ";
    in >> valor;
    try {
        pilha.push(valor);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return in;
}

template <typename U>
std::ostream& operator<<(std::ostream& out, const CPilha<U>& pilha) {
    out << "Pilha: ";
    for (int i = pilha.m_ponteirodaPilha - 1; i >= 0; --i) {
        out << pilha.m_dados[i] << " ";
    }
    return out;
}

#endif
