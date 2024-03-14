// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 7/03/2024
// Número de ejercicio: 23
// Problema planteado: Leer 2 vectores de dimensión N y combine ambos en otro vector.

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vector1;
    vector<int> vector2;

    // Leer los elementos del primer vector

    cout << "Ingrese los elementos del  vector 1, ingrese 0 para finalizar :" << endl;

    int elemento;

    while (cin >> elemento && elemento != 0) {
        vector1.push_back(elemento);
    }

    // Leer los elementos del segundo vector

    cout << "Ingrese los elementos del vector 2 , ingrese 0 para finalizar :" << endl;

    while (cin >> elemento && elemento != 0) {
        vector2.push_back(elemento);
    }

    // Creación del tercer vector

    vector<int> vectorCombinado;

    for (int elemento : vector1) {
        vectorCombinado.push_back(elemento);
    }
    
    for (int elemento : vector2) {
        vectorCombinado.push_back(elemento);
    }

    // Imprimir el vector 
    cout << "El vector combinado  es:" << endl;
    for (int elemento : vectorCombinado) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}