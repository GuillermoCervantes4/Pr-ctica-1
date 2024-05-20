// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 18/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 3
// Problema planteado: . Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
// suma de sus elementos.

#include <iostream>
#include <vector>

using namespace std;

// Prototipo
int suma(int, vector<int>&);

int main() {
    int canti;

    cout << "Ingrese la cantidad de numeros: " << endl;
    cin >> canti;

    vector<int> listanum(canti); // Inicializar el vector con el tamaño adecuado

    for (int i = 0; i < canti; i++) {
       cout << "Ingrese el numero " << i + 1 << " : " << endl; // Mejorar la salida
       cin >> listanum[i];
    }

    cout << "La sumatoria del vector es: " << suma(canti, listanum) << endl;
    return 0;
}

// Sumatoria
int suma(int canti, vector<int>& listanum) { // Usar referencia para evitar copias innecesarias
    if (canti == 0) {
        return 0;
    } else {
        return listanum[canti - 1] + suma(canti - 1, listanum); // Corregir el orden de los parámetros
    }
}
