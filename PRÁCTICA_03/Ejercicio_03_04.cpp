// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 4
// Problema planteado: Calcular y retornar el área de un poligono.

#include <iostream>

using namespace std;

class Poligono {
public:
    virtual double calcularArea() const = 0;
    virtual ~Poligono() {}
};

class Triangulo : public Poligono {
private:
    double base;
    double altura;
public:
    Triangulo(double b, double h) : base(b), altura(h) {}
    double calcularArea() const override {
        return (base * altura) / 2.0;
    }
};

class Cuadrado : public Poligono {
private:
    double lado;
public:
    Cuadrado(double l) : lado(l) {}
    double calcularArea() const override {
        return lado * lado;
    }
};

class Rectangulo : public Poligono {
private:
    double base;
    double altura;
public:
    Rectangulo(double b, double h) : base(b), altura(h) {}
    double calcularArea() const override {
        return base * altura;
    }
};

void calcularYImprimirArea(const Poligono& poligono, const string& nombre) {
    double area = poligono.calcularArea();
    cout << "El área del " << nombre << " es: " << area << endl;
}

int main() {
    Triangulo triangulo(5.0, 4.0);
    Cuadrado cuadrado(3.0);
    Rectangulo rectangulo(6.0, 4.0);

    calcularYImprimirArea(triangulo, "triángulo");
    calcularYImprimirArea(cuadrado, "cuadrado");
    calcularYImprimirArea(rectangulo, "rectángulo");

    return 0;
}
