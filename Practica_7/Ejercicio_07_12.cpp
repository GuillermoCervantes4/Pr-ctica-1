// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 12
// Problema planteado: Codifique un programa que cree un fichero para contener los datos relativos a los artículos de
//un almacén.
//Para cada artículo habrá de guardar la siguiente información:
//• Código del artículo (Numérico)
//• Nombre del artículo (Cadena de caracteres)
//• Existencias actuales (Numérico)
//• Precio (Numérico decimal).
//Se deberán pedir datos de cada artículo por teclado hasta que como código se teclee el código 0.
//El fichero se habrá de crear ordenado por el código del artículo.

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

void ingresarArticulos(vector<Articulo> &articulos) {
    while (true) {
        Articulo nuevoArticulo;
        
        cout << "Ingrese el código del artículo (0 para terminar): ";
        cin >> nuevoArticulo.codigo;
        if (nuevoArticulo.codigo == 0) {
            break;
        }
        
        cout << "Ingrese el nombre del artículo: ";
        cin.ignore();
        getline(cin, nuevoArticulo.nombre);
        
        cout << "Ingrese las existencias actuales del artículo: ";
        cin >> nuevoArticulo.existencias;
        
        cout << "Ingrese el precio del artículo: ";
        cin >> nuevoArticulo.precio;
        
        articulos.push_back(nuevoArticulo);
    }
}

int main() {
    vector<Articulo> articulos;
    
    ingresarArticulos(articulos);
    
    sort(articulos.begin(), articulos.end(), compararPorCodigo);
    
    ofstream archivo("almacen.dat", ios::binary);
    if (!archivo) {
        cerr << "Error al abrir el archivo para escritura." << endl;
        return 1;
    }
    
    for (const auto &articulo : articulos) {
        archivo.write(reinterpret_cast<const char*>(&articulo), sizeof(Articulo));
    }
    
    archivo.close();
    
    cout << "Datos de los artículos guardados en 'almacen.dat'." << endl;
    
    return 0;
}
