// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 5
// Problema planteado: Imprimir el promedio, la Mayor y la menor estatura de n personas.

#include <iostream>
#include <cstdlib> 
#include <random>
#include <ctime>   

using namespace std;

int main() {
    
    srand(time(0));

    int N;
    
    cout << "Ingrese el número de personas: ";
    cin >> N;

    int estaturas[N];

    // Generar estaturas aleatorias entre 50 y 240 cm
    for (int i = 0; i < N; i++) {
        estaturas[i] = rand() % (240 - 50); // Rango de 50 a 240
    }                           

    // Encontrar la mayor estatura, la estatura más baja y calcular el promedio
    int maxEstatura = estaturas[0];
    int minEstatura = estaturas[0];
    int sumaEstaturas = estaturas[0];

    for (int i = 1; i < N; i++) {
        
        sumaEstaturas += estaturas[i];

        if (estaturas[i] > maxEstatura) {
            maxEstatura = estaturas[i];
        }

        if (estaturas[i] < minEstatura) {
            minEstatura = estaturas[i];
        }
    }

    // Calcular promedio
    float promedio;
    
    promedio = (sumaEstaturas) / N;

    // Mostrar resultados
    cout << "La estatura mas alta es: " << maxEstatura << " cm" << endl;
    cout << "La estatura mas baja es: " << minEstatura << " cm" << endl;
    cout << "El promedio de estaturas es: " << promedio << " cm" << endl;

    return 0;
}
