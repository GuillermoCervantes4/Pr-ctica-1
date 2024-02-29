// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 27/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 20
// Problema planteado: Escribir un programa que permita adivinar un número que sea genere internamente al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a aproximaciones, para lo cual se dispone de 5 intentos.

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    
    srand(time(NULL)); 
    
    int valor=0, num, inf=0, sup=50;
    
    valor = rand()% 51; 
    cout<<"Estoy pensando un numero entre 0 y 50"<<endl;
    
    for (int i=1; i<=5; i++){
        
        cout<<"Intento numero "<<i<<", Ingrese el numero: "<<endl;
        cin>>num;
        
        if (num==valor){
            
            cout<<"Felicitaciones, Adiv inaste el numero";break;
        }
        
        else{
            
            if (num<valor){
                
                inf=num;
                cout<<"El numero esta entre "<<inf<<" y "<<sup<<endl;
            }
            
            else {
                
                if (num>valor){
                    
                    sup=num;
                    cout<<"El numero esta entre "<<inf<<" y "<<sup<<endl;
                }
            }
        }
    }

    return 0;
}