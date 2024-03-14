// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 1
// Problema planteado: Multiplos de 3, de 5 y de ambos.

#include <iostream>

using namespace std;

int main(){
    for (int i=1; i<=100; ++i){
        
        if (i % 3 == 0 && i % 5 == 0){
            
            cout << "fizzbuzz" << endl;
        }   
        else if (i % 3 == 0){
            
            cout << "fizz" << endl;
        }   
        else if (i % 5 == 0){
            
            cout << "buzz" << endl;
        }   
        else {
            cout << i << endl;
        }
    } return 0;
}