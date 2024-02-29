// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 6
// Problema planteado: Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int HORAS, PAGO;

    cout << "Ingrese las horas que estuvo estacionado: ";
    cin >> HORAS;

    if(HORAS == 1)
    {
        PAGO = 17;
    }

    else if( HORAS > 1) 
    {
        PAGO = 17 +15 * (HORAS - 1);
    }
    
    cout << "El monto que debe pagar es: " << PAGO <<  "Bs" << endl;

    return 0;

}