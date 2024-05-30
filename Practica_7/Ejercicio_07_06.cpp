// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 6
// Problema planteado: Crear un programa donde se introduzca un número para luego convertirlo en base 6,8, 10.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para convertir un número decimal a una cadena en una base dada
string convertirBase(int numero, int base) {
    string resultado;
    const char* digitos = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if (numero == 0) {
        return "0";
    }

    bool esNegativo = (numero < 0);
    if (esNegativo) {
        numero = -numero;
    }

    while (numero > 0) {
        resultado = digitos[numero % base] + resultado;
        numero /= base;
    }

    if (esNegativo) {
        resultado = "-" + resultado;
    }

    return resultado;
}

void procesarNumero(const string& archivoEntrada, const string& archivoSalida) {
    ifstream entrada(archivoEntrada);
    if (!entrada) {
        cerr << "No se pudo abrir el archivo de entrada: " << archivoEntrada << endl;
        return;
    }

    ofstream salida(archivoSalida);
    if (!salida) {
        cerr << "No se pudo abrir el archivo de salida: " << archivoSalida << endl;
        return;
    }

    int numero;
    entrada >> numero;

    // Convertir el número a bases 6, 8 y 10
    string base6 = convertirBase(numero, 6);
    string base8 = convertirBase(numero, 8);
    string base10 = convertirBase(numero, 10);

    // Escribir los resultados en el archivo de salida
    salida << "Base 6: " << base6 << endl;
    salida << "Base 8: " << base8 << endl;
    salida << "Base 10: " << base10 << endl;

    // Cerrar los archivos
    entrada.close();
    salida.close();

    cout << "El número se ha procesado y los resultados se han escrito en " << archivoSalida << endl;
}

int main() {
    string archivoEntrada = "entrada.txt";
    string archivoSalida = "salida.txt";

    procesarNumero(archivoEntrada, archivoSalida);

    return 0;
}
