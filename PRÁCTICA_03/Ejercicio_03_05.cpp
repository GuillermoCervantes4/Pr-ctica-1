// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 5
// Problema planteado: Crea un programa que invierta el orden de una cadena de texto sin usar funciones propias del lenguaje que lo hagan de forma automática.

#include <iostream>
#include <string>

using namespace std;

void invertirCadena(const string& cadena) {
    int longitud = cadena.length();
    string cadenaInvertida = "";

    // Construir la cadena invertida letra por letra
    for (int i = longitud - 1; i >= 0; --i) {
        cadenaInvertida += cadena[i];
    }

    cout << "La cadena invertida es: " << cadenaInvertida << endl;
}

int main() {
    string texto;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    invertirCadena(texto);

    return 0;
}
