// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 22
// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int Tamanio;
    cout << "Introduzca el tamanio que tendran ambos vectores: ";
    cin >> Tamanio;

    //creamos los vectores
    int Vector1[Tamanio];
    int Vector2[Tamanio];
    int Multiplicados[2 * Tamanio];


    // Introducimos los valores de vector 1
    for (int i = 0; i < Tamanio; ++i) {
        cout << "Introduzca el valor " << i + 1  << " del primer vector: ";
        cin >> Vector1[i];
    }

    // Introducimos los valores de vector 2
    for (int i = 0; i < Tamanio; ++i) {
        cout << "Introduzca el valor " << i + 1  << " del segundo vector: ";
        cin >> Vector2[i];
    }


    //Multiplicamos los valores de los 2 vectores
    for (int i = 0; i < Tamanio; ++i) {
        Multiplicados[i] = Vector1[i] * Vector2[i];
    }

    cout << "El vector con las multiplicaciones es: " << endl;
    
    for (int i = 0; i < Tamanio; ++i) {
        
        if (i < (Tamanio - 1))
        {
            cout << Multiplicados[i] << " - ";
        }
        
        else
        {
            cout << Multiplicados[i];
        }
    }

    return 0;
}