// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 5
// Problema planteado: En una tienda donde solo hay 10 productos se desea calcular el total de ganancia que
//produjo dicho negocio este mes. Para ello se cuenta por producto con: Precio del
//Costo, precio de venta, código y cantidad vendida en ese periodo. Realizar programa
//que permita calcular las Ganancias de la Tienda.

#include <iostream>
using namespace std;

struct producto 
{
    int codigo;
    double Costo;
    double Venta;
    int cantidad;
};

// numero de productos que se pedira al usuario
const int NUM_PRODUCTOS = 10;

//Prototipo
double calcularGanancias(producto productos[]); 

int main() 
{
    producto productos[NUM_PRODUCTOS];

    // Detalles de cada producto
    cout << "Ingresa los detalles de cada producto:" << endl;
    for (int i = 0; i < NUM_PRODUCTOS; ++i) 
    {
        cout << "Producto " << i + 1 << ":" << endl;
        cout << "Codigo: ";
        cin >> productos[i].codigo;
        cout << "Precio de Costo: ";
        cin >> productos[i].Costo;
        cout << "Precio de Venta: ";
        cin >> productos[i].Venta;
        cout << "Cantidad Vendida este mes: ";
        cin >> productos[i].cantidad;
    }

    // Ganancias totales
    double Totales = calcularGanancias(productos);

    // Resultado
    cout << "\nLas ganancias totales de la tienda este mes son: $" << Totales << endl;

    return 0;
}

double calcularGanancias(producto productos[]) 
{
    double ganancias = 0.0;
    for (int i = 0; i < NUM_PRODUCTOS; ++i) 
    {
        ganancias += (productos[i].Venta - productos[i].Costo) * productos[i].cantidad;
    }
    return ganancias;
}