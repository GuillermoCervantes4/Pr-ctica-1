// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 11/04/2024
// Fecha modificación: 11/04/2024
// Número de ejercicio: 6
// Problema planteado: Ordenar por Quicksort

#include <iostream>
#include <random>
#include <stdlib.h>
#include <ctime>
#include <vector>

using namespace std;

vector<int> llenarVector (int n);
void mostrar (vector<int>);
void QuickSort (vector<int>&, int, int);
int Particion (vector<int>&, int, int);

int main (){
    vector<int> vec;
    int longitud;
    cout<<"Ingrese la longitud del vector: ";
    cin>>longitud;
    vec = llenarVector(longitud);
    cout<<"El vector es: \n";
    mostrar(vec);
    QuickSort(vec, 0, vec.size());
    cout<<"El vector ordenado es: \n";
    mostrar(vec);
}

vector<int> llenarVector (int n){
    srand (time(NULL));
    vector<int> arreglo;
    for(int i = 0; i < n; i++){
        int num = rand() % (1-100+1) + 1;   
        arreglo.push_back(num);
    }
    return arreglo;
}

void mostrar (vector<int> v){
    for(int i = 0; i < v.size(); i++){ //.size() para saber la longitud del vector
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}


void QuickSort(vector<int>& are, int inicio, int fin) {
    if (inicio < fin) {
        int pivote = Particion(are, inicio, fin);
        QuickSort(are, inicio, pivote - 1);
        QuickSort(are, pivote + 1, fin); // Se ajusta el rango del índice para que sea pivote + 1
    }
}

int Particion(vector<int>& are, int inicio, int fin) {
    int pivote = are[fin];
    int i = inicio - 1;
    for (int j = inicio; j < fin; j++) {
        if (are[j] > pivote) {
            i++;
            swap(are[i], are[j]);
        }
    }
    swap(are[i + 1], are[fin]);
    return i + 1;
}

