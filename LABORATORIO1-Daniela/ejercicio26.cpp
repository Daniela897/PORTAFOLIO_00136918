
//Daniela Raquel Batres Arce
#include <iostream>
#include <conio.h>

using namespace std;
struct complejo{
        float real,imaginaria;
} j1,j2;
void pedirdatos();
complejo suma(complejo,complejo);
void muestra(complejo);

int main(int argc, char** argv) {
    
    pedirdatos();
    complejo x= suma(j1,j2);
    
    muestra(x);

    return 0;
}
void pedirdatos(){
    cout<<"ingrese los datos deseados para el primer complejo: "<<endl;
    cout<<"parte real:";
    cin>>j1.real;
    cout<<"parte imaginaria:";
    cin>>j1.imaginaria;
   
    cout<<"ingrese los datos deseados para el primer complejo: "<<endl;
    cout<<"parte real:";
    cin>>j2.real;
    cout<<"parte imaginaria:";
    cin>>j2.imaginaria;
    
    
}
complejo suma(complejo j1,complejo j2){
    j1.real += j2.real;
    j1.imaginaria += j2.imaginaria;
    
    return j1;
}
void muestra(complejo x){
    cout<<"resultado:"<<x.real<<","<<x.imaginaria<<endl;
}
