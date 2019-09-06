
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    int n=0;
    float array[10];
   
    int i;
    
    for(i=0;i<=9;i++)
    {
       cout<<"Digite un numero entero: "<<endl;
       cin>>array[i];
    }
    
    float total=0;
    float promedio;
     for(i=0;i<=9;i++)
     {
    total+= array[i];
     }
    cout<<"El total del arreglo es: "<<total<<endl;
    
    promedio = total/10;
    
    cout<<"El promedio del arreglo es: "<<promedio<<endl;
   
  
 return 0;  
}

