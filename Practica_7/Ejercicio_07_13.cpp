// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 13
// Problema planteado: Escriba un programa que dados dos ficheros generados por el programa anterior y ordenados
// genere un tercer fichero que sea el resultado de mezclar de formar ordenada los dos primeros. 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Articulo {
    int codigo;
    string nombre;
    int existencias;
    double precio;
};


bool compararPorCodigo(const Articulo &a, const Articulo &b) {
    return a.codigo < b.codigo;
}


int main() {
    vector<Articulo> fichero1, fichero2, resultado;

    leerFichero("fichero1.dat", fichero1);
    leerFichero("fichero2.dat", fichero2);

    mezclarFicheros(fichero1, fichero2, resultado);

    escribirFichero("fichero_resultado.dat", resultado);

    cout << "Mezcla de ficheros completada. Resultado guardado en 'fichero_resultado.dat'." << endl;

    return 0;
}




void leerFichero(const string &nombreFichero, vector<Articulo> &articulos) {
    ifstream archivo(nombreFichero, ios::binary);
    if (!archivo) {
        cerr << "Error al abrir el archivo " << nombreFichero << " para lectura." << endl;
        return;
    }

    Articulo articulo;
    while (archivo.read(reinterpret_cast<char*>(&articulo), sizeof(Articulo))) {
        articulos.push_back(articulo);
    }

    archivo.close();
}

void mezclarFicheros(const vector<Articulo> &fichero1, const vector<Articulo> &fichero2, vector<Articulo> &resultado) {
    merge(fichero1.begin(), fichero1.end(), fichero2.begin(), fichero2.end(), back_inserter(resultado), compararPorCodigo);
}

void escribirFichero(const string &nombreFichero, const vector<Articulo> &articulos) {
    ofstream archivo(nombreFichero, ios::binary);
    if (!archivo) {
        cerr << "Error al abrir el archivo " << nombreFichero << " para escritura." << endl;
        return;
    }

    for (const auto &articulo : articulos) {
        archivo.write(reinterpret_cast<const char*>(&articulo), sizeof(Articulo));
    }

    archivo.close();
}


