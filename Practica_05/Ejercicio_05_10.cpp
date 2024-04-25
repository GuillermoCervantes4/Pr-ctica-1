// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 10
// Problema planteado:  Desarrolle un programa que lleve el control de los nombres, edades, calificaciones y
//coeficiente intelectual de 10 estudiantes. Capture los datos desde el teclado utilizando
//un ciclo for, imprime los datos en la pantalla cuando se termine de capturar los
//mismos. Emplear Arreglo de Estructuras.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Definición de la estructura Estudiante
struct Estudiante {
    string nombre;
    int edad;
    float calificacion;
    float coeficiente_intelectual;
};

int main() {
    // Declaración de un arreglo de estructuras Estudiante para 10 estudiantes
    Estudiante estudiantes[10];

    // Captura de datos desde el teclado utilizando un ciclo for
    cout << "Ingrese los datos de 10 estudiantes:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);
        
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        
        cout << "Calificacion: ";
        cin >> estudiantes[i].calificacion;
        
        cout << "Coeficiente Intelectual: ";
        cin >> estudiantes[i].coeficiente_intelectual;
        
        // Limpiar el buffer 
        cin.ignore(); 
        cout << endl;
    }

    // Imprimir los datos de los estudiantes en forma de tabla
    cout << "Datos de los estudiantes:" << endl;
    cout << "-------------------------" << endl;
    cout << setw(20) << left << "Nombre" << setw(10) << left << "Edad" << setw(15) << left << "Calificacion"
         << setw(20) << left << "Coef. Intelectual" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << setw(20) << left << estudiantes[i].nombre << setw(10) << left << estudiantes[i].edad
             << setw(15) << left << estudiantes[i].calificacion << setw(20) << left << estudiantes[i].coeficiente_intelectual << endl;
    }
    system("pause");
    return 0;
}
