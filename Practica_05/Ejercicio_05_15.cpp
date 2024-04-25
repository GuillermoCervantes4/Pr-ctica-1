// Materia: Programación 1, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 16/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 15
// Problema planteado: Se desea calcular las notas finales de N alumnos de un curso,
//así como también el promedio, mínimo y máximo de éstas.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Estudiante
{
    char nombre[50];
    double I1;
    double I2;
    double T1;
    double T2;
    double Examen;
    double NP;
    double NF;
};

vector<Estudiante> llenarDatos(int);
Estudiante mayorNota(vector<Estudiante>);
Estudiante menorNota(vector<Estudiante>);
void imprimir (Estudiante);

int main(){
    int cantidad;
    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>cantidad;
    vector<Estudiante> estudis;
    estudis = llenarDatos(cantidad);
    Estudiante mayor = mayorNota(estudis);
    Estudiante menor = menorNota(estudis);
    cout<<"El estudiante con la mayor nota es: \n";
    imprimir(mayor);
    cout<<"El estudiante con la menor nota es: \n";
    imprimir(menor);
    return 0;
}

//Mostrar los datos
void imprimir (Estudiante e){
    cout<<"Su nombre es: "<<e.nombre<<endl;
    cout<<"Su nota final NF es: "<<e.NF<<endl;
}

//Menor nota
Estudiante menorNota(vector<Estudiante> estudis){
    Estudiante menor;
    menor.NF = estudis[0].NF;
    for(int i=0; i < estudis.size(); i++){
        if(menor.NF > estudis[i].NF){
            menor = estudis[i];
        }
    }
    return menor;
}

//Mayor nota
Estudiante mayorNota(vector<Estudiante> estudis){
    Estudiante mayor;
    mayor.NF = 0.0;
    for(int i=0; i < estudis.size(); i++){
        if(mayor.NF < estudis[i].NF){
            mayor = estudis[i];
        }
    }
    return mayor;
}

//Ingresar las notas de cada alumno
vector<Estudiante> llenarDatos (int n){
    vector<Estudiante> estudis;
    Estudiante auxi;
    for(int i = 0; i < n; i++){
        cout<<"Para el estudiante "<<i+1<<":\n";
        cout<<"Ingrese el nombre: ";
        cin.ignore();
        cin.getline(auxi.nombre, 50);
        cout<<"Ingrese la nota del I1: ";
        cin >> auxi.I1;
        cout<<"Ingrese la nota del I2: ";
        cin >> auxi.I2;
        cout<<"Ingrese la nota del T1: ";
        cin >> auxi.T1;
        cout<<"Ingrese la nota del T2: ";
        cin >> auxi.T2;
        auxi.NP = (auxi.I1 + auxi.I2 + auxi.T1 + auxi.T2) / 4;
        cout<<"Ingrese la nota del Examen: ";
        cin >> auxi.Examen;
        auxi.NF = 0.7 * auxi.NP + 0.3 * auxi.Examen;

        cout<<"Su nota NP es: "<<auxi.NP<<endl;
        cout<<"Su nota NF es: "<<auxi.NF<<endl;
        estudis.push_back(auxi);
    }

    return estudis;
}