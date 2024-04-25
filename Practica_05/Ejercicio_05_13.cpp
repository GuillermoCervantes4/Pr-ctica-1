// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 13
// Problema planteado: En una clase, asuma que hay un número de 20 estudiantes. Cada estudiante esta
//registrado en los mismos cursos en un semestre. Al final del semestre, el instructor
//asigna letras de calificaciones de la A a la E para todos los seis cursos de cada
//estudiante. Cada uno de los seis cursos es de 3 unidades (horas crédito). El promedio
//de notas de los estudiantes se calcula en una escala de 10 puntos. Para realizar esto, a
//continuación se presenta las notas asociadas con cada una de las calificaciones en
//letras

#include <iostream>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

struct estudiante
{
    int nota_1;
    int nota_2;
    int nota_3;
    int nota_4;
    int nota_5;
    int nota_6;
    double promedio;
};

// Prototipos de funciones
vector<estudiante> ingresarnotas(int num_alumnos);
void clasificacionnota(double promedio);

int main() {
    int num_alumnos = 20;
    srand(time(NULL)); // Inicialización del generador de números aleatorios

    vector<estudiante> estudiantes = ingresarnotas(num_alumnos);

    // Mostrar los resultados
    for (int i = 0; i < num_alumnos; ++i) {
        cout << "Estudiante " << i + 1 << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
        clasificacionnota(estudiantes[i].promedio);
        cout << endl;
    }

    return 0;
}

vector<estudiante> ingresarnotas(int num_alumnos) {
    vector<estudiante> estudiantes(num_alumnos);

    for (int i = 0; i < num_alumnos; ++i) {
        //cout << "Ingrese las notas del estudiante " << i + 1 << ":" << endl;
        estudiantes[i].nota_1 = rand()% (10-1) + 1;
        estudiantes[i].nota_2 = rand()% (10-1) + 1;
        estudiantes[i].nota_3 = rand()% (10-1) + 1;
        estudiantes[i].nota_4 = rand()% (10-1) + 1;
        estudiantes[i].nota_5 = rand()% (10-1) + 1;
        estudiantes[i].nota_6 = rand()% (10-1) + 1;

        // Calcular el promedio
        estudiantes[i].promedio = (estudiantes[i].nota_1 + estudiantes[i].nota_2 + estudiantes[i].nota_3 +
                                   estudiantes[i].nota_4 + estudiantes[i].nota_5 + estudiantes[i].nota_6) / 6.0;
    }

    return estudiantes;
}

void clasificacionnota(double promedio) {
    if (promedio >= 9)
        cout << "Calificación: A" << endl;
    else if (promedio >= 7)
        cout << "Calificación: B" << endl;
    else if (promedio >= 5)
        cout << "Calificación: C" << endl;
    else if (promedio >= 3)
        cout << "Calificación: D" << endl;
    else
        cout << "Calificación: E" << endl;
}
