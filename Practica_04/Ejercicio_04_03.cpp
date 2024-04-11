// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 11/04/2024
// Fecha modificación: 11/04/2024
// Número de ejercicio: 3
// Problema planteado: Ordenar por inserción

#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

void ingresarDatos(int& cantidad);
void numerosRandom(int inicio, int fin, int cantidad, vector<int>&numerosDados);
void desplegarVector(int cantidad, vector<int>&numerosDados);
void ordenarPorInsercion(int cantidad, vector<int>numerosDados);

int main (){
    int inicio, fin, cantidad;
    inicio=1;
    fin=1000;

    ingresarDatos(cantidad);

    vector<int>numerosDados(cantidad);

    srand(time(NULL));

    numerosRandom(inicio, fin, cantidad, numerosDados); 

    desplegarVector(cantidad, numerosDados);

    ordenarPorInsercion(cantidad, numerosDados);

    return 0;
}

//Ingresar el tamanio
void ingresarDatos(int& cantidad){
    cout << "Ingrese el tamanio del vector: ";
    cin >> cantidad;
}

//numeros random
void numerosRandom(int inicio, int fin, int cantidad, vector<int>&numerosDados){
    for (int i = 0; i < cantidad; i++)
    {
        numerosDados[i]= rand() % (fin - inicio + 1) +inicio;
    }
}

//Mostrar el verctor original
void desplegarVector(int cantidad, vector<int>&numerosDados){
    for (int i = 0; i < cantidad; i++)
    {
        cout << numerosDados[i] << "\t";
    }
    cout << endl;
}

//Ordenamiento por insercion
void ordenarPorInsercion(int cantidad, vector<int>numerosDados){
    cout << "Metodo de insercion"<< endl;

    vector<int> numerosOrdenados(cantidad);
    numerosOrdenados = numerosDados;

    int c, comparar;
    for (int i = 1; i < cantidad; i++) {
        comparar = numerosOrdenados[i];
        c = i - 1;

        while (c >= 0 && numerosOrdenados[c] > comparar) {
            numerosOrdenados[c + 1] = numerosOrdenados[c];
            c = c - 1;
        }

        numerosOrdenados[c + 1] = comparar;
    }

    cout << "El vector ordenado es: ";
    desplegarVector(cantidad, numerosOrdenados);
}
