#include "ListaOrdenada.h"
#include <string>

using namespace std;

int main() {
    ListaOrdenada<int> listaInt;
    listaInt.inserir(10);
    listaInt.inserir(5);
    listaInt.inserir(7);
    listaInt.inserir(3);
    cout << "Lista de inteiros: ";
    listaInt.exibir();

    ListaOrdenada<std::string> listaStr;
    listaStr.inserir("banana");
    listaStr.inserir("abacaxi");
    listaStr.inserir("uva");
    listaStr.inserir("laranja");
    cout << "Lista de strings: ";
    listaStr.exibir();

    return 0;
}
