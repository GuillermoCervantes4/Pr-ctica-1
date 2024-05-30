// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 8
// Problema planteado: Permitir obtener un listado en pantalla, de los datos que contiene el archivo creado en el punto
//anterior. Al terminar el listado se debe informar el número de registros contenidos en el
//archivo.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Prototipos
void mostrarDatosDesdeArchivo(const string& nombreArchivo);
Estudiante ingresarDatosEstudiante();

// Estructura para almacenar los datos de un estudiante
struct Estudiante {
    string nombre;
    string apellidos;
    string programaAcademico;
    float nota;
};



int main() {
    string nombreArchivo = "estudiantes.txt";

    guardarDatosEnArchivo(nombreArchivo);

    return 0;
}



// Función para ingresar los datos de un estudiante
Estudiante ingresarDatosEstudiante() {
    Estudiante estudiante;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, estudiante.nombre);

    cout << "Ingrese los apellidos del estudiante: ";
    getline(cin, estudiante.apellidos);

    cout << "Ingrese el programa académico del estudiante: ";
    getline(cin, estudiante.programaAcademico);

    cout << "Ingrese la nota del curso del estudiante: ";
    cin >> estudiante.nota;
    cin.ignore(); // Para limpiar el buffer de entrada

    return estudiante;
}

// Función para guardar los datos de los estudiantes en un archivo
void mostrarDatosDesdeArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "No se pudo abrir el archivo para leer: " << nombreArchivo << endl;
        return;
    }

    string linea;
    int contador = 0;
    while (getline(archivo, linea)) {
        cout << linea << endl;
        contador++;
    }

    archivo.close();
    cout << "Número de registros en el archivo: " << contador << endl;
}


