#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"ingrese el largo del arreglo: ";
    cin>>n;
    int largo[n];

    for ( i = 0; i < n; i++)
    {
        cout<<"ingrese un valor para la posicion: "<<i<<":  ";
        cin>>largo[i];
    }

    cout<<"el arreglo ingresado es: ";

    
    for ( i = 0; i < n; i++)
    {
        cout<<largo[i]<<"  ";
    }


    

}