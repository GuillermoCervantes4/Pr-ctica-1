// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 24
// Problema planteado: Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las llantas que compra y la que tiene que pagar por el total de la compra.

#include <iostream>

using namespace std;

int main() {
    
    int cantidad_llantas;
    double precio_unitario;

    cout << "Ingrese la cantidad de llantas que desea comprar: ";
    
    cin >> cantidad_llantas;

    // Determinar el precio unitario según la cantidad que se ha comprado
    if (cantidad_llantas < 5) {
        precio_unitario = 300;
    } else if (cantidad_llantas >= 5 && cantidad_llantas <= 10) {
        precio_unitario = 250;
    } else {
        precio_unitario = 200;
    }

    // Calcular el precio total 
    double precio_total = cantidad_llantas * precio_unitario;

    // Leer y mostrar el precio unitario y el precio total
    cout << "El precio unitario por llanta es: " << precio_unitario << " Bs." << endl;
    
    cout << "El precio total de la compra es: " << precio_total << " Bs." << endl;

    return 0;
}