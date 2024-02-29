// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 4
// Problema planteado: Número primo

#include <iostream>

using namespace std;

int main ()
{
    int Ent , i , cont;

    cont = 0;
    
    cout << "Ingresa un número entero: ";
    
    cin >> Ent;

    for ( i = 1 ; i <= Ent ; i++)
    {
        if (Ent % i == 0 )
        {
            cont = cont + 1;
        }
    }
    if (cont == 2)
    {
        cout << "El número es primo. ";
    }
    else
        cout << " El número no es primo. ";
    return 0;
}