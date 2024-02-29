// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 16
// Problema planteado: Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está dentro del intervalo obtenga su cuadrado (n*n), si es menor que el límite inferior, obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2).

#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    int A, B, res1;
    
    float N, res2, res3;
    
    cin >> N;
    cin >> A;
    cin >> B;

    if (A < B){
            if (N >= A && N <= B){
                res1 = N*N;
                cout << res1  << endl;
            }
            else if (N < A){
                res2 = 1/N;
                cout << res2 << endl;
            }
            else{
                res3 = N/2;
                cout << res3 << endl;
            }
    }
    else{
        cout << "Ingrese un limite inferior y luego el superior" << endl;
        
    }
    
    return 0;
}
