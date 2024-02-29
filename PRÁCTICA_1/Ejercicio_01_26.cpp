// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 26
// Problema planteado: Leer dos números y verificar si uno es múltiplo del otro o no lo es

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero1, numero2;

    
    cout << "Ingrese dos números: ";
    
    cin >> numero1;
    cin >> numero2;
    
    
    //calculo y verificacion de multiplo
    
    if (numero1 % numero2 == 0) {
        
        cout << numero1 << " es múltiplo de " << numero2 << endl;
    
        
    } 
    // Segunda oportunidad para ver si es multiplo
    else {
        
        if (numero2 % numero1 == 0) {
        
        cout << numero2 << " es múltiplo de " << numero1 << endl;
        
            
        }
        
        else {
            
            cout << numero1 << " no es múltiplo de " << numero2 << endl;
        }
    }  
    return 0;
}