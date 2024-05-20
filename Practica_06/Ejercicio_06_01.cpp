// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 18/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 1
// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de dos
// números enteros aplicando el algoritmo de Euclides.

#include <iostream>

using namespace std;

// Prototipo de la función
int mcd(int a, int b);

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    cout << "El MCD es: " << mcd(num1, num2) << endl;

    return 0;
}

// Función del MCD del Euclides
int mcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mcd(b, a % b);
    }
}
