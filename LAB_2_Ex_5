#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    double *vetor = new double[tamanho];

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100 + 1;
    }

    double soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    cout << "Vetor: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    cout << "Soma dos elementos: " << soma << endl;

    delete[] vetor;

    return 0;
}
