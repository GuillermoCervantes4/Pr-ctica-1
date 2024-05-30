// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 17
// Problema planteado: Dado una tabla grabada en un fichero en formato binario <nombre>.BIN hallar la suma
//horizontal y vertical y grabar la tabla y los resultados en otro fichero de texto o binario según se
//introduzca por pantalla.
//El resultado en texto sería el siguiente:
//Ej:
//1.23 3.45 12.5 17,18
//4.8 3.9 0.83 9,53
//6,03 7,35 13,33 26,71


#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main() {
    
    string nombreArchivoEntrada;
    cout << "Ingrese el nombre del archivo binario de entrada: ";
    cin >> nombreArchivoEntrada;

    // Leer la tabla desde el archivo binario de entrada
    vector<vector<double>> tabla = leerTablaBinaria(nombreArchivoEntrada);

    // Calcular la suma horizontal y vertical
    vector<double> sumaHorizontal = sumaHorizontal(tabla);
    vector<double> sumaVertical = sumaVertical(tabla);

    string nombreArchivoSalida;
    cout << "Ingrese el nombre del archivo de salida: ";
    cin >> nombreArchivoSalida;

    escribirTexto(nombreArchivoSalida, tabla, sumaHorizontal, sumaVertical);

    cout << "Archivo creado exitosamente." << endl;

    return 0;
}



// Función para leer la tabla desde un archivo binario
vector<vector<double>> leerTablaBinaria(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo, ios::binary);
    if (!archivo) {
        cerr << "Error al abrir el archivo binario." << endl;
        exit(1);
    }

    int filas, columnas;
    archivo.read(reinterpret_cast<char*>(&filas), sizeof(int));
    archivo.read(reinterpret_cast<char*>(&columnas), sizeof(int));

    vector<vector<double>> tabla(filas, vector<double>(columnas));
    for (int i = 0; i < filas; ++i) {
        archivo.read(reinterpret_cast<char*>(tabla[i].data()), columnas * sizeof(double));
    }

    archivo.close();
    return tabla;
}

// Función para calcular la suma horizontal de la tabla
vector<double> sumaHorizontal(const vector<vector<double>>& tabla) {
    vector<double> suma(tabla.size(), 0.0);
    for (size_t i = 0; i < tabla.size(); ++i) {
        for (size_t j = 0; j < tabla[i].size(); ++j) {
            suma[i] += tabla[i][j];
        }
    }
    return suma;
}

// Función para calcular la suma vertical de la tabla
vector<double> sumaVertical(const vector<vector<double>>& tabla) {
    vector<double> suma(tabla[0].size(), 0.0);
    for (size_t j = 0; j < tabla[0].size(); ++j) {
        for (size_t i = 0; i < tabla.size(); ++i) {
            suma[j] += tabla[i][j];
        }
    }
    return suma;
}

// Función para escribir la tabla y las sumas en un archivo de texto
void escribirTexto(const string& nombreArchivo, const vector<vector<double>>& tabla, const vector<double>& sumaH, const vector<double>& sumaV) {
    ofstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "Error al abrir el archivo de texto." << endl;
        exit(1);
    }

    // Escribir la tabla
    for (size_t i = 0; i < tabla.size(); ++i) {
        for (size_t j = 0; j < tabla[i].size(); ++j) {
            archivo << tabla[i][j] << " ";
        }
        archivo << sumaH[i] << endl;
    }

    // Escribir la suma vertical
    for (size_t j = 0; j < sumaV.size(); ++j) {
        archivo << sumaV[j] << " ";
    }
    archivo << endl;

    archivo.close();
}


