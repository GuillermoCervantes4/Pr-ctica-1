// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 7
// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal. Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido.


#include <iostream>
#include <string>

using namespace std;

int main ()
{

int num;

cin >> num;

//Cada else tendrá un numero para cada mes.
if(num==1)
{
    cout << " Enero "<< endl;
}
else if (num==2)
{
    cout << " Febrero "<< endl;
}
else if (num==3)
{
    cout << " Marzo "<< endl;
}
else if (num==4)
{
    cout << " Abril "<< endl;
}

else if (num==5)
{
    cout << " Mayo "<< endl;
}

else if (num==6)
{
    cout << " Junio "<< endl;
}

else if (num==7)
{
    cout << " Junlio "<< endl;
}
else if (num==8)
{
    cout << " Agosto "<< endl;
}
else if (num==9)
{
    cout << " Septiembre "<< endl;
}

else if (num==10)
{
    cout << " Octubre "<< endl;
}

else if (num==11)
{
    cout << " Noviemrbre "<< endl;
}

else if (num==12)
{
    cout << " Diciembre "<< endl;
}

}