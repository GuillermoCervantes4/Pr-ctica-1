// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 18/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 8
// Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
// simétrica

#include <iostream>
#include <string>

using namespace std;

//Prototipos
bool esSimetrica(const string& cadena, int inicio, int fin);

int main() {
    string cadena;
    
    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena;

    if (esSimetrica(cadena, 0, cadena.length() - 1)) {
        cout << "La cadena es simétrica." << endl;
    } else {
        cout << "La cadena no es simétrica." << endl;
    }

    return 0;
}

bool esSimetrica(const string& cadena, int inicio, int fin) {
    // si tiene centro, es simétrica
    if (inicio >= fin) {
        return true;
    }
    
    // Comparamos los caracteres en las posiciones inicio y fin
    if (cadena[inicio] != cadena[fin]) {
        return false;  // Si los caracteres no coinciden, la cadena no es simétrica
    }
    
    // Llamamos recursivamente a la función con los siguientes caracteres
    return esSimetrica(cadena, inicio + 1, fin - 1);
}
