#ifndef POLITICO_H
#define POLITICO_H

#include <iostream>
#include <string>
using namespace std;

class Politico {
protected:
    string nome, partido, numero;

public:
    Politico(string n, string p, string nu) : nome{n}, partido{p}, numero{nu} {
        cout << "Construindo Politico!" << endl;
    }

    virtual void imprime();
    virtual ~Politico() {
        cout << "Destruindo Politico!" << endl << endl;
    }
};

class Presidente : public Politico {
protected:
    string pais;

public:
    Presidente(string nome, string partido, string numero, string p)
        : Politico(nome, partido, numero), pais{p} {
        cout << "Construindo Presidente!" << endl;
    }

    void imprime() override;
    ~Presidente() override {
        cout << "Destruindo Presidente!" << endl;
    }
};

class Governador : public Presidente {
protected:
    string estado;

public:
    Governador(string nome, string partido, string numero, string pais, string e)
        : Presidente(nome, partido, numero, pais), estado{e} {
        cout << "Construindo Governador!" << endl;
    }

    void imprime() override;
    ~Governador() override {
        cout << "Destruindo Governador!" << endl;
    }
};

class Prefeito : public Governador {
protected:
    string cidade;

public:
    Prefeito(string nome, string partido, string numero, string pais, string estado, string c)
        : Governador(nome, partido, numero, pais, estado), cidade{c} {
        cout << "Construindo Prefeito!" << endl << endl;
    }

    void imprime() override;
    ~Prefeito() override {
        cout << "Destruindo Prefeito!" << endl;
    }
};

#endif
