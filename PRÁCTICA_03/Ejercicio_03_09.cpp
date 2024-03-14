// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 9
// Problema planteado: Leer los datos de doce personas como son: nombre, edad, estatura, peso,
// -posteriormente indicar cuál es el nombre de la persona de menor edad, el promedio de
// -las estaturas y el de los pesos. (realizar con vectores)


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Persona {
public:
    string nombre;
    int edad;
    double altura;
    double peso;

    Persona() {}

    Persona(string n, int e, double a, double p) {
        nombre = n;
        edad = e;
        altura = a;
        peso = p;
    }
};

int main() {
    vector<Persona> personas;

    // Leer datos de doce personas
    for (int i = 0; i < 12; i++) {
        string nombre;
        int edad;
        double altura, peso;
        
        cout << "Ingrese su nombre, edad, altura y peso: " << endl;
        cin >> nombre >> edad >> altura >> peso;
        personas.push_back(Persona(nombre, edad, altura, peso));
    }

    // Encontrar a la persona más joven
    Persona mas_joven = personas[0];
    for (int i = 1; i < 12; i++) {
        if (personas[i].edad < mas_joven.edad) {
            mas_joven = personas[i];
        }
    }
    cout << "La persona más joven es: " << mas_joven.nombre << endl;

    // Calcular el promedio de las alturas
    double suma_altura = 0;
    
    for (int i = 0; i < 12; i++) {
        suma_altura += personas[i].altura;
    }
    
    double promedio_altura = suma_altura / 12;
    cout << "La altura promedio es: " << promedio_altura << endl;

    // Calcular el promedio de los pesos
    double suma_peso = 0;
    
    for (int i = 0; i < 12; i++) {
        suma_peso += personas[i].peso;
    }
    
    double promedio_peso = suma_peso / 12;
    cout << "El peso promedio es: " << promedio_peso;

    return 0;
}