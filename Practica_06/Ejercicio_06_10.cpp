// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 18/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 10
// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
// la lectura de dos números enteros, a partir de la relación:

#include <iostream>

using namespace std;

//prototipos
int factorial (int);
void binomial ();

int main (){
    binomial();
}

//ingreso de datos
void binomial (){ 
    int n = 0, m = 0;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de m: ";
    cin >> m;
    cout << "El valor del coeficiente binomial es: " << factorial(n) / (factorial(n - m) * factorial(m)) << endl;
}

int factorial (int n){
    if(n == 1)
        return 1;
    else
        return n * factorial (n - 1);
}