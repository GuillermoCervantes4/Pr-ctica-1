// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 15
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine cual es el menor

#include <iostream>

using namespace std;

int main() 
{
    int Num1, Num2, Num3;

    cout << "Ingrese el primer numero: ";
    cin >> Num1;

    cout << "Ingrese el segundo numero: ";
    cin >> Num2;

    cout << "Ingrese el tercer numero: ";
    cin >> Num3;

    if (Num1 != Num2 && Num2 != Num3 && Num1 != Num3) 
    {
        int Num_Menor = Num1;

        if (Num2 < Num_Menor) 
        {
            Num_Menor = Num2;
        }

        if (Num3 < Num_Menor) 
        {
            Num_Menor = Num3;
        }

        cout << "El numero menor es: " << Num_Menor << endl;
    } else 
    {
        cout << "Los numeros son iguales" << endl;
    }

    return 0;
}