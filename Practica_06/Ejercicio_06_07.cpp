// Materia: Programación I, Paralelo 4
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 18/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 7
// Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
// comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
// conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
// más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
// venta el granjero al cabo de un año?

#include <iostream>

using namespace std;

//prototipo
int parejasDeConejos(int meses); 

int main() {
    int meses = 12; // Número de meses en un año
    cout << "Después de " << meses << " meses, el granjero podrá poner a la venta " << parejasDeConejos(meses) << " parejas de conejos." << endl;

    return 0;
}

int parejasDeConejos(int meses) {
    // Casos base: al cabo de 0 o 1 mes, solo hay una pareja de conejos
    if (meses == 0 || meses == 1) {
        return 1;
    } else {
        // Suma de las parejas de conejos
        return parejasDeConejos(meses - 1) + parejasDeConejos(meses - 2);
    }
}
