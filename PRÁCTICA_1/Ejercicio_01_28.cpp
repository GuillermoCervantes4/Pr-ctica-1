// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 28
// Problema planteado: . Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos los meses de 30 días. 

#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    
    int dia1, mes1, a1, dia2, mes2, a2, diferencia;
    
    cout << "Ingresa la primera fecha (dia, mes y anio): ";
    
    //Introducir 3 datos seguidos
    cin >> dia1 >> mes1 >> a1;
    
    cout << "Ingresa la segunda fecha (dia, mes y anio): ";
    
    cin >> dia2 >> mes2 >> a2;
    
    if (mes1 == mes2 && a1 == a2)
    {
    diferencia = dia2 - dia1;
    cout << "La diferencia es de: " << diferencia<< " dias."<< endl;
    }
    
    if (a1 == a2)
    {
    diferencia = (dia2 + mes2*30) - (dia1 + mes1*30);
    cout << "La diferencia es de: " << diferencia<< " dias."<< endl;
    }
    
    else
        diferencia = (dia2 + (mes2*30) + (a2*12*30)) - (dia1 + (mes1*30) + (a1*12*30));
        cout << "La diferencia es de: " << diferencia<< " dias."<< endl;
    
    return 0;
}