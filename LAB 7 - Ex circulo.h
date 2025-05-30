#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#define PI 3.1415
using namespace std;

class Ponto {
protected:
    double x, y;

public:
    Ponto(double x = 0, double y = 0) : x{x}, y{y} { }
    virtual ~Ponto() {}

    virtual void read() { cin >> x >> y; }
    virtual void print() const { cout << "Ponto: (" << x << ", " << y << ")"; }
    virtual double area() { return 0; }
    virtual double volume() { return 0; }

    friend istream& operator>>(istream& input, Ponto& in);
    friend ostream& operator<<(ostream& output, const Ponto& out);
};

class Circulo : public Ponto {
protected:
    double raio;

public:
    Circulo(double x = 0, double y = 0, double r = 0) : Ponto{x, y}, raio{r} {}
    ~Circulo() {}

    void read() override { cin >> x >> y >> raio; }
    void print() const override {
        cout << "Círculo: centro = (" << x << ", " << y << "), raio = " << raio;
    }
    double area() override { return PI * raio * raio; }
    double volume() override { return 0; }
};

class Cilindro : public Circulo {
protected:
    double altura;

public:
    Cilindro(double x = 0, double y = 0, double r = 0, double a = 0)
        : Circulo{x, y, r}, altura{a} {}
    ~Cilindro() {}

    void read() override { cin >> x >> y >> raio >> altura; }
    void print() const override {
        cout << "Cilindro: centro = (" << x << ", " << y << "), raio = " << raio << ", altura = " << altura;
    }

    double area() override {
        return (2 * Circulo::area()) + 2 * PI * raio * altura;
    }

    double volume() override {
        return Circulo::area() * altura;
    }
};

#endif
