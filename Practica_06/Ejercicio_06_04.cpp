// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 18/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 4
// Problema planteado: Realizar un algoritmo recursivo que escriba al revés una cadena.

#include <iostream>
#include <string>

using namespace std;

// Prototipo
string reverso(const string& cadena, int index);

int main() {
    string cadena;
    int index;

    cout << "Ingrese una palabra o cadena: ";
    cin >> cadena;

    index = cadena.length() - 1;

    cout << "Esta cadena al reves es: " << reverso(cadena, index) << endl;

    return 0;
}

string reverso(const string& cadena, int index) {
    // Caso base: si hemos alcanzado el inicio de la cadena, retornamos una cadena vacía
    if (index < 0) {
        return "";
    }
    // Concatenamos el carácter actual con la inversión del resto de la cadena
    return cadena[index] + reverso(cadena, index - 1);
}
