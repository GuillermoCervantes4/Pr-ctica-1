// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 8
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>

using namespace std;

// Función para calcular la edad
int calcularEdad(int diaActual, int mesActual, int anioActual, int diaNacimiento, int mesNacimiento, int anioNacimiento) {
    
    int edad = anioActual - anioNacimiento;
    
    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
        edad--;
    }
    return edad;
}

int main() {
    int diaActual, mesActual, anioActual;
    int diaNacimiento, mesNacimiento, anioNacimiento;

    // Solicitar al usuario ingresar la fecha actual
    cout << "Ingrese la fecha actual (DD MM AAAA): ";
    cin >> diaActual >> mesActual >> anioActual;

    // Solicitar al usuario ingresar la fecha de nacimiento
    cout << "Ingrese su fecha de nacimiento (DD MM AAAA): ";
    cin >> diaNacimiento >> mesNacimiento >> anioNacimiento;

    // Calcular la edad llamando a la función
    int edad = calcularEdad(diaActual, mesActual, anioActual, diaNacimiento, mesNacimiento, anioNacimiento);

    // Mostrar la edad calculada
    cout << "Su edad es: " << edad << " años." << endl;

    return 0;
}
