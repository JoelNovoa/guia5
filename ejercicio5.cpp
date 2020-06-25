#include<iostream>

using namespace std;

int arreglo(int valor[199]){
    for (int i = 199; i >= 1; i-=2)
    {
        valor[i]= i;
        cout<<"("<<valor[i]<<") - ";
    }
} 

 int main(){
     int longitud[199];
     cout<<"numero impares mostrados descendentemente: ";
     arreglo(longitud);
     return 0;
 }


