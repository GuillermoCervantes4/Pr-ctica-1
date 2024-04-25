// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 3
// Problema planteado: Desarrolle un arreglo de estructura para un programa que lea una lista de alumnos (no
//se conoce la cantidad de alumnos) para cada alumno se solicitará: CI, Nombre y
//apellido, Nombre de asignatura, calificación; una vez ingresada la información para
//cada alumno, calcular el porcentaje de alumnos aprobados y reprobados. Deberá
//indicar: cantidad de alumnos aprobados, porcentaje de aprobados, cantidad de
//alumnos reprobados, porcentaje de aprobados.

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Estructura
struct alumno {
    int ci; 
    
    // string por ser palabras
    string nombre;
    string apellido;
    string asignatura; 
    
    // float ya que puede ser decimal
    float calificacion; 
};

// Prototipos
void ingresarAlumno(vector<alumno>& alumnos);
void mostrarResultados(vector<alumno> alumnos);

int main() {
    //semilla 
    srand(time(NULL)); 
    
     // Vector para almacenar a los alumnos
    vector<alumno> alumnos;
    int numAlumnos;

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> numAlumnos;

    // vemos cuantas veces se realizara la operacion
    for (int i = 0; i < numAlumnos; i++) {
        ingresarAlumno(alumnos);
    }

    mostrarResultados(alumnos);

    return 0;
}

void ingresarAlumno(vector<alumno>& alumnos) {
    alumno nuevoAlumno;
    cout << "Ingrese CI del alumno: ";
    cin >> nuevoAlumno.ci;
    cout << "Ingrese nombre del alumno: ";
    cin >> nuevoAlumno.nombre;
    cout << "Ingrese apellido del alumno: ";
    cin >> nuevoAlumno.apellido;
    cin.ignore();
    cout << "Ingrese nombre de la asignatura: ";
    getline(cin, nuevoAlumno.asignatura);
    
    // Generar calificación aleatoria entre 0 y 100
    nuevoAlumno.calificacion = rand() % (100-0+1)+0; 
    
    //desplegamos la nota generada
    cout << "Calificacion del alumno: " << nuevoAlumno.calificacion << endl; 

    // Agregar alumno al vector
    alumnos.push_back(nuevoAlumno); 
}

void mostrarResultados(vector<alumno> alumnos) {
    
    // Contadorres
    int aprobados = 0; 
    int reprobados = 0; 
    int totalAlumnos = alumnos.size();

    //Cotnamos cuantos aprobados y reprobados hay
    for (int i = 0; i < totalAlumnos; ++i) {
        if (alumnos[i].calificacion >= 60) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    // Utilizamos el float, no nos despliegue una nota entera
    float porcentajeAprobados = (float(aprobados) / totalAlumnos) * 100; 
    float porcentajeReprobados = (float(reprobados) / totalAlumnos) * 100; 

    cout << "Alumnos aprobados: " << aprobados << endl;
    cout << "Porcentaje de alumnos aprobados: " << porcentajeAprobados << "%" << endl;
    cout << "Alumnos reprobados: " << reprobados << endl;
    cout << "Porcentaje de alumnos reprobados: " << porcentajeReprobados << "%" << endl;
}


