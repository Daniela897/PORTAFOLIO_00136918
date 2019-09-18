#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 using namespace std;
int main()
{
   cout<<" **PROGRAMA DEL TEOREMA DE EUCLIDES**"<<endl;
    cout<<"  Por favor, introduzca su Dividendo:  "<<endl;
    int Dividendo;
    cin>> Dividendo;
    cout<<" Ahora, introduzca el Divisor:  "<<endl;
    int Divisor;
    cin>> Divisor;
    int Resto = Dividendo%Divisor;
    if(Resto == 0){
       cout<<"  El MCD es: " <<Divisor<<endl;
       }
    while(Resto == 0)
    {
     Dividendo = Divisor;
     Divisor = Resto;
     Resto = Dividendo%Divisor;
     if(Dividendo%Divisor == 0){
        cout<<"  El MCD es: " <<Divisor<<endl;
        break;
     }
    }
 return 0;
}

