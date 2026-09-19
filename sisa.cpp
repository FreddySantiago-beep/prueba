#include <iostream>
#include <string>
using namespace std;
//definimos la funcion
float resultado(float precio, float descuento)
{
	return precio - precio*descuento; 
}
int main()
{
	float miprecio, midescuento, convertirdescuento;
	cout << "Ingresa el precio:\n";
	cin >> miprecio;
	cout << "Ingresa el descuento:\n";
	cin >> midescuento;
	convertirdescuento = midescuento/100;
	cout << "El precio final es: " << resultado(miprecio, convertirdescuento);
}

