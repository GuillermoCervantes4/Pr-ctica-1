// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 18
// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo
// -hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el
// -vector (sólo los elementos introducidos).

#include <iostream> 
#include <vector>
#include <math.h>

using namespace std;

int main(){
    
    int valor, SUM;

    SUM=0
    
    // Vector vacio para ingresar las edades
    vector <int> valores; 
    
    do{
        cout << "Ingrese los valores del 1 al 10: "; cin >> valor;
        
        if (valor>0){
            valores.push_back(valor);
            SUM +=1;
        }
        else{   
            break; 
        }
        
    //verificamos el tamaño del vector
    } while (SUM <10 ) ; 
    
    for (int i = 0; i<SUM; i++){  
        
        cout << valores[i] << endl;
    
    }
    
    return 0;
}
