#ifndef PILHA_TPP
#define PILHA_TPP

#include <iostream>

template <typename T>
CPilha<T>::CPilha(int tamanho)
    : m_tamanho(tamanho), m_ponteiroTopo(0) {
    m_dados = new T[m_tamanho];
}

template <typename T>
CPilha<T>::CPilha(const CPilha<T>& outra)
    : m_tamanho(outra.m_tamanho), m_ponteiroTopo(outra.m_ponteiroTopo) {
    m_dados = new T[m_tamanho];
    for (int i = 0; i < m_ponteiroTopo; ++i) {
        m_dados[i] = outra.m_dados[i];
    }
}

template <typename T>
CPilha<T>& CPilha<T>::operator=(const CPilha<T>& outra) {
    if (this != &outra) {
        delete[] m_dados;
        m_tamanho = outra.m_tamanho;
        m_ponteiroTopo = outra.m_ponteiroTopo;
        m_dados = new T[m_tamanho];
        for (int i = 0; i < m_ponteiroTopo; ++i) {
            m_dados[i] = outra.m_dados[i];
        }
    }
    return *this;
}

template <typename T>
CPilha<T>::~CPilha() {
    delete[] m_dados;
}

template <typename T>
T CPilha<T>::push(const T& valor) {
    if (m_ponteiroTopo >= m_tamanho) {
        throw std::overflow_error("Erro: Pilha cheia.");
    }
    m_dados[m_ponteiroTopo++] = valor;
    return valor;
}

template <typename T>
T CPilha<T>::pop(T* destino) {
    if (m_ponteiroTopo == 0) {
        throw std::underflow_error("Erro: Pilha vazia.");
    }
    *destino = m_dados[--m_ponteiroTopo];
    return *destino;
}

template <typename U>
std::ostream& operator<<(std::ostream& out, const CPilha<U>& pilha) {
    out << "Pilha: ";
    for (int i = pilha.m_ponteiroTopo - 1; i >= 0; --i) {
        out << pilha.m_dados[i] << " ";
    }
    return out;
}

template <typename U>
std::istream& operator>>(std::istream& in, CPilha<U>& pilha) {
    U valor;
    std::cout << "Digite um valor: ";
    in >> valor;
    try {
        pilha.push(valor);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return in;
}

#endif
