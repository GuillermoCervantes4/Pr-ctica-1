// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 14
// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada.

#include <iostream>

using namespace std;

int main ()
{
    double base, altura, volumen;
    
    cout<< "Ingrese la base y la altura: " << volumen << endl;
    
    cin >> base;

    cin >> altura;
    
    // Para calcular el volumen de la pirámide
    
    volumen = ((base * base) * altura) / 3;
    
    cout << "EL volumen es: " << volumen << endl;
    
    return 0;
}