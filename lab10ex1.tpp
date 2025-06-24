// Vetor.tpp
#ifndef VETOR_TPP
#define VETOR_TPP

#include <iostream>

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
    if constexpr (!std::is_convertible<decltype(std::declval<T>() < std::declval<T>()), bool>::value) {
        throw std::logic_error("Erro: Tipo não pode ser ordenado (falta operador <).");
    }

    try {
        std::sort(elementos.begin(), elementos.end());
    } catch (const std::exception& e) {
        throw std::runtime_error(std::string("Erro ao ordenar: ") + e.what());
    }
}

template <typename T>
void Vetor<T>::EntradaDeDados(int quantidade) {
    T valor;
    for (int i = 0; i < quantidade; ++i) {
        std::cout << "Digite o valor " << (i + 1) << ": ";
        std::cin >> valor;
        Adiciona(valor);
    }
}
#endif
