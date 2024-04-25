// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 1
// Problema planteado: Realizar un programa en C++ que lea un array de estructuras los datos de los N
//trabajadores de la empresa e imprima los datos de los empleados con menor y mayor
//salario.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Empleado
{
    string nombre;
    string genero;
    double salario;
};

vector<Empleado> llenarDatos(int);
Empleado mayorSalario (vector<Empleado>);
Empleado menorSalario (vector<Empleado>);
void imprimir(Empleado);

int main () {
    vector<Empleado> emples;
    int cantidad;
    cout<<"Ingrese la cantidad de empleados: ";
    cin>>cantidad;
    emples = llenarDatos(cantidad);
    Empleado menor = menorSalario(emples);
    Empleado mayor = mayorSalario(emples);
    cout<<"El empleado com mayor salario: "<<endl;
    imprimir(mayor);
    cout<<"El empleado con menor salario: "<<endl;
    imprimir(menor);
    return 0;
}

void imprimir(Empleado e){
    cout<<"Nombre: "<<e.nombre<<endl;
    cout<<"Genero: "<<e.genero<<endl;
    cout<<"Salario: "<<e.salario<<endl;
}

Empleado menorSalario (vector<Empleado> empleados){
    Empleado menor;
    menor.salario = empleados[0].salario;
    for(Empleado posicion : empleados){
        if(posicion.salario < menor.salario){
            menor = posicion;
        }
    }
    return menor;
}

Empleado mayorSalario (vector<Empleado> empleados){
    Empleado mayor;
    mayor.salario = 0.0;
    for(int i=0; i< empleados.size(); i++){
        if(empleados[i].salario > mayor.salario){
            mayor = empleados[i];
        }
    }
    return mayor;
}

vector<Empleado> llenarDatos(int n){
    vector<Empleado> emple;
    Empleado auxi;

    for(int i=0; i<n;i++){
        cin.ignore();
        cout<<"Ingrese el nombre: ";
        getline(cin, auxi.nombre);
        cout<<"Ingrese el genero: ";
        getline(cin, auxi.genero);
        cout<<"Ingrese el salario: ";
        cin>>auxi.salario;
        emple.push_back(auxi);
    }
    return emple;
}
