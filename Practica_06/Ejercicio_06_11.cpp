// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 18/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 11
// Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un
// entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
// de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
// • Empiece con cualquier entero positivo.
// • Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
// • Obtenga enteros sucesivamente repitiendo el proceso.
// Al final se obtendrá el número 1, independientemente del entero inicial. Por
// ejemplo, cuando el entero inicial es 26, la secuencia será:
// 26 13 40 20 10 5 16 8 4 2 1

#include <iostream>

using namespace std;

//prototipo
int conjeturaUllman(int n);

int main() {
    
    int n;
    cout << "Ingrese un entero mayor que 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "El número debe ser mayor que 1." << endl;
        return 1;
    }

   
    cout << "La secuencia de Ullman para " << n << " es:" << endl;
    int elementos = conjeturaUllman(n);
    cout << endl << "Cantidad de elementos en la secuencia: " << elementos << endl;

    return 0;
}

int conjeturaUllman(int n) {
    cout << n << " "; //el número actual

    // llega a 1, termina la secuencia
    if (n == 1) {
        return 1;
    }

    // par = divídelo por 2
    if (n % 2 == 0) {
        return 1 + conjeturaUllman(n / 2);
    }
    // impar = multiplícalo por 3 y agrégale 1
    else {
        return 1 + conjeturaUllman(n * 3 + 1);
    }
}

