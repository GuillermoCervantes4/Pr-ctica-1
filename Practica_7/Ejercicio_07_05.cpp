// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 5
// Problema planteado: Copiar un fichero de texto en otro.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//prototipos
void copiarArchivo(const string& archivoOrigen, const string& archivoDestino);



int main() {
    string archivoOrigen = "origen.txt";
    string archivoDestino = "destino.txt";
    
    copiarArchivo(archivoOrigen, archivoDestino);
    
    return 0;
}

void copiarArchivo(const string& archivoOrigen, const string& archivoDestino) {
    // Abrir el archivo de origen en modo de lectura
    
    ifstream origen(archivoOrigen);
    if (!origen) {
        cerr << "No se pudo abrir el archivo de origen: " << archivoOrigen << endl;
        return;
    }

    // Abrir el archivo de destino en modo de escritura
    ofstream destino(archivoDestino);
    if (!destino) {
        cerr << "No se pudo abrir el archivo de destino: " << archivoDestino << endl;
        return;
    }

    // Copiar el contenido del archivo de origen al archivo de destino
    string linea;
    while (getline(origen, linea)) {
        destino << linea << endl;
    }

    // Cerrar los archivos
    origen.close();
    destino.close();

    cout << "El archivo se copió exitosamente de " << archivoOrigen << " a " << archivoDestino <<endl;
}
