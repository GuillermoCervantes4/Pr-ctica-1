// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 4
// Problema planteado: Escriba un programa que en una estructura se lleve el control de un inventario de
//cintas de una tienda de video.En una tienda donde solo hay 
//10 productos se desea calcular el total de ganancia que produjo dicho negocio este mes. Para ello se cuenta por producto con: 
//Precio del Costo, precio de venta, código y cantidad vendida en ese periodo. 
//Realizar programa que permita calcular las Ganancias de la Tienda

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Cinta {
    string titulo;
    float longitud;
    float precioAlquiler;
    int existencia;
    string clasificacion;
};

// PROTOTIPOS
void ingresarCinta(vector<Cinta>& inventario);
void mostrarResumen(vector<Cinta> inventario);


//Vector
vector<string> clasificaciones = {"accion", "terror", "infantil", "drama", "ficcion", "aventura", "documental"};

int main() {
    
    // Vector para almacenar las cintas
    vector<Cinta> inventario; 
    
    int cantidadCintas;

    cout << "Ingrese la cantidad de cintas: ";
    cin >> cantidadCintas;

    for (int i = 0; i < cantidadCintas; i++) {
        ingresarCinta(inventario);
    }
    mostrarResumen(inventario);

    return 0;
}

void ingresarCinta(vector<Cinta>& inventario) {
    
    Cinta nuevaCinta;
    cout << "Ingrese el titulo de la cinta: ";
    cin.ignore(); 
    getline(cin, nuevaCinta.titulo);

    cout << "Ingrese la longitud de la cinta (en minutos): ";
    cin >> nuevaCinta.longitud;

    cout << "Ingrese el precio de alquiler: ";
    cin >> nuevaCinta.precioAlquiler;

    cout << "Ingrese cuantas cintas tiene la tienda: ";
    cin >> nuevaCinta.existencia;

    //Desplegamos cada clasificacion para que el usuario sepa que debe escribir
    cout << "Seleccione la clasificacion de la cinta(seleccion el indice):" << endl; 
    for (int i = 0; i < clasificaciones.size(); i++) {
        cout << i + 1 << ". " << clasificaciones[i] << endl;
    }
    int opcion;

    //ingrese el numero de la clasificacion
    cin >> opcion; 
    nuevaCinta.clasificacion = clasificaciones[opcion - 1]; 

    inventario.push_back(nuevaCinta);
}

void mostrarResumen(vector<Cinta> inventario) {
    vector<int> resumen(clasificaciones.size(), 0); 

    // Sumamos todas las peliculas que tienen la misma clasificacion
    for (int i = 0; i < inventario.size(); ++i) {
        for (int j = 0; j < clasificaciones.size(); ++j) {
            if (inventario[i].clasificacion == clasificaciones[j]) {
                resumen[j] += inventario[i].existencia;
                break;
            }
        }
    }

    //Mostramos que clasificacion es y cuantas cintas hay
    cout << "\nResumen de cintas por clasificacion:" << endl;
    for (int i = 0; i < clasificaciones.size(); ++i) {
        cout << clasificaciones[i] << ": " << resumen[i] << " cintas\n"; 
    }
}
