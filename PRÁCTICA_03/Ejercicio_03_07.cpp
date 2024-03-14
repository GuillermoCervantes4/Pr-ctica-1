// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 7
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto.

#include <iostream>

using namespace std;

bool esBisiesto(int anio) {
    
    // Un año es bisiesto si es divisible entre 4, excepto si es divisible entre 100 pero no entre 400
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int main() {
    
    int anio;

    // Solicitar al usuario ingresar el año
    cout << "Ingrese un año: ";
    cin >> anio;

    // Verificar si el año es bisiesto y mostrar el resultado
    if (esBisiesto(anio)) {
        
        cout << anio << " es un año bisiesto." << endl;
    } 
    else {
        
        cout << anio << " no es un año bisiesto." << endl;
    }

    return 0;
}
