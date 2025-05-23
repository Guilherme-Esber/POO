#ifndef PROVABIMESTRAL_H
#define PROVABIMESTRAL_H

#include <string>
using namespace std;

class ProvaBimestral {
private:
    string disciplina;
    string nomeAluno;
    float nota;
    string data;

public:
    ProvaBimestral(const string& disciplina, const string& nomeAluno, float nota, const string& data);

    ~ProvaBimestral();

    void exibirDetalhes() const;
    bool foiAprovado(float mediaMinima) const;
    void alterarNota(float novaNota);
};

#endif
