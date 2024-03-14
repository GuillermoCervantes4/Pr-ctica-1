// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 11
// Problema planteado: Elabore un programa para registro académico de la UCB, que solicite el nombre de
// -una materia, el paralelo, el docente y sus correspondientes notas de periodo. Al final, se
// -muestra la nota final y si aprobó o reprobó el curso (realizar con vectores).

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función para calcular la nota final
double calcularNotaFinal(const vector<int>& calificaciones) {
    int suma = 0;
    for (int i = 0; i < calificaciones.size(); i++) {
        suma += calificaciones[i];
    }
    return static_cast<double>(suma) / calificaciones.size();
}

int main() {
    // Solicitar datos al usuario
    string asignatura, paralelo, profesor;
    cout << "Ingrese el nombre de la asignatura: ";
    cin.ignore();
    getline(cin, asignatura);
    
    cout << "Ingrese el paralelo: ";
    cin >> paralelo;
    
    cout << "Ingrese el nombre del profesor: ";
    cin.ignore();
    getline(cin, profesor);

    // Solicitar las calificaciones al usuario
    vector<int> calificaciones;
    int calificacion;
    cout << "Ingrese las calificaciones del período (ingrese -1 para detenerse):"<<endl;
    
    while (true) {
        
        cin >> calificacion;
        if (calificacion == -1) {
            break;
        }
        calificaciones.push_back(calificacion);
    }

    // Calcular y mostrar la nota final
    double notaFinal = calcularNotaFinal(calificaciones);
    cout << "La nota final para " << asignatura << " en el paralelo " << paralelo << " con el profesor " << profesor << " es: " << notaFinal << endl;

    // Determinar si el estudiante aprobó o reprobó el curso
    if (notaFinal >= 60) {
        cout << "El estudiante aprobó el curso.";
    } 
    else {
        cout << "El estudiante reprobó el curso.";
    }

    return 0;
}
