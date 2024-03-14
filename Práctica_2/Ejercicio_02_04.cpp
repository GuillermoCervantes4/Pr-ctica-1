// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 4
// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine: el porcentaje de mayores (>=18 años) y menores de edad (<18 años).

#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main () 
{
    srand(time(0));

    int Numero_de_Persona = 50; 

    vector<int> Edades_de_Personas(Numero_de_Persona); 

    for (int i = 0; i < Numero_de_Persona; i=i+1)
    {
        Edades_de_Personas[i] = rand() % (100 - 1);
    }

    //Contadores

    int Personas_Menores;
    int Personas_Mayores;

    //Cantidad de personas mayores y menores de edad

    for (int i = 0; i < Numero_de_Persona; ++i) 
    {
        if (Edades_de_Personas[i] >= 18) 
        {
            Personas_Mayores++ ;
        } else 
        {
            Personas_Menores++ ;
        }
    }

    cout << "La cantidad de personas mayores de edad es: " << Personas_Mayores++ << endl;

    cout << "La cantidad de personas menores de edad es: " << Personas_Menores++ << endl;

    //Sacamos el porcentaje
    
    double Porcentaje_Mayores = (static_cast<double>(Personas_Mayores) / Numero_de_Persona) * 100;
    double Porcentaje_Menores = (static_cast<double>(Personas_Menores) / Numero_de_Persona) * 100;  

    cout << "El porcentaje de personas que son mayores de edad es del: " << Porcentaje_Mayores << "%" << endl;
    cout << "El porcentaje de personas que son menores de edad es del: " << Porcentaje_Menores << "%" << endl;  

    return 0;
}