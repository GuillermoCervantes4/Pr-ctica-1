// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 18/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 5
// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales

#include <iostream>
#include <vector>

using namespace std;

// Prototipo de la función
bool sonIguales(const vector<int>& v1, const vector<int>& v2, int index);

int main() {
    // Definir los vectores
    vector<int> vector1 = {1, 2, 3, 4, 5};
    vector<int> vector2 = {1, 2, 3, 4, 5};

    // Llamar a la función para comparar los vectores
    if (sonIguales(vector1, vector2, 0)) {
        cout << "Los vectores son iguales." << endl;
    } else {
        cout << "Los vectores no son iguales." << endl;
    }

    return 0;
}

// Función recursiva para comparar vectores
bool sonIguales(const vector<int>& v1, const vector<int>& v2, int index) {
    
    //misma longitud, son iguales; si no, no
    if (index >= v1.size() || index >= v2.size()) {
        return v1.size() == v2.size(); 
    }

    // Si los elementos en la posición actual son diferentes, los vectores no son iguales
    if (v1[index] != v2[index]) {
        return false;
    }
    return sonIguales(v1, v2, index + 1);
}
