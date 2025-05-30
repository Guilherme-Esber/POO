#include "circulo.h"

istream& operator>>(istream& input, Ponto& pt) {
    pt.read();
    return input;
}

ostream& operator<<(ostream& output, const Ponto& pt) {
    pt.print();
    return output;
}
