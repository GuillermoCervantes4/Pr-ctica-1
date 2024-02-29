// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 5
// Problema planteado: Número amigo

#include <iostream>

using namespace std;

int main ()
{
    int AMIGO1, AMIGO2, i, SUM1 = 0, SUM2 = 0;
    
    cout << "Ingresa dos numero por favor: ";
    
    cin >> AMIGO1 >> AMIGO2;
    
    for (i = 1; i<= (AMIGO1/2); i++) //amigo1/2 para mejorar la eficiencia del codigo
    { 
    
    if (AMIGO1 % i == 0)
    SUM1= SUM1 + i; //suma de los divisores de amigo1
    }
    
    for (i = 1; i<= (AMIGO2/2); i++)
    {
    
    if (AMIGO2 % i == 0)
    SUM2 = SUM2 + i;//suma de los divisores de amigo2
    }
    
    
    if (AMIGO1 == SUM2 && AMIGO2 == SUM1) //si los divisores de amigo1 sumados dan el valor de amigo2 y viseversa debe arrojar verdadero
    
    cout << "Los numeros son amigos";
    
    else
    
    cout << "los numeros no son amigos.";
    
    return 0;
}