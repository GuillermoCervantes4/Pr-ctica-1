// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 19
// Problema planteado:  Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior ordene los elementos de menor a mayor.

#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>
#include <vector>

using namespace std ;

int main (){
    
    srand (time(0));
    
    const int tamano=10;
    int numeros [tamano];
    
    for(int i=0 ; i < tamano; i++)
    {
        numeros [i]= rand() % 100;// saca numeros alazar hastaz als 100
    }
    
    for ( int i =0 ; i<tamano-1 ;i++)
    {
        cout << numeros [i]<< "" ;
    }
    
    cout << endl ;
    
    for (int i=0; i < tamano-1 ; i ++ ){
        for (int j=i+1; j<tamano; j++)
        {
            
            if (numeros[i] > numeros[j])
            {
                int temp = numeros [i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }
        

}