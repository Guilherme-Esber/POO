#include "Politicos.h"

int main() {
    Presidente p("João Silva", 4);
    p.Imprime();

    cout << endl;

    Governador g("Maria Oliveira", "São Paulo");
    g.Imprime();

    cout << endl;

    Prefeito pf("Carlos Souza", "Campinas");
    pf.Imprime();

    return 0;
}
