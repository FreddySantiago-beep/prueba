#include <iostream>
#include <string>
using namespace std;
//definimos la funcion
int resultado;
int memoria = 0;
int memoriaresultado; 
float resultado(int numero)
{
	for(int i=numero, i = 1, i+=-1)
	{
		resultado = resultado * i; 
	}
	return resultado; 
}
int main()
{
	int opcion;
	float n1, n2;
	cout << "Elige una opcion\n";
	cout << "1: suma 2: multiplicacion 3: division 4: resta\n";
	cin >> opcion;
	cout << "Ingresa dos numeros:\n";
	cin >> n1;
	cin >> n2; 
	cout << "El resultado de la operacion es: "<< resultado(opcion, n1, n2);
	return 0;
	
}

