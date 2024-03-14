// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 25
// Problema planteado: Genere un vector de N elementos y llénelos aleatoriamente entre valores de 1 a 100 e indique el mayor elemento, el menor elemento y el promedio. 

#include <iostream>
#include <cstdlib> 
#include <random>
#include <ctime>   

using namespace std;

int main() 
{
    
    srand(time(0));

    int N;
    
    cout << "Ingrese la cantidad de elementos, por favor: ";
    cin >> N;

    int Elemetos[N];

    // Generar valores aleatorios del 1 al 100
    
    for (int i = 0; i < N; i++) {
        Elemetos[i] = rand() % (100 - 1); // Rango
    }                           

    // Encontrar Elemento mayor, Elmento menor y el promedio
    
    int Elemento_Mayor = Elemetos[0];
    int Elemento_Menor = Elemetos[0];
    int Suma_Elementos = Elemetos[0];

    for (int i = 1; i < N; i++) 
    {
        
        Suma_Elementos += Elemetos[i];

        if (Elemetos[i] > Elemento_Mayor) 
        {
            Elemento_Mayor = Elemetos[i];
        }

        if (Elemetos[i] < Elemento_Menor) 
        {
            Elemento_Menor = Elemetos[i];
        }
    }

    // Calculo de promedio
    float Promedio;
    
    Promedio = (Suma_Elementos) / N;

    
    cout << "El elemento mayor es: " << Elemento_Mayor << endl;
    cout << "El elemento menor es: " << Elemento_Menor << endl;
    cout << "El promedio de los elementos es: " << Promedio << endl;

    return 0;
}