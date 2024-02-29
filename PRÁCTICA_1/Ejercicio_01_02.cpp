// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 2
// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin

#include <iostream>
#include <iomanip>
#include <string>

using namespace std ;
int main ()
{
    double C, K;
    cin >> C;
    K = C + 273.15 ;

    cout << fixed << setprecision(3);

    cout << "Kelvin " << fixed << setprecision(3) << K << endl;

    return 0 ;

}