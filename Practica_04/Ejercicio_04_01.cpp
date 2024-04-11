// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 11/04/2024
// Fecha modificación: 11/04/2024
// Número de ejercicio: 1
// Problema planteado: Realizar el algoritmo de auclides

#include <iostream>

using namespace std;

// Función para encontrar el MCD usando el algoritmo de Euclides
int encontrarMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    cout << "Ingrese el primer número entero: ";
    cin >> num1;
    
    cout << "Ingrese el segundo número entero: ";
    cin >> num2;
    
    // Llamada a la función para encontrar el MCD
    int mcd = encontrarMCD(num1, num2);
    
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << endl;
    
    return 0;
}