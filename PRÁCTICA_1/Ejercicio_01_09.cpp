// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 9
// Problema planteado: Indique la cantidad de dígitos que tiene un número entero

#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    int num, digito = 0;

    cout<< "Ingrese un digito entero;  "endl;

    cin >> num;

    // Para contar el número 0
    if (num == 0) 
    {
        digito = 1;
    } 
    else 
    {
        // Para contar los dígitos de un número
        while (num != 0) 
        {
           num /= 10;
            digito = digito + 1;
        }
    }

    cout << "El número tiene " << digito << " dígitos" << endl;

    return 0;
}