#ifndef LISTAORDENADA_H
#define LISTAORDENADA_H

#include <vector>
#include <cstddef>

using namespace std;

template<typename T>
class ListaOrdenada {
private:
    vector<T> dados;
public:
    void inserir(const T& valor);
    void exibir() const;
    size_t tamanho() const;
    void limpar();
};

#include "ListaOrdenada.tpp"

#endif
