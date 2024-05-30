// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 23/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 11
// Problema planteado: Amplíe el programa anterior que procesa clientes de una agencia matrimonial para que tome
//los datos de todos los candidatos a estudiar del fichero PERSONAS.DAT del ejercicio anterior,
//lea el nombre del cliente por teclado y finalmente genere como resultado un listado por
//pantalla con los nombres de los candidatos aceptados y un fichero llamado ACEPTADOS.BIN
//con toda la información correspondiente a los candidatos aceptados.
//Una persona del fichero PERSONAS.DAT se considerará aceptable como candidato si tiene
//diferente sexo y que haya nacido en el mes y año (El programa debe ser capaz de trabajar con
//cualquier número de personas en el fichero PERSONAS.DAT).

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Persona {
    char nombre[31];          
    int edad;
    char sexo;
    char fechaNacimiento[11]; 
};

void escribirPersona(ofstream &archivo, const Persona &p) {
    archivo.write(reinterpret_cast<const char*>(&p), sizeof(Persona));
}

void leerPersona(ifstream &archivo, Persona &p) {
    archivo.read(reinterpret_cast<char*>(&p), sizeof(Persona));
}

bool esFechaAceptable(const char* fechaCandidato, const char* fechaCliente) {
    // Chequear que el mes y el año sean los mismos
    return strncmp(fechaCandidato + 3, fechaCliente + 3, 7) == 0;
}

int main() {
    ifstream archivoEntrada("PERSONAS.BIN", ios::binary);
    if (!archivoEntrada) {
        cerr << "No se pudo abrir el archivo para lectura." << endl;
        return 1;
    }

    ofstream archivoSalida("ACEPTADOS.BIN", ios::binary);
    if (!archivoSalida) {
        cerr << "No se pudo abrir el archivo para escritura." << endl;
        return 1;
    }

    char nombreCliente[31];
    char sexoCliente;
    char fechaNacimientoCliente[11];

    // Leer datos del cliente
    cout << "Ingrese su nombre: ";
    cin.getline(nombreCliente, 31);
    cout << "Ingrese su sexo (M/F): ";
    cin >> sexoCliente;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ingrese su fecha de nacimiento (dd/mm/yyyy): ";
    cin.getline(fechaNacimientoCliente, 11);

    // Procesar candidatos
    Persona candidato;
    bool hayAceptados = false;
    while (archivoEntrada.read(reinterpret_cast<char*>(&candidato), sizeof(Persona))) {
        if (candidato.sexo != sexoCliente && esFechaAceptable(candidato.fechaNacimiento, fechaNacimientoCliente)) {
            hayAceptados = true;
            cout << "Candidato aceptado: " << candidato.nombre << endl;
            escribirPersona(archivoSalida, candidato);
        }
    }

    if (!hayAceptados) {
        cout << "No se encontraron candidatos aceptados." << endl;
    }

    archivoEntrada.close();
    archivoSalida.close();
    return 0;
}
