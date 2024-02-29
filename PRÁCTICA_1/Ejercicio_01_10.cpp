// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 10
// Problema planteado: Escriba un programa que ingrese varios valores numéricos, hasta el que el usuario ingrese el valor de cero calculo la suma y el promedio de estos.

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int i; 

    //Caso de que quiera utilizar decimales
    float numero, SUMA, PROMEDIO; 

    cout << "Ingrese los numeros que desea sumar y promediar (ingrese 0 para finalizar): ";
    cin >> numero;

    while (numero != 0) 
    {
    
    SUMA = SUMA + numero;
    
    i++; 
    //Pedir el numero de vuelat, distinto a cero.
    cout << "Ingresa un numero distinto a cero: ";//peticion dentro del ciclo while para que vuelva a pedir el numero hasta que no cumpla lka condicion 
    
    cin >> numero;
    }
        
        PROMEDIO = SUMA / i; 
        
        cout << "La suma de los números es: " << SUMA << endl;
        
        cout << "El promedio de los números es: " << PROMEDIO << endl;
    return 0;
}