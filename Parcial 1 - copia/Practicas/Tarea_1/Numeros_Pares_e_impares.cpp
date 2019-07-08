#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int numero;
	cout << "escribe un numero: ";
	scanf_s("%d", &numero);

	int resultado = numero & 1;// analiza el numero y lo compara con el numero final de su codigo binario

	if (resultado)// interpreta como true cuando ambos numeros son 1
	{
		cout << "el numero " << numero << " es Impar";
	}
	else// cuando los numeros son 0 & 1 es par
	{
		cout << "el numero " << numero << " es Par";
	}

	cin.ignore();
	cin.get();
	return 0;
}