// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 3
// Problema planteado: Calcular la distancia entre dos puntos P1 y P2

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double x1, y1;
    double x2, y2;
    cout << "Ingrese las coordenadas del primer punto del eje x (x1) y del eje y (y1): ";
    
    cin >> x1;
    cin >> y1;

    cout << "Ingrese las coordenadas del segundo punto del eje x (x2) del eje y (y2): ";
    
    cin >> x2;
    cin >> y2;


     //La expresion pow es para elevar al cuadrado
    double Distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "La distancia entre los dos puntos es: " << Distancia << endl;

    return 0;
}