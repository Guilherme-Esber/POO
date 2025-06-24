// Vetor.tpp
#ifndef VETOR_TPP
#define VETOR_TPP

#include <iostream>

template <typename T>
Vetor<T>::Vetor() {}

template <typename T>
void Vetor<T>::Adiciona(const T& valor) {
    elementos.push_back(valor);
}

template <typename T>
void Vetor<T>::Exibe() const {
    for (const T& el : elementos) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void Vetor<T>::Ordena() {
    // Verifica se o tipo T pode ser comparado usando <
    if constexpr (!std::is_arithmetic<T>::value && !std::is_convertible<decltype(std::declval<T>() < std::declval<T>()), bool>::value) {
        throw std::logic_error("Tipo não pode ser ordenado: operador < não está definido.");
    }

    try {
        std::sort(elementos.begin(), elementos.end());
    } catch (const std::exception& e) {
        throw std::runtime_error(std::string("Erro ao ordenar: ") + e.what());
    }
}

#endif
