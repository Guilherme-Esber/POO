#include <iostream>
using namespace std;

int multipleByValue(int count) {
    count *= count;
    return count;
}

void multipleByReference(int &count) {
    count *= count;
}

int main() {
    int count;
    
    cout << "Digite um valor para 'count': ";
    cin >> count;

    int resultByValue = multipleByValue(count);
    cout << "Resultado após multipleByValue: " << resultByValue << endl;

    multipleByReference(count);
    cout << "Resultado após multipleByReference: " << count << endl;

    return 0;
}
