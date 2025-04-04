#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    size_t tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    vector<double> vetor(tamanho);

    for (size_t i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100 + 1;
    }

    double soma = 0;
    for (size_t i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    cout << "Vetor: ";
    for (size_t i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    cout << "Soma dos elementos: " << soma << endl;

    return 0;
}
