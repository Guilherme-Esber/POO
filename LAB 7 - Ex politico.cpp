#include "politico.h"

void Politico::imprime() {
    cout << "Numero: " << numero << endl;
    cout << "Nome: " << nome << endl;
    cout << "Partido: " << partido << endl;
}

void Presidente::imprime() {
    Politico::imprime();
    cout << "País: " << pais << endl;
}

void Governador::imprime() {
    Presidente::imprime();
    cout << "Estado: " << estado << endl;
}

void Prefeito::imprime() {
    Governador::imprime();
    cout << "Cidade: " << cidade << endl << endl;
}
