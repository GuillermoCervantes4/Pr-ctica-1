// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 1
// Problema planteado: Escribir un programa que escriba “hola mundo” dentro de un archivo llamado hola.txt.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void EscribirArchivo();

int main()
{
    EscribirArchivo();
    return 0;
}

void EscribirArchivo()
{
    ofstream archivo;
    archivo.open("HolaMundo.txt");
    archivo << "Hola Mundo";
    archivo.close();   
}
