// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 23
// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación, empleando sumas sucesivas.

#include <iostream>

#include <cmath>

using namespace std;

int main() 
{
    int N1, N2;

    cout << "Ingrese el primer numero: ";
    cin >> N1;

    cout << "Ingrese el segundo numero: ";
    cin >> N2;

    int resultado = 0;
    
    //Sumatoria de los numeros apartir de la cantidad del otro numero
    for (int i = 0; i < N2; ++ i) 
    {
        resultado += N1;
    }

    cout << "La multiplicacion es: "<< N1 << " * " << N2 << " = " << resultado << endl;

    return 0;
}