// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 7/03/2024
// Número de ejercicio: 1
// Problema planteado: Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de los componentes de índice par y la resta de los componentes de índice impar.

# include <iostream>
# include <cstdlib> 
# include <random> //Numeros random
# include <ctime> //No genere los mismos numeros random
#include <vector> 

using namespace std;

int main()
{
    
    srand(time(0));
    
    int numero, valor;
    
    cout<<"Ingrese el tamanio: ";
    cin>>numero;//10
    
    vector<int> VectorN(numero); //Se declara el vector
    int A,B;
    
    cout<<"Ingrese el limite inferior: ";
    cin>>A;
    
    cout<<"Ingrese el limite superior: ";
    cin>>B;
    
    int suma=0, resta=0;
    for(int i=0;i<numero;i++)
    {              
        VectorN[i] = A + rand()%(B-A); //Llena el vector con numeros aleatorios entre A y B
        
        if(i%2==0) // El vector y la "i" son diferentes
            suma+=VectorN[i];
        
        else
            resta-=VectorN[i];
        cout <<i<<"/"<< VectorN[i] << "\t"; //"\t" imprime un espacio de tabulacion
    }
    
    cout << "La suma de los pares es: "<<suma<<endl;
    cout << "La resta de los mpares es: "<<resta<<endl;
    return 0;
}