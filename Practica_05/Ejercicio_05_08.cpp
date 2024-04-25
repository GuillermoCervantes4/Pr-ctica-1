// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 8
// Problema planteado: Escriba un programa que en una estructura guarde los datos de 05 amigos (as) suyos
//(as) y los muestre por pantalla, utilizando para ello un arreglo de estructura, la misma
//estructura contendrá (Nombre, Apellido, Edad, Sexo, Dirección, y Teléfono).

#include <iostream>
using namespace std;

int tam=0;

struct amigos{
    string nombre;
    string apellido;
    string sexo;
    string direccion;
    string telefono;
}amigos[20];

//Prototipos
void ingresar_datos_amigos()
void mostrar_amigos(int n)

int main(){
    int num;
    tam=0;
    cout<<"ingresar 5 amigos ";
    num=5;
    for (int i=0;i<num;i++){
        ingresar_datos_amigos();
    }
    for (int i=0;i<num;i++){
        mostrar_amigos(i);
    }
    return 0;
}

//Ingresar datos
void ingresar_datos_amigos(){
    cout<<"\n"<<endl;
    cin.ignore();
    cout<<"Nombre del amigos: ";
    getline(cin,amigos[tam].nombre);
    cout<<"Apellido del amigos: ";
    getline(cin,amigos[tam].apellido);
    cout<<"ceudla del estudiante: ";
    getline(cin,amigos[tam].sexo);
    cout<<"Direccion del estudiante: ";
    getline(cin,amigos[tam].direccion);
    cout<<"Telefono del estudiante: ";
    getline(cin,amigos[tam].telefono);
    tam++;
}

//Mostrar los datos
void mostrar_amigos(int n){
    cout<<"\n"<<endl;
    cout<<"Nombre: "<<amigos[n].nombre<<endl;
    cout<<"Apellido: "<<amigos[n].apellido<<endl;
    cout<<"Profecion: "<<amigos[n].sexo <<endl;
    cout<<"Direccion: "<<amigos[n].direccion<<endl;
    cout<<"Telefono: "<<amigos[n].telefono<<endl;
}
