// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 6
// Problema planteado: Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos intercalados.


#include <iostream>
#include <vector>

using namespace std;
int main() {
    
    int Tamano;
    
    cout << "Introduzca el tamanio que tendran ambos vectores: ";
    
    cin >> Tamano;

    int Vector1[Tamano];
    int Vector2[Tamano];
    int Vector3[2 * Tamano];
    //creamos los vectores

    
    for (int i = 0; i < Tamano; ++i) {
        cout << "Introduzca el valor " << i + 1  << " del primer vector: ";
        cin >> Vector1[i];
    }

    for (int i = 0; i < Tamano; ++i) {
        cout << "Introduzca el valor " << i + 1  << " del segundo vector: ";
        cin >> Vector2[i];
    }
    // Introducimos los valores de los dos vectores

    for (int i = 0; i < Tamano; ++i) {
        Vector3[2 * i] = Vector1[i];
        Vector3[2 * i + 1] = Vector2[i];
    }
    //Intercalamos los numeros dentro del tercer vector

    cout << "El vector intercalado seria: " << endl;
    for (int i = 0; i < 2 * Tamano; ++i) {
        if (i < (Tamano * 2 - 1))
        {
            cout << Vector3[i] << " - ";
        }
        else{
            cout << Vector3[i];
        }
        
        
    }

    return 0;
}