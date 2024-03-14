// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 3
// Problema planteado: - Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el rango de A - B y determine cuántos de estos elementos son números primos. 

#include <iostream>
#include <vector>
#include <random>
#include <cstdlib> 

using namespace std;

srand(time(nullptr));
bool Primo(int Numero)
{
    if (Numero <= 1) 
    {
        return false;
    }

    for (int i = 2; i * i <= Numero; i++) 
        {
            if (Numero % i == 0) 
            {
                return false;
            }
        }
        return true;
}

int main()
{
    int A = 1; //Denominamos rango inferior
    int B = 100; // Determinamos rango superior
    int count_Primos = 0;

    vector <int> numeros(50);

    for (int i = 0; i < 50; i++) 
    {
        numeros[i] = A + rand() % (B - A + 1);
        if (Primo(numeros[i])) 
        {
            count_Primos++;
        }
    }

    cout << "Los elelementos que hay en el arreglo: "; 
    
    for (int i = 0; i < 50; i++) 
    {
        cout << numeros[i] << " ";
    }
    
    cout << "\nLa cantidade de numeros primos es: " << count_Primos << endl;

    return 0;

}