#include <iostream>
using namespace std;

void mostrar(int a){
	if(a==1)
		cout << a << endl;
	else{
		cout << a << endl;
		mostrar(a-1);
                cout << a << endl;
		mostrar(a-1);
           
	}
}

int main()
{
	int y = 0;
	cout << "Digite un numero deseado: ";
	cin >> y;
	if(y>=0)
       	mostrar(y);
  
        
}







