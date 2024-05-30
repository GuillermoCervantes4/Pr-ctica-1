// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 9
// Problema planteado: Escribir un programa con la opción de encriptar y de desencriptar un fichero de texto.
//La encriptación consiste en que dado un fichero de texto de entrada genere otro fichero de
//salida de extensión <nombre>.COD donde el texto estará codificado (encriptado).
//Esta codificación consiste en reemplazar cada carácter por el tercero siguiente según la tabla
//ASCII.
//La opción de desencriptado consiste en leer un fichero <nombre>.COD y recuperar la
//información original.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//prototipos
void encriptarArchivo(const string& archivoEntrada, const string& archivoSalida);
void desencriptarArchivo(const string& archivoEntrada, const string& archivoSalida);

int main() {
    string opcion;
    cout << "Elija una opción: encriptar (E) o desencriptar (D): ";
    cin >> opcion;
    cin.ignore(); // Limpiar el buffer de entrada

    if (opcion == "E" || opcion == "e") {
        string archivoEntrada, archivoSalida;
        cout << "Ingrese el nombre del archivo a encriptar: ";
        getline(cin, archivoEntrada);
        archivoSalida = archivoEntrada + ".COD";
        encriptarArchivo(archivoEntrada, archivoSalida);
    } else if (opcion == "D" || opcion == "d") {
        string archivoEntrada, archivoSalida;
        cout << "Ingrese el nombre del archivo a desencriptar (incluyendo la extensión .COD): ";
        getline(cin, archivoEntrada);
        cout << "Ingrese el nombre del archivo de salida desencriptado: ";
        getline(cin, archivoSalida);
        desencriptarArchivo(archivoEntrada, archivoSalida);
    } else {
        cout << "Opción no válida. Por favor elija 'E' para encriptar o 'D' para desencriptar." << endl;
    }

    return 0;
}

// Función para encriptar un fichero de texto
void encriptarArchivo(const string& archivoEntrada, const string& archivoSalida) {
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

    char caracter;
    while (entrada.get(caracter)) {
        salida.put(caracter + 3); // Encriptar desplazando cada carácter por 3 posiciones en ASCII
    }

    entrada.close();
    salida.close();
    cout << "El archivo ha sido encriptado y guardado como " << archivoSalida << endl;
}

// Función para desencriptar un fichero de texto
void desencriptarArchivo(const string& archivoEntrada, const string& archivoSalida) {
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

    char caracter;
    while (entrada.get(caracter)) {
        salida.put(caracter - 3); // Desencriptar desplazando cada carácter por 3 posiciones hacia atrás en ASCII
    }

    entrada.close();
    salida.close();
    cout << "El archivo ha sido desencriptado y guardado como " << archivoSalida << endl;
}

