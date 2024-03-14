// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 21
// Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    // Declarar tres vectores de enteros
    
    vector<int> vector_1(5);
    vector<int> vector_2(5);
    vector<int> vector_3(5);

    // Pedir valores del primer vector
    cout << "Ingrese 5 valores enteros para el vector1: ";
    
    for (int i = 0; i < 5; ++i) {
        
        cin >> vector_1[i];
    }

    // Pedir valores del segundo vector
    cout << "Ingrese 5 valores enteros para el vector2: ";
    
    for (int i = 0; i < 5; ++i) {
        
        cin >> vector_2[i];
    }

    // Calcular vector3 
    for (int i = 0; i < 5; ++i) {
        
        vector_3[i] = vector_1[i] + vector_2[i];
    }

    // Mostrar el resultado 
    cout << "El vector3 resultante es: ";
    
    for (int i = 0; i < 5; ++i) {
        
        cout << vector_3[i] << " ";
    }
    cout << endl;

    return 0;
}