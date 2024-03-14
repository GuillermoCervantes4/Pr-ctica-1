// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 16
// Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos leídos por el teclado

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vec_original
    
    //Declaramos las variables
    
    const int Tamano_Vector = 5; 
    
    vector <string>
    
    vec_original(Tamano_Vector);

    for (int i = 0; i < Tamano_Vector; ++i)
    {
        cout <<"Ingresar la cadena " << i + 1 << ": ";
        
        cin >> vec_original[i];
    }
    
    vector<string> vectorInverso (vec_original.rbegin(), vec_original.rend());

    cout << "El vector inverso es:" << endl;

    for (const auto& elemento : vectorInverso) 
    {
        cout << elemento << endl;
    }

    return 0;
    

}