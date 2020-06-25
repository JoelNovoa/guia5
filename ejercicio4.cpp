#include <iostream>

using namespace std;

void leer (int cantidad, int arreglo[]){
    for(int i = 0; i < cantidad; i++){
        int numero;
        cout<< "Ingrese un numero: "<<endl;
        cin>>numero;
        arreglo[i] = numero;
    }
}
void suma (int arreglo1[], int arreglo2[], int arreglosuma[], int cantidad){
    for(int i= 0; i < cantidad; i++){
        arreglosuma[i] = arreglo1[i] + arreglo2[i];
    }
}
void mostar (int arreglo[], int cantidad){
    for(int i = 0; i < cantidad; i++){
        cout<<"La suma en la posicion ' "<<i<<" "<<"' son: |"<<arreglo[i]<<"|"<<endl;
    }
}
int main (){
    int n;
    cout<<"Ingrese la longitud del los arreglos a sumar: "<<endl;
    cin>> n;
    int arreglo1[n], arreglo2[n], arreglosumar[n];
    cout<<"ingrese los valores del primer arreglo "<<endl;
    leer(n, arreglo1);
    cout<<"ingrese los datos del segundo arreglo "<<endl;
    leer(n, arreglo2);
    suma(arreglo1, arreglo2, arreglosumar, n);
    mostar(arreglosumar, n);
}



