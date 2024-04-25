// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 2
// Problema planteado: Realizar un programa en C++ que simule y registre cuantas medallas ha ganado un
//atleta y que me muestre el medallero final por departamento

#include <iostream>
#include <vector>
#include <random>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct atleta
{
    char nombre;
    char departamento;
    int deporte;
};

int medallas;

// Vector
const vector<string>listdeporte = {"Tiro con arco", "Atletismo", "Boxeo" , "Ciclismo", "Natación", "Esgrima"};

// Prototipos
vector<atletas> ingresardatos(int);
void comparación(vector<string>listdeporte, ingresardatos(), vector<string>listdeporte);
void despliegue();

int main(){

    int num_participantes;
    
    vector<atleta> atletas;

    cout<<"Ingrese la cantidad de participantes: "<<endl;
    cin>>num_participantes;

    system("cls");
    srand (time(NULL));

    atletas = ingresardatos(num_participantes);

}

vector<atletas> ingresardatos(int num_participantes){

    num = num_participantes;
    int deporte = 0;
    int mmedalla;

    //Ingresar datos
    vector<atleta> ingresardatos(num_participantes);
    for (int i = 0; i < num_participantes; i++)
    {
        cout<<"\nIngrese los datos de la persona"<<endl;
         cout<<"\n==========================================="<<endl;
        cout<<"Ingrese el nombre del participante"<< [i] << ": " <<endl;
        cin>>getline(atleta[i].nombre);

        cout<<"Ingrese el departamento proveniente: "<<endl;
        cin>>getline(atleta[i].departamento);

        cout<<"Ingrese un número del deporte que realiza: "<<endl;
        cout<<"Tiro con arco-(1)  Atletismo-(2)  Boxeo-(3)   Ciclismo-(4)   Natación-(5)   Esgrima-(6)";<<endl;
        deporte = rand()%(5-0+1)+0;

        medallas = rand()%(50-1+1)+1;
    }
}