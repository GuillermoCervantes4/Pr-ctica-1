// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 1
// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i,N,N2,N3,PROMEDIO;
    
    cout<<"Ingrese la cantidad de notas: ";
    
    cin >> N;
    
    N3 = 0;
    
    //N3 almacena la sumatoria de notas
    for (i=1;i<=N;i++){
       
        cout<<"Ingrese la nota "<<i<<" : ";
    
        cin>>N2;
        
        N3 = N3 + N2;
    }
    
    PROMEDIO = N3/N;
    
    cout<<"El promedio es : "<<PROMEDIO;
    
    PROMEDIO = N3/N;
    
}
