// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 13
// Problema planteado:  Almacenar en un arreglo los n primeros números primos.

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cout << "Ingrese los  numeros primos para  almacenar: ";
    cin >> n;

    vector<int> numerosPrimos;

    int num = 2;                                                           
   
    while (numerosPrimos.size() < n) {
        
        bool esPrimo = true;
        
        for (int i = 2; i < num; ++i) {
            
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            numerosPrimos.push_back(num);   //agrega los numeros primos al vector
        }

        ++num;

    }

    // Imprimir los números primos almacenados en el arreglo
    cout << "Todos los primeros " << n << " numeros primos son:" << endl;

    for (int primo : numerosPrimos) {
        cout << primo << " ";
    }

    cout << endl;

    return 0;
}