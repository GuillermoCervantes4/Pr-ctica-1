// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 30
// Problema planteado: Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el total de ventas efectuadas y el total de ventas con el descuento respectivo.

#include <iostream>

using namespace std;

int main() {
    
    int Clientes;
    
    double TotalVentas = 0;
    double TotalVentasDescuento = 0;

    cout << "Ingrese el numero de clientes, por favor: ";
    cin >> Clientes;

    for (int i = 0; i < Clientes; ++i) 
    {
        double Compra;
        
        cout << "Ingrese la cantidad de compra para el cliente " << (i + 1) << " (en Bs): ";
        cin >> Compra;

        if (Compra < 100) 
        {
            TotalVentas += Compra;
            TotalVentasDescuento += Compra;
        } else if (Compra >= 100 && Compra < 500) 
        {
            double Descuento = 0.05 * Compra;
           TotalVentas += Compra;
            TotalVentasDescuento += Compra - Descuento;
        } else 
        {
            double Descuento = 0.08 * Compra;
            TotalVentas += Compra;
            TotalVentasDescuento+= Compra - Descuento;
        }
    }

    cout << "Registro de ventas para " << Clientes << " clientes:" << endl;
    cout << "Total de ventas sin descuento: " << TotalVentas << " Bs" << endl;
    cout << "Total de ventas con descuento: " << TotalVentasDescuento << " Bs" << endl;

    return 0;
}