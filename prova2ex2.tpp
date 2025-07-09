#include <algorithm>
#include <iostream>

using namespace std;

template<typename T>
void ListaOrdenada<T>::inserir(const T& valor) {
    auto it = lower_bound(dados.begin(), dados.end(), valor);
    dados.insert(it, valor);
}

template<typename T>
void ListaOrdenada<T>::exibir() const {
    for(const auto& v : dados)
        cout << v << " ";
    cout << std::endl;
}

template<typename T>
size_t ListaOrdenada<T>::tamanho() const {
    return dados.size();
}

template<typename T>
void ListaOrdenada<T>::limpar() {
    dados.clear();
}
