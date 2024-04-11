// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 11/04/2024
// Fecha modificación: 11/04/2024
// Número de ejercicio: 5
// Problema planteado: Ordenar por Shell

#include <iostream>
#include <random>
#include <stdlib.h>
#include <ctime>
#include <vector>

using namespace std;

vector<int> llenarVector (int n);
void mostrar (vector<int>);
int Particion (vector<int>&, int, int);
vector<int> Shell (vector<int>&);

int main (){
    vector<int> vec;
    int longitud;
    cout<<"Ingrese la longitud del vector: ";
    cin>>longitud;
    vec = llenarVector(longitud);
    cout<<"El vector es: \n";
    mostrar(vec);
    Shell(vec);
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

int Particion (vector<int>&are, int inicio, int fin){
    int pivote=are[fin];
    int i=fin-1;
    for(int j=i;j>=inicio;j--)
    {
        if(are[j]>pivote)
        {
            swap(are[i],are[j]);
            i--;
        }
    }
    swap(are[fin], are[i+1]);
    return i+1;
}

void Shell(vector<int>& arr) {

    int n = arr.size();

    for(int gap = n / 2; gap > 0; gap /= 2) {

        for(int i = gap; i < n; i += 1) {

            int temp = arr[i];

            int j;

            for(j = i; j >= gap && arr[j - gap] > temp; j -= gap) {

                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}
