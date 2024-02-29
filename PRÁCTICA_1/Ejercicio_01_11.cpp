// Materia: Programacion I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creacion: 27/02/2024
// Fecha modificacion: 29/02/2024
// Numero de ejercicio: 11
// Problema planteado:  Escriba la sucesion de Fibonacci.

#include <iostream>
using namespace std;

int main() 
{
    int limite, A, B, C;
    
    cout << "Ingrese el límite para la secuencia de Fibonacci: ";
    
    cin >> limite;
    
    //Segundo numero
    B = 0; 
   
    //Primer numero
    A = 1; 
    while (B < limite) 
    {
        cout << B << " "; 
        
        //numero que continua la secuencia
        C = A + B; 
        
        A = B;
        
        B = C;
    }
    return 0;
}