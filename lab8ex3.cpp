#include "Formas.h"

// Classe Ponto
Ponto::Ponto(double x, double y) : x(x), y(y) {}

double Ponto::getX() const { return x; }
double Ponto::getY() const { return y; }

void Ponto::setX(double x) { this->x = x; }
void Ponto::setY(double y) { this->y = y; }

istream& operator>>(istream& in, Ponto& p) {
    cout << "Informe a coordenada x: ";
    in >> p.x;
    cout << "Informe a coordenada y: ";
    in >> p.y;
    return in;
}

ostream& operator<<(ostream& out, const Ponto& p) {
    out << "Ponto(" << p.x << ", " << p.y << ")";
    return out;
}

double Ponto::area() const {
    return 0;
}

double Ponto::volume() const {
    return 0;
}

// Classe Circulo
Circulo::Circulo(double x, double y, double raio) : Ponto(x, y), raio(raio) {}

double Circulo::getRaio() const { return raio; }
void Circulo::setRaio(double raio) { this->raio = raio; }

istream& operator>>(istream& in, Circulo& c) {
    cout << "Digite os dados do centro do círculo:\n";
    in >> static_cast<Ponto&>(c);
    cout << "Informe o raio do círculo: ";
    in >> c.raio;
    return in;
}

ostream& operator<<(ostream& out, const Circulo& c) {
    out << "Circulo: centro(" << c.x << ", " << c.y << "), raio=" << c.raio;
    return out;
}

double Circulo::area() const {
    return M_PI * raio * raio;
}

double Circulo::volume() const {
    return 0;
}

// Classe Cilindro
Cilindro::Cilindro(double x, double y, double raio, double altura)
    : Circulo(x, y, raio), altura(altura) {}

double Cilindro::getAltura() const { return altura; }
void Cilindro::setAltura(double altura) { this->altura = altura; }

istream& operator>>(istream& in, Cilindro& ci) {
    cout << "Digite os dados do centro e raio do cilindro:\n";
    in >> static_cast<Circulo&>(ci);
    cout << "Informe a altura do cilindro: ";
    in >> ci.altura;
    return in;
}

ostream& operator<<(ostream& out, const Cilindro& ci) {
    out << "Cilindro: centro(" << ci.x << ", " << ci.y << "), raio=" << ci.raio << ", altura=" << ci.altura;
    return out;
}

double Cilindro::area() const {
    double base = M_PI * raio * raio;
    double lateral = 2 * M_PI * raio * altura;
    return 2 * base + lateral;
}

double Cilindro::volume() const {
    return M_PI * raio * raio * altura;
}
