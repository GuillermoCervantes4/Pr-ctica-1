// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 7/03/2024
// Número de ejercicio: 8
// Problema planteado: Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que contiene los nombres de todos los meses.

# include <iostream>
# include <string>
# include <vector>

using namespace std;

int main ()
{
    vector<string> Meses = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    vector<double> Ventas(12);
    
    int posicion;
    
    double mayorVenta=0.0, ventamaxima=0.0;
    
    for(int i=0;i<12;i++)
    {
        cout<<"Ingrese las ventas del mes de "<<Meses[i]<<": ";
        cin>>Ventas[i];
       
        if(Ventas[i]>mayorVenta) //Obtiene el mes y cuanto fue la mayor venta
        {
            posicion=i;
            mayorVenta=Ventas[i];
        }
        ventamaxima += Ventas[i];
    }
    
    cout<<"El mes de mayor venta fue: "<<Meses[posicion]<<endl;
    cout<<"La venta maxima fue de: "<<mayorVenta<<endl;
    cout <<"El total de ventas fue: "<<ventamaxima<<endl;
    return 0;
}