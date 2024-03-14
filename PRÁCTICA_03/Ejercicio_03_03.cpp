// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 3
// Problema planteado: Imprimir del 1 al 100 y verificar si los numeros son primos o no.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para imprimir números primos entre 1 y 100
void imprimirNumerosPrimos() {
    
    cout << "Números primos entre 1 y 100:" << endl;
    
    for (int i = 2; i <= 100; ++i) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    // Llama a la función para imprimir números primos
    imprimirNumerosPrimos(); 
    return 0;
}
