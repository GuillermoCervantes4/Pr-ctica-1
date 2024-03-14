// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 10
// Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el
// -rango de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones.
// -La entrada de valores es para las calificaciones, debe hacerlo mediante una función
// -(realizar con vectores).

#include <iostream>
#include <vector>

using namespace std;

// Función para calcular la suma y el promedio de N calificaciones
void calcularCalificaciones(const vector<int>& calificaciones, int& suma, double& promedio, int& numCalificaciones) {
    suma = 0;
    for (int i = 0; i < numCalificaciones; i++) {
        suma += calificaciones[i];
    }
    promedio = static_cast<double>(suma) / numCalificaciones;
}

int main() {
    // Solicitar N calificaciones al usuario
    int numCalificaciones;
    
    cout << "Ingrese el número de calificaciones: ";
    cin >> numCalificaciones;

    vector<int> calificaciones(numCalificaciones);
    cout << "Ingrese las calificaciones: "<<endl;
    
    for (int i = 0; i < numCalificaciones; i++) {
        cin >> calificaciones[i];
    }

    // Calcular y mostrar la suma y el promedio de las calificaciones
    
    int suma = 0;
    double promedio = 0.0;
    
    calcularCalificaciones(calificaciones, suma, promedio, numCalificaciones);
    
    cout << "Suma de las calificaciones: " << suma <<endl;
    cout << "Promedio de las calificaciones: " << promedio <<endl;

    return 0;
}
