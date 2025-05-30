#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main() {
    PhoneNumber phone;

    cout << "Digite o número de telefone no formato (XX) 9XXXX-XXXX:" << endl;
    cin >> phone;

    cout << "O número de telefone digitado foi: " << phone << endl;

    return 0;
}
