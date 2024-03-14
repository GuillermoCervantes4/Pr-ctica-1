// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 6
// Problema planteado: Crea un programa que cuente cuantas veces se repite cada palabra y que muestre el recuento final de todas ellas.

#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

// Función para contar las ocurrencias de las palabras
map<string, int> contarPalabras(const string& str) {
    
    map<string, int> conteoPalabras;
    
    string palabra;

    for (char c : str) {
        
        if (isalnum(c)) {
            palabra += tolower(c);
        } 
        else 
        {
            if (!palabra.empty()) {
            conteoPalabras[palabra]++;
            palabra.clear();
            }
        }
    }

    if (!palabra.empty()) {
        conteoPalabras[palabra]++;
    }

    return conteoPalabras;
}

int main() {
    string entrada;
    cout << "Ingrese una cadena: ";
    getline(cin, entrada);

    map<string, int> conteoPalabras = contarPalabras(entrada);

    cout << "\nConteo de palabras:\n";
    
    for (const auto& entrada : conteoPalabras) {
        cout << entrada.first << ": " << entrada.second << "\n";
    }

    return 0;
}