// Vetor.h
#ifndef VETOR_H
#define VETOR_H

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <type_traits>

template <typename T>
class Vetor {
private:
    std::vector<T> elementos;

public:
    Vetor();
    void Adiciona(const T& valor);
    void Exibe() const;
    void Ordena();
};

#include "Vetor.tpp"

#endif
