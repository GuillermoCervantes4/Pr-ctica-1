// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 16
// Problema planteado: Escribir un programa que genere a partir de un fichero de entrada que contiene una tabla de
//números reales otro fichero de salida <nombre>.BIN grabado en formato binario.
//Ej:
//1.23 3.45 12.5
//4.8 3.9 0.83 ........................

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Función para leer números reales desde un archivo de entrada
vector<double> leerNumeros(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo." << endl;
        exit(1);
    }

    vector<double> numeros;
    double num;
    while (archivo >> num) {
        numeros.push_back(num);
    }

    archivo.close();
    return numeros;
}

// Función para escribir números reales en un archivo binario de salida
void escribirBinario(const string& nombreArchivo, const vector<double>& numeros) {
    ofstream archivo(nombreArchivo, ios::binary);
    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo binario." << endl;
        exit(1);
    }

    archivo.write(reinterpret_cast<const char*>(numeros.data()), numeros.size() * sizeof(double));

    archivo.close();
}

int main() {
    // Nombre del archivo de entrada
    string nombreArchivoEntrada;
    cout << "Ingrese el nombre del archivo de entrada: ";
    cin >> nombreArchivoEntrada;

    // Leer números reales del archivo de entrada
    vector<double> numeros = leerNumeros(nombreArchivoEntrada);

    // Nombre del archivo binario de salida
    string nombreArchivoSalida;
    cout << "Ingrese el nombre del archivo binario de salida: ";
    cin >> nombreArchivoSalida;

    // Escribir números reales en el archivo binario de salida
    escribirBinario(nombreArchivoSalida, numeros);

    cout << "Archivo binario creado exitosamente." << endl;

    return 0;
}
