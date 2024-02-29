// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 17
// Problema planteado:  El precio de cada computadora es un valor que el usuario ingrese desde el teclado.

#include <iostream>
using namespace std;

int main(){
    
    double num, precio, total=0, suma=0;
    cout<<"Ingrese el numero de computadoras"<<endl;
    cin>>num;
    
    for (int i=1; i<=num; i++){
       
        cout<<"Ingrese el precio de la computadora numero "<<i<<endl;
        cin>>precio;
        
        suma+=precio;// Así obtenemos el precio total de la cantidad de computadoras
    }
    
    if (num<5){
        
        total=suma-(0.1*suma); // aplicamos el descuento
        
        cout<<"EL total a pagar es: "<<total;
    }
   
    else{
        
        if (num>=5 && num<10){
            total=suma-(0.2*suma);
            cout<<"EL total a pagar es: "<<total;
        }
       
        else{
            total=suma-(0.4*suma);
            cout<<"EL total a pagar es: "<<total;
        }
    }