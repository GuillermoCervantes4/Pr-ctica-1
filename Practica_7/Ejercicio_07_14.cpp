// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 14
// Problema planteado: Escriba un programa que tome como entrada el fichero del ejercicio 4 y una condición sobre el
//campo Precio. La condición podrá ser:
//Precio mayor o igual a 100 o cualquier otro dato ingresado por teclado.
//Este programa debe generar como salida un fichero llamado "salida.dat" que contenga todos
//aquellos artículos para los que se cumple la condición de entrada.
//Mostrar el archivo de salida “salida.dat”

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Articulo {
    string nombre;
    double precio;
};

// Función para verificar si el precio cumple con la condición
bool cumpleCondicion(double precio, double condicion) {
    return precio >= condicion;
}

int main() {
    // Abrir el archivo de entrada "ascii.txt"
    ifstream archivoEntrada("ListaASCII.txt");
    if (!archivoEntrada.is_open()) {
        cerr << "Error al abrir el archivo de entrada." << endl;
        return 1;
    }

    // Pedir al usuario la condición de precio
    double condicion;
    cout << "Ingrese la condicion de precio: ";
    cin >> condicion;

    // Crear el archivo de salida "salida.dat"
    ofstream archivoSalida("salida.dat");
    if (!archivoSalida.is_open()) {
        cerr << "Error al crear el archivo de salida." << endl;
        return 1;
    }

    // Leer el archivo de entrada línea por línea
    string linea;
    while (getline(archivoEntrada, linea)) {
        // Parsear cada línea para obtener el nombre y el precio del artículo
        istringstream iss(linea);
        Articulo articulo;
        iss >> articulo.nombre >> articulo.precio;

        // Verificar si el precio cumple con la condición
        if (cumpleCondicion(articulo.precio, condicion)) {
            // Escribir el artículo en el archivo de salida
            archivoSalida << articulo.nombre << " " << articulo.precio << endl;
        }
    }

    // Cerrar los archivos
    archivoEntrada.close();
    archivoSalida.close();

    cout << "Se ha creado el archivo de salida 'salida.dat' con los articulos que cumplen la condicion de precio." << endl;

    return 0;
}
