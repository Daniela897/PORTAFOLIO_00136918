#include <iostream>
using namespace std;
int main()
{
	int elementos ;
	int numeros [elementos];
	int total = 0;
	float media= 0;
	
	cout << "Cuantos elementos desea ingresar: "<< endl;
	cin>>elementos;
	
	for (int i = 0; i < elementos; i++){
		cout << "digite un numero: ";
		cin>>numeros[i];
		total +=numeros[i];
	}
	media = (float) total / elementos;
	cout << "Media: " << media << endl;
	
	return 0;
}