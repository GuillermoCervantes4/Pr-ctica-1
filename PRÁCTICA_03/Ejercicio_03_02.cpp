// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 2
// Problema planteado: Verificar si una palabra es anagrama o no.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool es_anagram(const string& word1, const string& word2) {
    // Si las palabras tienen longitudes diferentes, no pueden ser anagramas
    if (word1.length() != word2.length()) {
        return false;
    }

    // Crear copias de las palabras para no modificarlas originales
    string word1_copy = word1;
    string word2_copy = word2;

    // Ordenar las letras de las palabras
    sort(word1_copy.begin(), word1_copy.end());
    sort(word2_copy.begin(), word2_copy.end());

    // Comparar las palabras ordenadas
    return word1_copy == word2_copy;
}

int main() {
    string word1;
    cin>> word1;
    string word2;
    cin>> word2;

    if (es_anagram(word1, word2)) {
        cout << "Son anagramas" << endl;
    } else {
       cout << "No son anagramas" << endl;
    }

    return 0;
}
