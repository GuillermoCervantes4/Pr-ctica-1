// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 3
// Problema planteado: Escribir un programa que escriba la lista de caracteres ASCII dentro de un archivo de texto

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ingresarlistaArchivo(int);
void LeerlistaArchivo();

int main()
{
    int n;
    n = 255;
    system("cls");
    ingresarlistaArchivo(n);
    LeerlistaArchivo();
    return 0;
}

void ingresarlistaArchivo(int n)
{
    ofstream archivo;
    archivo.open("ListaASCII.txt");
    for (size_t i = 32; i < n; i++)
    {
        archivo<< char(i) <<endl;
    }
    archivo.close();   
}
