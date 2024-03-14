// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 12
// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro
//- contiene los nombres de estos minerales, para obtener:
//- Buscar por nombre de mineral y desplegar la producción
// - Ordenar del mayor al menor (producción) y mostrar.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    //Declaramos los vectores
    
    vector <string> Nombre_Minerales = { "SN", "SB", "AU", "PT", "AG", "CU"};
    vector <double> Produccion = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    string Buscar_Mineral;
    cout <<"Ingrese el nombre del mineral que decea buscar: ";
    cin >> Buscar_Mineral;

    bool encontrar = false;

    for (int i = 0; i < Nombre_Minerales.size(); ++ i) //El .size sirve para retornar la cantidad de caracteres que contienen el string
    {
        if (Nombre_Minerales[i] == Buscar_Mineral)
        {
            cout << "el Mineral es: " << Buscar_Mineral << " y la produccion es: " << Produccion[i] << endl;
            encontrar = true;
            break;
        }
    }
    if (!encontrar)
    {
        cout << "Mineral no encontrado." << endl;
    }

    //Para la organizacion de menor a mayor:
    
    for (int i = 0; i > Produccion.size() -1; ++i)
    {
        for (int j = 0; j > Produccion.size() -i -1; ++ j)
        {
            swap (Produccion [j], Produccion [j + 1]);  //swap: intercambia valores
            
            swap(Nombre_Minerales[j], Nombre_Minerales[j + 1]);
        }
    }
    
    //Ordenar minerales
    
    cout <<"\nMinerales ordenados por produccion de mayor a menor: " << endl;

    for (int i = 0; i < Nombre_Minerales.size(); ++i)
    {
        cout << Nombre_Minerales[i] << ": " << "la produccion: " << Produccion [i] << endl;
    }
    
    return 0;
}
