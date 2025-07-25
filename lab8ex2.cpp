#include "Politicos.h"

// Implementação da classe Politico
Politico::Politico(const string& nome) : nome(nome) {
    cout << "Entrando no construtor da classe Politico" << endl;
}

void Politico::Imprime() const {
    cout << "Politico: " << nome << endl;
}

// Implementação da classe Presidente
Presidente::Presidente(const string& nome, int mandato)
    : Politico(nome), mandato(mandato) {
    cout << "Entrando no construtor da classe Presidente" << endl;
}

void Presidente::Imprime() const {
    Politico::Imprime();
    cout << "Cargo: Presidente, Mandato: " << mandato << " anos" << endl;
}

// Implementação da classe Governador
Governador::Governador(const string& nome, const string& estado)
    : Politico(nome), estado(estado) {
    cout << "Entrando no construtor da classe Governador" << endl;
}

void Governador::Imprime() const {
    Politico::Imprime();
    cout << "Cargo: Governador do estado de " << estado << endl;
}

// Implementação da classe Prefeito
Prefeito::Prefeito(const string& nome, const string& cidade)
    : Politico(nome), cidade(cidade) {
    cout << "Entrando no construtor da classe Prefeito" << endl;
}

void Prefeito::Imprime() const {
    Politico::Imprime();
    cout << "Cargo: Prefeito da cidade de " << cidade << endl;
}
