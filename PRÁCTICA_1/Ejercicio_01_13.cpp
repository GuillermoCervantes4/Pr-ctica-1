// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 13
// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas

#include <iostream>
#include <iomanip> 

using namespace std;

int main() 
{
    int Bs;
    double a_Dolar,a_Euro , a_LEsterlinas; 
    double Dolar = 6.86 ;
    double Euro = 7.44309 ;
    double LEsterlinas = 8.70128 ;
     
     cout << "Ingrese una cantidad en bs: "<< endl;
     cin >> Bs ;

//conversion de bs a otra moneda
    a_Dolar = Bs * 1 / Dolar ;
    a_Euro  = Bs *  1 / Euro ;
    a_LEsterlinas = Bs *  1 / LEsterlinas ;

    cout << fixed << setprecision(2);

    cout << "La cantidad de Bs a dolares es: "<< a_Dolar  << endl;
    cout << "La cantidad de Bs a euros es: "<< a_Euro << endl;
    cout << "La cantidad de Bs a Libras Esterlinas es: "<< a_LEsterlinas << endl;

    return 0;

}