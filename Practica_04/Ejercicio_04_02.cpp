// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 11/04/2024
// Fecha modificación: 11/04/2024
// Número de ejercicio: 2
// Problema planteado: Ordenar por selección

#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

void ingresarDatos(int& cantidad);
void numerosRandom(int inicio, int fin, int cantidad, vector<int>&numerosDados);
void desplegarVector(int cantidad, vector<int>&numerosDados);
void ordenarPorSeleccion(int cantidad, vector<int> numerosDados);

int main (){
    int inicio, fin, cantidad;
    inicio=1;
    fin=1000;

    ingresarDatos(cantidad);

    vector<int>numerosDados(cantidad);

    srand(time(NULL));

    numerosRandom(inicio, fin, cantidad, numerosDados); 

    desplegarVector(cantidad, numerosDados);

    ordenarPorSeleccion(cantidad, numerosDados);

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

//Ordenamiento por seleccion
void ordenarPorSeleccion(int cantidad, vector<int> numerosDados){
    cout << "Metodo de seleccion"<< endl;

    vector<int> numerosOrdenados(cantidad);
    numerosOrdenados = numerosDados;

    int menor, num;
    for (int i = 0; i < cantidad - 1; i++) {
        menor = i;
        for (int j = i + 1; j < cantidad; j++) {
            if (numerosOrdenados[j] < numerosOrdenados[menor]) {
                menor = j;
            }
        }
        num = numerosOrdenados[menor];
        numerosOrdenados[menor] = numerosOrdenados[i];
        numerosOrdenados[i] = num;
    }
    cout << "EL vector ordenado es: ";
    desplegarVector(cantidad, numerosOrdenados);
}
