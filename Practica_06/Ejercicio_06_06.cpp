// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 18/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 6
// Problema planteado:  Realizar un algoritmo recursivo para la siguiente función: q(n)= 1^2 + 2^2 + 3^2 + ... + n^2

#include <iostream>

using namespace std;

// Prototipo de la función
int funcion(int n);

int main() {
    int n;

    cout << "Ingrese el valor de n: ";
    cin >> n;
    
    cout << "El resultado de esta recursiva es: " << funcion(n) << endl;
    
    return 0;
}

// Definición de la función que calcula el resultado recursivamente
int funcion(int n) {
    if (n == 1) {
        return 1;
    } else {
        return funcion(n - 1) + n * n;
    }
}
