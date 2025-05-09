#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo {
private:
    double parteReal;
    double parteImaginaria;
    static int contador;

public:
    Complexo();
    Complexo(double real, double imag);
    Complexo(const Complexo& outro);

    Complexo operator+(const Complexo& outro);
    Complexo operator-(const Complexo& outro);
    Complexo operator*(const Complexo& outro);
    Complexo operator/(const Complexo& outro);

    void imprimir() const;

    ~Complexo();
};

#endif // COMPLEXO_H
