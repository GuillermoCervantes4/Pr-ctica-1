// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 11
// Problema planteado: Desarrolle un programa que en una estructura guarde los datos de los N alumnos de la
//Asignatura Programación en Lenguaje C++; y los imprima, la estructura debe tener
//(Cedula, nombre, apellido, edad, profesión, lugar de nacimiento, dirección, teléfono).

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definición de la estructura Alumno
struct Alumno {
    string cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    string telefono;
};

int main() {
    int num_alumnos;

    // Captura del número de alumnos
    cout << "Ingrese el numero de alumnos: ";
    cin >> num_alumnos;
    
    // Limpiar el buffer 
    cin.ignore(); 

    // Almacenar los datos de los alumnos
    vector<Alumno> alumnos(num_alumnos);

    // Captura de datos de los alumnos
    for (int i = 0; i < num_alumnos; ++i) {
        cout << "\nIngrese los datos del alumno " << i + 1 << ":" << endl;
        
        cout << "Cedula: ";
        getline(cin, alumnos[i].cedula);
        cout << "Nombre: ";
        getline(cin, alumnos[i].nombre);
        cout << "Apellido: ";
        getline(cin, alumnos[i].apellido);
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        
        // Limpiar el buffer 
        cin.ignore(); 

        cout << "Profesion: ";
        getline(cin, alumnos[i].profesion);
        cout << "Lugar de Nacimiento: ";
        getline(cin, alumnos[i].lugar_nacimiento);
        cout << "Direccion: ";
        getline(cin, alumnos[i].direccion);
        cout << "Telefono: ";
        getline(cin, alumnos[i].telefono);
    }

    // Imprimir los datos de los alumnos
    cout << "\nDatos de los alumnos:" << endl;
    for (int i = 0; i < num_alumnos; ++i) {
        cout << "\nAlumno " << i + 1 << ":" << endl;
        cout << "Cedula: " << alumnos[i].cedula << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Apellido: " << alumnos[i].apellido << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Profesion: " << alumnos[i].profesion << endl;
        cout << "Lugar de Nacimiento: " << alumnos[i].lugar_nacimiento << endl;
        cout << "Direccion: " << alumnos[i].direccion << endl;
        cout << "Telefono: " << alumnos[i].telefono << endl;
    }
    system("pause");
    return 0;
}