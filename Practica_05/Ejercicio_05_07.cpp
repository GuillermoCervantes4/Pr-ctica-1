// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 7
// Problema planteado: Desarrolle una estructura que guarde los datos de los n alumnos de la materia 
//programación en Lenguaje C, y los muestres por pantalla, la estructura debe tener
//(cedula, nombre, apellido, edad, profesión, lugar de nacimiento, dirección y teléfono).

#include <iostream>
using namespace std;

int tam=0;

struct structEstudiante{
    string nombre;
    string apellido;
    string cedula;
    int edad;
    string profecion;
    string direccion;
    string telefono;
}estudiante[20];

//prototipos
void mostrar_estudiantes(int n);
void ingresar_estudiante();

int main(){
    int num;
    tam=0;
    cout<<"Cuantos estudiantes quieres ingresar: ";
    cin>>num;
    for (int i=0;i<num;i++){
        ingresar_estudiante();
    }
    for (int i=0;i<num;i++){
        mostrar_estudiantes(i);
    }
    return 0;
}

//Ingresar datos
void ingresar_estudiante(){
    cout<<"\n"<<endl;
    cin.ignore();
    cout<<"Nombre del estudiante: ";
    getline(cin,estudiante[tam].nombre);
    cout<<"Apellido del estudiante: ";
    getline(cin,estudiante[tam].apellido);
    cout<<"ceudla del estudiante: ";
    getline(cin,estudiante[tam].cedula);
    cout<<"Edad del estudiante: ";
    cin>>estudiante[tam].edad;
    cin.ignore();
    cout<<"Profecion del estudiante: ";
    getline(cin,estudiante[tam].profecion);
    cout<<"Direccion del estudiante: ";
    getline(cin,estudiante[tam].direccion);
    cout<<"Telefono del estudiante: ";
    getline(cin,estudiante[tam].telefono);
    tam++;
}

//Mostrar los datos
void mostrar_estudiantes(int n){
    cout<<"\n"<<endl;
    cout<<"Nombre: "<<estudiante[n].nombre<<endl;
    cout<<"Apellido: "<<estudiante[n].apellido<<endl;
    cout<<"cedula: "<<estudiante[n].cedula<<endl;
    cout<<"edad: "<<estudiante[n].edad<<endl;
    cout<<"Profecion: "<<estudiante[n].profecion<<endl;
    cout<<"Direccion: "<<estudiante[n].direccion<<endl;
    cout<<"Telefono: "<<estudiante[n].telefono<<endl;
}
