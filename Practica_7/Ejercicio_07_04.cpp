// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 4
// Problema planteado: Escribir un programa que lea y muestre en pantalla el archive generado en el ejercicio anterior
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

void LeerlistaArchivo()
{
    ifstream archivo;
    string lineaTexto;
    archivo.open("ListaASCII.txt");
    while(!archivo.eof())
    {
        getline(archivo, lineaTexto);
        cout<< lineaTexto << endl;
    }
    archivo.close();
}