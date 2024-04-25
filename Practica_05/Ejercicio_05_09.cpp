// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 9
// Problema planteado: Escriba un programa que en una estructura se lleve el control de un inventario de
//cintas de una tienda de video. Asegúrese de que la estructura incluya el titulo de la
//cinta, la longitud de la cinta, el precio de alquiler, la fecha en que se vendió, y la
//clasificación de la cinta.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string.h>
#include <ctime>

using namespace std;

struct cinta
{
    string titulo;
    long longitud; //los minutos de la cinta
    double precio;
    string fecha;
    int clasifi;
};

//vector
const vector<string> clasificacion_de_cinta = {"VHS", "VHS-C", "S-VHS", "mini DV", "8mm", "video 8", "Digital 8", "Beta y Hi8"};

//prototipo
vector<cinta> ingresardatos(int);
void mostrardatos(vector<cinta>);

int main()
{

    int numcintas;
    vector<cinta> cintas;

    system("cls");
    srand(time(NULL));

    cout << "Ingrese la cantidad cintas: ";
    cin >> numcintas;

    cintas = ingresardatos(numcintas);
    mostrardatos(cintas);
    return 0;
}

//Guarda todos los datos
vector<cinta> ingresardatos(int numcintas)
{
    vector<cinta> cintas(numcintas);
    for (int i = 0; i < numcintas; i++)
    {
        cinta nueva_cinta;
        cout << "\nINGRESE LOS DATOS DE LA CINTA " << i + 1 << endl;
        cout << "==================================" << endl;
        cout << "\nIngrese el título: ";
        cin.getline(cintas[i].titulo);

        cintas[i].longitud = rand() % (400 - 10 - 1) + 10;

        cout << "Ingrese el precio de la cinta: "<< endl;
        cin.getline(cintas[i].precio);

        cout << "Ingrese la fecha de: "<< endl;

        cin.getline(cintas[i].fecha);

        cout << "Ingrese el número de la clasificación de cinta de video: ";
        cout << "0: VHS, 1: VHS-C, 2: S-VHS, 3: mini DV, 4: 8mm, 5: video 8, 6: Digital 8, 7: Beta y Hi8" << endl<< endl;
        cin.getline(cintas[i].clasifi);
    }
    return cintas;
}

//muestra en pantalla los datos ingresados
void mostrardatos(vector<cinta> cintas)
{
    cout << "\nREPORTE" << endl;
    cout << "=======" << endl;
    for (int i = 0; i < cintas.size(); i++)
    {
        cout << "El titulo de la cinta " << i + 1 << " es: " << cintas[i].titulo << endl;
        cout << "La longitud de la cinta " << i + 1 << " es: " << cintas[i].longitud << endl;
        cout << "El precio de la cinta de alquiler de la cinta " << i + 1 << " es: " << cintas[i].precio <<" Bolivianos "<< endl;
        cout << "La fecha que se vendió de la cinta " << i + 1 << " es:  " << cintas[i].fecha << endl;
        cout << "La clasificaión de la cinta " << i + 1 << " es:  " << clasificacion_de_cinta[cintas[i].clasifi] << endl;
        cout << "-------------------------------------------------------------------------------------------------------" << endl;
    }
}
