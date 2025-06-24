// Vetor.h
#ifndef VETOR_H
#define VETOR_H

#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <type_traits>

template <typename T>
class Vetor {
private:
    std::vector<T> elementos;

public:
    void Adiciona(const T& valor);
    void Exibe() const;
    void Ordena();
    void EntradaDeDados(int quantidade);
};

#include "Vetor.tpp"
#endif
