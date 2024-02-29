// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 25
// Problema planteado: Calcular la siguiente sucesión 2-(3/2+4/3-5/4...+-(n+1/n))

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main ()
{
 int n;
 float resultado;

 resultado=0.0; 
  
  cout <<" Ingree hasta que numero que desea saberel resultado de la secuencia"<< endl;
  cin >> n ;
   
   for (float i=1.0;i<=n ; i++)
   {
    resultado += pow ((-1),(i+1))* ((i+1/i));
   }
    cout << "El resultado es : " << fixed << setprecision(3) << resultado << endl ;

    return 0 ; 
}