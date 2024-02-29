// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 12
// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos.

#include <iostream>

using namespace std;
// Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos.
int main()
{
    int A, segundos, minutos, a2, b, a1, b1, b2;
    cin >> A;
    segundos = A/60;         
    a1 = segundos*60; 
    a2 = A - a1; // Calculamos los segundos en total
    if (segundos >= 60){ 
        minutos = segundos/60;
        b1 = minutos*60;
        b2 = segundos - b1; // Calculamos los minutos en total cuando el input tenga 1 hora o mas 
        cout << a2 << " segundos" << endl;
        cout << b2 << " minutos" << endl;
        cout << minutos << " horas" << endl;
    }
    else{        // Sino solo imprimos el valor int del input/60
        cout << a2 << " segundos" << endl;
        cout << segundos << " minutos" << endl;
        cout << "0 horas" << endl;
        
    }
    return 0;
}
