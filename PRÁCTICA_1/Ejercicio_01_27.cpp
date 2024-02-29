// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 27
// Problema planteado: Leer un número entero y mostrarlo con las cifras al revés.

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int numero, digito, numInvertido = 0;
    
    cout << "Ingresa un numero: " << endl;
    
    cin >> numero;

    digito=0;
    
    // Para invertir el numero
    while  (numero != 0)
    {
        digito = numero % 10;
        numInvertido = numInvertido * 10 + digito;
        numero /= 10; 
    }
    
    cout << "El numero invertido: " << numInvertido << endl;
    return 0;
}