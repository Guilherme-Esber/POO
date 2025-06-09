#ifndef POLITICOS_H
#define POLITICOS_H

#include <string>
#include <iostream>

using namespace std;

class Politico {
protected:
    string nome;

public:
    Politico(const string& nome);
    virtual ~Politico() = default;
    virtual void Imprime() const;
};

class Presidente : public Politico {
private:
    int mandato;

public:
    Presidente(const string& nome, int mandato);
    void Imprime() const override;
};

class Governador : public Politico {
private:
    string estado;

public:
    Governador(const string& nome, const string& estado);
    void Imprime() const override;
};

class Prefeito : public Politico {
private:
    string cidade;

public:
    Prefeito(const string& nome, const string& cidade);
    void Imprime() const override;
};

#endif
