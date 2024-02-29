// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 21
// Problema planteado: Ayude a esta ama de casa a obtener el total de sus comprar, luego de llenar el carrito de manos con todos los artículos de primera necesidad.

#include <iostream>

using namespace std;

int main ()
{
    int N_ARTICULOS;
    double TOTAL = 0.0;

    cout << "Ingrese la cantidad de Articulos: ";
    cin >> N_ARTICULOS;

    for(int i = 1; i <= N_ARTICULOS; ++ i)
    {
        double PRECIO,  CANTIDAD;

        cout <<"Ingrese el precio del articulo: "<< i << " :";
        cin >> PRECIO;

        cout << "Ingrese la cantidad del articulo: " << i << " : ";
        cin >> CANTIDAD;

        TOTAL += PRECIO * CANTIDAD;
    } 

    cout << "El total de su compra es: "<< TOTAL << " Bs" << endl;

    return 0;

}