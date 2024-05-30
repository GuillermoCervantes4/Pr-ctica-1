// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 2
// Problema planteado: Escribir un programa que lea el archivo creado en el ejercicio anterior y muestre por pantalla su
//contenido.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void EscribirArchivo();
void LeerArchivo();

int main()
{
    EscribirArchivo();
    LeerArchivo();
    return 0;
}

void EscribirArchivo()
{
    ofstream archivo;
    archivo.open("HolaMundo.txt");
    archivo << "Hola Mundo";
    archivo.close();   
}

void LeerArchivo()
{
    ifstream archivo;
    string lineaTexto;
    archivo.open("HolaMundo.txt");
    getline(archivo, lineaTexto);
    cout<< lineaTexto << endl;
    archivo.close();
}