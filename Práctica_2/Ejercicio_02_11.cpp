// Materia: Programación I, Paralelo 1
// Autor: Guillermo Cervantes Cabrera
// Fecha creación: 5/03/2024
// Fecha modificación: 6/03/2024
// Número de ejercicio: 11
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de este arreglo determine la desviación típica.

#include <iostream> 
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    
    int edad, N, X;

    N = 0
    X = 0
    
    float media, tot=0, DESVI;

    // Vector vacio 
    vector <int> edades; 
    
    do{
        // Ingresamos datos hasta ingresar un -1
        cout << "\nIngrese la edad: ";  
       
        cin >> edad; 
        
        // Agregamos las edades 
        if (edad != -1) {  
            
            edades.push_back(edad);
            
            N++;}
    
    } while (edad!=-1);

    //Calculo de la media
    for (int i =0; i <N; i++){   
        X += edades[i];
    
    }
    
    media = X/N;
    
    // Resultado final
    for (int i =0; i <N; i++){ 
        
        tot += pow(edades[i]-media, 2);
    }
    DESVI = sqrt(tot/N);
    
    cout << "La desviacion tipica es de "<< fixed << setprecision(2) << DESVI << endl;
    
    return 0;
}
