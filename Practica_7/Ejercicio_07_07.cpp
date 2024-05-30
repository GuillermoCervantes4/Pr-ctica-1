// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 7
// Problema planteado: Crear un archivo de texto en donde en cada registro se guardan los siguientes datos de un
//estudiante, cada campo se debe separar con el símbolo “;”:
// Nombre
// Apellidos
// Programa académico que estudia
// Nota del curso.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Prototipos
void guardarDatosEnArchivo(const string& nombreArchivo);

// Estructura para almacenar los datos de un estudiante
struct Estudiante {
    string nombre;
    string apellidos;
    string programaAcademico;
    float nota;
};

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
void guardarDatosEnArchivo(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "No se pudo abrir el archivo para escribir: " << nombreArchivo << endl;
        return;
    }

    char continuar = 'S';
    while (continuar == 'S' || continuar == 's') {
        Estudiante estudiante = ingresarDatosEstudiante();

        archivo << estudiante.nombre << ";"
                << estudiante.apellidos << ";"
                << estudiante.programaAcademico << ";"
                << estudiante.nota << endl;

        cout << "¿Desea ingresar otro estudiante? (S/N): ";
        cin >> continuar;
        cin.ignore(); // Para limpiar el buffer de entrada
    }

    archivo.close();
    cout << "Los datos de los estudiantes se han guardado en " << nombreArchivo << endl;
}

int main() {
    string nombreArchivo = "estudiantes.txt";

    guardarDatosEnArchivo(nombreArchivo);

    return 0;
}
