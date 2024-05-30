// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 10
// Problema planteado: Escriba un programa que cree un fichero binario llamado "PERSONAS.BIN" en el que se guarde
//la información de un número indeterminado de personas.
//La información que se guardará por cada persona será:
// Nombre: De 1 a 30 caracteres. WILLY TENORIO
//• Edad numérico (>= 1 y <=100) 40
//• Sexo CHAR (M/F). M
//• FechaNacimiento CHAR(10) (formato dd/mm/yyyy) 01/01/1980
//La información correspondiente a cada persona se leerá del teclado.
//El proceso finalizará cuando se teclee un campo "Nombre" que esté solamente con el carácter
//de espacio.

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;


//Prototipos
bool ingresarDatosPersona(Persona& persona);
void guardarDatosEnArchivo(const string& nombreArchivo);

// Estructura para almacenar los datos de una persona
struct Persona {
    char nombre[31];
    int edad;
    char sexo;
    char fechaNacimiento[11];
};

int main() {
    string nombreArchivo = "PERSONAS.BIN";

    guardarDatosEnArchivo(nombreArchivo);

    return 0;
}

// Función para ingresar los datos de una persona
bool ingresarDatosPersona(Persona& persona) {
    cout << "Ingrese el nombre (hasta 30 caracteres, solo un espacio para terminar): ";
    cin.getline(persona.nombre, 31);

    // Finalizar si el nombre es solo un espacio
    if (strcmp(persona.nombre, " ") == 0) {
        return false;
    }

    cout << "Ingrese la edad (entre 1 y 100): ";
    cin >> persona.edad;

    // Validar edad
    while (persona.edad < 1 || persona.edad > 100) {
        cout << "Edad no válida. Ingrese una edad entre 1 y 100: ";
        cin >> persona.edad;
    }

    cout << "Ingrese el sexo (M/F): ";
    cin >> persona.sexo;

    // Validar sexo
    while (persona.sexo != 'M' && persona.sexo != 'F') {
        cout << "Sexo no válido. Ingrese M o F: ";
        cin >> persona.sexo;
    }

    cout << "Ingrese la fecha de nacimiento (dd/mm/yyyy): ";
    cin.ignore();
    cin.getline(persona.fechaNacimiento, 11);

    return true;
}

// Función para guardar los datos en un archivo binario
void guardarDatosEnArchivo(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo, ios::binary);
    if (!archivo) {
        cerr << "No se pudo abrir el archivo para escribir: " << nombreArchivo << endl;
        return;
    }

    Persona persona;
    while (true) {
        if (!ingresarDatosPersona(persona)) {
            break;
        }
        archivo.write(reinterpret_cast<char*>(&persona), sizeof(Persona));
    }

    archivo.close();
    cout << "Los datos de las personas se han guardado en " << nombreArchivo << endl;
}


