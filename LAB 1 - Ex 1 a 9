#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

bool isPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void calcularPrimos() {
    int count = 0;
    int num = 2;
    while (count < 20) {
        if (isPrimo(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}

void printInt(int n, int base) {
    char Array[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                      '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    if (n >= base)
        printInt(n / base, base);
    cout << Array[n % base];
}

int somaRecursiva(int n) {
    if (n == 0) {
        return 0;
    }
    return n + somaRecursiva(n - 1);
}

int mdc(int x, int y) {
    if (y == 0) {
        return x;
    }
    return mdc(y, x % y);
}

bool ehPalindromo(int numero) {
    string strNumero = to_string(numero);
    string reverso = string(strNumero.rbegin(), strNumero.rend());
    return strNumero == reverso;
}

void converterBinarioParaDecimal() {
    int binario, decimal = 0, posicao = 0;

    cout << "Digite um numero binario (composto apenas por 0s e 1s): ";
    cin >> binario;

    while (binario > 0) {
        int digito = binario % 10;
        decimal += digito * pow(2, posicao);
        binario /= 10;
        posicao++;
    }

    cout << "O equivalente decimal é: " << decimal << endl;
}

void desenharRetangulo() {
    int largura, altura;
    char charFrente, charPreenchimento;
    bool estaPreenchido;

    cout << "Digite a largura do retângulo: ";
    cin >> largura;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;
    cout << "Digite o caractere para a borda: ";
    cin >> charFrente;
    cout << "Digite o caractere para o preenchimento: ";
    cin >> charPreenchimento;
    cout << "O retângulo deve ser preenchido? (1 para Sim, 0 para Não): ";
    cin >> estaPreenchido;

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1) {
                cout << charFrente;
            } else if (estaPreenchido) {
                cout << charPreenchimento;
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

void verificarPalindromo() {
    int numero;

    while (true) {
        cout << "Digite um número inteiro de sete dígitos: ";
        cin >> numero;

        if (numero < 1000000 || numero > 9999999) {
            cout << "Erro: O número deve ter exatamente sete dígitos. Tente novamente." << endl;
        } else {
            break;
        }
    }

    if (ehPalindromo(numero)) {
        cout << "O número " << numero << " é um palíndromo." << endl;
    } else {
        cout << "O número " << numero << " não é um palíndromo." << endl;
    }
}

int main() {
    int opcao;
    do {
        cout << "\nMenu de Opções:\n";
        cout << "1. Calcular fatorial\n";
        cout << "2. Calcular números primos\n";
        cout << "3. Converter número para base (ex: decimal para hexadecimal)\n";
        cout << "4. Desenhar retângulo\n";
        cout << "5. Soma recursiva\n";
        cout << "6. Calcular MDC\n";
        cout << "7. Converter binário para decimal\n";
        cout << "8. Verificar palíndromo de 7 dígitos\n";
        cout << "9. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int n;
                cout << "Digite um número para calcular o fatorial: ";
                cin >> n;
                cout << "O fatorial de " << n << " é " << fatorial(n) << endl;
                break;
            }
            case 2:
                cout << "Os 20 primeiros números primos são: ";
                calcularPrimos();
                break;
            case 3: {
                int n, base;
                cout << "Digite o número inteiro: ";
                cin >> n;
                cout << "Digite a base (2 a 16): ";
                cin >> base;
                cout << "Resultado: ";
                printInt(n, base);
                cout << endl;
                break;
            }
            case 4:
                desenharRetangulo();
                break;
            case 5: {
                int n;
                cout << "Digite um número inteiro positivo: ";
                cin >> n;
                if (n < 0) {
                    cout << "Por favor, insira um número inteiro positivo." << endl;
                } else {
                    cout << "A soma dos " << n << " primeiros números inteiros é: " << somaRecursiva(n) << endl;
                }
                break;
            }
            case 6: {
                int num1, num2;
                cout << "Digite o primeiro número inteiro: ";
                cin >> num1;
                cout << "Digite o segundo número inteiro: ";
                cin >> num2;
                cout << "O máximo divisor comum (MDC) de " << num1 << " e " << num2 << " é: " << mdc(num1, num2) << endl;
                break;
            }
            case 7:
                converterBinarioParaDecimal();
                break;
            case 8:
                verificarPalindromo();
                break;
            case 9:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (opcao != 9);

    return 0;
}
