// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 18/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 2
// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,
// 49,..., para n términos.

#include <iostream>

using namespace std;

int sumaDigitos (int);
int secuencia (int);

int main (){
    int n;
    cout << "Ingrese la cantidad de numeros de la secuencia ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << secuencia(i) << "\t";
    }
    return 0;
}

int secuencia (int n){
    if(n == 1 || n == 2){
        return 1;
    } else {
        return sumaDigitos(secuencia(n - 1)) + secuencia (n - 1);
    }
}

int sumaDigitos (int num){
    if(num < 10){
        return num;
    } else {
        return num%10 + sumaDigitos(num/10);
    }
}