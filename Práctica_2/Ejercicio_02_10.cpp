// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 10
// Problema planteado: Dado un arreglo que contiene la población de los nueve departamentos del país y otro que
//- contiene los nombres de estos departamentos, indique el nombre del departamento que tiene
//- la mayor población y el nombre del departamento que tiene la menor población.

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    // Arreglo de población y arreglo de nombres de departamentos
    const int tamanioArreglo = 9;
    int poblacion[tamanioArreglo];
    string nombres[tamanioArreglo];

    // Solicitar al usuario que ingrese los valores de población y los nombres de los departamentos
    cout << "Por favor, ingrese el nombre correspondiente del departamento y los datos de poblacion:" << endl;
    
    for (int i = 0; i < tamanioArreglo; ++i) 
    {
        cout << "Nombre: ";
        cin >> nombres[i];
        
        cout << "Poblacion: ";
        cin >> poblacion[i];
    }
    
    //Departamento con la mayor población
    
    // Inicializamos con el primer nombre
    string mayor_poblacion = nombres[0]; 

    for (int i = 1; i < tamanioArreglo; ++i) 
    {
        if (poblacion[i] > poblacion[0]) 
        {
            mayor_poblacion = nombres[i];
            
            // Actualizamos la población máxima encontrada
            poblacion[0] = poblacion[i]; 
        }
    }

    // Departamento con la menor población
    
    string menor_poblacion = nombres[0]; 
    
    int min_poblacion = poblacion[0];

    for (int i = 1; i < tamanioArreglo; ++i) 
    {
        if (poblacion[i] < min_poblacion) // Comparamos con la población mínima actual
        {
            min_poblacion = poblacion[i];
            
            menor_poblacion = nombres[i]; 
        } 
        else if (poblacion[i] == min_poblacion && nombres[i] < menor_poblacion) 
        {
            menor_poblacion = nombres[i];
        }
    }

    cout << "Departamento con la mayor poblacion: " << mayor_poblacion << endl;
    cout << "Departamento con la menor poblacion: " << menor_poblacion << endl;

    return 0;

}

