// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 9
// Problema planteado: Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un desempeño mayor con relación al promedio del curso.

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    // Definir arreglos de calificaciones, nombres y siglas de carrera
    
    int calificaciones[] = {85, 90, 75, 95, 80};
    string Nombres[] = {"Juan", "Maria", "Pedro", "Ana", "Luis"};
    string carreras[] = {"ING", "ADM", "ING", "ADM", "ING"};

    // Almacenar el nombre del alumno con la nota mayor y menor
    
    string Alubno_Mayor, Alubno_Menor;
    
    // Almacenar las calificaciones mayor y menor
    int Calificacion_Mayor = -1, Calificacion_Menor = 101;
    
    // Variables para almacenar el promedio de las calificaciones y la carrera con mejor desempeño
    
    double promedio = 0;
    string mejorCarrera;
    int sumaCalificaciones = 0;
    int contadorING = 0, contadorADM = 0;
    double promedioING, promedioADM;

    // Arreglo de calificaciones para encontrar la nota mayor y menor
    for (int i = 0; i < 5; i++) {
        
        if (calificaciones[i] > Calificacion_Mayor) {
            
            Calificacion_Mayor = calificaciones[i];
            Alubno_Mayor = Nombres[i];
        }
        
        if (calificaciones[i] < Calificacion_Menor) {
            
            Calificacion_Menor = calificaciones[i];
            Alubno_Menor = Nombres[i];
        }
        
        // Suma de todas las calificaciones
        sumaCalificaciones += calificaciones[i];
    }

    // Calcular el promedio de las calificaciones
    
    promedio = sumaCalificaciones / 5.0;

    // Recorrer el arreglo de carreras para contar cuántos estudiantes hay en cada carrera
    for (int i = 0; i < 5; i++) {
        
        if (carreras[i] == "ING") {
            contadorING++;
        
        } else if (carreras[i] == "ADM") {
            contadorADM++;
        }
    }

    // Promedios de las carreras
    
    promedioING = sumaCalificaciones / static_cast<double>(contadorING);
    promedioADM = sumaCalificaciones / static_cast<double>(contadorADM);

    // Determinar la carrera con mejor desempeño
    
    if (promedioING > promedioADM) {
       
        mejorCarrera = "ING";
    
    } else {
        
        mejorCarrera = "ADM";
    }

    // Mostrar resultados
    
    cout << "El alumno con la nota más alta es: " << Alubno_Mayor << endl;
    cout << "El alumno con la nota más baja es: " << Alubno_Menor << endl;
    cout << "La carrera con mejor desempeño es: " << mejorCarrera << endl;

    return 0;
}