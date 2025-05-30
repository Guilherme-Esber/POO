#ifndef FORMAS_H
#define FORMAS_H

#include <iostream>
#include <cmath>

using namespace std;

class Ponto {
protected:
    double x, y;

public:
    Ponto(double x = 0, double y = 0);
    virtual ~Ponto() = default;

    double getX() const;
    double getY() const;

    void setX(double x);
    void setY(double y);

    friend istream& operator>>(istream& in, Ponto& p);
    friend ostream& operator<<(ostream& out, const Ponto& p);

    virtual double area() const;
    virtual double volume() const;
};

class Circulo : public Ponto {
protected:
    double raio;

public:
    Circulo(double x = 0, double y = 0, double raio = 0);

    double getRaio() const;
    void setRaio(double raio);

    friend istream& operator>>(istream& in, Circulo& c);
    friend ostream& operator<<(ostream& out, const Circulo& c);

    double area() const override;
    double volume() const override;
};

class Cilindro : public Circulo {
protected:
    double altura;

public:
    Cilindro(double x = 0, double y = 0, double raio = 0, double altura = 0);

    double getAltura() const;
    void setAltura(double altura);

    friend istream& operator>>(istream& in, Cilindro& ci);
    friend ostream& operator<<(ostream& out, const Cilindro& ci);

    double area() const override;
    double volume() const override;
};

#endif
