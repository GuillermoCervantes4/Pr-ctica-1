// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 22
// Problema planteado: Crear un programa que indique si un número es perfecto o no, se dice que un número es perfecto si la suma de sus divisores es igual al número. 

#include <iostream>
using namespace std;

int main()
{
    
    int n, sum=0;
    cin >> n;
    for (int i = 1; i < n; i++){ 

        //Verificamos que los divisores tengan de residuo un 0
        if (n%i==0){ 
            
            //Sumamos los divisores que si cumplan esa condicion
            sum +=i;  
        }
    }
    if (sum == n){   
        cout << "Es un numero perfecto" << endl;
    }
    else{
        cout << "No es un numero perfecto" << endl;
    }
    return 0;
}
