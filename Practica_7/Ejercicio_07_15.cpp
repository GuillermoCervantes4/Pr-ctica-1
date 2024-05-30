// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 15
// Problema planteado: Escriba un programa que tenga como entrada un fichero que contenga un texto y dé como
//resultado una estadística del número de palabras.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {

    string nombreArchivo;
    cout << "Ingrese el nombre del archivo: ";
    cin >> nombreArchivo;

    ifstream archivo = abrirArchivo(nombreArchivo);

    int contadorPalabras = contarPalabras(archivo);

    mostrarEstadisticas(contadorPalabras);

    cerrarArchivo(archivo);

    return 0;
}

// Función para abrir el archivo
ifstream abrirArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo." << endl;
        exit(1);
    }
    return archivo;
}

// Función para contar palabras en el archivo
int contarPalabras(ifstream& archivo) {
    int contadorPalabras = 0;
    string palabra;
    while (archivo >> palabra) {
        contadorPalabras++;
    }
    return contadorPalabras;
}

// Función para mostrar las estadísticas
void mostrarEstadisticas(int contadorPalabras) {
    cout << "Estadísticas del archivo:" << endl;
    cout << "Número de palabras: " << contadorPalabras << endl;
}

// Función para cerrar el archivo
void cerrarArchivo(ifstream& archivo) {
    archivo.close();
}
