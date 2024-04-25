// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 12
// Problema planteado: Establecer un listado de suscriptores de una revista a través de una estructura, cuyos
//datos de entrada serán los datos de cada suscriptor (Nombre, Cedula, Mes de
//Inscripción, Año de Inscripción).

#include <iostream>
#include <string>
using namespace std;

struct Suscriptor 
{
    string nombre;
    string cedula;
    int mesInscripcion;
    int anoInscripcion;
};

//numero de subcriptores
const int MAX_SUSCRIPTORES = 20; 

int main() 
{
    Suscriptor listaSuscriptores[MAX_SUSCRIPTORES];
    int numSuscriptores;

    // Pedir al usuario el numero de suscriptores
    cout << "Ingrese el numero de suscriptores: ";
    cin >> numSuscriptores;

    // Pedir los datos de cada suscriptor
    cout << "\nIngrese los datos de cada suscriptor:" << endl;
    for (int i = 0; i < numSuscriptores; ++i) 
    {
        cout << "\nSuscriptor " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        // Limpiar el teclado
        cin.ignore(); 
        getline(cin, listaSuscriptores[i].nombre);

        cout << "Cedula: ";
        cin >> listaSuscriptores[i].cedula;

        cout << "Mes de Inscripcion (1-12): ";
        cin >> listaSuscriptores[i].mesInscripcion;

        cout << "Anio de Inscripcion: ";
        cin >> listaSuscriptores[i].anoInscripcion;
    }

    //  lista de suscriptores en pantalla
    cout << "\nListado de Suscriptores:" << endl;
    for (int i = 0; i < numSuscriptores; ++i) 
    {
        cout << "\nSuscriptor " << i + 1 << ":" << endl;
        cout << "Nombre: " << listaSuscriptores[i].nombre << endl;
        cout << "Cedula: " << listaSuscriptores[i].cedula << endl;
        cout << "Mes de Inscripcion: " << listaSuscriptores[i].mesInscripcion << endl;
        cout << "Anio de Inscripcion: " << listaSuscriptores[i].anoInscripcion << endl;
    }

    return 0;
}
