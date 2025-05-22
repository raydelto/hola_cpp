#include <iostream>

using namespace std;


int sumar(int , int);

int main()
{
	int primerNumero;
	int segundoNumero;
	int resultado;

	cout << "Introduzca el primer número: ";
	cin >> primerNumero;
	cout << "\nIntroduzca el segundo número: ";
	cin >> segundoNumero;
	resultado = sumar(primerNumero, segundoNumero);
	cout << "\nLa sumatoria de " << primerNumero << " y " << segundoNumero << " es " << resultado << "\n";
	return 0;
}

int sumar(int primerNumero, int segundoNumero)
{
	return primerNumero + segundoNumero;
}
