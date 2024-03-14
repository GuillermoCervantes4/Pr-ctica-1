// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 20
// Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. 
// -Debes usar un vector. 
// -Para simplificarlo vamos a suponer que febrero tiene 28 días.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    vector<string> meses = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

    // Le pedirá al usuario que ingrese el día del mes que uno dese
    int numerodeMes;
    
    cout << "Ingrese el número del mes: ";
    cin >> numerodeMes;

    if (numerodeMes < 1 || numerodeMes > 12)  
    {
        cout << "No existe el número de mes que ingreso" << endl;
        return 1; 
    }

    // Cantidad de días que tienen cada mes en orden
    vector<int> numeroDias = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Para generar la cantidad de días y el nombre del mes correspondiente
    int dias = numeroDias [numerodeMes - 1];
    
    string MES = meses [numeroMes - 1];

    cout << "El número que ingreso es de " << MES << " y tiene " << dias << " días." << endl;
    return 0;
}