// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 8
// Problema planteado: Generar los primeros 100 numeros primos

#include <iostream>

using namespace std;

//Verificador de numeros primos
int i;

bool primo(int n) {
    if (n <= 1)
        
        return false;
    
    for (int i = 2; i * i <= n; ++i) {
        
        if (n % i == 0)
            
            return false;
    }
    return true;
}

//Mención de numeros primos
int main() {
    int numero = 100;

    cout << "Los primeros 100 numeros primos son:\n";

    for (i = 1; i<=numero ; i++ ){
       
        if (primo(i)){
            
            cout<<i<<endl;
        }
    }
    return 0;
}