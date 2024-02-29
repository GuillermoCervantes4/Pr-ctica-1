// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 29
// Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, secuencia,numero;

    secuencia = 1;

    cout<<"Ingrese el límite de terminos: "<<endl;

    cin>>numero;

    for (i = 0; i < numero; i++)
    {
        //Imprimir la secuencia a travez de este cout
        cout<<secuencia<<endl;
        if ((secuencia<10))
        {
            secuencia += secuencia;
        }
        else
        {
            int aux=secuencia;
            while (aux>0){
                int aux2=aux%10;
                aux/=10;
                secuencia += aux2;
            }
        }
        
    }
    return 0;
}