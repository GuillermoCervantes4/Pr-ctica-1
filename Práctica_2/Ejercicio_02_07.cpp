// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 7
// Problema planteado:  A partir de dos vectores constantes que contienen nombres de 7 personas cada uno. 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    string vector1[]={"jimi","andres","cami","kara","sergio","dilan","santi"};
    
    string vector2[]={"jimi","andres","cami","kara","sergio","dilan","santi"};
    
    int c=0;
    
    for (int i=0;i<7;i++){
        
        if (vector1[i]==vector2[i]){
            c++;
        }
    }
    
    if (c==7){
        cout<<"Son iguales"<<endl;
    }
    else{
        cout<<"No son iguales"<<endl;
    }
    return 0;

}