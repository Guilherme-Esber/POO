#include <iostream>
#include "politico.h"

int main() {
    cout << "## POLITICO COMPLETO ##" << endl << endl;

    Prefeito p("Nome1", "P1", "1", "Brasil", "MG", "Itajuba");
    cout << "*******************" << endl << endl;
    cout << "# Prefeito 01 #" << endl;
    p.imprime();

    Governador g("Nome2", "P2", "2", "Brasil", "RJ");
    cout << endl << "# Governador 01 #" << endl;
    g.imprime();

    Presidente pr("Nome3", "P3", "3", "Brasil");
    cout << endl << "# Presidente 01 #" << endl;
    pr.imprime();

    Politico pi("Nome4", "P4", "0");
    cout << endl << "# Politico 01 #" << endl;
    pi.imprime();

    cout << "*******************" << endl << endl;
    return 0;
}
