// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 2
// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros, determine el porcentaje de números pares positivos e impares negativos

#include <iostream>

using namespace std;

int main() 
{
    // Definir el tamaño del arreglo
    
    const int Tamanioarreglo = 10;
    int arreglo[Tamanioarreglo];
    
    // Solicitar al usuario que ingrese los valores del arreglo
    cout << "Por favor, ingrese " << Tamanioarreglo << " numeros enteros por favor: ";
    for (int i = 0; i < Tamanioarreglo; ++i) 
    {
        cin >> arreglo[i];
    }
    
    // Variables para contar los números pares positivos y los impares negativos
    
    float pares = 0; 
    float impares = 0; 
    
    // Iterar sobre el arreglo para contar los números pares positivos e impares negativos
    
    for (int i = 0; i < Tamanioarreglo; ++i) 
    {
        if (arreglo[i] > 0 && arreglo[i] % 2 == 0) 
        {
            pares++;
        } 
        else if (arreglo[i] < 0 && arreglo[i] % 2 != 0) 
        {
            impares++;
        }
    }
   
    // Calcular el porcentaje
    
    float PorcentajePares = (pares / Tamanioarreglo) * 100;
    float PorcentajeNegativo = (impares / Tamanioarreglo) * 100;  
   
    // Imprimir resultados
    cout << "Porcentaje de numeros pares positivos: " << PorcentajePares << "%" << endl;
    cout << "Porcentaje de numeros impares negativos: " << PorcentajeNegativo << "%" << endl;

    return 0;
}