// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 19
// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros dígitos.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int num,dg1,dg2,SUMA;
    
    cout << "Ingrese un número entero: ";
    
    cin >> num;

    //Sacar los dígitos
    dg1 = num / 10;
    
    dg2 = num % 10;

    // Suma de los digitos
    SUMA = dg1 + dg2;

    cout << "La suma de los dos dígitos de " << num << " es: " << SUMA << endl;

    return 0;
}


